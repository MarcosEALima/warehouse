// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_bond:srv/TestBond.idl
// generated code does not contain a copyright notice

#ifndef TEST_BOND__SRV__DETAIL__TEST_BOND__TRAITS_HPP_
#define TEST_BOND__SRV__DETAIL__TEST_BOND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_bond/srv/detail/test_bond__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_bond
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestBond_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: delay_connect
  {
    out << "delay_connect: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_connect, out);
    out << ", ";
  }

  // member: delay_death
  {
    out << "delay_death: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_death, out);
    out << ", ";
  }

  // member: inhibit_death
  {
    out << "inhibit_death: ";
    rosidl_generator_traits::value_to_yaml(msg.inhibit_death, out);
    out << ", ";
  }

  // member: inhibit_death_message
  {
    out << "inhibit_death_message: ";
    rosidl_generator_traits::value_to_yaml(msg.inhibit_death_message, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestBond_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: delay_connect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_connect: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_connect, out);
    out << "\n";
  }

  // member: delay_death
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_death: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_death, out);
    out << "\n";
  }

  // member: inhibit_death
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inhibit_death: ";
    rosidl_generator_traits::value_to_yaml(msg.inhibit_death, out);
    out << "\n";
  }

  // member: inhibit_death_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inhibit_death_message: ";
    rosidl_generator_traits::value_to_yaml(msg.inhibit_death_message, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestBond_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_bond

namespace rosidl_generator_traits
{

[[deprecated("use test_bond::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_bond::srv::TestBond_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_bond::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_bond::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_bond::srv::TestBond_Request & msg)
{
  return test_bond::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_bond::srv::TestBond_Request>()
{
  return "test_bond::srv::TestBond_Request";
}

template<>
inline const char * name<test_bond::srv::TestBond_Request>()
{
  return "test_bond/srv/TestBond_Request";
}

template<>
struct has_fixed_size<test_bond::srv::TestBond_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_bond::srv::TestBond_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_bond::srv::TestBond_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace test_bond
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestBond_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestBond_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestBond_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_bond

namespace rosidl_generator_traits
{

[[deprecated("use test_bond::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_bond::srv::TestBond_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_bond::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_bond::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_bond::srv::TestBond_Response & msg)
{
  return test_bond::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_bond::srv::TestBond_Response>()
{
  return "test_bond::srv::TestBond_Response";
}

template<>
inline const char * name<test_bond::srv::TestBond_Response>()
{
  return "test_bond/srv/TestBond_Response";
}

template<>
struct has_fixed_size<test_bond::srv::TestBond_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_bond::srv::TestBond_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_bond::srv::TestBond_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace test_bond
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestBond_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestBond_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestBond_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_bond

namespace rosidl_generator_traits
{

[[deprecated("use test_bond::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_bond::srv::TestBond_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_bond::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_bond::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_bond::srv::TestBond_Event & msg)
{
  return test_bond::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_bond::srv::TestBond_Event>()
{
  return "test_bond::srv::TestBond_Event";
}

template<>
inline const char * name<test_bond::srv::TestBond_Event>()
{
  return "test_bond/srv/TestBond_Event";
}

template<>
struct has_fixed_size<test_bond::srv::TestBond_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_bond::srv::TestBond_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<test_bond::srv::TestBond_Request>::value && has_bounded_size<test_bond::srv::TestBond_Response>::value> {};

template<>
struct is_message<test_bond::srv::TestBond_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_bond::srv::TestBond>()
{
  return "test_bond::srv::TestBond";
}

template<>
inline const char * name<test_bond::srv::TestBond>()
{
  return "test_bond/srv/TestBond";
}

template<>
struct has_fixed_size<test_bond::srv::TestBond>
  : std::integral_constant<
    bool,
    has_fixed_size<test_bond::srv::TestBond_Request>::value &&
    has_fixed_size<test_bond::srv::TestBond_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_bond::srv::TestBond>
  : std::integral_constant<
    bool,
    has_bounded_size<test_bond::srv::TestBond_Request>::value &&
    has_bounded_size<test_bond::srv::TestBond_Response>::value
  >
{
};

template<>
struct is_service<test_bond::srv::TestBond>
  : std::true_type
{
};

template<>
struct is_service_request<test_bond::srv::TestBond_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_bond::srv::TestBond_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_BOND__SRV__DETAIL__TEST_BOND__TRAITS_HPP_
