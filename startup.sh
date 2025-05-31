trap killgroup SIGINT

killgroup(){
  kill 0
}

cd ../
source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd inertialsense
cd ros2_ws/src/
. install/setup.bash
./inertial_sense_ros2_node > IMUross.txt &
cd ../ ../../../


cd ClTool
python3 -i Python_CL_Tool.py
wait