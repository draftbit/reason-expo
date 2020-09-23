// type t =
//   | Notifications
//   | Location
//   | Camera
//   | AudioRecording
//   | Contacts
//   | CameraRoll
//   | UserFacingNotifications
//   | SystemBrightness
//   | Calendar
//   | Reminders;

type t;

[@bs.module "expo-permissions"] external location: t = "LOCATION";

[@bs.module "expo-permissions"] external camera: t = "CAMERA";

[@bs.module "expo-permissions"] external audioRecording: t = "AUDIO_RECORDING";

[@bs.module "expo-permissions"] external contacts: t = "CONTACTS";

[@bs.module "expo-permissions"] external cameraRoll: t = "CAMERA_ROLL";

[@bs.module "expo-permissions"] external calendar: t = "CALENDAR";

[@bs.module "expo-permissions"] external reminders: t = "REMINDERS";

[@bs.module "expo-permissions"]
external userFacingNotifications: t = "USER_FACING_NOTIFICATIONS";

[@bs.module "expo-permissions"] external notification: t = "NOTIFICATIONS";

[@bs.module "expo-permissions"]
external systemBrightness: t = "SYSTEM_BRIGHTNESS";

[@bs.module "expo-permissions"]
external getAsync: t => Js.Promise.t('b) = "getAsync";

[@bs.module "expo-permissions"]
external askAsync: t => Js.Promise.t('b) = "askAsync";
