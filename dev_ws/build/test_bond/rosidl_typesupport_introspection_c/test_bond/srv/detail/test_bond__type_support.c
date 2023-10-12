// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_bond/srv/detail/test_bond__rosidl_typesupport_introspection_c.h"
#include "test_bond/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_bond/srv/detail/test_bond__functions.h"
#include "test_bond/srv/detail/test_bond__struct.h"


// Include directives for member types
// Member `topic`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_bond__srv__TestBond_Request__init(message_memory);
}

void test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_fini_function(void * message_memory)
{
  test_bond__srv__TestBond_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_member_array[8] = {
  {
    "topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delay_connect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, delay_connect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delay_death",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, delay_death),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inhibit_death",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, inhibit_death),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inhibit_death_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, inhibit_death_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_members = {
  "test_bond__srv",  // message namespace
  "TestBond_Request",  // message name
  8,  // number of fields
  sizeof(test_bond__srv__TestBond_Request),
  test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_member_array,  // message members
  test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle = {
  0,
  &test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Request__get_type_hash,
  &test_bond__srv__TestBond_Request__get_type_description,
  &test_bond__srv__TestBond_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_bond
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Request)() {
  if (!test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle.typesupport_identifier) {
    test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "test_bond/srv/detail/test_bond__rosidl_typesupport_introspection_c.h"
// already included above
// #include "test_bond/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_bond__srv__TestBond_Response__init(message_memory);
}

void test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_fini_function(void * message_memory)
{
  test_bond__srv__TestBond_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_members = {
  "test_bond__srv",  // message namespace
  "TestBond_Response",  // message name
  1,  // number of fields
  sizeof(test_bond__srv__TestBond_Response),
  test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_member_array,  // message members
  test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle = {
  0,
  &test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Response__get_type_hash,
  &test_bond__srv__TestBond_Response__get_type_description,
  &test_bond__srv__TestBond_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_bond
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Response)() {
  if (!test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle.typesupport_identifier) {
    test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "test_bond/srv/detail/test_bond__rosidl_typesupport_introspection_c.h"
// already included above
// #include "test_bond/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "test_bond/srv/test_bond.h"
// Member `request`
// Member `response`
// already included above
// #include "test_bond/srv/detail/test_bond__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_bond__srv__TestBond_Event__init(message_memory);
}

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_fini_function(void * message_memory)
{
  test_bond__srv__TestBond_Event__fini(message_memory);
}

size_t test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__size_function__TestBond_Event__request(
  const void * untyped_member)
{
  const test_bond__srv__TestBond_Request__Sequence * member =
    (const test_bond__srv__TestBond_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__request(
  const void * untyped_member, size_t index)
{
  const test_bond__srv__TestBond_Request__Sequence * member =
    (const test_bond__srv__TestBond_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__request(
  void * untyped_member, size_t index)
{
  test_bond__srv__TestBond_Request__Sequence * member =
    (test_bond__srv__TestBond_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__fetch_function__TestBond_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const test_bond__srv__TestBond_Request * item =
    ((const test_bond__srv__TestBond_Request *)
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__request(untyped_member, index));
  test_bond__srv__TestBond_Request * value =
    (test_bond__srv__TestBond_Request *)(untyped_value);
  *value = *item;
}

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__assign_function__TestBond_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  test_bond__srv__TestBond_Request * item =
    ((test_bond__srv__TestBond_Request *)
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__request(untyped_member, index));
  const test_bond__srv__TestBond_Request * value =
    (const test_bond__srv__TestBond_Request *)(untyped_value);
  *item = *value;
}

bool test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__resize_function__TestBond_Event__request(
  void * untyped_member, size_t size)
{
  test_bond__srv__TestBond_Request__Sequence * member =
    (test_bond__srv__TestBond_Request__Sequence *)(untyped_member);
  test_bond__srv__TestBond_Request__Sequence__fini(member);
  return test_bond__srv__TestBond_Request__Sequence__init(member, size);
}

size_t test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__size_function__TestBond_Event__response(
  const void * untyped_member)
{
  const test_bond__srv__TestBond_Response__Sequence * member =
    (const test_bond__srv__TestBond_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__response(
  const void * untyped_member, size_t index)
{
  const test_bond__srv__TestBond_Response__Sequence * member =
    (const test_bond__srv__TestBond_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__response(
  void * untyped_member, size_t index)
{
  test_bond__srv__TestBond_Response__Sequence * member =
    (test_bond__srv__TestBond_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__fetch_function__TestBond_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const test_bond__srv__TestBond_Response * item =
    ((const test_bond__srv__TestBond_Response *)
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__response(untyped_member, index));
  test_bond__srv__TestBond_Response * value =
    (test_bond__srv__TestBond_Response *)(untyped_value);
  *value = *item;
}

void test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__assign_function__TestBond_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  test_bond__srv__TestBond_Response * item =
    ((test_bond__srv__TestBond_Response *)
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__response(untyped_member, index));
  const test_bond__srv__TestBond_Response * value =
    (const test_bond__srv__TestBond_Response *)(untyped_value);
  *item = *value;
}

bool test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__resize_function__TestBond_Event__response(
  void * untyped_member, size_t size)
{
  test_bond__srv__TestBond_Response__Sequence * member =
    (test_bond__srv__TestBond_Response__Sequence *)(untyped_member);
  test_bond__srv__TestBond_Response__Sequence__fini(member);
  return test_bond__srv__TestBond_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond__srv__TestBond_Event, info),  // bytes offset in struct
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
    offsetof(test_bond__srv__TestBond_Event, request),  // bytes offset in struct
    NULL,  // default value
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__size_function__TestBond_Event__request,  // size() function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__request,  // get_const(index) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__request,  // get(index) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__fetch_function__TestBond_Event__request,  // fetch(index, &value) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__assign_function__TestBond_Event__request,  // assign(index, value) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__resize_function__TestBond_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(test_bond__srv__TestBond_Event, response),  // bytes offset in struct
    NULL,  // default value
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__size_function__TestBond_Event__response,  // size() function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_const_function__TestBond_Event__response,  // get_const(index) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__get_function__TestBond_Event__response,  // get(index) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__fetch_function__TestBond_Event__response,  // fetch(index, &value) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__assign_function__TestBond_Event__response,  // assign(index, value) function pointer
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__resize_function__TestBond_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_members = {
  "test_bond__srv",  // message namespace
  "TestBond_Event",  // message name
  3,  // number of fields
  sizeof(test_bond__srv__TestBond_Event),
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_member_array,  // message members
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_type_support_handle = {
  0,
  &test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Event__get_type_hash,
  &test_bond__srv__TestBond_Event__get_type_description,
  &test_bond__srv__TestBond_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_bond
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Event)() {
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Request)();
  test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Response)();
  if (!test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_type_support_handle.typesupport_identifier) {
    test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_bond/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "test_bond/srv/detail/test_bond__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_members = {
  "test_bond__srv",  // service namespace
  "TestBond",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle,
  NULL,  // response message
  // test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle
  NULL  // event_message
  // test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle
};


static rosidl_service_type_support_t test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_type_support_handle = {
  0,
  &test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_members,
  get_service_typesupport_handle_function,
  &test_bond__srv__TestBond_Request__rosidl_typesupport_introspection_c__TestBond_Request_message_type_support_handle,
  &test_bond__srv__TestBond_Response__rosidl_typesupport_introspection_c__TestBond_Response_message_type_support_handle,
  &test_bond__srv__TestBond_Event__rosidl_typesupport_introspection_c__TestBond_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_bond,
    srv,
    TestBond
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_bond,
    srv,
    TestBond
  ),
  &test_bond__srv__TestBond__get_type_hash,
  &test_bond__srv__TestBond__get_type_description,
  &test_bond__srv__TestBond__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_bond
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond)() {
  if (!test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_type_support_handle.typesupport_identifier) {
    test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_bond, srv, TestBond_Event)()->data;
  }

  return &test_bond__srv__detail__test_bond__rosidl_typesupport_introspection_c__TestBond_service_type_support_handle;
}
