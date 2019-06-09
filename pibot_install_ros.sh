#!/bin/bash

sudo sh -c 'echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu/ $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-key adv --keyserver hkp://pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
sudo apt-get update

code_name=$(lsb_release -sc)

if [ "$code_name" = "trusty" ]; then
    ros_version="indigo"
elif [ "$code_name" = "xenial" ]; then
    ros_version="kinetic"
else
    echo "PIBOT not support "$code_name
    exit
fi

echo "ros:" $ros_version

sudo apt-get -y --allow-unauthenticated  install ros-${ros_version}-ros-base ros-${ros_version}-slam-gmapping ros-${ros_version}-navigation ros-${ros_version}-xacro ros-${ros_version}-yocs-velocity-smoother ros-${ros_version}-robot-state-publisher ros-${ros_version}-joint-state-publisher ros-${ros_version}-teleop-twist-* ros-${ros_version}-rviz ros-${ros_version}-control-msgs ros-${ros_version}-kdl-parser-py ros-${ros_version}-tf2-geometry-msgs ros-${ros_version}-hector-mapping ros-${ros_version}-slam-karto ros-${ros_version}-hector-geotiff ros-${ros_version}-hector-trajectory-server

read -s -n1 -p "install ros gui tools?(y/N)" 

if [ "$REPLY" = "y" -o "$REPLY" = "Y" ]; then
    sudo apt-get -y --allow-unauthenticated  install ros-${ros_version}-rviz ros-${ros_version}-rqt-reconfigure
fi
