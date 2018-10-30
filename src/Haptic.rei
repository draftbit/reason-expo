type notificationType =
  | Success
  | Warning
  | Error;

type impactStyle =
  | Light
  | Medium
  | Heavy;

let selection: unit => unit;

let notification: notificationType => unit;

let impact: impactStyle => unit;