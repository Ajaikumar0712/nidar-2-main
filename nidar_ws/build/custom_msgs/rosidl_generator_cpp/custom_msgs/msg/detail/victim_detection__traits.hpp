// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/VictimDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/victim_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cropped_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VictimDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: cropped_image
  {
    out << "cropped_image: ";
    to_flow_style_yaml(msg.cropped_image, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: detection_id
  {
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VictimDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cropped_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cropped_image:\n";
    to_block_style_yaml(msg.cropped_image, out, indentation + 2);
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: detection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
    out << "\n";
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VictimDetection & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::VictimDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::VictimDetection & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::VictimDetection>()
{
  return "custom_msgs::msg::VictimDetection";
}

template<>
inline const char * name<custom_msgs::msg::VictimDetection>()
{
  return "custom_msgs/msg/VictimDetection";
}

template<>
struct has_fixed_size<custom_msgs::msg::VictimDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::VictimDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::VictimDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__TRAITS_HPP_
