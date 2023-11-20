FROM althack/ros2:humble-gazebo-nvidia


# install utils
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
  bash-completion \
  build-essential \
  cmake \
  gdb \
  git \
  python3-argcomplete \
  python3-pip \
  nano \
  wget \
  curl \
  autoconf \
  automake \
  libtool \
  make \
  g++ \
  unzip \
  sudo \ 
  openssh-server \
  gnupg \
  gdb-multiarch \
  default-jre \
  python3 \
  python3-setuptools\
  python3-vcstool \
  python3-colcon-common-extensions \
  python3-rosdep \
  python3-rosinstall \
  python3-rosinstall-generator \
  python3-wstool \
  ros-humble-rosbridge-suite \
  && rm -rf /var/lib/apt/lists/* \
  ros-humble-urdf-tutorial \
  ros-humble-gazebo-ros-pkgs \
  ros-humble-navigation2 \
  ros-humble-nav2-bringup \
  ros-humble-joint-state-publisher \
  ros-humble-slam-toolbox \
  ros-humble-robot-localization

RUN pip install xacro \ 
pip install setuptools==58.2.0 

# Set up auto-source of workspace for ros user
COPY . /home/diffbot/src
WORKDIR /workspaces/diffbot
RUN echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/install/setup.bash; fi" >> /home/ros/.bashrc

