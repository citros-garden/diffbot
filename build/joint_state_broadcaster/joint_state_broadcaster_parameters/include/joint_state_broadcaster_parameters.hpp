// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace joint_state_broadcaster {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::upper_bounds;
using rsl::lower_bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        bool use_local_topics = false;
        std::vector<std::string> joints = {};
        std::vector<std::string> extra_joints = {};
        std::vector<std::string> interfaces = {};
        struct MapInterfaceToJointState {
            std::string position = "position";
            std::string velocity = "velocity";
            std::string effort = "effort";
        } map_interface_to_joint_state;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool use_local_topics = false;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface, std::string const& prefix = ""){
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.use_local_topics = params.use_local_topics;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "use_local_topics")) {
            updated_params.use_local_topics = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "joints")) {
            updated_params.joints = param.as_string_array();
        }
        if (param.get_name() == (prefix_ + "extra_joints")) {
            updated_params.extra_joints = param.as_string_array();
        }
        if (param.get_name() == (prefix_ + "interfaces")) {
            updated_params.interfaces = param.as_string_array();
        }
        if (param.get_name() == (prefix_ + "map_interface_to_joint_state.position")) {
            updated_params.map_interface_to_joint_state.position = param.as_string();
        }
        if (param.get_name() == (prefix_ + "map_interface_to_joint_state.velocity")) {
            updated_params.map_interface_to_joint_state.velocity = param.as_string();
        }
        if (param.get_name() == (prefix_ + "map_interface_to_joint_state.effort")) {
            updated_params.map_interface_to_joint_state.effort = param.as_string();
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "use_local_topics")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.use_local_topics);
          parameters_interface_->declare_parameter(prefix_ + "use_local_topics", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.joints);
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "extra_joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.extra_joints);
          parameters_interface_->declare_parameter(prefix_ + "extra_joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interfaces);
          parameters_interface_->declare_parameter(prefix_ + "interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_interface_to_joint_state.position")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_interface_to_joint_state.position);
          parameters_interface_->declare_parameter(prefix_ + "map_interface_to_joint_state.position", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_interface_to_joint_state.velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_interface_to_joint_state.velocity);
          parameters_interface_->declare_parameter(prefix_ + "map_interface_to_joint_state.velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "map_interface_to_joint_state.effort")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.map_interface_to_joint_state.effort);
          parameters_interface_->declare_parameter(prefix_ + "map_interface_to_joint_state.effort", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "use_local_topics");
      updated_params.use_local_topics = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "extra_joints");
      updated_params.extra_joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "interfaces");
      updated_params.interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "map_interface_to_joint_state.position");
      updated_params.map_interface_to_joint_state.position = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "map_interface_to_joint_state.velocity");
      updated_params.map_interface_to_joint_state.velocity = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "map_interface_to_joint_state.effort");
      updated_params.map_interface_to_joint_state.effort = param.as_string();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      std::mutex mutable mutex_;
  };

} // namespace joint_state_broadcaster