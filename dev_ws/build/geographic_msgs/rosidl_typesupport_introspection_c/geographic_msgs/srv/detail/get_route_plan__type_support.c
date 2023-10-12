// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/srv/detail/get_route_plan__functions.h"
#include "geographic_msgs/srv/detail/get_route_plan__struct.h"


// Include directives for member types
// Member `network`
// Member `start`
// Member `goal`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `network`
// Member `start`
// Member `goal`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetRoutePlan_Request__init(message_memory);
}

void geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetRoutePlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[3] = {
  {
    "network",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, network),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetRoutePlan_Request",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__GetRoutePlan_Request),
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array,  // message members
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle = {
  0,
  &geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)() {
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan`
#include "geographic_msgs/msg/route_path.h"
// Member `plan`
#include "geographic_msgs/msg/detail/route_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetRoutePlan_Response__init(message_memory);
}

void geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetRoutePlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetRoutePlan_Response",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__GetRoutePlan_Response),
  geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array,  // message members
  geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle = {
  0,
  &geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)() {
  geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, RoutePath)();
  if (!geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "geographic_msgs/srv/get_route_plan.h"
// Member `request`
// Member `response`
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetRoutePlan_Event__init(message_memory);
}

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetRoutePlan_Event__fini(message_memory);
}

size_t geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__size_function__GetRoutePlan_Event__request(
  const void * untyped_member)
{
  const geographic_msgs__srv__GetRoutePlan_Request__Sequence * member =
    (const geographic_msgs__srv__GetRoutePlan_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__request(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__srv__GetRoutePlan_Request__Sequence * member =
    (const geographic_msgs__srv__GetRoutePlan_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__request(
  void * untyped_member, size_t index)
{
  geographic_msgs__srv__GetRoutePlan_Request__Sequence * member =
    (geographic_msgs__srv__GetRoutePlan_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__fetch_function__GetRoutePlan_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__srv__GetRoutePlan_Request * item =
    ((const geographic_msgs__srv__GetRoutePlan_Request *)
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__request(untyped_member, index));
  geographic_msgs__srv__GetRoutePlan_Request * value =
    (geographic_msgs__srv__GetRoutePlan_Request *)(untyped_value);
  *value = *item;
}

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__assign_function__GetRoutePlan_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__srv__GetRoutePlan_Request * item =
    ((geographic_msgs__srv__GetRoutePlan_Request *)
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__request(untyped_member, index));
  const geographic_msgs__srv__GetRoutePlan_Request * value =
    (const geographic_msgs__srv__GetRoutePlan_Request *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__resize_function__GetRoutePlan_Event__request(
  void * untyped_member, size_t size)
{
  geographic_msgs__srv__GetRoutePlan_Request__Sequence * member =
    (geographic_msgs__srv__GetRoutePlan_Request__Sequence *)(untyped_member);
  geographic_msgs__srv__GetRoutePlan_Request__Sequence__fini(member);
  return geographic_msgs__srv__GetRoutePlan_Request__Sequence__init(member, size);
}

size_t geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__size_function__GetRoutePlan_Event__response(
  const void * untyped_member)
{
  const geographic_msgs__srv__GetRoutePlan_Response__Sequence * member =
    (const geographic_msgs__srv__GetRoutePlan_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__response(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__srv__GetRoutePlan_Response__Sequence * member =
    (const geographic_msgs__srv__GetRoutePlan_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__response(
  void * untyped_member, size_t index)
{
  geographic_msgs__srv__GetRoutePlan_Response__Sequence * member =
    (geographic_msgs__srv__GetRoutePlan_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__fetch_function__GetRoutePlan_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__srv__GetRoutePlan_Response * item =
    ((const geographic_msgs__srv__GetRoutePlan_Response *)
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__response(untyped_member, index));
  geographic_msgs__srv__GetRoutePlan_Response * value =
    (geographic_msgs__srv__GetRoutePlan_Response *)(untyped_value);
  *value = *item;
}

void geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__assign_function__GetRoutePlan_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__srv__GetRoutePlan_Response * item =
    ((geographic_msgs__srv__GetRoutePlan_Response *)
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__response(untyped_member, index));
  const geographic_msgs__srv__GetRoutePlan_Response * value =
    (const geographic_msgs__srv__GetRoutePlan_Response *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__resize_function__GetRoutePlan_Event__response(
  void * untyped_member, size_t size)
{
  geographic_msgs__srv__GetRoutePlan_Response__Sequence * member =
    (geographic_msgs__srv__GetRoutePlan_Response__Sequence *)(untyped_member);
  geographic_msgs__srv__GetRoutePlan_Response__Sequence__fini(member);
  return geographic_msgs__srv__GetRoutePlan_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Event, request),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__size_function__GetRoutePlan_Event__request,  // size() function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__request,  // get_const(index) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__request,  // get(index) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__fetch_function__GetRoutePlan_Event__request,  // fetch(index, &value) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__assign_function__GetRoutePlan_Event__request,  // assign(index, value) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__resize_function__GetRoutePlan_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Event, response),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__size_function__GetRoutePlan_Event__response,  // size() function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_const_function__GetRoutePlan_Event__response,  // get_const(index) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__get_function__GetRoutePlan_Event__response,  // get(index) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__fetch_function__GetRoutePlan_Event__response,  // fetch(index, &value) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__assign_function__GetRoutePlan_Event__response,  // assign(index, value) function pointer
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__resize_function__GetRoutePlan_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetRoutePlan_Event",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__GetRoutePlan_Event),
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_member_array,  // message members
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_type_support_handle = {
  0,
  &geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Event)() {
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)();
  geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)();
  if (!geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_members = {
  "geographic_msgs__srv",  // service namespace
  "GetRoutePlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle,
  NULL,  // response message
  // geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle
  NULL  // event_message
  // geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle
};


static rosidl_service_type_support_t geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle = {
  0,
  &geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_members,
  get_service_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle,
  &geographic_msgs__srv__GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle,
  &geographic_msgs__srv__GetRoutePlan_Event__rosidl_typesupport_introspection_c__GetRoutePlan_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    GetRoutePlan
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    GetRoutePlan
  ),
  &geographic_msgs__srv__GetRoutePlan__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan__get_type_description,
  &geographic_msgs__srv__GetRoutePlan__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan)() {
  if (!geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Event)()->data;
  }

  return &geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle;
}
