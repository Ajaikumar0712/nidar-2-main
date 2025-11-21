// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/ScoutActionTrigger.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__ACTION__DETAIL__SCOUT_ACTION_TRIGGER__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__SCOUT_ACTION_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/scout_action_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_Goal_waypoints
{
public:
  Init_ScoutActionTrigger_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_Goal waypoints(::mission_interfaces::action::ScoutActionTrigger_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_Goal>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_Goal_waypoints();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_Result_success
{
public:
  Init_ScoutActionTrigger_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_Result success(::mission_interfaces::action::ScoutActionTrigger_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_Result>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_Feedback_current_location
{
public:
  Init_ScoutActionTrigger_Feedback_current_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_Feedback current_location(::mission_interfaces::action::ScoutActionTrigger_Feedback::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_Feedback>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_Feedback_current_location();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_SendGoal_Request_goal
{
public:
  explicit Init_ScoutActionTrigger_SendGoal_Request_goal(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request goal(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request msg_;
};

class Init_ScoutActionTrigger_SendGoal_Request_goal_id
{
public:
  Init_ScoutActionTrigger_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoutActionTrigger_SendGoal_Request_goal goal_id(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ScoutActionTrigger_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_SendGoal_Response_stamp
{
public:
  explicit Init_ScoutActionTrigger_SendGoal_Response_stamp(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response stamp(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response msg_;
};

class Init_ScoutActionTrigger_SendGoal_Response_accepted
{
public:
  Init_ScoutActionTrigger_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoutActionTrigger_SendGoal_Response_stamp accepted(::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ScoutActionTrigger_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_GetResult_Request_goal_id
{
public:
  Init_ScoutActionTrigger_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_GetResult_Request goal_id(::mission_interfaces::action::ScoutActionTrigger_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_GetResult_Response_result
{
public:
  explicit Init_ScoutActionTrigger_GetResult_Response_result(::mission_interfaces::action::ScoutActionTrigger_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_GetResult_Response result(::mission_interfaces::action::ScoutActionTrigger_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_GetResult_Response msg_;
};

class Init_ScoutActionTrigger_GetResult_Response_status
{
public:
  Init_ScoutActionTrigger_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoutActionTrigger_GetResult_Response_result status(::mission_interfaces::action::ScoutActionTrigger_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ScoutActionTrigger_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_ScoutActionTrigger_FeedbackMessage_feedback
{
public:
  explicit Init_ScoutActionTrigger_FeedbackMessage_feedback(::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage feedback(::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage msg_;
};

class Init_ScoutActionTrigger_FeedbackMessage_goal_id
{
public:
  Init_ScoutActionTrigger_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoutActionTrigger_FeedbackMessage_feedback goal_id(::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ScoutActionTrigger_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::ScoutActionTrigger_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_ScoutActionTrigger_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__SCOUT_ACTION_TRIGGER__BUILDER_HPP_
