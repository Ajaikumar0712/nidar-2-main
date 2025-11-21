// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/VictimDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/victim_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_VictimDetection_bounding_box
{
public:
  explicit Init_VictimDetection_bounding_box(::custom_msgs::msg::VictimDetection & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::VictimDetection bounding_box(::custom_msgs::msg::VictimDetection::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

class Init_VictimDetection_detection_id
{
public:
  explicit Init_VictimDetection_detection_id(::custom_msgs::msg::VictimDetection & msg)
  : msg_(msg)
  {}
  Init_VictimDetection_bounding_box detection_id(::custom_msgs::msg::VictimDetection::_detection_id_type arg)
  {
    msg_.detection_id = std::move(arg);
    return Init_VictimDetection_bounding_box(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

class Init_VictimDetection_confidence
{
public:
  explicit Init_VictimDetection_confidence(::custom_msgs::msg::VictimDetection & msg)
  : msg_(msg)
  {}
  Init_VictimDetection_detection_id confidence(::custom_msgs::msg::VictimDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_VictimDetection_detection_id(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

class Init_VictimDetection_longitude
{
public:
  explicit Init_VictimDetection_longitude(::custom_msgs::msg::VictimDetection & msg)
  : msg_(msg)
  {}
  Init_VictimDetection_confidence longitude(::custom_msgs::msg::VictimDetection::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_VictimDetection_confidence(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

class Init_VictimDetection_latitude
{
public:
  explicit Init_VictimDetection_latitude(::custom_msgs::msg::VictimDetection & msg)
  : msg_(msg)
  {}
  Init_VictimDetection_longitude latitude(::custom_msgs::msg::VictimDetection::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_VictimDetection_longitude(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

class Init_VictimDetection_cropped_image
{
public:
  Init_VictimDetection_cropped_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VictimDetection_latitude cropped_image(::custom_msgs::msg::VictimDetection::_cropped_image_type arg)
  {
    msg_.cropped_image = std::move(arg);
    return Init_VictimDetection_latitude(msg_);
  }

private:
  ::custom_msgs::msg::VictimDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::VictimDetection>()
{
  return custom_msgs::msg::builder::Init_VictimDetection_cropped_image();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__BUILDER_HPP_
