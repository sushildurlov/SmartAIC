# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.1)

project(CT C)

file(GLOB SRC_FILES
     "src/CT/**.c"
)

add_executable(${PROJECT_NAME} ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14)
target_link_libraries(${PROJECT_NAME} PUBLIC -lwiringPi -lpq)
