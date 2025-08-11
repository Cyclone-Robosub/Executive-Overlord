#!/bin/bash
trap killgroup SIGINT

killgroup(){
  kill $(jobs -p)
  kill 0
}

cd src
pwd

#NOTE : After the end of every section make sure the directory returns to the directory that this build script is located.
# export ROS_DOMAIN_ID=2
source /opt/ros/jazzy/setup.bash
. install/setup.bash

ros2 run pwm_cltool pwm_cltool_node