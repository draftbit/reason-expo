[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external _success: string = "Success";

[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external _warning: string = "Warning";

[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external _error: string = "Error";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external _light: string = "Light";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external _medium: string = "Medium";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external _heavy: string = "Heavy";

[@bs.module "expo-haptics"]
external selectionAsync: unit => unit = "selectionAsync";

[@bs.module "expo-haptics"]
external _notificationAsync: string => unit = "notificationAsync";

[@bs.module "expo-haptics"]
external _impactAsync: string => unit = "impactAsync";

type notificationType =
  | Success
  | Warning
  | Error;

type impactStyle =
  | Light
  | Medium
  | Heavy;

let notificationAsync = notificationType =>
  switch (notificationType) {
  | Success => _notificationAsync(_success)
  | Warning => _notificationAsync(_warning)
  | Error => _notificationAsync(_error)
  };

let impactAsync = impactStyle =>
  switch (impactStyle) {
  | Light => _impactAsync(_light)
  | Medium => _impactAsync(_medium)
  | Heavy => _impactAsync(_heavy)
  };