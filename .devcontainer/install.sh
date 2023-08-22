#!/bin/bash
WORKSPACE_DIR="/workspaces/diffbot/"

cd $WORKSPACE_DIR

vcs import src < src/ros2_control_demos/ros2_control_demos.$ROS_DISTRO.repos
rosdep update --rosdistro=$ROS_DISTRO
sudo apt-get update

rosdep install --from-paths src --ignore-src -r -y

echo "source /opt/ros/${ROS_DISTRO}/setup.sh" >> ~/.bashrc
colcon build --symlink-install

echo "source /workspaces/diffbot/install/setup.bash" >> ~/.bashrc

sudo apt update
# git clone git@github.com:ros2/teleop_twist_keyboard.git




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