trap killgroup SIGINT

killgroup(){
    kill 0 
}
#NOTE : After the end of every section make sure the directory returns to the directory that this build script is located.
export ROS_DOMAIN_ID=2
source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd ros2_ws/src

#Start of StateSaver build
cd StateSaver
colcon build &
cd ../
#End of StateSaver build


#Start of Research build
cd Research_Cyclone/src
colcon build &
cd ../
chmod +x startuppy.sh
cd ../
#End of Research Build 

#Start of inertial sense build
cd inertial-sense-sdk
colcon build 
cd ../
cd ros2
colcon build &
cd ../
#End of inertial sense build

#Battery Management
cd Battery_Management
colcon build &
cd ../


#Start of Thrust Control Build
cd Thrust-Control
colcon build & 
cd ../
#End of Thrust Control Build

#Start of CLTool build
cd Robosub-CLTool/script
chmod +x build.sh
./build.sh &
cd ../../
#End of CLTool build

#ExecutiveMainLoop
cd ExecutiveMainLoop
colcon build &
cd ..

wait
