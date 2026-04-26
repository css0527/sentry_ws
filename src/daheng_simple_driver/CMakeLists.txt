cmake_minimum_required(VERSION 3.8)
project(daheng_simple_driver)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(/opt/ros/humble/include)

set(DAHENG_SDK_DIR "/home/xinzhu/Documents/Galaxy_Linux-x86/Galaxy_camera")
include_directories(${DAHENG_SDK_DIR}/inc)
link_directories(${DAHENG_SDK_DIR}/lib/x86_64)   # 修正点

add_executable(driver_node src/driver_node.cpp)

ament_target_dependencies(driver_node
  rclcpp
  sensor_msgs
  cv_bridge
)

target_link_libraries(driver_node
  ${OpenCV_LIBRARIES}
  gxiapi   # 注意小写
)

install(TARGETS driver_node DESTINATION lib/${PROJECT_NAME})

ament_package()

