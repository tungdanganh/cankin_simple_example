cmake_minimum_required(VERSION 2.8.3)
project(catkin_simple_example)

add_definitions(-std=c++11)

find_package(catkin_simple REQUIRED)
find_package(Boost REQUIRED)

catkin_simple(ALL_DEPS_REQUIRED)

include_directories(
  ${Boost_INCLUDE_DIRS}
)

cs_add_library(
  ${PROJECT_NAME}
  src/catkin_simple_example.cpp
)

cs_add_executable(catkin_simple_example_ros_node src/catkin_simple_example_ros_node.cpp)
target_link_libraries(catkin_simple_example_ros_node ${PROJECT_NAME})

cs_install()
cs_export(LIBRARIES)