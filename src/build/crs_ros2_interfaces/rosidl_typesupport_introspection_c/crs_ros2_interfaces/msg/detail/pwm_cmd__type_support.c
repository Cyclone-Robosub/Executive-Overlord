// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__rosidl_typesupport_introspection_c.h"
#include "crs_ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_ros2_interfaces__msg__PwmCmd__init(message_memory);
}

void crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_fini_function(void * message_memory)
{
  crs_ros2_interfaces__msg__PwmCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_member_array[11] = {
  {
    "pwm_flt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_flt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_frt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_frt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_rlt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_rlt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_rrt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_rrt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_flb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_flb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_frb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_frb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_rlb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_rlb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_rrb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, pwm_rrb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_timed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, is_timed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_overriding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_ros2_interfaces__msg__PwmCmd, is_overriding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_members = {
  "crs_ros2_interfaces__msg",  // message namespace
  "PwmCmd",  // message name
  11,  // number of fields
  sizeof(crs_ros2_interfaces__msg__PwmCmd),
  false,  // has_any_key_member_
  crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_member_array,  // message members
  crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_type_support_handle = {
  0,
  &crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_members,
  get_message_typesupport_handle_function,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_hash,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_ros2_interfaces, msg, PwmCmd)() {
  if (!crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_type_support_handle.typesupport_identifier) {
    crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crs_ros2_interfaces__msg__PwmCmd__rosidl_typesupport_introspection_c__PwmCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
