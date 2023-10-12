// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace geographic_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _GeoPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GeoPoint_type_support_ids_t;

static const _GeoPoint_type_support_ids_t _GeoPoint_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GeoPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GeoPoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GeoPoint_type_support_symbol_names_t _GeoPoint_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, msg, GeoPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, msg, GeoPoint)),
  }
};

typedef struct _GeoPoint_type_support_data_t
{
  void * data[2];
} _GeoPoint_type_support_data_t;

static _GeoPoint_type_support_data_t _GeoPoint_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GeoPoint_message_typesupport_map = {
  2,
  "geographic_msgs",
  &_GeoPoint_message_typesupport_ids.typesupport_identifier[0],
  &_GeoPoint_message_typesupport_symbol_names.symbol_name[0],
  &_GeoPoint_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GeoPoint_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GeoPoint_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &geographic_msgs__msg__GeoPoint__get_type_hash,
  &geographic_msgs__msg__GeoPoint__get_type_description,
  &geographic_msgs__msg__GeoPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace geographic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::GeoPoint>()
{
  return &::geographic_msgs::msg::rosidl_typesupport_cpp::GeoPoint_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, geographic_msgs, msg, GeoPoint)() {
  return get_message_type_support_handle<geographic_msgs::msg::GeoPoint>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
