#!/bin/sh

#CT
cd src/CT
sudo cmake . && make 
sudo mv CT /usr/src/CT/SmartAIC/build
sudo rm -rf CMakeCache.txt CMakeFiles cmake_install.cmake Makefile
cd /usr/src/CT/SmartAIC

#smart_controller
cd src/smart_controller
sudo cmake . && make 
sudo mv SmartController /usr/src/CT/SmartAIC/build
sudo rm -rf CMakeCache.txt CMakeFiles cmake_install.cmake Makefile
cd /usr/src/CT/SmartAIC

#smart_device
cd src/smart_device
sudo cmake . && make 
sudo mv SmartDevice /usr/src/CT/SmartAIC/build
sudo rm -rf CMakeCache.txt CMakeFiles cmake_install.cmake Makefile
cd /usr/src/CT/SmartAIC
