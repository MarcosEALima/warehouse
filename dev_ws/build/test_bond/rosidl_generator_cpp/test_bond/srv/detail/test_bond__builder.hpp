// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#ifndef TEST_BOND__SRV__DETAIL__TEST_BOND__BUILDER_HPP_
#define TEST_BOND__SRV__DETAIL__TEST_BOND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_bond/srv/detail/test_bond__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_bond
{

namespace srv
{

namespace builder
{

class Init_TestBond_Request_b
{
public:
  explicit Init_TestBond_Request_b(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  ::test_bond::srv::TestBond_Request b(::test_bond::srv::TestBond_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_a
{
public:
  explicit Init_TestBond_Request_a(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_b a(::test_bond::srv::TestBond_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TestBond_Request_b(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_inhibit_death_message
{
public:
  explicit Init_TestBond_Request_inhibit_death_message(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_a inhibit_death_message(::test_bond::srv::TestBond_Request::_inhibit_death_message_type arg)
  {
    msg_.inhibit_death_message = std::move(arg);
    return Init_TestBond_Request_a(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_inhibit_death
{
public:
  explicit Init_TestBond_Request_inhibit_death(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_inhibit_death_message inhibit_death(::test_bond::srv::TestBond_Request::_inhibit_death_type arg)
  {
    msg_.inhibit_death = std::move(arg);
    return Init_TestBond_Request_inhibit_death_message(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_delay_death
{
public:
  explicit Init_TestBond_Request_delay_death(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_inhibit_death delay_death(::test_bond::srv::TestBond_Request::_delay_death_type arg)
  {
    msg_.delay_death = std::move(arg);
    return Init_TestBond_Request_inhibit_death(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_delay_connect
{
public:
  explicit Init_TestBond_Request_delay_connect(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_delay_death delay_connect(::test_bond::srv::TestBond_Request::_delay_connect_type arg)
  {
    msg_.delay_connect = std::move(arg);
    return Init_TestBond_Request_delay_death(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_id
{
public:
  explicit Init_TestBond_Request_id(::test_bond::srv::TestBond_Request & msg)
  : msg_(msg)
  {}
  Init_TestBond_Request_delay_connect id(::test_bond::srv::TestBond_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TestBond_Request_delay_connect(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

class Init_TestBond_Request_topic
{
public:
  Init_TestBond_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestBond_Request_id topic(::test_bond::srv::TestBond_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_TestBond_Request_id(msg_);
  }

private:
  ::test_bond::srv::TestBond_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_bond::srv::TestBond_Request>()
{
  return test_bond::srv::builder::Init_TestBond_Request_topic();
}

}  // namespace test_bond


namespace test_bond
{

namespace srv
{

namespace builder
{

class Init_TestBond_Response_sum
{
public:
  Init_TestBond_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_bond::srv::TestBond_Response sum(::test_bond::srv::TestBond_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_bond::srv::TestBond_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_bond::srv::TestBond_Response>()
{
  return test_bond::srv::builder::Init_TestBond_Response_sum();
}

}  // namespace test_bond


namespace test_bond
{

namespace srv
{

namespace builder
{

class Init_TestBond_Event_response
{
public:
  explicit Init_TestBond_Event_response(::test_bond::srv::TestBond_Event & msg)
  : msg_(msg)
  {}
  ::test_bond::srv::TestBond_Event response(::test_bond::srv::TestBond_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_bond::srv::TestBond_Event msg_;
};

class Init_TestBond_Event_request
{
public:
  explicit Init_TestBond_Event_request(::test_bond::srv::TestBond_Event & msg)
  : msg_(msg)
  {}
  Init_TestBond_Event_response request(::test_bond::srv::TestBond_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TestBond_Event_response(msg_);
  }

private:
  ::test_bond::srv::TestBond_Event msg_;
};

class Init_TestBond_Event_info
{
public:
  Init_TestBond_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestBond_Event_request info(::test_bond::srv::TestBond_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TestBond_Event_request(msg_);
  }

private:
  ::test_bond::srv::TestBond_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_bond::srv::TestBond_Event>()
{
  return test_bond::srv::builder::Init_TestBond_Event_info();
}

}  // namespace test_bond

#endif  // TEST_BOND__SRV__DETAIL__TEST_BOND__BUILDER_HPP_
