// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/GeotaggedImage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__GEOTAGGED_IMAGE__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__GEOTAGGED_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/geotagged_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_GeotaggedImage_altitude
{
public:
  explicit Init_GeotaggedImage_altitude(::custom_msgs::msg::GeotaggedImage & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::GeotaggedImage altitude(::custom_msgs::msg::GeotaggedImage::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::GeotaggedImage msg_;
};

class Init_GeotaggedImage_longitude
{
public:
  explicit Init_GeotaggedImage_longitude(::custom_msgs::msg::GeotaggedImage & msg)
  : msg_(msg)
  {}
  Init_GeotaggedImage_altitude longitude(::custom_msgs::msg::GeotaggedImage::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GeotaggedImage_altitude(msg_);
  }

private:
  ::custom_msgs::msg::GeotaggedImage msg_;
};

class Init_GeotaggedImage_latitude
{
public:
  explicit Init_GeotaggedImage_latitude(::custom_msgs::msg::GeotaggedImage & msg)
  : msg_(msg)
  {}
  Init_GeotaggedImage_longitude latitude(::custom_msgs::msg::GeotaggedImage::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GeotaggedImage_longitude(msg_);
  }

private:
  ::custom_msgs::msg::GeotaggedImage msg_;
};

class Init_GeotaggedImage_image
{
public:
  Init_GeotaggedImage_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeotaggedImage_latitude image(::custom_msgs::msg::GeotaggedImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_GeotaggedImage_latitude(msg_);
  }

private:
  ::custom_msgs::msg::GeotaggedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::GeotaggedImage>()
{
  return custom_msgs::msg::builder::Init_GeotaggedImage_image();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__GEOTAGGED_IMAGE__BUILDER_HPP_
