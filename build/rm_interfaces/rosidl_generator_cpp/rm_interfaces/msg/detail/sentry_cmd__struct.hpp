// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__SentryCmd __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__SentryCmd __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SentryCmd_
{
  using Type = SentryCmd_<ContainerAllocator>;

  explicit SentryCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resurrection_en = false;
      this->buy_resurrection_en = false;
      this->buy_projectile_allowance = 0;
      this->buy_projectile_times = 0;
      this->buy_hp_times = 0;
    }
  }

  explicit SentryCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resurrection_en = false;
      this->buy_resurrection_en = false;
      this->buy_projectile_allowance = 0;
      this->buy_projectile_times = 0;
      this->buy_hp_times = 0;
    }
  }

  // field types and members
  using _resurrection_en_type =
    bool;
  _resurrection_en_type resurrection_en;
  using _buy_resurrection_en_type =
    bool;
  _buy_resurrection_en_type buy_resurrection_en;
  using _buy_projectile_allowance_type =
    uint16_t;
  _buy_projectile_allowance_type buy_projectile_allowance;
  using _buy_projectile_times_type =
    uint16_t;
  _buy_projectile_times_type buy_projectile_times;
  using _buy_hp_times_type =
    uint16_t;
  _buy_hp_times_type buy_hp_times;

  // setters for named parameter idiom
  Type & set__resurrection_en(
    const bool & _arg)
  {
    this->resurrection_en = _arg;
    return *this;
  }
  Type & set__buy_resurrection_en(
    const bool & _arg)
  {
    this->buy_resurrection_en = _arg;
    return *this;
  }
  Type & set__buy_projectile_allowance(
    const uint16_t & _arg)
  {
    this->buy_projectile_allowance = _arg;
    return *this;
  }
  Type & set__buy_projectile_times(
    const uint16_t & _arg)
  {
    this->buy_projectile_times = _arg;
    return *this;
  }
  Type & set__buy_hp_times(
    const uint16_t & _arg)
  {
    this->buy_hp_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::SentryCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::SentryCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::SentryCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::SentryCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__SentryCmd
    std::shared_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__SentryCmd
    std::shared_ptr<rm_interfaces::msg::SentryCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SentryCmd_ & other) const
  {
    if (this->resurrection_en != other.resurrection_en) {
      return false;
    }
    if (this->buy_resurrection_en != other.buy_resurrection_en) {
      return false;
    }
    if (this->buy_projectile_allowance != other.buy_projectile_allowance) {
      return false;
    }
    if (this->buy_projectile_times != other.buy_projectile_times) {
      return false;
    }
    if (this->buy_hp_times != other.buy_hp_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const SentryCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SentryCmd_

// alias to use template instance with default allocator
using SentryCmd =
  rm_interfaces::msg::SentryCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_HPP_
