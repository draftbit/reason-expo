type t =
  | Notifications
  | Location
  | Camera
  | Audio_recording
  | Contacts
  | Camera_roll;

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external location : _ = "LOCATION";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external camera : _ = "CAMERA";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external notification : _ = "NOTIFICATIONS";

let _to_string =
  fun
  | Notifications => notification
  | Location => location
  | Camera => camera;

type permissionDetailsLocationIOS = {scope: [ | `whenInUse | `always]};

type permissionDetailsLocationAndroid = {scope: [ | `fine | `coarse | `none]};

type permissionResponse = {
  expires: string,
  status: string,
  ios: option(permissionDetailsLocationIOS),
  android: option(permissionDetailsLocationAndroid)
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
               switch (Js.Undefined.to_opt(r##ios)) {
               | None => None
               | Some(s) =>
                 let r =
                   switch s##scope {
                   | "whenInUse" => `whenInUse
                   | "always" => `always
                   | _ => missingKey(s##scope)
                   };
                 Some({scope: r});
               },
             android:
               switch (Js.Undefined.to_opt(r##android)) {
               | None => None
               | Some(s) =>
                 let r =
                   switch s##scope {
                   | "fine" => `fine
                   | "coarse" => `coarse
                   | "none" => `none
                   | _ => missingKey(s##scope)
                   };
                 Some({scope: r});
               }
           })
         )
       )
    |> catch(oops => resolve(Js.Result.Error(Helpers.errorToString(oops))))
  );
};
