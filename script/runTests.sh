. script/build.sh

cd src/Thrust-Control
. script/runTests.sh

cd include/Command_Interpreter/
. script/test.sh

cd ../exported-PID-control
. script/test.sh

cd ../../../Robosub-CLTool
. script/test_detailed.sh

cd ../StateSaver
. script/runTests.sh

cd ../..
