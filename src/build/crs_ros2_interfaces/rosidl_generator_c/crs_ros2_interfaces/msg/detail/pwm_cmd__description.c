// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice

#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crs_ros2_interfaces
const rosidl_type_hash_t *
crs_ros2_interfaces__msg__PwmCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x13, 0xd5, 0xb0, 0x7a, 0x5e, 0xce, 0x7a,
      0x3a, 0x16, 0xf4, 0x73, 0x46, 0xda, 0x88, 0x0f,
      0x64, 0x56, 0x61, 0x5e, 0x44, 0xfa, 0x25, 0x8b,
      0x77, 0x28, 0xd1, 0x1a, 0x45, 0xb8, 0x8f, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char crs_ros2_interfaces__msg__PwmCmd__TYPE_NAME[] = "crs_ros2_interfaces/msg/PwmCmd";

// Define type names, field names, and default values
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_flt[] = "pwm_flt";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_frt[] = "pwm_frt";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rlt[] = "pwm_rlt";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rrt[] = "pwm_rrt";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_flb[] = "pwm_flb";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_frb[] = "pwm_frb";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rlb[] = "pwm_rlb";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rrb[] = "pwm_rrb";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__is_timed[] = "is_timed";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__duration[] = "duration";
static char crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__is_overriding[] = "is_overriding";

static rosidl_runtime_c__type_description__Field crs_ros2_interfaces__msg__PwmCmd__FIELDS[] = {
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_flt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_frt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rlt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rrt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_flb, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_frb, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rlb, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__pwm_rrb, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__is_timed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crs_ros2_interfaces__msg__PwmCmd__FIELD_NAME__is_overriding, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crs_ros2_interfaces__msg__PwmCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crs_ros2_interfaces__msg__PwmCmd__TYPE_NAME, 30, 30},
      {crs_ros2_interfaces__msg__PwmCmd__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# pwm of each thruster on the robot\n"
  "# In left to right:\n"
  "# f = front / r = rear\n"
  "# l = left  / r = right\n"
  "# t = top   / b = bottom\n"
  "int32 pwm_flt\n"
  "int32 pwm_frt\n"
  "int32 pwm_rlt\n"
  "int32 pwm_rrt\n"
  "int32 pwm_flb\n"
  "int32 pwm_frb\n"
  "int32 pwm_rlb\n"
  "int32 pwm_rrb\n"
  "\n"
  "# Does PWM command have duration or runs indefinitely.\n"
  "# 1 means run for duration.\n"
  "# 0 means run indefinitely\n"
  "bool is_timed\n"
  "\n"
  "# Duration of the PWM command\n"
  "int64 duration\n"
  "\n"
  "# Should this command override exisiting PWM commands\n"
  "# 1 means any existing PWM commands should be removed before adding this one\n"
  "# 0 means this command should be added to the queue\n"
  "bool is_overriding";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crs_ros2_interfaces__msg__PwmCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crs_ros2_interfaces__msg__PwmCmd__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 614, 614},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crs_ros2_interfaces__msg__PwmCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crs_ros2_interfaces__msg__PwmCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
