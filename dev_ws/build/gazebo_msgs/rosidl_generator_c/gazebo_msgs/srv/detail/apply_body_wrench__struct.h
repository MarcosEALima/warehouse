// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/ApplyBodyWrench.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'body_name'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'reference_point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/ApplyBodyWrench in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Request
{
  /// Gazebo body to apply wrench (linear force and torque)
  /// wrench is applied in the gazebo world by default
  /// body names are prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String body_name;
  /// wrench is defined in the reference frame of this entity
  /// use inertial frame if left empty
  /// frame names are bodies prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String reference_frame;
  /// wrench is defined at this location in the reference frame
  geometry_msgs__msg__Point reference_point;
  /// wrench applied to the origin of the body
  geometry_msgs__msg__Wrench wrench;
  /// (optional) wrench application start time (seconds)
  /// if start_time is not specified, or
  /// start_time < current time, start as soon as possible
  builtin_interfaces__msg__Time start_time;
  /// optional duration of wrench application time (seconds)
  /// if duration < 0, apply wrench continuously without end
  /// if duration = 0, do nothing
  /// if duration < step size, apply wrench
  /// for one step size
  builtin_interfaces__msg__Duration duration;
} gazebo_msgs__srv__ApplyBodyWrench_Request;

// Struct for a sequence of gazebo_msgs__srv__ApplyBodyWrench_Request.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence
{
  gazebo_msgs__srv__ApplyBodyWrench_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyBodyWrench in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Response
{
  /// return true if set wrench successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__ApplyBodyWrench_Response;

// Struct for a sequence of gazebo_msgs__srv__ApplyBodyWrench_Response.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence
{
  gazebo_msgs__srv__ApplyBodyWrench_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  gazebo_msgs__srv__ApplyBodyWrench_Event__request__MAX_SIZE = 1
};
// response
enum
{
  gazebo_msgs__srv__ApplyBodyWrench_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ApplyBodyWrench in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Event
{
  service_msgs__msg__ServiceEventInfo info;
  gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence request;
  gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence response;
} gazebo_msgs__srv__ApplyBodyWrench_Event;

// Struct for a sequence of gazebo_msgs__srv__ApplyBodyWrench_Event.
typedef struct gazebo_msgs__srv__ApplyBodyWrench_Event__Sequence
{
  gazebo_msgs__srv__ApplyBodyWrench_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyBodyWrench_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__STRUCT_H_
