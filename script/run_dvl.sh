#!/bin/bash
trap killgroup SIGINT

killgroup(){
  kill $(jobs -p)
  kill 0
}

ws_src="${PWD}/src"

#NOTE : After the end of every section make sure the directory returns to the directory that this build script is located.
# export ROS_DOMAIN_ID=2

cd $ws_src
pwd

source /opt/ros/jazzy/setup.bash
source install/setup.bash


# nucleus_driver node setup
# source nucleus_drivers venv
cd nucleus_driver/ros2
source venv/bin/activate
cd ../..

export PYTHONPATH=$PYTHONPATH:$PWD/nucleus_driver/ros2/venv/lib/python3.12/site-packages

cd build/nucleus_driver_ros2/build/lib/nucleus_node 
python3 nucleus_node.py &
cd $ws_src

cd build/crs_dvl
pwd
./crs_dvl &
cd $ws_src
cd ..

wait