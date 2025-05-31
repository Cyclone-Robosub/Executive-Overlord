// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crs_ros2_interfaces/msg/pwm_cmd.hpp"


#ifndef CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__TRAITS_HPP_
#define CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crs_ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PwmCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm_flt
  {
    out << "pwm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_flt, out);
    out << ", ";
  }

  // member: pwm_frt
  {
    out << "pwm_frt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_frt, out);
    out << ", ";
  }

  // member: pwm_rlt
  {
    out << "pwm_rlt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rlt, out);
    out << ", ";
  }

  // member: pwm_rrt
  {
    out << "pwm_rrt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rrt, out);
    out << ", ";
  }

  // member: pwm_flb
  {
    out << "pwm_flb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_flb, out);
    out << ", ";
  }

  // member: pwm_frb
  {
    out << "pwm_frb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_frb, out);
    out << ", ";
  }

  // member: pwm_rlb
  {
    out << "pwm_rlb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rlb, out);
    out << ", ";
  }

  // member: pwm_rrb
  {
    out << "pwm_rrb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rrb, out);
    out << ", ";
  }

  // member: is_timed
  {
    out << "is_timed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_timed, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: is_overriding
  {
    out << "is_overriding: ";
    rosidl_generator_traits::value_to_yaml(msg.is_overriding, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PwmCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_flt, out);
    out << "\n";
  }

  // member: pwm_frt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_frt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_frt, out);
    out << "\n";
  }

  // member: pwm_rlt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_rlt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rlt, out);
    out << "\n";
  }

  // member: pwm_rrt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_rrt: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rrt, out);
    out << "\n";
  }

  // member: pwm_flb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_flb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_flb, out);
    out << "\n";
  }

  // member: pwm_frb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_frb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_frb, out);
    out << "\n";
  }

  // member: pwm_rlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_rlb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rlb, out);
    out << "\n";
  }

  // member: pwm_rrb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_rrb: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_rrb, out);
    out << "\n";
  }

  // member: is_timed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_timed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_timed, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: is_overriding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_overriding: ";
    rosidl_generator_traits::value_to_yaml(msg.is_overriding, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PwmCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace crs_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crs_ros2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crs_ros2_interfaces::msg::PwmCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  crs_ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crs_ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crs_ros2_interfaces::msg::PwmCmd & msg)
{
  return crs_ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crs_ros2_interfaces::msg::PwmCmd>()
{
  return "crs_ros2_interfaces::msg::PwmCmd";
}

template<>
inline const char * name<crs_ros2_interfaces::msg::PwmCmd>()
{
  return "crs_ros2_interfaces/msg/PwmCmd";
}

template<>
struct has_fixed_size<crs_ros2_interfaces::msg::PwmCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crs_ros2_interfaces::msg::PwmCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crs_ros2_interfaces::msg::PwmCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__TRAITS_HPP_
