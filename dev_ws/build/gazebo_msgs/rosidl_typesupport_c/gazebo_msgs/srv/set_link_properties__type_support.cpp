// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:srv/SetLinkProperties.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gazebo_msgs/srv/detail/set_link_properties__struct.h"
#include "gazebo_msgs/srv/detail/set_link_properties__type_support.h"
#include "gazebo_msgs/srv/detail/set_link_properties__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLinkProperties_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLinkProperties_Request_type_support_ids_t;

static const _SetLinkProperties_Request_type_support_ids_t _SetLinkProperties_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLinkProperties_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLinkProperties_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLinkProperties_Request_type_support_symbol_names_t _SetLinkProperties_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetLinkProperties_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetLinkProperties_Request)),
  }
};

typedef struct _SetLinkProperties_Request_type_support_data_t
{
  void * data[2];
} _SetLinkProperties_Request_type_support_data_t;

static _SetLinkProperties_Request_type_support_data_t _SetLinkProperties_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLinkProperties_Request_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetLinkProperties_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLinkProperties_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLinkProperties_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLinkProperties_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLinkProperties_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gazebo_msgs__srv__SetLinkProperties_Request__get_type_hash,
  &gazebo_msgs__srv__SetLinkProperties_Request__get_type_description,
  &gazebo_msgs__srv__SetLinkProperties_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetLinkProperties_Request)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetLinkProperties_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__type_support.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLinkProperties_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLinkProperties_Response_type_support_ids_t;

static const _SetLinkProperties_Response_type_support_ids_t _SetLinkProperties_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLinkProperties_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLinkProperties_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLinkProperties_Response_type_support_symbol_names_t _SetLinkProperties_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetLinkProperties_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetLinkProperties_Response)),
  }
};

typedef struct _SetLinkProperties_Response_type_support_data_t
{
  void * data[2];
} _SetLinkProperties_Response_type_support_data_t;

static _SetLinkProperties_Response_type_support_data_t _SetLinkProperties_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLinkProperties_Response_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetLinkProperties_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLinkProperties_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLinkProperties_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLinkProperties_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLinkProperties_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gazebo_msgs__srv__SetLinkProperties_Response__get_type_hash,
  &gazebo_msgs__srv__SetLinkProperties_Response__get_type_description,
  &gazebo_msgs__srv__SetLinkProperties_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetLinkProperties_Response)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetLinkProperties_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__type_support.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLinkProperties_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLinkProperties_Event_type_support_ids_t;

static const _SetLinkProperties_Event_type_support_ids_t _SetLinkProperties_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLinkProperties_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLinkProperties_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLinkProperties_Event_type_support_symbol_names_t _SetLinkProperties_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetLinkProperties_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetLinkProperties_Event)),
  }
};

typedef struct _SetLinkProperties_Event_type_support_data_t
{
  void * data[2];
} _SetLinkProperties_Event_type_support_data_t;

static _SetLinkProperties_Event_type_support_data_t _SetLinkProperties_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLinkProperties_Event_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetLinkProperties_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLinkProperties_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLinkProperties_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLinkProperties_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLinkProperties_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gazebo_msgs__srv__SetLinkProperties_Event__get_type_hash,
  &gazebo_msgs__srv__SetLinkProperties_Event__get_type_description,
  &gazebo_msgs__srv__SetLinkProperties_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetLinkProperties_Event)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetLinkProperties_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_link_properties__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetLinkProperties_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLinkProperties_type_support_ids_t;

static const _SetLinkProperties_type_support_ids_t _SetLinkProperties_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLinkProperties_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLinkProperties_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLinkProperties_type_support_symbol_names_t _SetLinkProperties_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetLinkProperties)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetLinkProperties)),
  }
};

typedef struct _SetLinkProperties_type_support_data_t
{
  void * data[2];
} _SetLinkProperties_type_support_data_t;

static _SetLinkProperties_type_support_data_t _SetLinkProperties_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLinkProperties_service_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetLinkProperties_service_typesupport_ids.typesupport_identifier[0],
  &_SetLinkProperties_service_typesupport_symbol_names.symbol_name[0],
  &_SetLinkProperties_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLinkProperties_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLinkProperties_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetLinkProperties_Request_message_type_support_handle,
  &SetLinkProperties_Response_message_type_support_handle,
  &SetLinkProperties_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gazebo_msgs,
    srv,
    SetLinkProperties
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gazebo_msgs,
    srv,
    SetLinkProperties
  ),
  &gazebo_msgs__srv__SetLinkProperties__get_type_hash,
  &gazebo_msgs__srv__SetLinkProperties__get_type_description,
  &gazebo_msgs__srv__SetLinkProperties__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetLinkProperties)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetLinkProperties_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
