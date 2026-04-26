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

## 📋 完整标定流程（从驱动到标定）

### 1️⃣ 准备工作：确认相机驱动正常运行

确保你已经有一个能够发布图像话题的 ROS2 驱动节点。例如，本项目中使用的是 `rm_camera_driver` 中的 `DahengCameraNode`。

```bash
# 进入工作空间
cd ~/sentry_ws

# 编译驱动包（如果需要）
colcon build --packages-select rm_camera_driver

# 加载环境
source install/setup.bash

# 启动相机驱动（通常通过 launch 文件）
ros2 launch rm_bringup bringup_auto_aim.launch.py
```

在另一个终端验证图像话题是否发布（例如 `/xinzhu/image_raw`）：

```bash
ros2 topic list | grep image_raw
ros2 topic hz /xinzhu/image_raw   # 观察频率
```

---

### 2️⃣ 安装标定工具

```bash
sudo apt install ros-humble-camera-calibration
```

---

### 3️⃣ 运行相机标定节点

**重要参数**：
- `--size`：棋盘格内部角点数量（列数 x 行数）。例如 9x12 个格子对应 `8x11`。
- `--square`：单个黑色方格的边长（单位：米）。例如 15mm → `0.015`。
- `--no-service-check`：跳过等待 `set_camera_info` 服务（大多数驱动不支持，必须加）。
- `--remap`：将标定程序订阅的图像话题映射到你实际的话题名；`camera` 命名空间也需映射。

**命令模板**（根据你的实际话题和棋盘格修改）：

```bash
ros2 run camera_calibration cameracalibrator \
  --size 8x11 --square 0.015 \
  --no-service-check \
  --ros-args --remap image:=/xinzhu/image_raw --remap camera:=/xinzhu
```

---

### 4️⃣ 标定操作技巧

- 标定窗口打开后，会显示实时图像和检测到的角点（彩色点）。
- 缓慢移动标定板，使其在画面中出现**不同位置（四角、中心）**、**不同距离**、**不同倾斜角度**。
- 确保角点检测正确（覆盖所有格子交点）。
- 观察窗口右下角的 **CALIBRATE** 按钮：初始为灰色，当采集到足够多（约 30-60 个）有效样本后，按钮变为**绿色**。
- **立即点击 CALIBRATE**，等待计算完成（通常几秒至几十秒）。**不要按 Ctrl+C**。
- 计算完成后，点击 **SAVE**，标定文件会保存到 `/tmp/calibrationdata.tar.gz`。

---

### 5️⃣ 提取并使用标定参数

```bash
# 解压标定数据
tar -xzf /tmp/calibrationdata.tar.gz -C /tmp/calib_data

# 查看生成的文件（通常是 ost.yaml 或 camera.yaml）
ls /tmp/calib_data
```

将得到的 `ost.yaml` 复制到你的相机配置文件目录（例如 `rm_bringup/config/camera_info.yaml`）。

如果驱动节点支持 `camera_info_url` 参数，在对应的参数文件中添加：

```yaml
camera_driver:
  ros__parameters:
    camera_info_url: "package://rm_bringup/config/camera_info.yaml"
```

之后重启驱动节点，标定参数会自动加载并发布到 `/camera_info` 话题。

---

### 6️⃣ 验证标定信息

```bash
ros2 topic echo /xinzhu/camera_info --once
```

输出应包含你标定得到的内参矩阵 `k` 和畸变系数 `d`，例如：

```
k:
- 1285.77455
- 0.0
- 635.43734
- 0.0
- 1287.21613
- 495.27793
...
```

---

## ⚠️ 关键注意事项

1. **棋盘格尺寸必须实际测量**：`--square` 参数必须与真实边长一致，否则标定结果（焦距）会有比例误差。
2. **使用 `--no-service-check`**：否则标定程序会永久等待 `set_camera_info` 服务，导致卡住。
3. **控制样本数量**：绿色按钮一亮就点击，不要采集过多样本（如超过 100 个）以防内存溢出或进程被杀死。
4. **话题映射**：通过 `--ros-args --remap image:=/your/image_topic` 正确指定图像话题。
5. **图形界面**：如果通过 SSH 运行，需要加上 `-X` 选项并确保 `DISPLAY` 已设置，否则标定窗口无法显示。

---

## 🎯 总结

只要相机能正常发布 ROS2 图像话题，标定命令就非常简洁。关键在于 `--no-service-check` 和正确的话题重映射。按照上述步骤操作，你就能获得准确的相机内参和畸变系数，并集成到你的视觉系统中。