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

RUN apt-get update && apt-get install -y \
  python3-pip \
  ros-humble-ros2-controllers \
  ros-humble-ros2-control \
  ros-humble-gazebo-ros2-control \
  ros-humble-realtime-tools 

RUN pip install setuptools==58.2.0

# Set up auto-source of workspace for ros user
ARG WORKSPACE
RUN echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/install/setup.bash; fi" >> /home/ros/.bashrc

