#!/bin/bash

if ! [ $PIBOT_ENV_INITIALIZED ]; then
    echo "export PIBOT_ENV_INITIALIZED=1" >> ~/.bashrc
    echo "source ~/.pibotrc" >> ~/.bashrc
fi

code_name=$(lsb_release -sc)

if [ "$code_name" = "trusty" ]; then
    ros_version="indigo"
elif [ "$code_name" = "xenial" ]; then
    ros_version="kinetic"
else
    echo "PIBOT not support "$code_name
    exit
fi 

echo "source /opt/ros/${ros_version}/setup.bash" > ~/.pibotrc


#LOCAL_IP=`ifconfig eth0|grep "inet addr:"|awk -F":" '{print $2}'|awk '{print $1}'`
#LOCAL_IP=`ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print $2}' | awk -F"/" '{print $1}'`

#if [ ! ${LOCAL_IP} ]; then
#    echo "please check network"
#    exit
#fi

echo "LOCAL_IP=\`ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print \$2}' | awk -F"/" '{print \$1}'\`" >> ~/.pibotrc

#PIBOT_MODEL
if [ ! $1 ]; then
    echo "set apollo as default model"
    PIBOT_MODEL=apollo
else
    PIBOT_MODEL=$1
fi

#PIBOT_LIDAR
if [ ! $2 ]; then
    echo "set rplidar as default lidar"
    PIBOT_LIDAR=rplidar
else
    PIBOT_LIDAR=$2 
fi

echo "export ROS_IP=\`echo \$LOCAL_IP\`" >> ~/.pibotrc
echo "export ROS_HOSTNAME=\`echo \$LOCAL_IP\`" >> ~/.pibotrc
echo "export PIBOT_MODEL=${PIBOT_MODEL}" >> ~/.pibotrc
echo "export PIBOT_LIDAR=${PIBOT_LIDAR}" >> ~/.pibotrc

LOCAL_IP=`ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print $2}' | awk -F"/" '{print $1}'`

if [ $3 ]; then
    ROS_MASTER_IP_STR=`echo $3`
    ROS_MASTER_IP=`echo $3`
    echo "set " $3 "as rosmaster ip"
else
    ROS_MASTER_IP_STR="\`echo \$LOCAL_IP\`"
    ROS_MASTER_IP=`echo $LOCAL_IP`
    echo "set local ip as rosmaster ip"
fi

echo "export ROS_MASTER_URI=`echo http://${ROS_MASTER_IP_STR}:11311`" >> ~/.pibotrc

if [ ! ${LOCAL_IP} ]; then
    echo "please check network"
    exit
fi
echo "model: " $PIBOT_MODEL " lidar:" $PIBOT_LIDAR  " local_ip: " ${LOCAL_IP} " ros_master_ip:" ${ROS_MASTER_IP}
echo "source ~/pibot_ros/ros_ws/devel/setup.bash" >> ~/.pibotrc 

#rules
echo "setup pibot modules"
echo " "
sudo cp rules/pibot.rules  /etc/udev/rules.d
sudo cp rules/rplidar.rules  /etc/udev/rules.d
sudo cp rules/ydlidar.rules  /etc/udev/rules.d
echo " "
echo "Restarting udev"
echo ""
sudo service udev reload
sudo service udev restart
echo "finish "

