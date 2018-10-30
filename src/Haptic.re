[@bs.module "expo"] [@bs.scope ("Haptic", "NotificationTypes")]
external _success: string = "Success";

[@bs.module "expo"] [@bs.scope ("Haptic", "NotificationTypes")]
external _warning: string = "Warning";

[@bs.module "expo"] [@bs.scope ("Haptic", "NotificationTypes")]
external _error: string = "Error";

[@bs.module "expo"] [@bs.scope ("Haptic", "ImpactStyles")]
external _light: string = "Light";

[@bs.module "expo"] [@bs.scope ("Haptic", "ImpactStyles")]
external _medium: string = "Medium";

[@bs.module "expo"] [@bs.scope ("Haptic", "ImpactStyles")]
external _heavy: string = "Heavy";

[@bs.module "expo"] [@bs.scope "Haptic"]
external selection: unit => unit = "selection";

[@bs.module "expo"] [@bs.scope "Haptic"]
external _notification: string => unit = "notification";

[@bs.module "expo"] [@bs.scope "Haptic"]
external _impact: string => unit = "impact";

type notificationType =
  | Success
  | Warning
  | Error;

type impactStyle =
  | Light
  | Medium
  | Heavy;

let notification = notificationType =>
  switch (notificationType) {
  | Success => _notification(_success)
  | Warning => _notification(_warning)
  | Error => _notification(_error)
  };

let impact = impactStyle =>
  switch (impactStyle) {
  | Light => _impact(_light)
  | Medium => _impact(_medium)
  | Heavy => _impact(_heavy)
  };