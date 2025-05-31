trap killgroup SIGINT

killgroup(){
    kill 0 
}

source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd ../

cd Research_Cyclone/src
colcon build &
cd ../
chmod +x startuppy.sh
cd ../

cd src/

cd ros2_ws/src/
colcon build &
cd ../../


cd Thrust-Control/script
./rmBuild.sh & 
cd ../../

cd Robosub-CLTool/script
./build.sh &
cd ../../

cd StateSaver
colcon build &
cd ../

wait
