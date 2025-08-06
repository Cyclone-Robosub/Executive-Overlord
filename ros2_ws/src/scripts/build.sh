#!/bin/bash
source /opt/ros/jazzy/setup.bash

# source nucleus_drivers venv
cd nucleus_driver/ros2
source venv/bin/activate

cd ../..

colcon build \
  --cmake-args -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  --packages-select  \
  interfaces \
  nucleus_driver_ros2 \
  crs_nucleus_temp \

. install/setup.bash