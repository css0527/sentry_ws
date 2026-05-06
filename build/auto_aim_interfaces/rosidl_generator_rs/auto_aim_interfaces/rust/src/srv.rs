#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to auto_aim_interfaces__srv__SetMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Request {
    /// 0:自瞄红 1:自瞄蓝 2:小符红 3:小符蓝 4：大符红 5：大符蓝
    pub mode: u8,

}



impl Default for SetMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMode_Request {
  type RmwMsg = super::srv::rmw::SetMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


// Corresponds to auto_aim_interfaces__srv__SetMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMode_Response {
    /// indicate successful run of triggered service
    pub success: bool,

    /// informational, e.g. for error messages
    pub message: std::string::String,

}



impl Default for SetMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMode_Response {
  type RmwMsg = super::srv::rmw::SetMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__auto_aim_interfaces__srv__SetMode() -> *const std::ffi::c_void;
}

// Corresponds to auto_aim_interfaces__srv__SetMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMode;

impl rosidl_runtime_rs::Service for SetMode {
    type Request = SetMode_Request;
    type Response = SetMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__auto_aim_interfaces__srv__SetMode() }
    }
}


