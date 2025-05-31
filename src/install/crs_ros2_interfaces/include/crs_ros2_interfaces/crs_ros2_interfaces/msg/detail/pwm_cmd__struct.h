// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crs_ros2_interfaces/msg/pwm_cmd.h"


#ifndef CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_H_
#define CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PwmCmd in the package crs_ros2_interfaces.
/**
  * pwm of each thruster on the robot
  * In left to right:
  * f = front / r = rear
  * l = left  / r = right
  * t = top   / b = bottom
 */
typedef struct crs_ros2_interfaces__msg__PwmCmd
{
  int32_t pwm_flt;
  int32_t pwm_frt;
  int32_t pwm_rlt;
  int32_t pwm_rrt;
  int32_t pwm_flb;
  int32_t pwm_frb;
  int32_t pwm_rlb;
  int32_t pwm_rrb;
  /// Does PWM command have duration or runs indefinitely.
  /// 1 means run for duration.
  /// 0 means run indefinitely
  bool is_timed;
  /// Duration of the PWM command
  int64_t duration;
  /// Should this command override exisiting PWM commands
  /// 1 means any existing PWM commands should be removed before adding this one
  /// 0 means this command should be added to the queue
  bool is_overriding;
} crs_ros2_interfaces__msg__PwmCmd;

// Struct for a sequence of crs_ros2_interfaces__msg__PwmCmd.
typedef struct crs_ros2_interfaces__msg__PwmCmd__Sequence
{
  crs_ros2_interfaces__msg__PwmCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_ros2_interfaces__msg__PwmCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__STRUCT_H_
