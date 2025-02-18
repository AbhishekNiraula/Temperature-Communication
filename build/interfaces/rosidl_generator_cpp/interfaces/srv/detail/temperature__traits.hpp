// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/temperature.hpp"


#ifndef INTERFACES__SRV__DETAIL__TEMPERATURE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__TEMPERATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Temperature_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: city
  {
    out << "city: ";
    rosidl_generator_traits::value_to_yaml(msg.city, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Temperature_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: city
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "city: ";
    rosidl_generator_traits::value_to_yaml(msg.city, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Temperature_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Temperature_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Temperature_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Temperature_Request>()
{
  return "interfaces::srv::Temperature_Request";
}

template<>
inline const char * name<interfaces::srv::Temperature_Request>()
{
  return "interfaces/srv/Temperature_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Temperature_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Temperature_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Temperature_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Temperature_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Temperature_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Temperature_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Temperature_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Temperature_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Temperature_Response>()
{
  return "interfaces::srv::Temperature_Response";
}

template<>
inline const char * name<interfaces::srv::Temperature_Response>()
{
  return "interfaces/srv/Temperature_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Temperature_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Temperature_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Temperature_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Temperature_Event & msg,
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
  const Temperature_Event & msg,
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

inline std::string to_yaml(const Temperature_Event & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Temperature_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Temperature_Event & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Temperature_Event>()
{
  return "interfaces::srv::Temperature_Event";
}

template<>
inline const char * name<interfaces::srv::Temperature_Event>()
{
  return "interfaces/srv/Temperature_Event";
}

template<>
struct has_fixed_size<interfaces::srv::Temperature_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Temperature_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::srv::Temperature_Request>::value && has_bounded_size<interfaces::srv::Temperature_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::srv::Temperature_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Temperature>()
{
  return "interfaces::srv::Temperature";
}

template<>
inline const char * name<interfaces::srv::Temperature>()
{
  return "interfaces/srv/Temperature";
}

template<>
struct has_fixed_size<interfaces::srv::Temperature>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Temperature_Request>::value &&
    has_fixed_size<interfaces::srv::Temperature_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Temperature>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Temperature_Request>::value &&
    has_bounded_size<interfaces::srv::Temperature_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Temperature>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Temperature_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Temperature_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__TEMPERATURE__TRAITS_HPP_
