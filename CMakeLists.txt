# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.1)

# Set this project's name.
project(CT)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
target_include_directories(/usr/src/CT/SmartAIC/CT/)
add_library(sensordata
            ctdata.c
)

add_executable(app Snsrctlapp.c)

target_link_libraries(app sensordata -lwiringPi -lpq)

# Set the C++ standard to use to build this target.
#set(CMAKE_CXX_STANDARD 11)
include_directories(${PROJECT_SOURCE_DIR})

