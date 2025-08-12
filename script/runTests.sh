. script/mock_pi_build.sh

cd src/build/thrust_control
./thrust_control_tests

cd include/Command_Interpreter
./propulsion_test

cd ../exported-PID-control/test
./controller_test


cd ../../../../state_saver
./state_saver_test

cd ../battery_management
./battery_management_test

cd ../../..
