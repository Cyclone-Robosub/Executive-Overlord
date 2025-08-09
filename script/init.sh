#!/bin/bash


# Nucleus stuff
cd nucleus_driver/ros2

# setup venv for nucleus_driver
# this may be unecessary on the pi, but idk
python3 -m venv --system-site-packages --symlinks venv
touch ./venv/COLCON_IGNORE

# install nuceleus_driver + dependencies
source venv/bin/activate
pip3 install -r requirements.txt

# navigate back to root
cd ../..


# source ros
source /opt/ros/jazzy/setup.bash