// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crs_ros2_interfaces/msg/pwm_cmd.hpp"


#ifndef CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__BUILDER_HPP_
#define CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crs_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_PwmCmd_is_overriding
{
public:
  explicit Init_PwmCmd_is_overriding(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  ::crs_ros2_interfaces::msg::PwmCmd is_overriding(::crs_ros2_interfaces::msg::PwmCmd::_is_overriding_type arg)
  {
    msg_.is_overriding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_duration
{
public:
  explicit Init_PwmCmd_duration(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_is_overriding duration(::crs_ros2_interfaces::msg::PwmCmd::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_PwmCmd_is_overriding(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_is_timed
{
public:
  explicit Init_PwmCmd_is_timed(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_duration is_timed(::crs_ros2_interfaces::msg::PwmCmd::_is_timed_type arg)
  {
    msg_.is_timed = std::move(arg);
    return Init_PwmCmd_duration(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_rrb
{
public:
  explicit Init_PwmCmd_pwm_rrb(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_is_timed pwm_rrb(::crs_ros2_interfaces::msg::PwmCmd::_pwm_rrb_type arg)
  {
    msg_.pwm_rrb = std::move(arg);
    return Init_PwmCmd_is_timed(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_rlb
{
public:
  explicit Init_PwmCmd_pwm_rlb(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_rrb pwm_rlb(::crs_ros2_interfaces::msg::PwmCmd::_pwm_rlb_type arg)
  {
    msg_.pwm_rlb = std::move(arg);
    return Init_PwmCmd_pwm_rrb(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_frb
{
public:
  explicit Init_PwmCmd_pwm_frb(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_rlb pwm_frb(::crs_ros2_interfaces::msg::PwmCmd::_pwm_frb_type arg)
  {
    msg_.pwm_frb = std::move(arg);
    return Init_PwmCmd_pwm_rlb(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_flb
{
public:
  explicit Init_PwmCmd_pwm_flb(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_frb pwm_flb(::crs_ros2_interfaces::msg::PwmCmd::_pwm_flb_type arg)
  {
    msg_.pwm_flb = std::move(arg);
    return Init_PwmCmd_pwm_frb(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_rrt
{
public:
  explicit Init_PwmCmd_pwm_rrt(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_flb pwm_rrt(::crs_ros2_interfaces::msg::PwmCmd::_pwm_rrt_type arg)
  {
    msg_.pwm_rrt = std::move(arg);
    return Init_PwmCmd_pwm_flb(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_rlt
{
public:
  explicit Init_PwmCmd_pwm_rlt(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_rrt pwm_rlt(::crs_ros2_interfaces::msg::PwmCmd::_pwm_rlt_type arg)
  {
    msg_.pwm_rlt = std::move(arg);
    return Init_PwmCmd_pwm_rrt(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_frt
{
public:
  explicit Init_PwmCmd_pwm_frt(::crs_ros2_interfaces::msg::PwmCmd & msg)
  : msg_(msg)
  {}
  Init_PwmCmd_pwm_rlt pwm_frt(::crs_ros2_interfaces::msg::PwmCmd::_pwm_frt_type arg)
  {
    msg_.pwm_frt = std::move(arg);
    return Init_PwmCmd_pwm_rlt(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

class Init_PwmCmd_pwm_flt
{
public:
  Init_PwmCmd_pwm_flt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PwmCmd_pwm_frt pwm_flt(::crs_ros2_interfaces::msg::PwmCmd::_pwm_flt_type arg)
  {
    msg_.pwm_flt = std::move(arg);
    return Init_PwmCmd_pwm_frt(msg_);
  }

private:
  ::crs_ros2_interfaces::msg::PwmCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crs_ros2_interfaces::msg::PwmCmd>()
{
  return crs_ros2_interfaces::msg::builder::Init_PwmCmd_pwm_flt();
}

}  // namespace crs_ros2_interfaces

#endif  // CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__BUILDER_HPP_
