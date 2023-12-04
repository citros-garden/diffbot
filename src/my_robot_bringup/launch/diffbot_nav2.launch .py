from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument,LogInfo
from launch.conditions import UnlessCondition
from launch.substitutions import Command, PathJoinSubstitution , LaunchConfiguration , PythonExpression
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_path ,get_package_share_directory
from launch.actions import ExecuteProcess , DeclareLaunchArgument
from nav2_common.launch import HasNodeParams
def generate_launch_description():

    pkg_share = FindPackageShare(package='my_robot_description').find('my_robot_description')

    urdf_path = os.path.join(get_package_share_path('my_robot_description'),
                             'urdf', 'my_robot.urdf.xacro')
    rviz_config_path = os.path.join(get_package_share_path('my_robot_bringup'),
                                    'rviz', 'urdf_config_slam_nomap.rviz')
    
    
    #slam config #####################
    params_file = LaunchConfiguration('params_file')
    default_params_file = os.path.join(get_package_share_directory("my_robot_description"),
                                       'config', 'mapper_params_online_async_withmap.yaml')
    declare_params_file_cmd = DeclareLaunchArgument('params_file', default_value=default_params_file,
        description='Full path to the ROS2 parameters file to use for the slam_toolbox node')
    has_node_params = HasNodeParams(source_file=params_file,
                                    node_name='slam_toolbox')
    actual_params_file = PythonExpression(['"', params_file, '" if ', has_node_params,
                                           ' else "', default_params_file, '"'])
    
    log_param_change = LogInfo(msg=['provided params_file ',  params_file,
                                    ' does not contain slam_toolbox parameters. Using default: ',
                                    default_params_file],
                               condition=UnlessCondition(has_node_params))
    ##############################


    ekf_filter_config = os.path.join(pkg_share, 'config/ekf.yaml')
    
    robot_description = ParameterValue(Command(['xacro ', urdf_path]), value_type=str)
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    world_path=os.path.join(pkg_share, 'world/obstacles.world'),


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


    # slam package
    start_async_slam_toolbox_node = Node(
       package='slam_toolbox',
       executable='async_slam_toolbox_node',
        output='screen',
       parameters=[actual_params_file,{'use_sim_time': use_sim_time}],

    )

    # robot localization node
    robot_localization_node = Node(
       package='robot_localization',
       executable='ekf_node',
       name='ekf_filter_node',
       output='screen',
       parameters= [ekf_filter_config, {'use_sim_time': use_sim_time}]
    )





    
    return LaunchDescription([
        robot_state_publisher_node,
        rviz2_node,
        gazebo_node,
        spawn_entity_robot,

        declare_params_file_cmd,
        log_param_change,
        start_async_slam_toolbox_node,



        # robot_localization_node,
    ])