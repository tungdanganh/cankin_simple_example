#ifndef CATKIN_SIMPLE_EXAMPLE_H_
#define CATKIN_SIMPLE_EXAMPLE_H_

#include <ros/ros.h>

namespace rosex {
class DummyExample {
 public:
  DummyExample(const ros::NodeHandle &nh, const ros::NodeHandle &nh_private)
      : count_(1), nh_(nh), nh_private_(nh_private) {
    ROS_INFO("DummyExample: %d count", count_);
  }

 private:
  int count_;
  ros::NodeHandle nh_;
  ros::NodeHandle nh_private_;
};
}
#endif