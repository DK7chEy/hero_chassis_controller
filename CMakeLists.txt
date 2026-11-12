cmake_minimum_required(VERSION 3.0.2)
project(hero_chassis_controller)

## 依赖：roscpp 提供 ROS 的 C++ 接口，roslint 在编译时做代码规范检查。
find_package(catkin REQUIRED COMPONENTS
    roscpp
    roslint
    )

catkin_package(
    CATKIN_DEPENDS
    roscpp
)

include_directories(
    ${catkin_INCLUDE_DIRS}
)

## 生成可执行文件，名字和包名相同。
add_executable(${PROJECT_NAME}
    src/main.cpp
    )

target_link_libraries(${PROJECT_NAME}
    ${catkin_LIBRARIES}
    )

## 代码规范检查（ROS C++ Style Guide）。
roslint_cpp()
