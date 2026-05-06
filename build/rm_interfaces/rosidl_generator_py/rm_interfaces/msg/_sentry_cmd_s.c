// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_interfaces:msg/SentryCmd.idl
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
#include "rm_interfaces/msg/detail/sentry_cmd__struct.h"
#include "rm_interfaces/msg/detail/sentry_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_interfaces__msg__sentry_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rm_interfaces.msg._sentry_cmd.SentryCmd", full_classname_dest, 39) == 0);
  }
  rm_interfaces__msg__SentryCmd * ros_message = _ros_message;
  {  // resurrection_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "resurrection_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->resurrection_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // buy_resurrection_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "buy_resurrection_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->buy_resurrection_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // buy_projectile_allowance
    PyObject * field = PyObject_GetAttrString(_pymsg, "buy_projectile_allowance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buy_projectile_allowance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buy_projectile_times
    PyObject * field = PyObject_GetAttrString(_pymsg, "buy_projectile_times");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buy_projectile_times = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buy_hp_times
    PyObject * field = PyObject_GetAttrString(_pymsg, "buy_hp_times");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buy_hp_times = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_interfaces__msg__sentry_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SentryCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_interfaces.msg._sentry_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SentryCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_interfaces__msg__SentryCmd * ros_message = (rm_interfaces__msg__SentryCmd *)raw_ros_message;
  {  // resurrection_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->resurrection_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resurrection_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buy_resurrection_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->buy_resurrection_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buy_resurrection_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buy_projectile_allowance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buy_projectile_allowance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buy_projectile_allowance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buy_projectile_times
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buy_projectile_times);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buy_projectile_times", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buy_hp_times
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buy_hp_times);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buy_hp_times", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
