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
     battery_management \
     pwm_cltool \
     state_saver

. install/setup.bash

colcon test \
  --ctest-args \
    -j 1 \
  --packages-select  \
    thrust_control \
    battery_management \
    pwm_cltool \
    state_saver 
   

colcon test-result --all