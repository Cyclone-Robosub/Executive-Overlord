// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crs_ros2_interfaces/msg/pwm_cmd.hpp"


#ifndef CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_HPP_
#define CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crs_ros2_interfaces__msg__PwmCmd __attribute__((deprecated))
#else
# define DEPRECATED__crs_ros2_interfaces__msg__PwmCmd __declspec(deprecated)
#endif

namespace crs_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PwmCmd_
{
  using Type = PwmCmd_<ContainerAllocator>;

  explicit PwmCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_flt = 0l;
      this->pwm_frt = 0l;
      this->pwm_rlt = 0l;
      this->pwm_rrt = 0l;
      this->pwm_flb = 0l;
      this->pwm_frb = 0l;
      this->pwm_rlb = 0l;
      this->pwm_rrb = 0l;
      this->is_timed = false;
      this->duration = 0ll;
      this->is_overriding = false;
    }
  }

  explicit PwmCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_flt = 0l;
      this->pwm_frt = 0l;
      this->pwm_rlt = 0l;
      this->pwm_rrt = 0l;
      this->pwm_flb = 0l;
      this->pwm_frb = 0l;
      this->pwm_rlb = 0l;
      this->pwm_rrb = 0l;
      this->is_timed = false;
      this->duration = 0ll;
      this->is_overriding = false;
    }
  }

  // field types and members
  using _pwm_flt_type =
    int32_t;
  _pwm_flt_type pwm_flt;
  using _pwm_frt_type =
    int32_t;
  _pwm_frt_type pwm_frt;
  using _pwm_rlt_type =
    int32_t;
  _pwm_rlt_type pwm_rlt;
  using _pwm_rrt_type =
    int32_t;
  _pwm_rrt_type pwm_rrt;
  using _pwm_flb_type =
    int32_t;
  _pwm_flb_type pwm_flb;
  using _pwm_frb_type =
    int32_t;
  _pwm_frb_type pwm_frb;
  using _pwm_rlb_type =
    int32_t;
  _pwm_rlb_type pwm_rlb;
  using _pwm_rrb_type =
    int32_t;
  _pwm_rrb_type pwm_rrb;
  using _is_timed_type =
    bool;
  _is_timed_type is_timed;
  using _duration_type =
    int64_t;
  _duration_type duration;
  using _is_overriding_type =
    bool;
  _is_overriding_type is_overriding;

  // setters for named parameter idiom
  Type & set__pwm_flt(
    const int32_t & _arg)
  {
    this->pwm_flt = _arg;
    return *this;
  }
  Type & set__pwm_frt(
    const int32_t & _arg)
  {
    this->pwm_frt = _arg;
    return *this;
  }
  Type & set__pwm_rlt(
    const int32_t & _arg)
  {
    this->pwm_rlt = _arg;
    return *this;
  }
  Type & set__pwm_rrt(
    const int32_t & _arg)
  {
    this->pwm_rrt = _arg;
    return *this;
  }
  Type & set__pwm_flb(
    const int32_t & _arg)
  {
    this->pwm_flb = _arg;
    return *this;
  }
  Type & set__pwm_frb(
    const int32_t & _arg)
  {
    this->pwm_frb = _arg;
    return *this;
  }
  Type & set__pwm_rlb(
    const int32_t & _arg)
  {
    this->pwm_rlb = _arg;
    return *this;
  }
  Type & set__pwm_rrb(
    const int32_t & _arg)
  {
    this->pwm_rrb = _arg;
    return *this;
  }
  Type & set__is_timed(
    const bool & _arg)
  {
    this->is_timed = _arg;
    return *this;
  }
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__is_overriding(
    const bool & _arg)
  {
    this->is_overriding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_ros2_interfaces__msg__PwmCmd
    std::shared_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_ros2_interfaces__msg__PwmCmd
    std::shared_ptr<crs_ros2_interfaces::msg::PwmCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PwmCmd_ & other) const
  {
    if (this->pwm_flt != other.pwm_flt) {
      return false;
    }
    if (this->pwm_frt != other.pwm_frt) {
      return false;
    }
    if (this->pwm_rlt != other.pwm_rlt) {
      return false;
    }
    if (this->pwm_rrt != other.pwm_rrt) {
      return false;
    }
    if (this->pwm_flb != other.pwm_flb) {
      return false;
    }
    if (this->pwm_frb != other.pwm_frb) {
      return false;
    }
    if (this->pwm_rlb != other.pwm_rlb) {
      return false;
    }
    if (this->pwm_rrb != other.pwm_rrb) {
      return false;
    }
    if (this->is_timed != other.is_timed) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->is_overriding != other.is_overriding) {
      return false;
    }
    return true;
  }
  bool operator!=(const PwmCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PwmCmd_

// alias to use template instance with default allocator
using PwmCmd =
  crs_ros2_interfaces::msg::PwmCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crs_ros2_interfaces

#endif  // CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_HPP_
