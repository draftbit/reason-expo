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

[@bs.module "expo-permissions"] external location: string = "LOCATION";

[@bs.module "expo-permissions"] external camera: string = "CAMERA";

[@bs.module "expo-permissions"]
external audioRecording: string = "AUDIO_RECORDING";

[@bs.module "expo-permissions"] external contacts: string = "CONTACTS";

[@bs.module "expo-permissions"] external cameraRoll: string = "CAMERA_ROLL";

[@bs.module "expo-permissions"] external calendar: string = "CALENDAR";

[@bs.module "expo-permissions"] external reminders: string = "REMINDERS";

[@bs.module "expo-permissions"]
external userFacingNotifications: string = "USER_FACING_NOTIFICATIONS";

[@bs.module "expo-permissions"]
external notification: string = "NOTIFICATIONS";

[@bs.module "expo-permissions"]
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

[@bs.module "expo-permissions"]
external _get: string => Js.Promise.t('b) = "getAsync";

let getAsync = permission => _get(toString(permission));

[@bs.module "expo-permissions"]
external _ask: string => Js.Promise.t('b) = "askAsync";

let askAsync = permission => _ask(toString(permission));
