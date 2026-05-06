#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__GameState() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__GameState__init(msg: *mut GameState) -> bool;
    fn rm_interfaces__msg__GameState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GameState>, size: usize) -> bool;
    fn rm_interfaces__msg__GameState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GameState>);
    fn rm_interfaces__msg__GameState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GameState>, out_seq: *mut rosidl_runtime_rs::Sequence<GameState>) -> bool;
}

// Corresponds to rm_interfaces__msg__GameState
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
      if !rm_interfaces__msg__GameState__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__GameState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GameState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GameState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GameState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GameState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GameState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GameState where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/GameState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__GameState() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__SentryCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__SentryCmd__init(msg: *mut SentryCmd) -> bool;
    fn rm_interfaces__msg__SentryCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SentryCmd>, size: usize) -> bool;
    fn rm_interfaces__msg__SentryCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SentryCmd>);
    fn rm_interfaces__msg__SentryCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SentryCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<SentryCmd>) -> bool;
}

// Corresponds to rm_interfaces__msg__SentryCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SentryCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resurrection_en: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buy_resurrection_en: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buy_projectile_allowance: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buy_projectile_times: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buy_hp_times: u16,

}



impl Default for SentryCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__SentryCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__SentryCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SentryCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__SentryCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__SentryCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__SentryCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SentryCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SentryCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/SentryCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__SentryCmd() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__ChassisCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__ChassisCmd__init(msg: *mut ChassisCmd) -> bool;
    fn rm_interfaces__msg__ChassisCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>, size: usize) -> bool;
    fn rm_interfaces__msg__ChassisCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>);
    fn rm_interfaces__msg__ChassisCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>) -> bool;
}

// Corresponds to rm_interfaces__msg__ChassisCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// cmd msg for controlling chassis
/// constants for control type

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {
    /// control type
    pub type_: u8,

    /// control data
    pub twist: geometry_msgs::msg::rmw::Twist,

}

impl ChassisCmd {
    /// velocity control, (vx,vy,w) in chassis frame.
    pub const VELOCITY: u8 = 1;

    /// no spin
    /// (vx,vy) in gimbal's yaw frame.
    pub const FOLLOW_GIMBAL: u8 = 2;

    /// velocity control, swing around gimbal's yaw automatically,
    /// (vx,vy) in gimbal's yaw frame.
    pub const SWING: u8 = 3;

    /// spin
    /// (vx,vy) in gimbal's yaw frame.
    pub const SPIN: u8 = 4;

}


impl Default for ChassisCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__ChassisCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__ChassisCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ChassisCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ChassisCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ChassisCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/ChassisCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__ChassisCmd() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__Gimbal() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__Gimbal__init(msg: *mut Gimbal) -> bool;
    fn rm_interfaces__msg__Gimbal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Gimbal>, size: usize) -> bool;
    fn rm_interfaces__msg__Gimbal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Gimbal>);
    fn rm_interfaces__msg__Gimbal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Gimbal>, out_seq: *mut rosidl_runtime_rs::Sequence<Gimbal>) -> bool;
}

// Corresponds to rm_interfaces__msg__Gimbal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// msg for Gimbal, pitch and yaw.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Gimbal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,

}



impl Default for Gimbal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__Gimbal__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__Gimbal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Gimbal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__Gimbal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__Gimbal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__Gimbal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Gimbal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Gimbal where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/Gimbal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__Gimbal() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__GimbalCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__GimbalCmd__init(msg: *mut GimbalCmd) -> bool;
    fn rm_interfaces__msg__GimbalCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>, size: usize) -> bool;
    fn rm_interfaces__msg__GimbalCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>);
    fn rm_interfaces__msg__GimbalCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GimbalCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<GimbalCmd>) -> bool;
}

// Corresponds to rm_interfaces__msg__GimbalCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// cmd msg for controlling gimbal
/// constants for control type

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalCmd {
    /// control type
    pub yaw_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_type: u8,

    /// control dada
    pub position: super::super::msg::rmw::Gimbal,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: super::super::msg::rmw::Gimbal,

}

impl GimbalCmd {
    /// position control, set position by absolute angle
    pub const ABSOLUTE_ANGLE: u8 = 1;

    /// position control, set position by relative angle
    pub const RELATIVE_ANGLE: u8 = 2;

    /// velocity control, set velocity
    pub const VELOCITY: u8 = 3;

}


impl Default for GimbalCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__GimbalCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__GimbalCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GimbalCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GimbalCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GimbalCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__GimbalCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GimbalCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GimbalCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/GimbalCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__GimbalCmd() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__ShootCmd() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__ShootCmd__init(msg: *mut ShootCmd) -> bool;
    fn rm_interfaces__msg__ShootCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ShootCmd>, size: usize) -> bool;
    fn rm_interfaces__msg__ShootCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ShootCmd>);
    fn rm_interfaces__msg__ShootCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ShootCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ShootCmd>) -> bool;
}

// Corresponds to rm_interfaces__msg__ShootCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// cmd msg for shooter

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShootCmd {
    /// ONCE or CONTINUOUS
    pub type_: u8,

    /// (optional) number of projectiles to shoot
    pub projectile_num: u8,

}

impl ShootCmd {
    /// stop shooting
    pub const STOP: u8 = 0;

    /// shoot once
    pub const ONCE: u8 = 1;

    /// shoot continuously
    pub const CONTINUOUS: u8 = 2;

}


impl Default for ShootCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__ShootCmd__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__ShootCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ShootCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ShootCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ShootCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__ShootCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ShootCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ShootCmd where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/ShootCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__ShootCmd() }
  }
}


#[link(name = "rm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__RobotMode() -> *const std::ffi::c_void;
}

#[link(name = "rm_interfaces__rosidl_generator_c")]
extern "C" {
    fn rm_interfaces__msg__RobotMode__init(msg: *mut RobotMode) -> bool;
    fn rm_interfaces__msg__RobotMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>, size: usize) -> bool;
    fn rm_interfaces__msg__RobotMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>);
    fn rm_interfaces__msg__RobotMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotMode>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotMode>) -> bool;
}

// Corresponds to rm_interfaces__msg__RobotMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}



impl Default for RobotMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rm_interfaces__msg__RobotMode__init(&mut msg as *mut _) {
        panic!("Call to rm_interfaces__msg__RobotMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__RobotMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__RobotMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rm_interfaces__msg__RobotMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotMode where Self: Sized {
  const TYPE_NAME: &'static str = "rm_interfaces/msg/RobotMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rm_interfaces__msg__RobotMode() }
  }
}


