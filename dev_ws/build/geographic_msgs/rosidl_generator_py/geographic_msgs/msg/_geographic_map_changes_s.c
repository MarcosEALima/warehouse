// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
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
#include "geographic_msgs/msg/detail/geographic_map_changes__struct.h"
#include "geographic_msgs/msg/detail/geographic_map_changes__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool geographic_msgs__msg__geographic_map__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * geographic_msgs__msg__geographic_map__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool geographic_msgs__msg__geographic_map_changes__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("geographic_msgs.msg._geographic_map_changes.GeographicMapChanges", full_classname_dest, 64) == 0);
  }
  geographic_msgs__msg__GeographicMapChanges * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // diffs
    PyObject * field = PyObject_GetAttrString(_pymsg, "diffs");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geographic_map__convert_from_py(field, &ros_message->diffs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // deletes
    PyObject * field = PyObject_GetAttrString(_pymsg, "deletes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'deletes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!unique_identifier_msgs__msg__UUID__Sequence__init(&(ros_message->deletes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create unique_identifier_msgs__msg__UUID__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    unique_identifier_msgs__msg__UUID * dest = ros_message->deletes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!unique_identifier_msgs__msg__uuid__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * geographic_msgs__msg__geographic_map_changes__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GeographicMapChanges */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("geographic_msgs.msg._geographic_map_changes");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GeographicMapChanges");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  geographic_msgs__msg__GeographicMapChanges * ros_message = (geographic_msgs__msg__GeographicMapChanges *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diffs
    PyObject * field = NULL;
    field = geographic_msgs__msg__geographic_map__convert_to_py(&ros_message->diffs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diffs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deletes
    PyObject * field = NULL;
    size_t size = ros_message->deletes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    unique_identifier_msgs__msg__UUID * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->deletes.data[i]);
      PyObject * pyitem = unique_identifier_msgs__msg__uuid__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "deletes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
