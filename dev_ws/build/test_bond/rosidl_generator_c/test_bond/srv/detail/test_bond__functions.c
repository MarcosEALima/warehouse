// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice
#include "test_bond/srv/detail/test_bond__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `topic`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
test_bond__srv__TestBond_Request__init(test_bond__srv__TestBond_Request * msg)
{
  if (!msg) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    test_bond__srv__TestBond_Request__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    test_bond__srv__TestBond_Request__fini(msg);
    return false;
  }
  // delay_connect
  // delay_death
  // inhibit_death
  // inhibit_death_message
  // a
  // b
  return true;
}

void
test_bond__srv__TestBond_Request__fini(test_bond__srv__TestBond_Request * msg)
{
  if (!msg) {
    return;
  }
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // delay_connect
  // delay_death
  // inhibit_death
  // inhibit_death_message
  // a
  // b
}

bool
test_bond__srv__TestBond_Request__are_equal(const test_bond__srv__TestBond_Request * lhs, const test_bond__srv__TestBond_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // delay_connect
  if (lhs->delay_connect != rhs->delay_connect) {
    return false;
  }
  // delay_death
  if (lhs->delay_death != rhs->delay_death) {
    return false;
  }
  // inhibit_death
  if (lhs->inhibit_death != rhs->inhibit_death) {
    return false;
  }
  // inhibit_death_message
  if (lhs->inhibit_death_message != rhs->inhibit_death_message) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
test_bond__srv__TestBond_Request__copy(
  const test_bond__srv__TestBond_Request * input,
  test_bond__srv__TestBond_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // delay_connect
  output->delay_connect = input->delay_connect;
  // delay_death
  output->delay_death = input->delay_death;
  // inhibit_death
  output->inhibit_death = input->inhibit_death;
  // inhibit_death_message
  output->inhibit_death_message = input->inhibit_death_message;
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

test_bond__srv__TestBond_Request *
test_bond__srv__TestBond_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Request * msg = (test_bond__srv__TestBond_Request *)allocator.allocate(sizeof(test_bond__srv__TestBond_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_bond__srv__TestBond_Request));
  bool success = test_bond__srv__TestBond_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_bond__srv__TestBond_Request__destroy(test_bond__srv__TestBond_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_bond__srv__TestBond_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_bond__srv__TestBond_Request__Sequence__init(test_bond__srv__TestBond_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Request * data = NULL;

  if (size) {
    data = (test_bond__srv__TestBond_Request *)allocator.zero_allocate(size, sizeof(test_bond__srv__TestBond_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_bond__srv__TestBond_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_bond__srv__TestBond_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_bond__srv__TestBond_Request__Sequence__fini(test_bond__srv__TestBond_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_bond__srv__TestBond_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_bond__srv__TestBond_Request__Sequence *
test_bond__srv__TestBond_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Request__Sequence * array = (test_bond__srv__TestBond_Request__Sequence *)allocator.allocate(sizeof(test_bond__srv__TestBond_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_bond__srv__TestBond_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_bond__srv__TestBond_Request__Sequence__destroy(test_bond__srv__TestBond_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_bond__srv__TestBond_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_bond__srv__TestBond_Request__Sequence__are_equal(const test_bond__srv__TestBond_Request__Sequence * lhs, const test_bond__srv__TestBond_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_bond__srv__TestBond_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_bond__srv__TestBond_Request__Sequence__copy(
  const test_bond__srv__TestBond_Request__Sequence * input,
  test_bond__srv__TestBond_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_bond__srv__TestBond_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_bond__srv__TestBond_Request * data =
      (test_bond__srv__TestBond_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_bond__srv__TestBond_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_bond__srv__TestBond_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_bond__srv__TestBond_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
test_bond__srv__TestBond_Response__init(test_bond__srv__TestBond_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
test_bond__srv__TestBond_Response__fini(test_bond__srv__TestBond_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
test_bond__srv__TestBond_Response__are_equal(const test_bond__srv__TestBond_Response * lhs, const test_bond__srv__TestBond_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
test_bond__srv__TestBond_Response__copy(
  const test_bond__srv__TestBond_Response * input,
  test_bond__srv__TestBond_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

test_bond__srv__TestBond_Response *
test_bond__srv__TestBond_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Response * msg = (test_bond__srv__TestBond_Response *)allocator.allocate(sizeof(test_bond__srv__TestBond_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_bond__srv__TestBond_Response));
  bool success = test_bond__srv__TestBond_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_bond__srv__TestBond_Response__destroy(test_bond__srv__TestBond_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_bond__srv__TestBond_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_bond__srv__TestBond_Response__Sequence__init(test_bond__srv__TestBond_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Response * data = NULL;

  if (size) {
    data = (test_bond__srv__TestBond_Response *)allocator.zero_allocate(size, sizeof(test_bond__srv__TestBond_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_bond__srv__TestBond_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_bond__srv__TestBond_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_bond__srv__TestBond_Response__Sequence__fini(test_bond__srv__TestBond_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_bond__srv__TestBond_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_bond__srv__TestBond_Response__Sequence *
test_bond__srv__TestBond_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Response__Sequence * array = (test_bond__srv__TestBond_Response__Sequence *)allocator.allocate(sizeof(test_bond__srv__TestBond_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_bond__srv__TestBond_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_bond__srv__TestBond_Response__Sequence__destroy(test_bond__srv__TestBond_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_bond__srv__TestBond_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_bond__srv__TestBond_Response__Sequence__are_equal(const test_bond__srv__TestBond_Response__Sequence * lhs, const test_bond__srv__TestBond_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_bond__srv__TestBond_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_bond__srv__TestBond_Response__Sequence__copy(
  const test_bond__srv__TestBond_Response__Sequence * input,
  test_bond__srv__TestBond_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_bond__srv__TestBond_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_bond__srv__TestBond_Response * data =
      (test_bond__srv__TestBond_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_bond__srv__TestBond_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_bond__srv__TestBond_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_bond__srv__TestBond_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "test_bond/srv/detail/test_bond__functions.h"

bool
test_bond__srv__TestBond_Event__init(test_bond__srv__TestBond_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    test_bond__srv__TestBond_Event__fini(msg);
    return false;
  }
  // request
  if (!test_bond__srv__TestBond_Request__Sequence__init(&msg->request, 0)) {
    test_bond__srv__TestBond_Event__fini(msg);
    return false;
  }
  // response
  if (!test_bond__srv__TestBond_Response__Sequence__init(&msg->response, 0)) {
    test_bond__srv__TestBond_Event__fini(msg);
    return false;
  }
  return true;
}

void
test_bond__srv__TestBond_Event__fini(test_bond__srv__TestBond_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  test_bond__srv__TestBond_Request__Sequence__fini(&msg->request);
  // response
  test_bond__srv__TestBond_Response__Sequence__fini(&msg->response);
}

bool
test_bond__srv__TestBond_Event__are_equal(const test_bond__srv__TestBond_Event * lhs, const test_bond__srv__TestBond_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!test_bond__srv__TestBond_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!test_bond__srv__TestBond_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
test_bond__srv__TestBond_Event__copy(
  const test_bond__srv__TestBond_Event * input,
  test_bond__srv__TestBond_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!test_bond__srv__TestBond_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!test_bond__srv__TestBond_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

test_bond__srv__TestBond_Event *
test_bond__srv__TestBond_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Event * msg = (test_bond__srv__TestBond_Event *)allocator.allocate(sizeof(test_bond__srv__TestBond_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_bond__srv__TestBond_Event));
  bool success = test_bond__srv__TestBond_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_bond__srv__TestBond_Event__destroy(test_bond__srv__TestBond_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_bond__srv__TestBond_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_bond__srv__TestBond_Event__Sequence__init(test_bond__srv__TestBond_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Event * data = NULL;

  if (size) {
    data = (test_bond__srv__TestBond_Event *)allocator.zero_allocate(size, sizeof(test_bond__srv__TestBond_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_bond__srv__TestBond_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_bond__srv__TestBond_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_bond__srv__TestBond_Event__Sequence__fini(test_bond__srv__TestBond_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_bond__srv__TestBond_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_bond__srv__TestBond_Event__Sequence *
test_bond__srv__TestBond_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_bond__srv__TestBond_Event__Sequence * array = (test_bond__srv__TestBond_Event__Sequence *)allocator.allocate(sizeof(test_bond__srv__TestBond_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_bond__srv__TestBond_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_bond__srv__TestBond_Event__Sequence__destroy(test_bond__srv__TestBond_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_bond__srv__TestBond_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_bond__srv__TestBond_Event__Sequence__are_equal(const test_bond__srv__TestBond_Event__Sequence * lhs, const test_bond__srv__TestBond_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_bond__srv__TestBond_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_bond__srv__TestBond_Event__Sequence__copy(
  const test_bond__srv__TestBond_Event__Sequence * input,
  test_bond__srv__TestBond_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_bond__srv__TestBond_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_bond__srv__TestBond_Event * data =
      (test_bond__srv__TestBond_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_bond__srv__TestBond_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_bond__srv__TestBond_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_bond__srv__TestBond_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
