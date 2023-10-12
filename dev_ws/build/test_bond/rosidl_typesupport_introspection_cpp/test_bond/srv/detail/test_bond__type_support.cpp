// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_bond/srv/detail/test_bond__functions.h"
#include "test_bond/srv/detail/test_bond__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TestBond_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_bond::srv::TestBond_Request(_init);
}

void TestBond_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_bond::srv::TestBond_Request *>(message_memory);
  typed_message->~TestBond_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestBond_Request_message_member_array[8] = {
  {
    "topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delay_connect",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, delay_connect),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delay_death",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, delay_death),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inhibit_death",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, inhibit_death),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inhibit_death_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, inhibit_death_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Request, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestBond_Request_message_members = {
  "test_bond::srv",  // message namespace
  "TestBond_Request",  // message name
  8,  // number of fields
  sizeof(test_bond::srv::TestBond_Request),
  TestBond_Request_message_member_array,  // message members
  TestBond_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestBond_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestBond_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestBond_Request_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Request__get_type_hash,
  &test_bond__srv__TestBond_Request__get_type_description,
  &test_bond__srv__TestBond_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_bond


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Request>()
{
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Request)() {
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TestBond_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_bond::srv::TestBond_Response(_init);
}

void TestBond_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_bond::srv::TestBond_Response *>(message_memory);
  typed_message->~TestBond_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestBond_Response_message_member_array[1] = {
  {
    "sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Response, sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestBond_Response_message_members = {
  "test_bond::srv",  // message namespace
  "TestBond_Response",  // message name
  1,  // number of fields
  sizeof(test_bond::srv::TestBond_Response),
  TestBond_Response_message_member_array,  // message members
  TestBond_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestBond_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestBond_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestBond_Response_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Response__get_type_hash,
  &test_bond__srv__TestBond_Response__get_type_description,
  &test_bond__srv__TestBond_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_bond


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Response>()
{
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Response)() {
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TestBond_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_bond::srv::TestBond_Event(_init);
}

void TestBond_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_bond::srv::TestBond_Event *>(message_memory);
  typed_message->~TestBond_Event();
}

size_t size_function__TestBond_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_bond::srv::TestBond_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestBond_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_bond::srv::TestBond_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TestBond_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_bond::srv::TestBond_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestBond_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_bond::srv::TestBond_Request *>(
    get_const_function__TestBond_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<test_bond::srv::TestBond_Request *>(untyped_value);
  value = item;
}

void assign_function__TestBond_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_bond::srv::TestBond_Request *>(
    get_function__TestBond_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_bond::srv::TestBond_Request *>(untyped_value);
  item = value;
}

void resize_function__TestBond_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_bond::srv::TestBond_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestBond_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_bond::srv::TestBond_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestBond_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_bond::srv::TestBond_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TestBond_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_bond::srv::TestBond_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestBond_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const test_bond::srv::TestBond_Response *>(
    get_const_function__TestBond_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<test_bond::srv::TestBond_Response *>(untyped_value);
  value = item;
}

void assign_function__TestBond_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<test_bond::srv::TestBond_Response *>(
    get_function__TestBond_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const test_bond::srv::TestBond_Response *>(untyped_value);
  item = value;
}

void resize_function__TestBond_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_bond::srv::TestBond_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestBond_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_bond::srv::TestBond_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(test_bond::srv::TestBond_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestBond_Event__request,  // size() function pointer
    get_const_function__TestBond_Event__request,  // get_const(index) function pointer
    get_function__TestBond_Event__request,  // get(index) function pointer
    fetch_function__TestBond_Event__request,  // fetch(index, &value) function pointer
    assign_function__TestBond_Event__request,  // assign(index, value) function pointer
    resize_function__TestBond_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(test_bond::srv::TestBond_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestBond_Event__response,  // size() function pointer
    get_const_function__TestBond_Event__response,  // get_const(index) function pointer
    get_function__TestBond_Event__response,  // get(index) function pointer
    fetch_function__TestBond_Event__response,  // fetch(index, &value) function pointer
    assign_function__TestBond_Event__response,  // assign(index, value) function pointer
    resize_function__TestBond_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestBond_Event_message_members = {
  "test_bond::srv",  // message namespace
  "TestBond_Event",  // message name
  3,  // number of fields
  sizeof(test_bond::srv::TestBond_Event),
  TestBond_Event_message_member_array,  // message members
  TestBond_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TestBond_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestBond_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestBond_Event_message_members,
  get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Event__get_type_hash,
  &test_bond__srv__TestBond_Event__get_type_description,
  &test_bond__srv__TestBond_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_bond


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Event>()
{
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Event)() {
  return &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TestBond_service_members = {
  "test_bond::srv",  // service namespace
  "TestBond",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<test_bond::srv::TestBond>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TestBond_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestBond_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<test_bond::srv::TestBond>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<test_bond::srv::TestBond>,
  &test_bond__srv__TestBond__get_type_hash,
  &test_bond__srv__TestBond__get_type_description,
  &test_bond__srv__TestBond__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace test_bond


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<test_bond::srv::TestBond>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::test_bond::srv::rosidl_typesupport_introspection_cpp::TestBond_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::test_bond::srv::TestBond_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::test_bond::srv::TestBond_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::test_bond::srv::TestBond_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<test_bond::srv::TestBond>();
}

#ifdef __cplusplus
}
#endif
