#!/bin/bash
WORKSPACE_DIR="/workspaces/diffbot/"

export ROS_DISTRO="humble"
source /opt/ros/${ROS_DISTRO}/setup.sh

cd $WORKSPACE_DIR

vcs import src < src/ros2_control_demos/ros2_control_demos.$ROS_DISTRO.repos
rosdep update --rosdistro=$ROS_DISTRO
sudo apt-get update

rosdep install --from-paths src --ignore-src -r -y

git clone https://github.com/ros2/teleop_twist_keyboard.git
cd teleop_twist_keyboard
git submodule update --init --recursive

cd $WORKSPACE_DIR
colcon build --symlink-install

echo "source /opt/ros/${ROS_DISTRO}/setup.sh" >> ~/.bashrc
echo "source /workspaces/diffbot/install/setup.bash" >> ~/.bashrc




echo "
# ==============================================
#   ██████╗██╗████████╗██████╗  ██████╗ ███████╗
#  ██╔════╝██║╚══██╔══╝██╔══██╗██╔═══██╗██╔════╝
#  ██║     ██║   ██║   ██████╔╝██║   ██║███████╗
#  ██║     ██║   ██║   ██╔══██╗██║   ██║╚════██║
#  ╚██████╗██║   ██║   ██║  ██║╚██████╔╝███████║
#   ╚═════╝╚═╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚══════╝                                        
# =============================================="

echo "Done installing, ready to develop!"