type t =
  | Notifications
  | Location
  | Camera
  | AudioRecording
  | Contacts
  | CameraRoll
  | UserFacingNotifications
  | SystemBrightness
  | Calendar
  | Reminders;

[@bs.module "expo"] [@bs.scope "Permissions"]
external location: string = "LOCATION";

[@bs.module "expo"] [@bs.scope "Permissions"]
external camera: string = "CAMERA";

[@bs.module "expo"] [@bs.scope "Permissions"]
external audioRecording: string = "AUDIO_RECORDING";

[@bs.module "expo"] [@bs.scope "Permissions"]
external contacts: string = "CONTACTS";

[@bs.module "expo"] [@bs.scope "Permissions"]
external cameraRoll: string = "CAMERA_ROLL";

[@bs.module "expo"] [@bs.scope "Permissions"]
external calendar: string = "CALENDAR";

[@bs.module "expo"] [@bs.scope "Permissions"]
external reminders: string = "REMINDERS";

[@bs.module "expo"] [@bs.scope "Permissions"]
external userFacingNotifications: string = "USER_FACING_NOTIFICATIONS";

[@bs.module "expo"] [@bs.scope "Permissions"]
external notification: string = "NOTIFICATIONS";

[@bs.module "expo"] [@bs.scope "Permissions"]
external systemBrightness: string = "SYSTEM_BRIGHTNESS";

let toString = p =>
  switch (p) {
  | Notifications => notification
  | Location => location
  | Camera => camera
  | AudioRecording => audioRecording
  | UserFacingNotifications => userFacingNotifications
  | Contacts => contacts
  | CameraRoll => cameraRoll
  | SystemBrightness => systemBrightness
  | Calendar => calendar
  | Reminders => reminders
  };

[@bs.module "expo"] [@bs.scope "Permissions"]
external _get: string => Js.Promise.t('b) = "getAsync";

let getAsync = permission => _get(toString(permission));

[@bs.module "expo"] [@bs.scope "Permissions"]
external _ask: string => Js.Promise.t('b) = "askAsync";

let askAsync = permission => _ask(toString(permission));