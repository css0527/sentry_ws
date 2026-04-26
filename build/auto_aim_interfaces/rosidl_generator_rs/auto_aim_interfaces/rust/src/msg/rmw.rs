#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Armor() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__Armor__init(msg: *mut Armor) -> bool;
    fn auto_aim_interfaces__msg__Armor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Armor>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__Armor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Armor>);
    fn auto_aim_interfaces__msg__Armor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Armor>, out_seq: *mut rosidl_runtime_rs::Sequence<Armor>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__Armor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Armor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_image_center: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for Armor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__Armor__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__Armor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Armor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Armor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Armor where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/Armor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Armor() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Armors() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__Armors__init(msg: *mut Armors) -> bool;
    fn auto_aim_interfaces__msg__Armors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Armors>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__Armors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Armors>);
    fn auto_aim_interfaces__msg__Armors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Armors>, out_seq: *mut rosidl_runtime_rs::Sequence<Armors>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__Armors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Armors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Armor>,

}



impl Default for Armors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__Armors__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__Armors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Armors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Armors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Armors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Armors where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/Armors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Armors() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Target() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__Target__init(msg: *mut Target) -> bool;
    fn auto_aim_interfaces__msg__Target__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Target>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__Target__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Target>);
    fn auto_aim_interfaces__msg__Target__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Target>, out_seq: *mut rosidl_runtime_rs::Sequence<Target>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__Target
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Target {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armors_num: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v_yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius_1: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius_2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d_za: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d_zc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_diff: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_diff: f64,

}



impl Default for Target {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__Target__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__Target__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Target {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Target__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Target__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Target__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Target {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Target where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/Target";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Target() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__RuneTarget() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__RuneTarget__init(msg: *mut RuneTarget) -> bool;
    fn auto_aim_interfaces__msg__RuneTarget__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RuneTarget>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__RuneTarget__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RuneTarget>);
    fn auto_aim_interfaces__msg__RuneTarget__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RuneTarget>, out_seq: *mut rosidl_runtime_rs::Sequence<RuneTarget>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__RuneTarget
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RuneTarget {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pts: [super::super::msg::rmw::Point2d; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_lost: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_big_rune: bool,

}



impl Default for RuneTarget {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__RuneTarget__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__RuneTarget__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RuneTarget {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__RuneTarget__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__RuneTarget__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__RuneTarget__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RuneTarget {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RuneTarget where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/RuneTarget";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__RuneTarget() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Point2d() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__Point2d__init(msg: *mut Point2d) -> bool;
    fn auto_aim_interfaces__msg__Point2d__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Point2d>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__Point2d__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Point2d>);
    fn auto_aim_interfaces__msg__Point2d__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Point2d>, out_seq: *mut rosidl_runtime_rs::Sequence<Point2d>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__Point2d
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point2d {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for Point2d {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__Point2d__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__Point2d__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Point2d {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Point2d__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Point2d__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Point2d__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Point2d {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Point2d where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/Point2d";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Point2d() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__GimbalCmd() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__GimbalCmd__init(msg: *mut GimbalCmd) -> bool;
    fn auto_aim_interfaces__msg__GimbalCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__GimbalCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>);
    fn auto_aim_interfaces__msg__GimbalCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GimbalCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__GimbalCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_diff: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_diff: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fire_advice: bool,

}



impl Default for GimbalCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__GimbalCmd__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__GimbalCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GimbalCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GimbalCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GimbalCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GimbalCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GimbalCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GimbalCmd where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/GimbalCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__GimbalCmd() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__ChassisCmd() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__ChassisCmd__init(msg: *mut ChassisCmd) -> bool;
    fn auto_aim_interfaces__msg__ChassisCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__ChassisCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>);
    fn auto_aim_interfaces__msg__ChassisCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__ChassisCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_spining: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_navigating: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,

}



impl Default for ChassisCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__ChassisCmd__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__ChassisCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__ChassisCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__ChassisCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__ChassisCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisCmd where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/ChassisCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__ChassisCmd() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugLight() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__DebugLight__init(msg: *mut DebugLight) -> bool;
    fn auto_aim_interfaces__msg__DebugLight__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugLight>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__DebugLight__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugLight>);
    fn auto_aim_interfaces__msg__DebugLight__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugLight>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugLight>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__DebugLight
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugLight {

    // This member is not documented.
    #[allow(missing_docs)]
    pub center_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_light: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ratio: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,

}



impl Default for DebugLight {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__DebugLight__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__DebugLight__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugLight {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLight__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLight__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLight__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugLight {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugLight where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/DebugLight";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugLight() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugLights() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__DebugLights__init(msg: *mut DebugLights) -> bool;
    fn auto_aim_interfaces__msg__DebugLights__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugLights>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__DebugLights__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugLights>);
    fn auto_aim_interfaces__msg__DebugLights__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugLights>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugLights>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__DebugLights
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugLights {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DebugLight>,

}



impl Default for DebugLights {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__DebugLights__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__DebugLights__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugLights {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLights__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLights__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugLights__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugLights {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugLights where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/DebugLights";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugLights() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugArmor() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__DebugArmor__init(msg: *mut DebugArmor) -> bool;
    fn auto_aim_interfaces__msg__DebugArmor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugArmor>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__DebugArmor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugArmor>);
    fn auto_aim_interfaces__msg__DebugArmor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugArmor>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugArmor>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__DebugArmor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugArmor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub center_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub light_ratio: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f32,

}



impl Default for DebugArmor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__DebugArmor__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__DebugArmor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugArmor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugArmor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugArmor where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/DebugArmor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugArmor() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugArmors() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__DebugArmors__init(msg: *mut DebugArmors) -> bool;
    fn auto_aim_interfaces__msg__DebugArmors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugArmors>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__DebugArmors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugArmors>);
    fn auto_aim_interfaces__msg__DebugArmors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugArmors>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugArmors>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__DebugArmors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugArmors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DebugArmor>,

}



impl Default for DebugArmors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__DebugArmors__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__DebugArmors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugArmors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugArmors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugArmors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugArmors where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/DebugArmors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugArmors() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugRuneAngle() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__DebugRuneAngle__init(msg: *mut DebugRuneAngle) -> bool;
    fn auto_aim_interfaces__msg__DebugRuneAngle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugRuneAngle>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__DebugRuneAngle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugRuneAngle>);
    fn auto_aim_interfaces__msg__DebugRuneAngle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugRuneAngle>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugRuneAngle>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__DebugRuneAngle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugRuneAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f64,

}



impl Default for DebugRuneAngle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__DebugRuneAngle__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__DebugRuneAngle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugRuneAngle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugRuneAngle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugRuneAngle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__DebugRuneAngle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugRuneAngle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugRuneAngle where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/DebugRuneAngle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__DebugRuneAngle() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Measurement() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__Measurement__init(msg: *mut Measurement) -> bool;
    fn auto_aim_interfaces__msg__Measurement__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Measurement>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__Measurement__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Measurement>);
    fn auto_aim_interfaces__msg__Measurement__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Measurement>, out_seq: *mut rosidl_runtime_rs::Sequence<Measurement>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__Measurement
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Measurement {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

}



impl Default for Measurement {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__Measurement__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__Measurement__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Measurement {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Measurement__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Measurement__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__Measurement__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Measurement {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Measurement where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/Measurement";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__Measurement() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__JudgeSystemData() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__JudgeSystemData__init(msg: *mut JudgeSystemData) -> bool;
    fn auto_aim_interfaces__msg__JudgeSystemData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JudgeSystemData>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__JudgeSystemData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JudgeSystemData>);
    fn auto_aim_interfaces__msg__JudgeSystemData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JudgeSystemData>, out_seq: *mut rosidl_runtime_rs::Sequence<JudgeSystemData>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__JudgeSystemData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JudgeSystemData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub game_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blood: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub outpost_hp: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_command: super::super::msg::rmw::OperatorCommand,

}



impl Default for JudgeSystemData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__JudgeSystemData__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__JudgeSystemData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JudgeSystemData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__JudgeSystemData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__JudgeSystemData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__JudgeSystemData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JudgeSystemData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JudgeSystemData where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/JudgeSystemData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__JudgeSystemData() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__OperatorCommand() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__OperatorCommand__init(msg: *mut OperatorCommand) -> bool;
    fn auto_aim_interfaces__msg__OperatorCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OperatorCommand>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__OperatorCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OperatorCommand>);
    fn auto_aim_interfaces__msg__OperatorCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OperatorCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<OperatorCommand>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__OperatorCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OperatorCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_retreating: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_drone_avoiding: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_outpost_attacking: u8,

}



impl Default for OperatorCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__OperatorCommand__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__OperatorCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OperatorCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__OperatorCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__OperatorCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__OperatorCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OperatorCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OperatorCommand where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/OperatorCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__OperatorCommand() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__SerialReceiveData() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__SerialReceiveData__init(msg: *mut SerialReceiveData) -> bool;
    fn auto_aim_interfaces__msg__SerialReceiveData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SerialReceiveData>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__SerialReceiveData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SerialReceiveData>);
    fn auto_aim_interfaces__msg__SerialReceiveData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SerialReceiveData>, out_seq: *mut rosidl_runtime_rs::Sequence<SerialReceiveData>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__SerialReceiveData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SerialReceiveData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bullet_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gamestate: super::super::msg::rmw::GameState,

}



