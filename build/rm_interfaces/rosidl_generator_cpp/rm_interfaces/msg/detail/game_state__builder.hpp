// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GAME_STATE__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__GAME_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/game_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_GameState_enemy_outpost_occupied
{
public:
  explicit Init_GameState_enemy_outpost_occupied(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::GameState enemy_outpost_occupied(::rm_interfaces::msg::GameState::_enemy_outpost_occupied_type arg)
  {
    msg_.enemy_outpost_occupied = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_projectile_allowance_17mm
{
public:
  explicit Init_GameState_projectile_allowance_17mm(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_enemy_outpost_occupied projectile_allowance_17mm(::rm_interfaces::msg::GameState::_projectile_allowance_17mm_type arg)
  {
    msg_.projectile_allowance_17mm = std::move(arg);
    return Init_GameState_enemy_outpost_occupied(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_enemy_base_hp
{
public:
  explicit Init_GameState_enemy_base_hp(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_projectile_allowance_17mm enemy_base_hp(::rm_interfaces::msg::GameState::_enemy_base_hp_type arg)
  {
    msg_.enemy_base_hp = std::move(arg);
    return Init_GameState_projectile_allowance_17mm(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_my_base_hp
{
public:
  explicit Init_GameState_my_base_hp(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_enemy_base_hp my_base_hp(::rm_interfaces::msg::GameState::_my_base_hp_type arg)
  {
    msg_.my_base_hp = std::move(arg);
    return Init_GameState_enemy_base_hp(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_enemy_outpost_hp
{
public:
  explicit Init_GameState_enemy_outpost_hp(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_my_base_hp enemy_outpost_hp(::rm_interfaces::msg::GameState::_enemy_outpost_hp_type arg)
  {
    msg_.enemy_outpost_hp = std::move(arg);
    return Init_GameState_my_base_hp(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_my_outpost_hp
{
public:
  explicit Init_GameState_my_outpost_hp(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_enemy_outpost_hp my_outpost_hp(::rm_interfaces::msg::GameState::_my_outpost_hp_type arg)
  {
    msg_.my_outpost_hp = std::move(arg);
    return Init_GameState_enemy_outpost_hp(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_hurt_type
{
public:
  explicit Init_GameState_hurt_type(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_my_outpost_hp hurt_type(::rm_interfaces::msg::GameState::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return Init_GameState_my_outpost_hp(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_armor_id
{
public:
  explicit Init_GameState_armor_id(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_hurt_type armor_id(::rm_interfaces::msg::GameState::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_GameState_hurt_type(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_stage_remain_time
{
public:
  explicit Init_GameState_stage_remain_time(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_armor_id stage_remain_time(::rm_interfaces::msg::GameState::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameState_armor_id(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_game_progress
{
public:
  explicit Init_GameState_game_progress(::rm_interfaces::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_stage_remain_time game_progress(::rm_interfaces::msg::GameState::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameState_stage_remain_time(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

class Init_GameState_current_hp
{
public:
  Init_GameState_current_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameState_game_progress current_hp(::rm_interfaces::msg::GameState::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_GameState_game_progress(msg_);
  }

private:
  ::rm_interfaces::msg::GameState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::GameState>()
{
  return rm_interfaces::msg::builder::Init_GameState_current_hp();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__GAME_STATE__BUILDER_HPP_
