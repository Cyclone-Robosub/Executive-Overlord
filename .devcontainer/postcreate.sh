#!/bin/bash
git clone https://github.com/Cyclone-Robosub/Executive-Overlord.git
sudo rosdep fix-permissions
rosdep update
sudo rosdep install --from-paths /home/rosdev --ignore-src -y