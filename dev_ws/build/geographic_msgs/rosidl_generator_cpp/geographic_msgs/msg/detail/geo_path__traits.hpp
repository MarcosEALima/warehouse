// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/msg/detail/geo_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "geographic_msgs/msg/detail/geo_pose_stamped__traits.hpp"

namespace geographic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeoPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
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
  const GeoPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeoPath & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace geographic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geographic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geographic_msgs::msg::GeoPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::msg::GeoPath & msg)
{
  return geographic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::msg::GeoPath>()
{
  return "geographic_msgs::msg::GeoPath";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPath>()
{
  return "geographic_msgs/msg/GeoPath";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::GeoPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__TRAITS_HPP_
