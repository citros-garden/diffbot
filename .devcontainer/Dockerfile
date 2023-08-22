# FROM althack/ros2:humble-gazebo-nvidia

# # ** [Optional] Uncomment this section to install additional packages. **
# #
# # ENV DEBIAN_FRONTEND=noninteractive
# # RUN apt-get update \
# #    && apt-get -y install --no-install-recommends <your-package-list-here> \
# #    #
# #    # Clean up
# #    && apt-get autoremove -y \
# #    && apt-get clean -y \
# #    && rm -rf /var/lib/apt/lists/*
# # ENV DEBIAN_FRONTEND=dialog

# # Set up auto-source of workspace for ros user
# ARG WORKSPACE

# RUN apt update && apt-get install -y ros-humble-rosbridge-suite 
# RUN echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/install/setup.bash; fi" >> /home/ros/.bashrc

ARG ROS_DISTRO=humble

FROM ros:${ROS_DISTRO}-ros-base

ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create a non-root user
RUN groupadd --gid $USER_GID $USERNAME \
  && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
  # Add sudo support for the non-root user
  && apt-get update \
  && apt-get install -y sudo \
  && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME\
  && chmod 0440 /etc/sudoers.d/$USERNAME \
  && rm -rf /var/lib/apt/lists/*

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update \
    && apt-get upgrade -y \
    && \
    : "remove cache" && \
    apt-get autoremove -y -qq && \
    rm -rf /var/lib/apt/lists/*

COPY . /home/diffbot/src/ros2_control

RUN cd /home/diffbot/src \
    && rosdep update --rosdistro ${ROS_DISTRO}  \
    && apt-get update \
    && rosdep install --from-paths ./ -i -y --rosdistro ${ROS_DISTRO} \
    --skip-keys ros-${ROS_DISTRO}-joint-state-publisher-gui --skip-keys ros-${ROS_DISTRO}-rviz2\
    && \
    : "remove cache" && \
    apt-get autoremove -y -qq && \
    rm -rf /var/lib/apt/lists/*

# RUN cd /home/diffbot/ \
#   && . /opt/ros/${ROS_DISTRO}/setup.sh \
#   && colcon build --merge-install --symlink-install

