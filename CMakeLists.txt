# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.1)

project(SmartAi C)
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} /usr/local/include)
file(GLOB SRC_FILES
     "src/CT/**.c"
     "src/smart_controller/**.c"
     "src/smart_device/**.c"
)

add_subdirectory(src/CT)
add_subdirectory(src/smart_device)
add_subdirectory(src/smart_controller)

find_library(uecho
            PATHS /usr/local/include)

add_executable(${PROJECT_NAME} ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14)
target_link_libraries(${PROJECT_NAME} PUBLIC -lwiringPi -lpq -luecho -lpthread)
