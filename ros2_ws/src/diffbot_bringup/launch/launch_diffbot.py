import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch import LaunchDescription

from launch_ros.substitutions import FindPackageShare
from launch.actions import  RegisterEventHandler
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution, LaunchConfiguration
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    ld = LaunchDescription()

    controller_config = PathJoinSubstitution(
        [
            FindPackageShare("controller"),
            "config",
            "param.yaml",
        ]
    )
    
   
    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare("ros2_control_demo_example_2"), "urdf", "diffbot.urdf.xacro"]
            ),
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("ros2_control_demo_example_2"),
            "config",
            "diffbot_controllers.yaml",
        ]
    )
    

    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        output="both",
    )
    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
        remappings=[
            ("/diff_drive_controller/cmd_vel_unstamped", "/cmd_vel"),
        ],
    )


    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["diffbot_base_controller", "--controller-manager", "/controller_manager"],
    )

    controller=Node(
        package = 'controller',
        name = 'controller',
        executable = 'controller',
        parameters = [controller_config]
    )

    # Delay start of robot_controller after `joint_state_broadcaster`
    delay_robot_controller_spawner_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[robot_controller_spawner],
        )
    )

    
    ld.add_action(control_node)
    ld.add_action(robot_state_pub_node)
    ld.add_action(joint_state_broadcaster_spawner)
    ld.add_action(controller)
    ld.add_action(delay_robot_controller_spawner_after_joint_state_broadcaster_spawner)
   
    

    return ld