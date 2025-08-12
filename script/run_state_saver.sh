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

cd build/state_saver
./state_saver &
cd $ws_src
cd ..
