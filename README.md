# PIBOT ROS Workspace v1.7

## install ros
```shell
cd ~/pibot_ros/
./pibot_install_ros.sh
source ~/.bashrc
```

## init environment
for master
```shell
cd ~/pibot_ros/
./pibot_init_env.sh apollo rplidar
source ~/.bashrc
```

for salve
```shell
cd ~/pibot_ros/
./pibot_init_env.sh apollo rplidar master_ip
source ~/.bashrc
```

## run example
```
roslaunch pibot_bringup bringup.launch
roslaunch pibot keyboard_teleop.launch
```

then you can control your robot
