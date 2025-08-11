trap killgroup SIGINT

killgroup(){
  kill 0
}
#NOTE : After the end of every section make sure the directory returns to the directory that this build script is located.
export ROS_DOMAIN_ID=2
source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd ros2_ws/src/


#Assuming in ros2_ws/src 
cd src/
cd Thrust-Control/script/
./startup.sh &
cd ../../

cd Battery_Management/build/battery_management 
./BatteryMontExecutable & 
cd ../../../

cd ExecutiveMainLoop/scripts
./startup.sh &
cd ../..

cd StateSaver
cd build/state_saver
./state_saver &
cd ../../

cd Research_Cyclone
./startuppy.sh & 
cd ../

cd Robosub-ClTool/script
./run.sh & 
cd ../../

wait
