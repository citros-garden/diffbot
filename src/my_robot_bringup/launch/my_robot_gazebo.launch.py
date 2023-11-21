from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution , LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_path ,get_package_share_directory
from launch.actions import ExecuteProcess , DeclareLaunchArgument

def generate_launch_description():

    pkg_share = FindPackageShare(package='my_robot_description').find('my_robot_description')

    urdf_path = os.path.join(get_package_share_path('my_robot_description'),
                             'urdf', 'my_robot.urdf.xacro')
    rviz_config_path = os.path.join(get_package_share_path('my_robot_description'),
                                    'rviz', 'urdf_config.rviz')
    
    ekf_filter_config = os.path.join(pkg_share, 'config/ekf.yaml')
    
    robot_description = ParameterValue(Command(['xacro ', urdf_path]), value_type=str)
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    world_path=os.path.join(pkg_share, 'world/my_world.sdf'),

    controller_config = PathJoinSubstitution(
        [
            FindPackageShare("controller"),
            "config",
            "param.yaml",
        ]
    )

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{'robot_description': robot_description}]
    )

    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
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

    controller=Node(
        package = 'controller',
        name = 'controller',
        executable = 'controller',
        parameters = [controller_config]
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
        robot_localization_node,
        controller
    ])