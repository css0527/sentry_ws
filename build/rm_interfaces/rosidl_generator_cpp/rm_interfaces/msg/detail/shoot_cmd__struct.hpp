// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__ShootCmd __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__ShootCmd __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootCmd_
{
  using Type = ShootCmd_<ContainerAllocator>;

  explicit ShootCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
      this->projectile_num = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_num = 0;
    }
  }

  explicit ShootCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
      this->projectile_num = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_num = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _projectile_num_type =
    uint8_t;
  _projectile_num_type projectile_num;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__projectile_num(
    const uint8_t & _arg)
  {
    this->projectile_num = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOP =
    0u;
  static constexpr uint8_t ONCE =
    1u;
  static constexpr uint8_t CONTINUOUS =
    2u;

  // pointer types
  using RawPtr =
    rm_interfaces::msg::ShootCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::ShootCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ShootCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ShootCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__ShootCmd
    std::shared_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__ShootCmd
    std::shared_ptr<rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootCmd_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->projectile_num != other.projectile_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootCmd_

// alias to use template instance with default allocator
using ShootCmd =
  rm_interfaces::msg::ShootCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootCmd_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootCmd_<ContainerAllocator>::ONCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootCmd_<ContainerAllocator>::CONTINUOUS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_
