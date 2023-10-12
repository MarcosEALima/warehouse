// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#ifndef TEST_BOND__SRV__DETAIL__TEST_BOND__STRUCT_H_
#define TEST_BOND__SRV__DETAIL__TEST_BOND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TestBond in the package test_bond.
typedef struct test_bond__srv__TestBond_Request
{
  rosidl_runtime_c__String topic;
  rosidl_runtime_c__String id;
  uint32_t delay_connect;
  uint32_t delay_death;
  bool inhibit_death;
  bool inhibit_death_message;
  int64_t a;
  int64_t b;
} test_bond__srv__TestBond_Request;

// Struct for a sequence of test_bond__srv__TestBond_Request.
typedef struct test_bond__srv__TestBond_Request__Sequence
{
  test_bond__srv__TestBond_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_bond__srv__TestBond_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TestBond in the package test_bond.
typedef struct test_bond__srv__TestBond_Response
{
  int64_t sum;
} test_bond__srv__TestBond_Response;

// Struct for a sequence of test_bond__srv__TestBond_Response.
typedef struct test_bond__srv__TestBond_Response__Sequence
{
  test_bond__srv__TestBond_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_bond__srv__TestBond_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_bond__srv__TestBond_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_bond__srv__TestBond_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TestBond in the package test_bond.
typedef struct test_bond__srv__TestBond_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_bond__srv__TestBond_Request__Sequence request;
  test_bond__srv__TestBond_Response__Sequence response;
} test_bond__srv__TestBond_Event;

// Struct for a sequence of test_bond__srv__TestBond_Event.
typedef struct test_bond__srv__TestBond_Event__Sequence
{
  test_bond__srv__TestBond_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_bond__srv__TestBond_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_BOND__SRV__DETAIL__TEST_BOND__STRUCT_H_
