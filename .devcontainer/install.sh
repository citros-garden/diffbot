#!/bin/bash
WORKSPACE_DIR="/workspaces/diffbot/"

cd $WORKSPACE_DIR

. /opt/ros/"${ROS_DISTRO}"/setup.sh
. /home/ros2_ws/install/setup.sh
exec "$@"

# colcon build --symlink-install
# source install/setup.bash


# rosdep install --from-paths src --ignore-src -r -y


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