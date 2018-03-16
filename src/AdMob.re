[@bs.module "expo"] [@bs.val]
external admob : ReasonReact.reactClass = "AdMob";

let make = () => ReasonReact.wrapJsForReason(~reactClass=admob);
