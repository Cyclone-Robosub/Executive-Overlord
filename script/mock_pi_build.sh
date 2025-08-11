#!/bin/bash
source /opt/ros/jazzy/setup.bash

# source nucleus_drivers venv
cd src/nucleus_driver/ros2
source venv/bin/activate

cd ../..

colcon build \
  --cmake-args -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DMOCK_RPI=ON \
  --packages-select  \
  crs_dvl \
  crs_ros2_interfaces \
  interfaces \
  nucleus_driver_ros2 \
  thrust_control \
  state_saver \
  battery_management
  
. install/setup.bash

cd ..