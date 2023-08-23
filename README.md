# General Information 🌍
Write a few lines just to explain the project. 

# Installation 🛫
1. Clone the repository:
   ```sh
    git@github.com:citros-garden/diffbot.git
   ```

2. open the repository in the VScode:
	```sh
	cd ~/diffbot
	code .
	```
3. open the repository in the container from VScode with `reopen in container` option.

# Build :tractor:
source and build:(no need?)
```sh
. /opt/ros/humble/setup.sh
colcon build --symlink-install
source install/local_setup.bash
```

# Run 🚀
Run the launch file:

```sh
ros2 launch ros2_control_demo_example_2 diffbot.launch.py 
```
Open a new terminal window and then run the following command:

```sh
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/diffbot_base_controller/cmd_vel_unstamped
```
Check if the hardware interface loaded properly, by opening another terminal and executing

```sh
ros2 control list_hardware_interfaces
````
You should see that:
```sh
command interfaces
      left_wheel_joint/velocity [available] [claimed]
      right_wheel_joint/velocity [available] [claimed]
state interfaces
      left_wheel_joint/position
      left_wheel_joint/velocity
      right_wheel_joint/position
      right_wheel_joint/velocity
``````

The `[claimed]` marker on command interfaces means that a controller has access to command DiffBot.

Check if controllers are running:

``````
ros2 control list_controllers
``````

You should get

```
diffbot_base_controller[diff_drive_controller/DiffDriveController] active
joint_state_broadcaster[joint_state_broadcaster/JointStateBroadcaster] active
```