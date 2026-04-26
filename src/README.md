# 新竹战队 26赛季哨兵导航

主要的创新：

1. 实现FAST-LIO2的重定位模式，不需要另外运行重定位算法。

2. 改进navigation2的故障恢复行为，卡住时机器人会向无碰撞的方向运动。

3. 采用决策树进行行为控制。

4. 中南视觉开源中新增导航数据包

5. 视觉导航联合实现追击功能


## 包说明

| Package Name | Description |
|--------------|-------------|
| auto_aim_interfaces | 自瞄接口 |
| [autonomous_exploration_development_environment](https://github.com/HongbiaoZ/autonomous_exploration_development_environment) | 地形分析包terrain_analysis和terrain_analysis_ext |
| [BehaviourTree.CPP](https://github.com/BehaviorTree/BehaviorTree.CPP) | 行为树包|
| cmd_chassis | 底盘解算控制 |
| control_panel | 模仿裁判系统发消息 |
| FAST_LIO | 修改版fastlio，具备建图和重定位功能（须配合icp_relocalizatiion使用） |
| icp_relocalization | 基于icp实现的重定位，须配合修改版FAST_LIO使用 |
| livox_ros_driver2 | livox雷达驱动 |
| nav2_plugins |
| rm_decision_cpp | 烧饼决策系统 |
| rm_interfaces | 通讯协议 |
| sentry_bringup | 哨兵启动文件 |
| rm_bringup | 哨兵视觉启动文件 |
| sentry_description | 烧饼urdf |
| rm_robor_description | 烧饼视觉urdf |
| rm_auto_aim | 自瞄主程序|
| rm_interfaces | 裁判系统自定义数据包|
| rm_utils | 数学工具包|
| rm_hardware_driver | 串口与相机驱动包|
## 配置流程
Docker Image Quick Start
Get the image

 docker pull polarisxq/scurm:sentry_nav

 cd SCURM_SentryNavigation
 docker build -t scurm:sentry_nav .

#run
 This image support both DockerDesktop and Docker in Linux.

 for Linux user, run

 sudo xhost + && sudo docker run -dit --network=host --pid=host --privileged -v /dev:/dev -e DISPLAY=${DISPLAY} scurm:sentry_nav

#Insatll Groot2

 You must install groot2 manually inside the container.
 chmod +x . Groot2-1.3.1-linux-installer.run
 ./Groot2-1.3.1-linux-installer.run
 groot2

sudo apt install ros-humble-navigation2 ros-humble-nav2-

rosdep install --from-paths src --ignore-src -r -y

报错差什么包补什么包，livox_driver的包报错的话先将他单独编译，再整体编译，文件较多，编译时采用三或四线程
## LAUNCH

### MAPPING

- launch mapping node

```bash
ros2 launch sentry_bringup mapping.launch.py
```

- save map

```bash
# occupancy grid map
ros2 run nav2_map_server map_saver_cli -t /projected_map -f test_map --fmt png
# save pcd
ros2 service call /map_save std_srvs/srv/Trigger
```

### LAUNCH ALL

```bash
ros2 launch sentry_bringup bringup_all_in_one.launch.py
ros2 launch rm_bringup bringup.launch.py





camera matrix
1283.033671 0.000000 634.394768
0.000000 1283.605367 494.971107
0.000000 0.000000 1.000000

distortion
-0.087448 0.141637 0.000341 0.000288 0.000000

rectification
1.000000 0.000000 0.000000
0.000000 1.000000 0.000000
0.000000 0.000000 1.000000

projection
1267.692871 0.000000 634.331533 0.000000
0.000000 1269.001587 494.487253 0.000000
0.000000 0.000000 1.000000 0.000000


```
基于我们整个调试过程和最终的成功运行，下面给出**大恒相机在 ROS2 Humble 下进行相机标定的完整流程**，包括所有终端命令和注意事项。

---

