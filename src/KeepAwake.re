[@bs.module "expo"] external js : ReasonReact.reactClass = "KeepAwake";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=Js.Obj.empty(),
    children,
  );