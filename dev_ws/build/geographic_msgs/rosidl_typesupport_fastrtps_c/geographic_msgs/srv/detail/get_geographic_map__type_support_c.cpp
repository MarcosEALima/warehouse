// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/srv/detail/get_geographic_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geographic_msgs/srv/detail/get_geographic_map__struct.h"
#include "geographic_msgs/srv/detail/get_geographic_map__functions.h"
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

#include "geographic_msgs/msg/detail/bounding_box__functions.h"  // bounds
#include "rosidl_runtime_c/string.h"  // url
#include "rosidl_runtime_c/string_functions.h"  // url

// forward declare type support functions
size_t get_serialized_size_geographic_msgs__msg__BoundingBox(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__msg__BoundingBox(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, BoundingBox)();


using _GetGeographicMap_Request__ros_msg_type = geographic_msgs__srv__GetGeographicMap_Request;

static bool _GetGeographicMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetGeographicMap_Request__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: url
  {
    const rosidl_runtime_c__String * str = &ros_message->url;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, BoundingBox
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounds, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetGeographicMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetGeographicMap_Request__ros_msg_type * ros_message = static_cast<_GetGeographicMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: url
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->url.data) {
      rosidl_runtime_c__String__init(&ros_message->url);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->url,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'url'\n");
      return false;
    }
  }

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, BoundingBox
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounds))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t get_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetGeographicMap_Request__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->url.size + 1);
  // field.name bounds

  current_alignment += get_serialized_size_geographic_msgs__msg__BoundingBox(
    &(ros_message->bounds), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetGeographicMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t max_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
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

  // member: url
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bounds
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__BoundingBox(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetGeographicMap_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetGeographicMap_Request = {
  "geographic_msgs::srv",
  "GetGeographicMap_Request",
  _GetGeographicMap_Request__cdr_serialize,
  _GetGeographicMap_Request__cdr_deserialize,
  _GetGeographicMap_Request__get_serialized_size,
  _GetGeographicMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetGeographicMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetGeographicMap_Request,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetGeographicMap_Request__get_type_hash,
  &geographic_msgs__srv__GetGeographicMap_Request__get_type_description,
  &geographic_msgs__srv__GetGeographicMap_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Request)() {
  return &_GetGeographicMap_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geographic_map__struct.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geographic_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "geographic_msgs/msg/detail/geographic_map__functions.h"  // map
// already included above
// #include "rosidl_runtime_c/string.h"  // status
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions
size_t get_serialized_size_geographic_msgs__msg__GeographicMap(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__msg__GeographicMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeographicMap)();


using _GetGeographicMap_Response__ros_msg_type = geographic_msgs__srv__GetGeographicMap_Response;

static bool _GetGeographicMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetGeographicMap_Response__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeographicMap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetGeographicMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetGeographicMap_Response__ros_msg_type * ros_message = static_cast<_GetGeographicMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeographicMap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t get_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetGeographicMap_Response__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);
  // field.name map

  current_alignment += get_serialized_size_geographic_msgs__msg__GeographicMap(
    &(ros_message->map), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetGeographicMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t max_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
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

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeographicMap(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetGeographicMap_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetGeographicMap_Response = {
  "geographic_msgs::srv",
  "GetGeographicMap_Response",
  _GetGeographicMap_Response__cdr_serialize,
  _GetGeographicMap_Response__cdr_deserialize,
  _GetGeographicMap_Response__get_serialized_size,
  _GetGeographicMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetGeographicMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetGeographicMap_Response,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetGeographicMap_Response__get_type_hash,
  &geographic_msgs__srv__GetGeographicMap_Response__get_type_description,
  &geographic_msgs__srv__GetGeographicMap_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Response)() {
  return &_GetGeographicMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geographic_map__struct.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geographic_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Request)();
size_t get_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Response)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GetGeographicMap_Event__ros_msg_type = geographic_msgs__srv__GetGeographicMap_Event;

static bool _GetGeographicMap_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetGeographicMap_Event__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetGeographicMap_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetGeographicMap_Event__ros_msg_type * ros_message = static_cast<_GetGeographicMap_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      geographic_msgs__srv__GetGeographicMap_Request__Sequence__fini(&ros_message->request);
    }
    if (!geographic_msgs__srv__GetGeographicMap_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      geographic_msgs__srv__GetGeographicMap_Response__Sequence__fini(&ros_message->response);
    }
    if (!geographic_msgs__srv__GetGeographicMap_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t get_serialized_size_geographic_msgs__srv__GetGeographicMap_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetGeographicMap_Event__ros_msg_type * ros_message = static_cast<const _GetGeographicMap_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetGeographicMap_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geographic_msgs__srv__GetGeographicMap_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t max_serialized_size_geographic_msgs__srv__GetGeographicMap_Event(
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

  // member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geographic_msgs__srv__GetGeographicMap_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geographic_msgs__srv__GetGeographicMap_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetGeographicMap_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_geographic_msgs__srv__GetGeographicMap_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetGeographicMap_Event = {
  "geographic_msgs::srv",
  "GetGeographicMap_Event",
  _GetGeographicMap_Event__cdr_serialize,
  _GetGeographicMap_Event__cdr_deserialize,
  _GetGeographicMap_Event__get_serialized_size,
  _GetGeographicMap_Event__max_serialized_size
};

static rosidl_message_type_support_t _GetGeographicMap_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetGeographicMap_Event,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetGeographicMap_Event__get_type_hash,
  &geographic_msgs__srv__GetGeographicMap_Event__get_type_description,
  &geographic_msgs__srv__GetGeographicMap_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Event)() {
  return &_GetGeographicMap_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geographic_msgs/srv/get_geographic_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetGeographicMap__callbacks = {
  "geographic_msgs::srv",
  "GetGeographicMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap_Response)(),
};

static rosidl_service_type_support_t GetGeographicMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetGeographicMap__callbacks,
  get_service_typesupport_handle_function,
  &_GetGeographicMap_Request__type_support,
  &_GetGeographicMap_Response__type_support,
  &_GetGeographicMap_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    GetGeographicMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    GetGeographicMap
  ),
  &geographic_msgs__srv__GetGeographicMap__get_type_hash,
  &geographic_msgs__srv__GetGeographicMap__get_type_description,
  &geographic_msgs__srv__GetGeographicMap__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, srv, GetGeographicMap)() {
  return &GetGeographicMap__handle;
}

#if defined(__cplusplus)
}
#endif
