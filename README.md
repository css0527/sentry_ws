build、install、log 这些是自动生成的构建产物，不应该提交到 git；本地可以安全删除；如果已经推到仓库，需要从仓库中移除（不删除源代码），并推送一个更新，同时添加/更新 .gitignore。删除后按正确顺序重新构建并 source install，就能恢复运行。

二、本地清理并重建（安全操作，按顺序执行）
在你的 workspace 根目录（例如 ~/sentry_ws_css）执行：

# 进入工作区根目录
cd ~/sentry_ws_css

# 1) 彻底清理该包或整个工作区（下面示例清理单个包）
rm -rf build/rm_bringup install/rm_bringup log/  # 若想清理所有包，rm -rf build install log

# 2) 确保只 source 你想用的 ROS 环境（不要同时 source 多个工作区）
source /opt/ros/humble/setup.zsh

# 3) 重建（示例只重建 rm_bringup 包，快速）
colcon build --symlink-install --packages-select rm_bringup

# 4) 构建完成后 source 新的 overlay
source install/setup.zsh

# 5) 验证安装的 launch 文件是否在 install 下
ls -la install/rm_bringup/share/rm_bringup/launch

# 6) 运行 launch
ros2 launch rm_bringup bringup_auto_aim.launch.py

说明与要点：

如果你在多个终端切换不同工作区，建议每次打开新终端都只 source 一套：先 source /opt/ros/humble/setup.zsh，然后 source ~/sentry_ws_css/install/setup.zsh（或你当前工作区）。
如果看见 CMakeCache 指向别处（比如 /home/x/other_ws/build/...），说明之前曾在另一路径生成过缓存，删除相应的 build/<pkg> 目录和 install/<pkg> 后重建可解决。
如果某些依赖包（如 daheng4ros）在当前工作区没有 build/install，但你依赖它，构建会提示“not found ... local_setup.zsh”。解决办法：要么在当前 workspace build 这些依赖包，要么确保你 source 的其他 overlay（包含这些包）在 AMENT_PREFIX_PATH 中且优先顺序正确。
三、如果不小心把 build/install/log 推送到仓库（如何修复）
假如你或某人把 build、install、log 推上了远程仓库（并被合并），请按下面步骤把它们从仓库中移除但保留本地（或同时删除本地再恢复）：

在本地工作区添加 .gitignore（如果尚未添加），示例 .gitignore 条目：
# Colcon / ROS build artifacts
/build
/install
/log
/*.egg-info

将这段内容添加到仓库根的 .gitignore 并提交（如果已有条目合并即可）。

从 git 索引中移除这些目录（保留本地文件或不保留，取决需求）：
如果你想保留本地构建文件但从版本控制中移除：
git rm -r --cached build install log
git commit -m "remove build/install/log from repo; add to .gitignore"
git push
如果你也要同时删除本地文件（更干净）：
git rm -r build install log
git commit -m "remove build/install/log"
git push
# 然后如果需要，可在本地重新生成这些目录（通过 colcon build）
四、删除后下一次跑通的完整流程（从干净仓库开始）
当远程/本地已把 build/install/log 从仓库移除并且 .gitignore 已更新，开发者要在本地跑通项目，按下面步骤：

# 1. clone 或 pull 最新仓库（现在仓库中没有 build/install/log）
git clone <repo-url> ~/sentry_ws_css
cd ~/sentry_ws_css

# 2. 确保环境
source /opt/ros/humble/setup.zsh

# 3. 安装/准备依赖（若需要），例如 rosdep（如果项目有 system 依赖）
# sudo apt update
# sudo apt install python3-rosdep
# sudo rosdep init   # 若首次使用
# rosdep update
# rosdep install --from-paths src --ignore-src -r -y

# 4. 构建：推荐全量构建或按需构建
# 全量构建（更保险）：
colcon build --symlink-install

# 或者按需构建（快速）：
colcon build --symlink-install --packages-select rm_bringup

# 5. source 刚构建的 overlay
source install/setup.zsh

# 6. 运行和验证
ros2 launch rm_bringup bringup_auto_aim.launch.py



一、快速诊断命令（在运行系统时）

查看图像发布频率（替换为你的图像话题，例如 /xinzhu/image_raw）：
ros2 topic hz /xinzhu/image_raw

直接查看一帧图像是否模糊（在本地桌面用 rqt_image_view）：
ros2 run rqt_image_view rqt_image_view

# 在 GUI 中选择你的图像话题并观察画面是否清晰（或是否有明显运动模糊）
查看 armor_detector 的输出频率（假设有 result 或 armors 话题）：
ros2 topic hz /xinzhu/armor_detector/armors
ros2 topic hz /xinzhu/armor_detector/result_img

查看节点 CPU 使用和延迟（top / htop；或使用 ros2 run rqt_graph rqt_graph 看节点连接）：
如果 armor_detector 节点 CPU 高但输出慢，说明处理瓶颈在算法；如果图像本身帧率低或模糊，优先调相机。

二、相机参数优先调整（快速、常见且见效快）
在 camera_driver_params.yaml 中有这些参数可调：

exposure_time（当前 2500 μs）：
快速移动下减小曝光能显著降低运动模糊。把 exposure_time 降到 500～1000 范围试试（具体数值与光照环境相关）。

gain（当前 12.0）：
降低曝光后图像变暗可以用提升 gain 补偿，但增益过高会增加噪声。可设置 15～25 试验。

分辨率（当前 1280x1024）：
降低分辨率可提高处理速度并有时能提高摄像头帧率，试 640x480 或 800x600 看效果。

其他：如果相机支持设置 FPS 限制或全局快门（global shutter），优先启用全局快门或提高相机帧率。

示例修改及验证：
1）编辑参数文件（或通过动态参数）：
camera_driver:
  ros__parameters:
    exposure_time: 800
    gain: 18.0
    resolution_width: 800
    resolution_height: 600
2）重启驱动并验证
# 重启 launch 或相应 camera 驱动节点，或在参数服务器动态更新（如果支持）
ros2 lifecycle set /camera_driver configure   # 仅当节点实现 lifecycle
# 更通用：重启 bringup 或单独的 camera driver node

3）再次测 fps & 视觉：
ros2 topic hz /xinzhu/image_raw
# 在 rqt_image_view 观察是否明显变清晰且帧率提升

三、检测器参数调整（armor_detector_params.yaml 中可调）
配置片段里有若干参数可影响检测鲁棒性：

binary_thres：当前 90。若光照变化或曝光改动后，适当调整二值化阈值，使用能提高灯条/装甲板对比。

light.* 参数（min_ratio/max_ratio/max_angle/color_diff_thresh）：
light.max_angle（当前 40°）和 armor.max_angle（35°）决定能接受的灯条/装甲倾斜角度，快速运动时透视/倾斜可能增大，适当放宽一点（例如 +5°）有助检测，但会增加误检。

light.color_diff_thresh：如果颜色区分弱，可降低阈值；但过低容易误检。

armor.min_light_ratio、armor.min_small_center_distance、armor.max_*_center_distance：
如果快速运动导致灯条被截断或不完整，min_light_ratio 太高会丢失候选。把 armor.min_light_ratio 降到 0.6～0.7 试验。
classifier_threshold（0.7）：若后端分类器更严格，短暂模糊时容易被判为 negative，适当降