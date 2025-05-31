// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crs_ros2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
cdr_serialize(
  const crs_ros2_interfaces::msg::PwmCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pwm_flt
  cdr << ros_message.pwm_flt;

  // Member: pwm_frt
  cdr << ros_message.pwm_frt;

  // Member: pwm_rlt
  cdr << ros_message.pwm_rlt;

  // Member: pwm_rrt
  cdr << ros_message.pwm_rrt;

  // Member: pwm_flb
  cdr << ros_message.pwm_flb;

  // Member: pwm_frb
  cdr << ros_message.pwm_frb;

  // Member: pwm_rlb
  cdr << ros_message.pwm_rlb;

  // Member: pwm_rrb
  cdr << ros_message.pwm_rrb;

  // Member: is_timed
  cdr << (ros_message.is_timed ? true : false);

  // Member: duration
  cdr << ros_message.duration;

  // Member: is_overriding
  cdr << (ros_message.is_overriding ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crs_ros2_interfaces::msg::PwmCmd & ros_message)
{
  // Member: pwm_flt
  cdr >> ros_message.pwm_flt;

  // Member: pwm_frt
  cdr >> ros_message.pwm_frt;

  // Member: pwm_rlt
  cdr >> ros_message.pwm_rlt;

  // Member: pwm_rrt
  cdr >> ros_message.pwm_rrt;

  // Member: pwm_flb
  cdr >> ros_message.pwm_flb;

  // Member: pwm_frb
  cdr >> ros_message.pwm_frb;

  // Member: pwm_rlb
  cdr >> ros_message.pwm_rlb;

  // Member: pwm_rrb
  cdr >> ros_message.pwm_rrb;

  // Member: is_timed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_timed = tmp ? true : false;
  }

  // Member: duration
  cdr >> ros_message.duration;

  // Member: is_overriding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_overriding = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
get_serialized_size(
  const crs_ros2_interfaces::msg::PwmCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pwm_flt
  {
    size_t item_size = sizeof(ros_message.pwm_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_frt
  {
    size_t item_size = sizeof(ros_message.pwm_frt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rlt
  {
    size_t item_size = sizeof(ros_message.pwm_rlt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rrt
  {
    size_t item_size = sizeof(ros_message.pwm_rrt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_flb
  {
    size_t item_size = sizeof(ros_message.pwm_flb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_frb
  {
    size_t item_size = sizeof(ros_message.pwm_frb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rlb
  {
    size_t item_size = sizeof(ros_message.pwm_rlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rrb
  {
    size_t item_size = sizeof(ros_message.pwm_rrb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_timed
  {
    size_t item_size = sizeof(ros_message.is_timed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_overriding
  {
    size_t item_size = sizeof(ros_message.is_overriding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
max_serialized_size_PwmCmd(
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

  // Member: pwm_flt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_frt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_rlt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_rrt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_flb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_frb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_rlb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pwm_rrb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_timed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: is_overriding
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
    using DataType = crs_ros2_interfaces::msg::PwmCmd;
    is_plain =
      (
      offsetof(DataType, is_overriding) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
cdr_serialize_key(
  const crs_ros2_interfaces::msg::PwmCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pwm_flt
  cdr << ros_message.pwm_flt;

  // Member: pwm_frt
  cdr << ros_message.pwm_frt;

  // Member: pwm_rlt
  cdr << ros_message.pwm_rlt;

  // Member: pwm_rrt
  cdr << ros_message.pwm_rrt;

  // Member: pwm_flb
  cdr << ros_message.pwm_flb;

  // Member: pwm_frb
  cdr << ros_message.pwm_frb;

  // Member: pwm_rlb
  cdr << ros_message.pwm_rlb;

  // Member: pwm_rrb
  cdr << ros_message.pwm_rrb;

  // Member: is_timed
  cdr << (ros_message.is_timed ? true : false);

  // Member: duration
  cdr << ros_message.duration;

  // Member: is_overriding
  cdr << (ros_message.is_overriding ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
get_serialized_size_key(
  const crs_ros2_interfaces::msg::PwmCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pwm_flt
  {
    size_t item_size = sizeof(ros_message.pwm_flt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_frt
  {
    size_t item_size = sizeof(ros_message.pwm_frt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rlt
  {
    size_t item_size = sizeof(ros_message.pwm_rlt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rrt
  {
    size_t item_size = sizeof(ros_message.pwm_rrt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_flb
  {
    size_t item_size = sizeof(ros_message.pwm_flb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_frb
  {
    size_t item_size = sizeof(ros_message.pwm_frb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rlb
  {
    size_t item_size = sizeof(ros_message.pwm_rlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pwm_rrb
  {
    size_t item_size = sizeof(ros_message.pwm_rrb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_timed
  {
    size_t item_size = sizeof(ros_message.is_timed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_overriding
  {
    size_t item_size = sizeof(ros_message.is_overriding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_ros2_interfaces
max_serialized_size_key_PwmCmd(
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

  // Member: pwm_flt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_frt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_rlt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_rrt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_flb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_frb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_rlb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_rrb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_timed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_overriding
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
    using DataType = crs_ros2_interfaces::msg::PwmCmd;
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
  auto typed_message =
    static_cast<const crs_ros2_interfaces::msg::PwmCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PwmCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crs_ros2_interfaces::msg::PwmCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PwmCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crs_ros2_interfaces::msg::PwmCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PwmCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PwmCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PwmCmd__callbacks = {
  "crs_ros2_interfaces::msg",
  "PwmCmd",
  _PwmCmd__cdr_serialize,
  _PwmCmd__cdr_deserialize,
  _PwmCmd__get_serialized_size,
  _PwmCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PwmCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PwmCmd__callbacks,
  get_message_typesupport_handle_function,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_hash,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description,
  &crs_ros2_interfaces__msg__PwmCmd__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace crs_ros2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crs_ros2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_ros2_interfaces::msg::PwmCmd>()
{
  return &crs_ros2_interfaces::msg::typesupport_fastrtps_cpp::_PwmCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_ros2_interfaces, msg, PwmCmd)() {
  return &crs_ros2_interfaces::msg::typesupport_fastrtps_cpp::_PwmCmd__handle;
}

#ifdef __cplusplus
}
#endif
