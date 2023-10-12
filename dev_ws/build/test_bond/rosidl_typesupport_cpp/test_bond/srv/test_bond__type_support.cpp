// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_bond/srv/detail/test_bond__functions.h"
#include "test_bond/srv/detail/test_bond__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestBond_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestBond_Request_type_support_ids_t;

static const _TestBond_Request_type_support_ids_t _TestBond_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestBond_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestBond_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestBond_Request_type_support_symbol_names_t _TestBond_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_bond, srv, TestBond_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Request)),
  }
};

typedef struct _TestBond_Request_type_support_data_t
{
  void * data[2];
} _TestBond_Request_type_support_data_t;

static _TestBond_Request_type_support_data_t _TestBond_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestBond_Request_message_typesupport_map = {
  2,
  "test_bond",
  &_TestBond_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TestBond_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TestBond_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestBond_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestBond_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Request__get_type_hash,
  &test_bond__srv__TestBond_Request__get_type_description,
  &test_bond__srv__TestBond_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace test_bond

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Request>()
{
  return &::test_bond::srv::rosidl_typesupport_cpp::TestBond_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, test_bond, srv, TestBond_Request)() {
  return get_message_type_support_handle<test_bond::srv::TestBond_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestBond_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestBond_Response_type_support_ids_t;

static const _TestBond_Response_type_support_ids_t _TestBond_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestBond_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestBond_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestBond_Response_type_support_symbol_names_t _TestBond_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_bond, srv, TestBond_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Response)),
  }
};

typedef struct _TestBond_Response_type_support_data_t
{
  void * data[2];
} _TestBond_Response_type_support_data_t;

static _TestBond_Response_type_support_data_t _TestBond_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestBond_Response_message_typesupport_map = {
  2,
  "test_bond",
  &_TestBond_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TestBond_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TestBond_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestBond_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestBond_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Response__get_type_hash,
  &test_bond__srv__TestBond_Response__get_type_description,
  &test_bond__srv__TestBond_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace test_bond

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Response>()
{
  return &::test_bond::srv::rosidl_typesupport_cpp::TestBond_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, test_bond, srv, TestBond_Response)() {
  return get_message_type_support_handle<test_bond::srv::TestBond_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestBond_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestBond_Event_type_support_ids_t;

static const _TestBond_Event_type_support_ids_t _TestBond_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestBond_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestBond_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestBond_Event_type_support_symbol_names_t _TestBond_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_bond, srv, TestBond_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond_Event)),
  }
};

typedef struct _TestBond_Event_type_support_data_t
{
  void * data[2];
} _TestBond_Event_type_support_data_t;

static _TestBond_Event_type_support_data_t _TestBond_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestBond_Event_message_typesupport_map = {
  2,
  "test_bond",
  &_TestBond_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TestBond_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TestBond_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestBond_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestBond_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &test_bond__srv__TestBond_Event__get_type_hash,
  &test_bond__srv__TestBond_Event__get_type_description,
  &test_bond__srv__TestBond_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace test_bond

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_bond::srv::TestBond_Event>()
{
  return &::test_bond::srv::rosidl_typesupport_cpp::TestBond_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, test_bond, srv, TestBond_Event)() {
  return get_message_type_support_handle<test_bond::srv::TestBond_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "test_bond/srv/detail/test_bond__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_bond
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestBond_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestBond_type_support_ids_t;

static const _TestBond_type_support_ids_t _TestBond_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestBond_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestBond_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestBond_type_support_symbol_names_t _TestBond_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_bond, srv, TestBond)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_bond, srv, TestBond)),
  }
};

typedef struct _TestBond_type_support_data_t
{
  void * data[2];
} _TestBond_type_support_data_t;

static _TestBond_type_support_data_t _TestBond_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestBond_service_typesupport_map = {
  2,
  "test_bond",
  &_TestBond_service_typesupport_ids.typesupport_identifier[0],
  &_TestBond_service_typesupport_symbol_names.symbol_name[0],
  &_TestBond_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TestBond_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestBond_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<test_bond::srv::TestBond_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<test_bond::srv::TestBond>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<test_bond::srv::TestBond>,
  &test_bond__srv__TestBond__get_type_hash,
  &test_bond__srv__TestBond__get_type_description,
  &test_bond__srv__TestBond__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace test_bond

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<test_bond::srv::TestBond>()
{
  return &::test_bond::srv::rosidl_typesupport_cpp::TestBond_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
