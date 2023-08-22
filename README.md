# General Information 🌍
Write a few lines just to explain the project. 
You can add equations with the markdown syntax:

$$ x(t) = \int(v(t))dt + x_0 $$

# Installation 🛫
minimal installation commands.

vcs import src < src/ros2_control/ros2_control.humble.repos
rosdep update --rosdistro=humble
sudo apt-get update

rosdep install --from-paths src --ignore-src -r -y

# Build :tractor:
build commands. Preferred to point to VSCode task instead of CLI commands.

. /opt/ros/humble/setup.sh
colcon build --symlink-install


# Run 🚀
Run commands. Preferred to point to VSCode task instead of CLI commands


# Develop :bulb:
instruction to further develop the simulation.

# Extras :eyes:
Images / Videos from Foxglove


build it:
colcon build --symlink-install

to run the simulation run :

source install/setup.bash

then:

ros2 launch ros2_control_demo_mydiffbot diffbot.launch.py

and everything should come up


then on diffrent terminal: 

also do:
source install/setup.bash
and then run:

ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/diffbot_base_controller/cmd_vel_unstamped