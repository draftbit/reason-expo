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

let getAsync: t => Js.Promise.t('a);

let askAsync: t => Js.Promise.t('a);