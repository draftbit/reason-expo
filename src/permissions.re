type t =
  | Notifications
  | Location
  | Camera
  | Audio_recording
  | Contacts
  | Camera_rolll;

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external location : string = "LOCATION";

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external camera : string = "CAMERA";

let _to_string =
  fun
  | Notifications => location
  | Camera => camera;

/* TODO: Wrap with Js.Result */
type permission_result = {
  .
  "expires": string,
  "status": string
};

[@bs.module "expo"] [@bs.scope "Permissions"] [@bs.val]
external _get : string => Js.Promise.t(permission_result) = "getAsync";

let get = permission => permission |> _to_string |> _get;
