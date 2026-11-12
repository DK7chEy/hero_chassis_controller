# hero_chassis_controller

英雄机器人底盘控制器的 ROS 包。**当前是最小可运行骨架**：能编译、能运行、能打印日志，
还没有开始写控制逻辑。

## 这个包现在能做什么

- 编译出一个可执行文件 `hero_chassis_controller`
- 运行后打印 `hero_chassis_controller started.`，并一直挂着等退出信号(ctrl+c)
- **不能**驱动 Gazebo 里的轮子。
