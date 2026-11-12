#include <ros/ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "hero_chassis_controller");
  ROS_INFO("hero_chassis_controller started.");
  ros::spin();
  return 0;
}
