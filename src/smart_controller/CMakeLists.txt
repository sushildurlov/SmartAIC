# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.1)

project(SmartController C)
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} /usr/local/include)
#set(INCLUDE ctdata.h)
file(GLOB SRC_FILES
     "**.c"
)
find_library(uecho
            PATHS /usr/local/include/uecho)

add_executable(${PROJECT_NAME} ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 14)
target_link_libraries(${PROJECT_NAME} PUBLIC -luecho -lpthread)