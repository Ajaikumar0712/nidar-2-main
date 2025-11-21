// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/VictimDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cropped_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__VictimDetection __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__VictimDetection __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VictimDetection_
{
  using Type = VictimDetection_<ContainerAllocator>;

  explicit VictimDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropped_image(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->confidence = 0.0f;
      this->detection_id = "";
    }
  }

  explicit VictimDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropped_image(_alloc, _init),
    detection_id(_alloc),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->confidence = 0.0f;
      this->detection_id = "";
    }
  }

  // field types and members
  using _cropped_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _cropped_image_type cropped_image;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _detection_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detection_id_type detection_id;
  using _bounding_box_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _bounding_box_type bounding_box;

  // setters for named parameter idiom
  Type & set__cropped_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->cropped_image = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__detection_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detection_id = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::VictimDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::VictimDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VictimDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VictimDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__VictimDetection
    std::shared_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__VictimDetection
    std::shared_ptr<custom_msgs::msg::VictimDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VictimDetection_ & other) const
  {
    if (this->cropped_image != other.cropped_image) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->detection_id != other.detection_id) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    return true;
  }
  bool operator!=(const VictimDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VictimDetection_

// alias to use template instance with default allocator
using VictimDetection =
  custom_msgs::msg::VictimDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_HPP_
