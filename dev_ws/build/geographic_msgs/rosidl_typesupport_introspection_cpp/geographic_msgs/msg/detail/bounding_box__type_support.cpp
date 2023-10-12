// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
#include "geographic_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoundingBox_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::msg::BoundingBox(_init);
}

void BoundingBox_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::msg::BoundingBox *>(message_memory);
  typed_message->~BoundingBox();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundingBox_message_member_array[2] = {
  {
    "min_pt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::GeoPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::BoundingBox, min_pt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_pt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::GeoPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::BoundingBox, max_pt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundingBox_message_members = {
  "geographic_msgs::msg",  // message namespace
  "BoundingBox",  // message name
  2,  // number of fields
  sizeof(geographic_msgs::msg::BoundingBox),
  BoundingBox_message_member_array,  // message members
  BoundingBox_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBox_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundingBox_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundingBox_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__BoundingBox__get_type_hash,
  &geographic_msgs__msg__BoundingBox__get_type_description,
  &geographic_msgs__msg__BoundingBox__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::BoundingBox>()
{
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingBox_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, msg, BoundingBox)() {
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingBox_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
