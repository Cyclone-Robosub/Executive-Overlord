#!/bin/bash

# This performs initialization needed to build and run our software

# Nucleus stuff
cd nucleus_driver/ros2

# source venv for nucleus_driver
# this may be unecessary, but idk
source venv/bin/activate

# navigate back to root
cd ../..

# source ros
source /opt/ros/jazzy/setup.bash

export PYTHONPATH=$PYTHONPATH:$PWD/nucleus_driver/ros2/venv/lib/python3.12/site-packages