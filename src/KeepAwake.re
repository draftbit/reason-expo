[@bs.module "expo"] [@bs.scope "KeepAwake"]
external activate : unit => unit = "activate";

[@bs.module "expo"] [@bs.scope "KeepAwake"]
external deactivate : unit => unit = "deactivate";

[@bs.module "expo"] external js : ReasonReact.reactClass = "KeepAwake";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=Js.Obj.empty(),
    children,
  );