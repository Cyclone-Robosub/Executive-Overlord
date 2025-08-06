#!/bin/bash
trap killgroup SIGINT

killgroup(){
  kill 0
}

#NOTE : After the end of every section make sure the directory returns to the directory that this build script is located.
# export ROS_DOMAIN_ID=2
source /opt/ros/jazzy/setup.bash
source install/setup.bash


# nucleus_driver node setup
# source nucleus_drivers venv
cd nucleus_driver/ros2
source venv/bin/activate
cd ../..

export PYTHONPATH=$PYTHONPATH:$PWD/nucleus_driver/ros2/venv/lib/python3.12/site-packages

ros2 run nucleus_driver_ros2 nucleus_node &


wait
