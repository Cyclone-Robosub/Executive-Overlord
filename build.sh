trap killgroup SIGINT

killgroup(){
    kill 0 
}

cd ../

source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd Research_Cyclone/src
colcon build &
cd ../
chmod +x startuppy.sh
cd ../

cd Thrust-Control
cd ../

cd StateSaver
colcon build &
cd ../

wait