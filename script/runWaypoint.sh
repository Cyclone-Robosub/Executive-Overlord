trap killgroup SIGINT

killgroup(){
  kill $(jobs -p)
  kill 0
}
source /opt/ros/jazzy/setup.bash
source install/setup.bash

cd ../src/WaypointExecutive
cd build/waypoint_executive
./waypoint_test &
cd ../../../../