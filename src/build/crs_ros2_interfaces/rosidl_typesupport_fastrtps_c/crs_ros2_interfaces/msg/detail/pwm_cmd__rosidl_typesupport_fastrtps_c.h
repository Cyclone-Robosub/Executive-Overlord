// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice
#ifndef CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "crs_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_serialize_crs_ros2_interfaces__msg__PwmCmd(
  const crs_ros2_interfaces__msg__PwmCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_deserialize_crs_ros2_interfaces__msg__PwmCmd(
  eprosima::fastcdr::Cdr &,
  crs_ros2_interfaces__msg__PwmCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t get_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t max_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_serialize_key_crs_ros2_interfaces__msg__PwmCmd(
  const crs_ros2_interfaces__msg__PwmCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t get_serialized_size_key_crs_ros2_interfaces__msg__PwmCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t max_serialized_size_key_crs_ros2_interfaces__msg__PwmCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_ros2_interfaces, msg, PwmCmd)();

#ifdef __cplusplus
}
#endif

#endif  // CRS_ROS2_INTERFACES__MSG__DETAIL__PWM_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
