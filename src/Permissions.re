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

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external location : string = "LOCATION";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external camera : string = "CAMERA";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external cameraRoll : string = "CAMERA_ROLL";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external contacts : string = "CONTACTS";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external userFacingNotifications : string = "USER_FACING_NOTIFICATIONS";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external notification : string = "NOTIFICATIONS";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external audioRecording : string = "AUDIO_RECORDING";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external systemBrightness : string = "SYSTEM_BRIGHTNESS";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external calendar : string = "CALENDAR";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external reminders : string = "REMINDERS";

let _to_string =
  fun
  | Notifications => notification
  | Location => location
  | Camera => camera
  | AudioRecording => audioRecording
  | UserFacingNotifications => userFacingNotifications
  | Contacts => contacts
  | CameraRoll => cameraRoll
  | SystemBrightness => systemBrightness
  | Calendar => calendar
  | Reminders => reminders;

type permissionDetailsLocationIOS = {scope: [ | `whenInUse | `always]};

type permissionDetailsLocationAndroid = {scope: [ | `fine | `coarse | `none]};

type permissionResponse = {
  expires: string,
  status: string,
  ios: option(permissionDetailsLocationIOS),
  android: option(permissionDetailsLocationAndroid),
};

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external _get : 'a => Js.Promise.t('b) = "getAsync";

let get = permission => {
  let perm = permission |> _to_string;
  let missingKey = v =>
    raise(Helpers.MissingFieldShouldExist("scope", {j|Error: $v|j}));
  Js.Promise.(
    _get(perm)
    |> then_(r =>
         resolve(
           Js.Result.Ok({
             expires: r##expires,
             status: r##status,
             ios:
               switch (Js.Undefined.toOption(r##ios)) {
               | None => None
               | Some(s) =>
                 let r =
                   switch (s##scope) {
                   | "whenInUse" => `whenInUse
                   | "always" => `always
                   | _ => missingKey(s##scope)
                   };
                 Some({scope: r});
               },
             android:
               switch (Js.Undefined.toOption(r##android)) {
               | None => None
               | Some(s) =>
                 let r =
                   switch (s##scope) {
                   | "fine" => `fine
                   | "coarse" => `coarse
                   | "none" => `none
                   | _ => missingKey(s##scope)
                   };
                 Some({scope: r});
               },
           }),
         )
       )
    |> catch(oops => resolve(Js.Result.Error(Helpers.errorToString(oops))))
  );
};