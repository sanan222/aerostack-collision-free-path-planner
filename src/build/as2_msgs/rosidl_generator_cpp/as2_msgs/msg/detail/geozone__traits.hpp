// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from as2_msgs:msg/Geozone.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__MSG__DETAIL__GEOZONE__TRAITS_HPP_
#define AS2_MSGS__MSG__DETAIL__GEOZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "as2_msgs/msg/detail/geozone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace as2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Geozone & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: alert
  {
    out << "alert: ";
    rosidl_generator_traits::value_to_yaml(msg.alert, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: data_type
  {
    out << "data_type: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type, out);
    out << ", ";
  }

  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
    out << ", ";
  }

  // member: z_up
  {
    out << "z_up: ";
    rosidl_generator_traits::value_to_yaml(msg.z_up, out);
    out << ", ";
  }

  // member: z_down
  {
    out << "z_down: ";
    rosidl_generator_traits::value_to_yaml(msg.z_down, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Geozone & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert: ";
    rosidl_generator_traits::value_to_yaml(msg.alert, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: data_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_type: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type, out);
    out << "\n";
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_block_style_yaml(msg.polygon, out, indentation + 2);
  }

  // member: z_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_up: ";
    rosidl_generator_traits::value_to_yaml(msg.z_up, out);
    out << "\n";
  }

  // member: z_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_down: ";
    rosidl_generator_traits::value_to_yaml(msg.z_down, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Geozone & msg, bool use_flow_style = false)
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

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::msg::Geozone & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::msg::Geozone & msg)
{
  return as2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::msg::Geozone>()
{
  return "as2_msgs::msg::Geozone";
}

template<>
inline const char * name<as2_msgs::msg::Geozone>()
{
  return "as2_msgs/msg/Geozone";
}

template<>
struct has_fixed_size<as2_msgs::msg::Geozone>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<as2_msgs::msg::Geozone>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<as2_msgs::msg::Geozone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AS2_MSGS__MSG__DETAIL__GEOZONE__TRAITS_HPP_
