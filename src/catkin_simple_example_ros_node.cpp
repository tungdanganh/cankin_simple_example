#include <ros/ros.h>
#include "catkin_simple_example/catkin_simple_example.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "catkin_simple_example_ros_node");
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");

  rosex::DummyExample ex(nh, nh_private);
  ROS_WARN("ROS is spinning ...");
  ros::spin();
  return 0;
}