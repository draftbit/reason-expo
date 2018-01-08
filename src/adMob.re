[@bs.module "expo"] external admob : ReasonReact.reactClass = "AdMob";

let make = () => ReasonReact.wrapJsForReason(~reactClass=admob);
