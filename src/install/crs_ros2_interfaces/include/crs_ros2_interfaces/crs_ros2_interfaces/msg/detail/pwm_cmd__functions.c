// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
crs_ros2_interfaces__msg__PwmCmd__init(crs_ros2_interfaces__msg__PwmCmd * msg)
{
  if (!msg) {
    return false;
  }
  // pwm_flt
  // pwm_frt
  // pwm_rlt
  // pwm_rrt
  // pwm_flb
  // pwm_frb
  // pwm_rlb
  // pwm_rrb
  // is_timed
  // duration
  // is_overriding
  return true;
}

void
crs_ros2_interfaces__msg__PwmCmd__fini(crs_ros2_interfaces__msg__PwmCmd * msg)
{
  if (!msg) {
    return;
  }
  // pwm_flt
  // pwm_frt
  // pwm_rlt
  // pwm_rrt
  // pwm_flb
  // pwm_frb
  // pwm_rlb
  // pwm_rrb
  // is_timed
  // duration
  // is_overriding
}

bool
crs_ros2_interfaces__msg__PwmCmd__are_equal(const crs_ros2_interfaces__msg__PwmCmd * lhs, const crs_ros2_interfaces__msg__PwmCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pwm_flt
  if (lhs->pwm_flt != rhs->pwm_flt) {
    return false;
  }
  // pwm_frt
  if (lhs->pwm_frt != rhs->pwm_frt) {
    return false;
  }
  // pwm_rlt
  if (lhs->pwm_rlt != rhs->pwm_rlt) {
    return false;
  }
  // pwm_rrt
  if (lhs->pwm_rrt != rhs->pwm_rrt) {
    return false;
  }
  // pwm_flb
  if (lhs->pwm_flb != rhs->pwm_flb) {
    return false;
  }
  // pwm_frb
  if (lhs->pwm_frb != rhs->pwm_frb) {
    return false;
  }
  // pwm_rlb
  if (lhs->pwm_rlb != rhs->pwm_rlb) {
    return false;
  }
  // pwm_rrb
  if (lhs->pwm_rrb != rhs->pwm_rrb) {
    return false;
  }
  // is_timed
  if (lhs->is_timed != rhs->is_timed) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // is_overriding
  if (lhs->is_overriding != rhs->is_overriding) {
    return false;
  }
  return true;
}

bool
crs_ros2_interfaces__msg__PwmCmd__copy(
  const crs_ros2_interfaces__msg__PwmCmd * input,
  crs_ros2_interfaces__msg__PwmCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // pwm_flt
  output->pwm_flt = input->pwm_flt;
  // pwm_frt
  output->pwm_frt = input->pwm_frt;
  // pwm_rlt
  output->pwm_rlt = input->pwm_rlt;
  // pwm_rrt
  output->pwm_rrt = input->pwm_rrt;
  // pwm_flb
  output->pwm_flb = input->pwm_flb;
  // pwm_frb
  output->pwm_frb = input->pwm_frb;
  // pwm_rlb
  output->pwm_rlb = input->pwm_rlb;
  // pwm_rrb
  output->pwm_rrb = input->pwm_rrb;
  // is_timed
  output->is_timed = input->is_timed;
  // duration
  output->duration = input->duration;
  // is_overriding
  output->is_overriding = input->is_overriding;
  return true;
}

crs_ros2_interfaces__msg__PwmCmd *
crs_ros2_interfaces__msg__PwmCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crs_ros2_interfaces__msg__PwmCmd * msg = (crs_ros2_interfaces__msg__PwmCmd *)allocator.allocate(sizeof(crs_ros2_interfaces__msg__PwmCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_ros2_interfaces__msg__PwmCmd));
  bool success = crs_ros2_interfaces__msg__PwmCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crs_ros2_interfaces__msg__PwmCmd__destroy(crs_ros2_interfaces__msg__PwmCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crs_ros2_interfaces__msg__PwmCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crs_ros2_interfaces__msg__PwmCmd__Sequence__init(crs_ros2_interfaces__msg__PwmCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crs_ros2_interfaces__msg__PwmCmd * data = NULL;

  if (size) {
    data = (crs_ros2_interfaces__msg__PwmCmd *)allocator.zero_allocate(size, sizeof(crs_ros2_interfaces__msg__PwmCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_ros2_interfaces__msg__PwmCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_ros2_interfaces__msg__PwmCmd__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crs_ros2_interfaces__msg__PwmCmd__Sequence__fini(crs_ros2_interfaces__msg__PwmCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_ros2_interfaces__msg__PwmCmd__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crs_ros2_interfaces__msg__PwmCmd__Sequence *
crs_ros2_interfaces__msg__PwmCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crs_ros2_interfaces__msg__PwmCmd__Sequence * array = (crs_ros2_interfaces__msg__PwmCmd__Sequence *)allocator.allocate(sizeof(crs_ros2_interfaces__msg__PwmCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crs_ros2_interfaces__msg__PwmCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crs_ros2_interfaces__msg__PwmCmd__Sequence__destroy(crs_ros2_interfaces__msg__PwmCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crs_ros2_interfaces__msg__PwmCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crs_ros2_interfaces__msg__PwmCmd__Sequence__are_equal(const crs_ros2_interfaces__msg__PwmCmd__Sequence * lhs, const crs_ros2_interfaces__msg__PwmCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crs_ros2_interfaces__msg__PwmCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crs_ros2_interfaces__msg__PwmCmd__Sequence__copy(
  const crs_ros2_interfaces__msg__PwmCmd__Sequence * input,
  crs_ros2_interfaces__msg__PwmCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crs_ros2_interfaces__msg__PwmCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crs_ros2_interfaces__msg__PwmCmd * data =
      (crs_ros2_interfaces__msg__PwmCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crs_ros2_interfaces__msg__PwmCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crs_ros2_interfaces__msg__PwmCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crs_ros2_interfaces__msg__PwmCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
