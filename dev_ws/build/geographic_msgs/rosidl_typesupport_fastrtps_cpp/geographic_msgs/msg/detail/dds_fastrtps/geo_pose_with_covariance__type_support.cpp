// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__functions.h"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geographic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geographic_msgs::msg::GeoPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::GeoPose &);
size_t get_serialized_size(
  const geographic_msgs::msg::GeoPose &,
  size_t current_alignment);
size_t
max_serialized_size_GeoPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geographic_msgs


namespace geographic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
cdr_serialize(
  const geographic_msgs::msg::GeoPoseWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  geographic_msgs::msg::GeoPoseWithCovariance & ros_message)
{
  // Member: pose
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
get_serialized_size(
  const geographic_msgs::msg::GeoPoseWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose

  current_alignment +=
    geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);
  // Member: covariance
  {
    size_t array_size = 36;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
max_serialized_size_GeoPoseWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GeoPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: covariance
  {
    size_t array_size = 36;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GeoPoseWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const geographic_msgs::msg::GeoPoseWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GeoPoseWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geographic_msgs::msg::GeoPoseWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GeoPoseWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geographic_msgs::msg::GeoPoseWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GeoPoseWithCovariance__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GeoPoseWithCovariance(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GeoPoseWithCovariance__callbacks = {
  "geographic_msgs::msg",
  "GeoPoseWithCovariance",
  _GeoPoseWithCovariance__cdr_serialize,
  _GeoPoseWithCovariance__cdr_deserialize,
  _GeoPoseWithCovariance__get_serialized_size,
  _GeoPoseWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _GeoPoseWithCovariance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GeoPoseWithCovariance__callbacks,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_hash,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_description,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace geographic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::GeoPoseWithCovariance>()
{
  return &geographic_msgs::msg::typesupport_fastrtps_cpp::_GeoPoseWithCovariance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, msg, GeoPoseWithCovariance)() {
  return &geographic_msgs::msg::typesupport_fastrtps_cpp::_GeoPoseWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif
