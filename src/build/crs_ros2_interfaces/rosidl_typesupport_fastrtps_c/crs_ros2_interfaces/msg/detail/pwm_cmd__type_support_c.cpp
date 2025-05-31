// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PwmCmd__ros_msg_type = crs_ros2_interfaces__msg__PwmCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_serialize_crs_ros2_interfaces__msg__PwmCmd(
  const crs_ros2_interfaces__msg__PwmCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pwm_flt
  {
    cdr << ros_message->pwm_flt;
  }

  // Field name: pwm_frt
  {
    cdr << ros_message->pwm_frt;
  }

  // Field name: pwm_rlt
  {
    cdr << ros_message->pwm_rlt;
  }

  // Field name: pwm_rrt
  {
    cdr << ros_message->pwm_rrt;
  }

  // Field name: pwm_flb
  {
    cdr << ros_message->pwm_flb;
  }

  // Field name: pwm_frb
  {
    cdr << ros_message->pwm_frb;
  }

  // Field name: pwm_rlb
  {
    cdr << ros_message->pwm_rlb;
  }

  // Field name: pwm_rrb
  {
    cdr << ros_message->pwm_rrb;
  }

  // Field name: is_timed
  {
    cdr << (ros_message->is_timed ? true : false);
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: is_overriding
  {
    cdr << (ros_message->is_overriding ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_deserialize_crs_ros2_interfaces__msg__PwmCmd(
  eprosima::fastcdr::Cdr & cdr,
  crs_ros2_interfaces__msg__PwmCmd * ros_message)
{
  // Field name: pwm_flt
  {
    cdr >> ros_message->pwm_flt;
  }

  // Field name: pwm_frt
  {
    cdr >> ros_message->pwm_frt;
  }

  // Field name: pwm_rlt
  {
    cdr >> ros_message->pwm_rlt;
  }

  // Field name: pwm_rrt
  {
    cdr >> ros_message->pwm_rrt;
  }

  // Field name: pwm_flb
  {
    cdr >> ros_message->pwm_flb;
  }

  // Field name: pwm_frb
  {
    cdr >> ros_message->pwm_frb;
  }

  // Field name: pwm_rlb
  {
    cdr >> ros_message->pwm_rlb;
  }

  // Field name: pwm_rrb
  {
    cdr >> ros_message->pwm_rrb;
  }

  // Field name: is_timed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_timed = tmp ? true : false;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: is_overriding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_overriding = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t get_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PwmCmd__ros_msg_type * ros_message = static_cast<const _PwmCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pwm_flt
  {
    size_t item_size = sizeof(ros_message->pwm_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_frt
  {
    size_t item_size = sizeof(ros_message->pwm_frt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rlt
  {
    size_t item_size = sizeof(ros_message->pwm_rlt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rrt
  {
    size_t item_size = sizeof(ros_message->pwm_rrt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_flb
  {
    size_t item_size = sizeof(ros_message->pwm_flb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_frb
  {
    size_t item_size = sizeof(ros_message->pwm_frb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rlb
  {
    size_t item_size = sizeof(ros_message->pwm_rlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rrb
  {
    size_t item_size = sizeof(ros_message->pwm_rrb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_timed
  {
    size_t item_size = sizeof(ros_message->is_timed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_overriding
  {
    size_t item_size = sizeof(ros_message->is_overriding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t max_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: pwm_flt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_frt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rlt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rrt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_flb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_frb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rlb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rrb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_timed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: is_overriding
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = crs_ros2_interfaces__msg__PwmCmd;
    is_plain =
      (
      offsetof(DataType, is_overriding) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
bool cdr_serialize_key_crs_ros2_interfaces__msg__PwmCmd(
  const crs_ros2_interfaces__msg__PwmCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pwm_flt
  {
    cdr << ros_message->pwm_flt;
  }

  // Field name: pwm_frt
  {
    cdr << ros_message->pwm_frt;
  }

  // Field name: pwm_rlt
  {
    cdr << ros_message->pwm_rlt;
  }

  // Field name: pwm_rrt
  {
    cdr << ros_message->pwm_rrt;
  }

  // Field name: pwm_flb
  {
    cdr << ros_message->pwm_flb;
  }

  // Field name: pwm_frb
  {
    cdr << ros_message->pwm_frb;
  }

  // Field name: pwm_rlb
  {
    cdr << ros_message->pwm_rlb;
  }

  // Field name: pwm_rrb
  {
    cdr << ros_message->pwm_rrb;
  }

  // Field name: is_timed
  {
    cdr << (ros_message->is_timed ? true : false);
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: is_overriding
  {
    cdr << (ros_message->is_overriding ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t get_serialized_size_key_crs_ros2_interfaces__msg__PwmCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PwmCmd__ros_msg_type * ros_message = static_cast<const _PwmCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pwm_flt
  {
    size_t item_size = sizeof(ros_message->pwm_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_frt
  {
    size_t item_size = sizeof(ros_message->pwm_frt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rlt
  {
    size_t item_size = sizeof(ros_message->pwm_rlt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rrt
  {
    size_t item_size = sizeof(ros_message->pwm_rrt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_flb
  {
    size_t item_size = sizeof(ros_message->pwm_flb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_frb
  {
    size_t item_size = sizeof(ros_message->pwm_frb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rlb
  {
    size_t item_size = sizeof(ros_message->pwm_rlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pwm_rrb
  {
    size_t item_size = sizeof(ros_message->pwm_rrb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_timed
  {
    size_t item_size = sizeof(ros_message->is_timed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_overriding
  {
    size_t item_size = sizeof(ros_message->is_overriding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_ros2_interfaces
size_t max_serialized_size_key_crs_ros2_interfaces__msg__PwmCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: pwm_flt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_frt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rlt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rrt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_flb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_frb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rlb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pwm_rrb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_timed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: is_overriding
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = crs_ros2_interfaces__msg__PwmCmd;
    is_plain =
      (
      offsetof(DataType, is_overriding) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PwmCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const crs_ros2_interfaces__msg__PwmCmd * ros_message = static_cast<const crs_ros2_interfaces__msg__PwmCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_crs_ros2_interfaces__msg__PwmCmd(ros_message, cdr);
}

static bool _PwmCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  crs_ros2_interfaces__msg__PwmCmd * ros_message = static_cast<crs_ros2_interfaces__msg__PwmCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_crs_ros2_interfaces__msg__PwmCmd(cdr, ros_message);
}

static uint32_t _PwmCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
      untyped_ros_message, 0));
}

static size_t _PwmCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_crs_ros2_interfaces__msg__PwmCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PwmCmd = {
  "crs_ros2_interfaces::msg",
  "PwmCmd",
  _PwmCmd__cdr_serialize,
  _PwmCmd__cdr_deserialize,
  _PwmCmd__get_serialized_size,
  _PwmCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PwmCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PwmCmd,
  get_message_typesupport_handle_function,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_hash,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_ros2_interfaces, msg, PwmCmd)() {
  return &_PwmCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
