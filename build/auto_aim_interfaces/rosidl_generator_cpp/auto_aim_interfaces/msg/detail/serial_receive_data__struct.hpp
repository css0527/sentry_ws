// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auto_aim_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'gamestate'
#include "auto_aim_interfaces/msg/detail/game_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auto_aim_interfaces__msg__SerialReceiveData __attribute__((deprecated))
#else
# define DEPRECATED__auto_aim_interfaces__msg__SerialReceiveData __declspec(deprecated)
#endif

namespace auto_aim_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialReceiveData_
{
  using Type = SerialReceiveData_<ContainerAllocator>;

  explicit SerialReceiveData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gamestate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->bullet_speed = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
    }
  }

  explicit SerialReceiveData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gamestate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->bullet_speed = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _bullet_speed_type =
    float;
  _bullet_speed_type bullet_speed;
  using _roll_type =
    float;
  _roll_type roll;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _gamestate_type =
    auto_aim_interfaces::msg::GameState_<ContainerAllocator>;
  _gamestate_type gamestate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__bullet_speed(
    const float & _arg)
  {
    this->bullet_speed = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__gamestate(
    const auto_aim_interfaces::msg::GameState_<ContainerAllocator> & _arg)
  {
    this->gamestate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> *;
  using ConstRawPtr =
    const auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auto_aim_interfaces__msg__SerialReceiveData
    std::shared_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auto_aim_interfaces__msg__SerialReceiveData
    std::shared_ptr<auto_aim_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialReceiveData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->bullet_speed != other.bullet_speed) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->gamestate != other.gamestate) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialReceiveData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialReceiveData_

// alias to use template instance with default allocator
using SerialReceiveData =
  auto_aim_interfaces::msg::SerialReceiveData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_
