#!/bin/bash
WORKSPACE_DIR="/workspaces/diffbot/"

export ROS_DISTRO="humble"
source /opt/ros/${ROS_DISTRO}/setup.sh

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