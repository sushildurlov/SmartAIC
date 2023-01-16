# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.1)

# Set this project's name.
project(CT C CXX)
# Set the C++ standard to use to build this target.
#set(CMAKE_CXX_STANDARD 11)
# include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SRC_FILES
     "src/CT/**.c"
)

add_executable(${PROJECT_NAME} ${SRC_FILES})

# add_executable(${PROJECT_NAME} src/main.cpp src/smartzip/smart_zip.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14)
# find_package(libzip REQUIRED)
# export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib/
#SET(Boost_USE_STATIC_LIBS ON)
#FIND_PACKAGE(Boost REQUIRED COMPONENTS log)
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )
target_link_libraries(${PROJECT_NAME} PUBLIC -lwiringPi -lpq)
# target_include_directories(${PROJECT_NAME} PUBLIC /usr/local/lib)