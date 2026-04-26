# rm_camera_driver
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



### 发布话题 

*  `image_raw` (`sensor_msgs/msg/Image`) - 相机采集到的图像
*  `camera_info` (`sensor_msgs/msg/CameraInfo`) - 相机内参
  
### 参数 

* `camera_info_url` (string, default: "package://rm_bringup/config/camera_info.yaml") - camera_info.yaml文件的路径
* `exposure_time` (int, default: 2000) - 相机曝光时间
* `gain` (double, default: 15.0) - 相机增益
* `resolution_width` (int, default: 1280) - 图像宽
* `resolution_height` (int, default: 1024) - 图像高
* `recording` (bool, default: false) - 是否录制视频 

一：
xinzhu@xinzhushaobing:~$ source /opt/ros/humble/setup.zsh
xinzhu@xinzhushaobing:~$ source ~/sentry_ws/install/setup.zsh
xinzhu@xinzhushaobing:~$ ros2 pkg list | grep rm_bringup
rm_bringup
xinzhu@xinzhushaobing:~$ ls ~/sentry_ws/install/rm_bringup/share/rm_bringup/launch/
输出：bringup_auto_aim.launch.py  bringup_navigation.launch.py
bringup.launch.py           __pycache__
xinzhu@xinzhushaobing:~$ ros2 launch rm_bringup bringup_auto_aim.launch.py

或者：
cd ~/sentry_ws
colcon build --symlink-install --packages-select rm_bringup
source install/setup.zsh
ros2 launch rm_bringup bringup_auto_aim.launch.py

二：
检查装甲板检测话题：ros2 topic echo /xinzhu/armor_detector/armors --once
查看可视化调试图像 ：ros2 run rqt_image_view rqt_image_view  选择 /xinzhu/armor_detector/result_img 话题
 检查 armor_solver 是否输出目标角度：ros2 topic echo /xinzhu/armor_solver/target --once
