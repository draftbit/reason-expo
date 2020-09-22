type notificationType =
  | Success
  | Warning
  | Error;

type impactStyle =
  | Light
  | Medium
  | Heavy;

let selectionAsync: unit => unit;

let notificationAsync: notificationType => unit;

let impactAsync: impactStyle => unit;
