#!/bin/bash
trap killgroup SIGINT

killgroup(){
  kill 0
}

#!/bin/bash
source /opt/ros/jazzy/setup.bash

colcon build \
  --cmake-args -DBUILD_TESTING=ON -DMOCK_RPI=ON \
  --packages-select  \
  crs_dvl \
  crs_ros2_interfaces \
  interfaces \
  nucleus_driver_ros2 \
  thrust_control \
  state_saver

. install/setup.bash

colcon test --packages-skip nucleus_driver_ros2 interfaces

colcon test-result --all