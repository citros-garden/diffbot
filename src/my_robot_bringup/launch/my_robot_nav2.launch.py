from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument,LogInfo
from launch.conditions import UnlessCondition
from launch.substitutions import Command , LaunchConfiguration , PythonExpression , PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_path ,get_package_share_directory
from launch.actions import ExecuteProcess , DeclareLaunchArgument
from nav2_common.launch import HasNodeParams
from launch.launch_description_sources import PythonLaunchDescriptionSource
def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    pkg_share = FindPackageShare(package='my_robot_description').find('my_robot_description')
    urdf_path = os.path.join(get_package_share_path('my_robot_description'),
                             'urdf', 'my_robot.urdf.xacro')
    rviz_config_path = os.path.join(get_package_share_path('my_robot_bringup'),
                                    'rviz', 'urdf_config_slam_nomap.rviz')
    
    robot_description = ParameterValue(Command(['xacro ', urdf_path]), value_type=str)
    world_path=os.path.join(pkg_share, 'world/obstacles.world')


    #slam config #####################
    params_file_slam = LaunchConfiguration('params_file')
    default_params_file = os.path.join(get_package_share_directory("my_robot_description"),
                                       'config', 'mapper_params_online_async_withmap.yaml')
    declare_params_file_cmd = DeclareLaunchArgument('params_file', default_value=default_params_file,
        description='Full path to the ROS2 parameters file to use for the slam_toolbox node')
    has_node_params = HasNodeParams(source_file=params_file_slam,
                                    node_name='slam_toolbox')
    actual_params_file = PythonExpression(['"', params_file_slam, '" if ', has_node_params,
                                           ' else "', default_params_file, '"'])
    
    log_param_change = LogInfo(msg=['provided params_file ',  params_file_slam,
                                    ' does not contain slam_toolbox parameters. Using default: ',
                                    default_params_file],
                               condition=UnlessCondition(has_node_params))
    ##############################


    ## nav2 config #####################
    map_yaml_file = os.path.join(get_package_share_path('my_robot_description'),
                                 'world', 'map_obstacles_save.yaml')    
    
    ##############################


    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output='screen',
        parameters=[{'robot_description': robot_description , 'use_sim_time' : use_sim_time}]
    )

    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
        output='screen',
        arguments=['-d', rviz_config_path]
    )

    # Spawn the robot in Gazebo   
    spawn_entity_robot = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        arguments=["-entity", "my_robot", "-topic", "robot_description"]
    )

    # Gazebo
    gazebo_node = ExecuteProcess(cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so',world_path], output='screen')

    #localization
    robot_localization_node =Node(
       package='robot_localization',
       executable='ekf_node',
       name='ekf_filter_node',
       output='screen',
       parameters=[os.path.join(pkg_share, 'config/ekf.yaml'), {'use_sim_time': use_sim_time}],
)


    # slam package
    start_async_slam_toolbox_node = Node(
       package='slam_toolbox',
       executable='async_slam_toolbox_node',
        output='screen',
       parameters=[actual_params_file,{'use_sim_time': use_sim_time}],

    )


    #nav2
    nav2_map_server_node = Node(
        package='nav2_map_server',
        executable= 'map_server',
        name='map_server',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time , 'yaml_filename': map_yaml_file}],
        remappings=[('/tf', 'tf'),('/tf_static', 'tf_static')]
    )

    

    
    
    return LaunchDescription([
        robot_state_publisher_node,
        # robot_localization_node,
        rviz2_node,
        gazebo_node,
        spawn_entity_robot,

        declare_params_file_cmd,
        log_param_change,
        start_async_slam_toolbox_node,

        # nav2_map_server_node,




    ])