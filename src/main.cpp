// Copyright 2026 DK7chEy
//
// Licensed under the BSD-3-Clause license, see LICENSE for details.
//
// 最小可运行的 ROS 节点，后续的底盘控制器在这个文件里扩展。

#include <ros/ros.h>

int main(int argc, char** argv)
{
  // 注册节点，名字必须唯一，否则同名节点会被顶掉。
  ros::init(argc, argv, "hero_chassis_controller");

  // 打印一行日志，证明节点真的跑起来了。
  ROS_INFO("hero_chassis_controller started.");

  // 挂住进程，等待退出信号（Ctrl+C）。
  ros::spin();
  return 0;
}
