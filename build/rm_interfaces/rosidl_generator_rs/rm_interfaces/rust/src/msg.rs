#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rm_interfaces__msg__GameState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GameState::default())
  }
}

impl rosidl_runtime_rs::Message for GameState {
  type RmwMsg = super::msg::rmw::GameState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_hp: msg.current_hp,
        game_progress: msg.game_progress,
        stage_remain_time: msg.stage_remain_time,
        armor_id: msg.armor_id,
        hurt_type: msg.hurt_type,
        my_outpost_hp: msg.my_outpost_hp,
        enemy_outpost_hp: msg.enemy_outpost_hp,
        my_base_hp: msg.my_base_hp,
        enemy_base_hp: msg.enemy_base_hp,
        projectile_allowance_17mm: msg.projectile_allowance_17mm,
        enemy_outpost_occupied: msg.enemy_outpost_occupied,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_hp: msg.current_hp,
      game_progress: msg.game_progress,
      stage_remain_time: msg.stage_remain_time,
      armor_id: msg.armor_id,
      hurt_type: msg.hurt_type,
      my_outpost_hp: msg.my_outpost_hp,
      enemy_outpost_hp: msg.enemy_outpost_hp,
      my_base_hp: msg.my_base_hp,
      enemy_base_hp: msg.enemy_base_hp,
      projectile_allowance_17mm: msg.projectile_allowance_17mm,
      enemy_outpost_occupied: msg.enemy_outpost_occupied,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_hp: msg.current_hp,
      game_progress: msg.game_progress,
      stage_remain_time: msg.stage_remain_time,
      armor_id: msg.armor_id,
      hurt_type: msg.hurt_type,
      my_outpost_hp: msg.my_outpost_hp,
      enemy_outpost_hp: msg.enemy_outpost_hp,
      my_base_hp: msg.my_base_hp,
      enemy_base_hp: msg.enemy_base_hp,
      projectile_allowance_17mm: msg.projectile_allowance_17mm,
      enemy_outpost_occupied: msg.enemy_outpost_occupied,
    }
  }
}


// Corresponds to rm_interfaces__msg__SentryCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SentryCmd::default())
  }
}

impl rosidl_runtime_rs::Message for SentryCmd {
  type RmwMsg = super::msg::rmw::SentryCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resurrection_en: msg.resurrection_en,
        buy_resurrection_en: msg.buy_resurrection_en,
        buy_projectile_allowance: msg.buy_projectile_allowance,
        buy_projectile_times: msg.buy_projectile_times,
        buy_hp_times: msg.buy_hp_times,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      resurrection_en: msg.resurrection_en,
      buy_resurrection_en: msg.buy_resurrection_en,
      buy_projectile_allowance: msg.buy_projectile_allowance,
      buy_projectile_times: msg.buy_projectile_times,
      buy_hp_times: msg.buy_hp_times,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resurrection_en: msg.resurrection_en,
      buy_resurrection_en: msg.buy_resurrection_en,
      buy_projectile_allowance: msg.buy_projectile_allowance,
      buy_projectile_times: msg.buy_projectile_times,
      buy_hp_times: msg.buy_hp_times,
    }
  }
}


// Corresponds to rm_interfaces__msg__ChassisCmd
/// cmd msg for controlling chassis
/// constants for control type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {
    /// control type
    pub type_: u8,

    /// control data
    pub twist: geometry_msgs::msg::Twist,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = super::msg::rmw::ChassisCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
    }
  }
}


// Corresponds to rm_interfaces__msg__Gimbal
/// msg for Gimbal, pitch and yaw.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Gimbal::default())
  }
}

impl rosidl_runtime_rs::Message for Gimbal {
  type RmwMsg = super::msg::rmw::Gimbal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        yaw: msg.yaw,
        pitch: msg.pitch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      yaw: msg.yaw,
      pitch: msg.pitch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      yaw: msg.yaw,
      pitch: msg.pitch,
    }
  }
}


// Corresponds to rm_interfaces__msg__GimbalCmd
/// cmd msg for controlling gimbal
/// constants for control type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalCmd {
    /// control type
    pub yaw_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_type: u8,

    /// control dada
    pub position: super::msg::Gimbal,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: super::msg::Gimbal,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalCmd::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalCmd {
  type RmwMsg = super::msg::rmw::GimbalCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        yaw_type: msg.yaw_type,
        pitch_type: msg.pitch_type,
        position: super::msg::Gimbal::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        velocity: super::msg::Gimbal::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      yaw_type: msg.yaw_type,
      pitch_type: msg.pitch_type,
        position: super::msg::Gimbal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        velocity: super::msg::Gimbal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      yaw_type: msg.yaw_type,
      pitch_type: msg.pitch_type,
      position: super::msg::Gimbal::from_rmw_message(msg.position),
      velocity: super::msg::Gimbal::from_rmw_message(msg.velocity),
    }
  }
}


// Corresponds to rm_interfaces__msg__ShootCmd
/// cmd msg for shooter

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ShootCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ShootCmd {
  type RmwMsg = super::msg::rmw::ShootCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        projectile_num: msg.projectile_num,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      projectile_num: msg.projectile_num,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      projectile_num: msg.projectile_num,
    }
  }
}


// Corresponds to rm_interfaces__msg__RobotMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}



impl Default for RobotMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotMode::default())
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = super::msg::rmw::RobotMode;

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


