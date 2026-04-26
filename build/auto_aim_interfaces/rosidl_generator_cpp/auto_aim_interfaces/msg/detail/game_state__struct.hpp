// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auto_aim_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__auto_aim_interfaces__msg__GameState __attribute__((deprecated))
#else
# define DEPRECATED__auto_aim_interfaces__msg__GameState __declspec(deprecated)
#endif

namespace auto_aim_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameState_
{
  using Type = GameState_<ContainerAllocator>;

  explicit GameState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_hp = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->armor_id = 0;
      this->hurt_type = 0;
      this->my_outpost_hp = 0;
      this->enemy_outpost_hp = 0;
      this->my_base_hp = 0;
      this->enemy_base_hp = 0;
      this->projectile_allowance_17mm = 0;
      this->enemy_outpost_occupied = 0;
    }
  }

  explicit GameState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_hp = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->armor_id = 0;
      this->hurt_type = 0;
      this->my_outpost_hp = 0;
      this->enemy_outpost_hp = 0;
      this->my_base_hp = 0;
      this->enemy_base_hp = 0;
      this->projectile_allowance_17mm = 0;
      this->enemy_outpost_occupied = 0;
    }
  }

  // field types and members
  using _current_hp_type =
    uint16_t;
  _current_hp_type current_hp;
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    uint16_t;
  _stage_remain_time_type stage_remain_time;
  using _armor_id_type =
    uint8_t;
  _armor_id_type armor_id;
  using _hurt_type_type =
    uint8_t;
  _hurt_type_type hurt_type;
  using _my_outpost_hp_type =
    uint16_t;
  _my_outpost_hp_type my_outpost_hp;
  using _enemy_outpost_hp_type =
    uint16_t;
  _enemy_outpost_hp_type enemy_outpost_hp;
  using _my_base_hp_type =
    uint16_t;
  _my_base_hp_type my_base_hp;
  using _enemy_base_hp_type =
    uint16_t;
  _enemy_base_hp_type enemy_base_hp;
  using _projectile_allowance_17mm_type =
    uint16_t;
  _projectile_allowance_17mm_type projectile_allowance_17mm;
  using _enemy_outpost_occupied_type =
    uint8_t;
  _enemy_outpost_occupied_type enemy_outpost_occupied;

  // setters for named parameter idiom
  Type & set__current_hp(
    const uint16_t & _arg)
  {
    this->current_hp = _arg;
    return *this;
  }
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint16_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__armor_id(
    const uint8_t & _arg)
  {
    this->armor_id = _arg;
    return *this;
  }
  Type & set__hurt_type(
    const uint8_t & _arg)
  {
    this->hurt_type = _arg;
    return *this;
  }
  Type & set__my_outpost_hp(
    const uint16_t & _arg)
  {
    this->my_outpost_hp = _arg;
    return *this;
  }
  Type & set__enemy_outpost_hp(
    const uint16_t & _arg)
  {
    this->enemy_outpost_hp = _arg;
    return *this;
  }
  Type & set__my_base_hp(
    const uint16_t & _arg)
  {
    this->my_base_hp = _arg;
    return *this;
  }
  Type & set__enemy_base_hp(
    const uint16_t & _arg)
  {
    this->enemy_base_hp = _arg;
    return *this;
  }
  Type & set__projectile_allowance_17mm(
    const uint16_t & _arg)
  {
    this->projectile_allowance_17mm = _arg;
    return *this;
  }
  Type & set__enemy_outpost_occupied(
    const uint8_t & _arg)
  {
    this->enemy_outpost_occupied = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auto_aim_interfaces::msg::GameState_<ContainerAllocator> *;
  using ConstRawPtr =
    const auto_aim_interfaces::msg::GameState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auto_aim_interfaces::msg::GameState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auto_aim_interfaces::msg::GameState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auto_aim_interfaces__msg__GameState
    std::shared_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auto_aim_interfaces__msg__GameState
    std::shared_ptr<auto_aim_interfaces::msg::GameState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameState_ & other) const
  {
    if (this->current_hp != other.current_hp) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->armor_id != other.armor_id) {
      return false;
    }
    if (this->hurt_type != other.hurt_type) {
      return false;
    }
    if (this->my_outpost_hp != other.my_outpost_hp) {
      return false;
    }
    if (this->enemy_outpost_hp != other.enemy_outpost_hp) {
      return false;
    }
    if (this->my_base_hp != other.my_base_hp) {
      return false;
    }
    if (this->enemy_base_hp != other.enemy_base_hp) {
      return false;
    }
    if (this->projectile_allowance_17mm != other.projectile_allowance_17mm) {
      return false;
    }
    if (this->enemy_outpost_occupied != other.enemy_outpost_occupied) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameState_

// alias to use template instance with default allocator
using GameState =
  auto_aim_interfaces::msg::GameState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_HPP_