impl Default for SerialReceiveData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__SerialReceiveData__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__SerialReceiveData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SerialReceiveData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__SerialReceiveData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__SerialReceiveData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__SerialReceiveData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SerialReceiveData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SerialReceiveData where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/SerialReceiveData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__SerialReceiveData() }
  }
}


#[link(name = "auto_aim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__GameState() -> *const std::ffi::c_void;
}

#[link(name = "auto_aim_interfaces__rosidl_generator_c")]
extern "C" {
    fn auto_aim_interfaces__msg__GameState__init(msg: *mut GameState) -> bool;
    fn auto_aim_interfaces__msg__GameState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameState>, size: usize) -> bool;
    fn auto_aim_interfaces__msg__GameState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameState>);
    fn auto_aim_interfaces__msg__GameState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameState>, out_seq: *mut rosidl_runtime_rs::Sequence<GameState>) -> bool;
}

// Corresponds to auto_aim_interfaces__msg__GameState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GameState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub game_progress: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stage_remain_time: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armor_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hurt_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub my_outpost_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_outpost_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub my_base_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_base_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub projectile_allowance_17mm: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_outpost_occupied: u8,

}



impl Default for GameState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !auto_aim_interfaces__msg__GameState__init(&mut msg as *mut _) {
        panic!("Call to auto_aim_interfaces__msg__GameState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GameState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GameState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { auto_aim_interfaces__msg__GameState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameState where Self: Sized {
  const TYPE_NAME: &'static str = "auto_aim_interfaces/msg/GameState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__auto_aim_interfaces__msg__GameState() }
  }
}


