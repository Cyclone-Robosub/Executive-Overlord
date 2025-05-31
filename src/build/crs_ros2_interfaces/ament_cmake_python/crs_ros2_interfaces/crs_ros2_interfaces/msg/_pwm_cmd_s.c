// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from crs_ros2_interfaces:msg/PwmCmd.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__struct.h"
#include "crs_ros2_interfaces/msg/detail/pwm_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool crs_ros2_interfaces__msg__pwm_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("crs_ros2_interfaces.msg._pwm_cmd.PwmCmd", full_classname_dest, 39) == 0);
  }
  crs_ros2_interfaces__msg__PwmCmd * ros_message = _ros_message;
  {  // pwm_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_frt
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_frt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_frt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_rlt
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_rlt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_rlt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_rrt
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_rrt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_rrt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_flb
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_flb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_flb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_frb
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_frb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_frb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_rlb
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_rlb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_rlb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_rrb
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_rrb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_rrb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_timed
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_timed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_timed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crs_ros2_interfaces__msg__pwm_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PwmCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crs_ros2_interfaces.msg._pwm_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PwmCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crs_ros2_interfaces__msg__PwmCmd * ros_message = (crs_ros2_interfaces__msg__PwmCmd *)raw_ros_message;
  {  // pwm_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_frt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_frt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_frt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_rlt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_rlt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_rlt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_rrt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_rrt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_rrt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_flb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_flb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_flb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_frb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_frb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_frb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_rlb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_rlb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_rlb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_rrb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_rrb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_rrb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_timed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_timed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_timed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
