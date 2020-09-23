type t;

[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external success: t = "Success";

[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external warning: t = "Warning";

[@bs.module "expo-haptics"] [@bs.scope "NotificationFeedbackType"]
external error: t = "Error";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external light: t = "Light";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external medium: t = "Medium";

[@bs.module "expo-haptics"] [@bs.scope "ImpactFeedbackStyle"]
external heavy: t = "Heavy";

[@bs.module "expo-haptics"]
external selectionAsync: unit => unit = "selectionAsync";

[@bs.module "expo-haptics"]
external notificationAsync: t => unit = "notificationAsync";

[@bs.module "expo-haptics"] external impactAsync: t => unit = "impactAsync";
