trap killgroup SIGINT

killgroup(){
  kill 0
}

cd ../
source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd ros2_ws/src/
. install/setup.bash
cd build/inerital-sense-sdk
./inertial_sense_ros2_node > IMUross.txt &
cd ../ ../../../

cd Thrust-Control/script/
./startup.sh &
cd ../../

cd Robosub-ClTool/script
./run.sh & 
cd ../../

wait
