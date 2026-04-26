// Created by Chengfu Zou
// Copyright (C) FYT Vision Group. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rm_serial_driver/protocol/sentry_protocol.hpp"
// ros2
#include <geometry_msgs/msg/twist.hpp>

namespace fyt::serial_driver::protocol {
ProtocolSentry::ProtocolSentry(std::string_view port_name, bool enable_data_print) {
  auto uart_transporter = std::make_shared<UartTransporter>(std::string(port_name));
  packet_tool_ = std::make_shared<FixedPacketTool<32>>(uart_transporter);
  packet_tool_->enbaleDataPrint(enable_data_print);
}

/******************************/
/*************send*************/
/******************************/
//自瞄通信协议
void ProtocolSentry::send(const auto_aim_interfaces::msg::GimbalCmd &data) {
  packet_.loadData<unsigned char>(0xec, 1);
  // std::cout <<"pitch:  "  << data.pitch << "\n";
  // std::cout <<"yaw:    "  << data.yaw << "\n";
  packet_.loadData<unsigned char>(data.fire_advice ? FireState::Fire : FireState::NotFire, 2);
  packet_.loadData<float>(static_cast<float>(data.pitch), 3);
  packet_.loadData<float>(static_cast<float>(data.yaw), 7);
  packet_.loadData<float>(static_cast<float>(data.distance), 11);
  // // chassis control
  // // linear x
  // packet_.loadData<float>(0, 16);
  // // linear y
  // packet_.loadData<float>(0, 20);
  // // angular z
  // packet_.loadData<float>(0, 24);
  // // useless data
  // packet_.loadData<float>(0, 28);
  packet_tool_->sendPacket(packet_);
}


//导航通信协议
void ProtocolSentry::send(const rm_interfaces::msg::ChassisCmd &data) {
  packet_.loadData<unsigned char>(0xed, 1);
  // chassis control
  packet_.loadData<unsigned char>(data.type, 2);
  // linear x
  packet_.loadData<float>(data.twist.linear.x, 3);
  // linear y
  packet_.loadData<float>(data.twist.linear.y, 7);
  // angular z
  packet_.loadData<float>(data.twist.angular.z, 11);
  // useless data
  // packet_.loadData<float>(0, 28);
  packet_tool_->sendPacket(packet_);
}

void ProtocolSentry::send(const rm_interfaces::msg::RobotMode &data){
  packet_.loadData<unsigned char>(0xef, 1);
  packet_.loadData<unsigned char>(data.mode, 2);
  packet_tool_->sendPacket(packet_);
}

/******************************/
/************receive***********/
/******************************/
//自瞄通信协议
bool ProtocolSentry::receive(auto_aim_interfaces::msg::SerialReceiveData &data) {
  FixedPacket<32> packet;
  if (packet_tool_->recvPacket(packet)) {
     // game status
    uint8_t enemy_color;   //电控发送的是我方的颜色，所以下面要反过来
    packet.unloadData(enemy_color, 1);
    data.mode = (enemy_color == ENEMY_BLUE ? 1 : 0);
  
    packet.unloadData(data.pitch, 2);//2-6
    packet.unloadData(data.yaw, 6);//6-10
    // 实际上是底盘角度
    // packet.unloadData(data.chassis_yaw, 10);
    // blood
    // packet.unloadData(data.judge_system_data.blood, 14);
    // // remaining time
    // packet.unloadData(data.judge_system_data.remaining_time, 16);
    // // outpost hp
    // packet.unloadData(data.judge_system_data.outpost_hp, 20);
    // // operator control message
    // packet.unloadData(data.judge_system_data.operator_command.is_outpost_attacking, 22);
    // packet.unloadData(data.judge_system_data.operator_command.is_retreating, 23);
    // packet.unloadData(data.judge_system_data.operator_command.is_drone_avoiding, 24);

    // packet.unloadData(data.judge_system_data.game_status, 25);

    data.bullet_speed = 25;
    return true;
  } else {
    return false;
  }
}

std::vector<rclcpp::SubscriptionBase::SharedPtr> ProtocolSentry::getSubscriptions(
  rclcpp::Node::SharedPtr node) {
  auto sub1 = node->create_subscription<auto_aim_interfaces::msg::GimbalCmd>(
    "armor_solver/cmd_gimbal",
    rclcpp::SensorDataQoS(),
    [this](const auto_aim_interfaces::msg::GimbalCmd::SharedPtr msg) { this->send(*msg); });
  auto sub2 = node->create_subscription<auto_aim_interfaces::msg::GimbalCmd>(
    "rune_solver/cmd_gimbal",
    rclcpp::SensorDataQoS(),
    [this](const auto_aim_interfaces::msg::GimbalCmd::SharedPtr msg) { this->send(*msg); });
  auto sub3 = node->create_subscription<rm_interfaces::msg::ChassisCmd>(
    "/chassis_cmd",
    rclcpp::SensorDataQoS(),
    [this](const rm_interfaces::msg::ChassisCmd::SharedPtr msg) { this->send(*msg); });
  auto sub4 = node->create_subscription<rm_interfaces::msg::RobotMode>(
    "/robot_mode",
    rclcpp::SensorDataQoS(),
    [this](const rm_interfaces::msg::RobotMode::SharedPtr msg) { this->send(*msg); });
  // auto sub4 = node->create_subscription<std_msgs::msg::Int8>(
  //  "/robot_mode",
  //  rclcpp::SensorDataQoS(),
  // [this](const std_msgs::msg::Int8::SharedPtr msg) {
  //   // 处理整数消息
  //   this->send(*msg);  // 注意：send 也需要接受 std_msgs::msg::Int8
  // });
  // return {sub1,sub3};
  return {sub3, sub4};
}

std::vector<rclcpp::Client<auto_aim_interfaces::srv::SetMode>::SharedPtr> ProtocolSentry::getClients(
  rclcpp::Node::SharedPtr node) const {
  auto client1 = node->create_client<auto_aim_interfaces::srv::SetMode>("armor_detector/set_mode",
                                                                  rmw_qos_profile_services_default);
  auto client2 = node->create_client<auto_aim_interfaces::srv::SetMode>("armor_solver/set_mode",
                                                                  rmw_qos_profile_services_default);
  return {client1, client2};
}
}  // namespace fyt::serial_driver::protocol
