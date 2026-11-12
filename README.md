# hero_chassis_controller

英雄机器人底盘控制器的 ROS 包。**当前是最小可运行骨架**：能编译、能运行、能打印日志，
还没有开始写控制逻辑。

## 这个包现在能做什么

- 编译出一个可执行文件 `hero_chassis_controller`
- 运行后打印 `hero_chassis_controller started.`，并一直挂着等退出信号
- **不能**驱动 Gazebo 里的轮子。驱动轮子需要写控制器类、并在 `package.xml` 里声明插件，
  那是后续（逆运动学、PID）才做的事

## 编译

```bash
cd ~/ws
catkin build hero_chassis_controller
source devel/setup.bash
```

看到 `[build] Summary: All 1 packages succeeded!` 就是成功了。

## 运行

```bash
rosrun hero_chassis_controller hero_chassis_controller
```

终端会打印：

```
[ INFO] [....]: hero_chassis_controller started.
```

按 `Ctrl+C` 退出。另开一个终端敲 `rosnode list` 可以看到这个节点在运行。

## 文件说明

| 文件 | 作用 |
| --- | --- |
| `package.xml` | 包的身份证：包名、版本、依赖（`roscpp`、`roslint`） |
| `CMakeLists.txt` | 告诉 catkin 把 `src/main.cpp` 编译成可执行文件 |
| `src/main.cpp` | 唯一的源码，一个最小的 ROS 节点 |
| `.clang-format` | 代码格式规范（ROS C++ Style Guide） |
| `.gitignore` | 不把 `build/`、`devel/`、CLion 本地配置提交进仓库 |
| `LICENSE` | BSD-3-Clause |

## 后续计划

- 写控制器类，先用逆运动学算出四个轮子的转速

## 代码规范

```bash
catkin build hero_chassis_controller --no-deps
cd ~/ws/build/hero_chassis_controller && make roslint_hero_chassis_controller
```

`Total errors found: 0` 表示通过。格式由 `.clang-format` 定义，是 ROS C++ Style Guide
（Google 风格 + 120 列 + 大括号独占一行）。

## 版本管理

提交信息采用 `类型: 说明` 的格式，例如 `build: ...`、`feat: ...`、`style: ...`、`docs: ...`。
一个提交只做一件事，`git log --oneline` 就是一份开发记录。

## 分工

一人一组，全部工作由本人独立完成：包结构、源码、代码规范、文档、录屏。
