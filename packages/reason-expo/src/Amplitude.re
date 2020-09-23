[@bs.module "expo-analytics-amplitude"]
external initialize: string => unit = "initialize";

[@bs.module "expo-analytics-amplitude"]
external setUserId: string => unit = "setUserId";

[@bs.module "expo-analytics-amplitude"]
external setUserProperties: 'a => unit = "setUserProperties";

[@bs.module "expo-analytics-amplitude"]
external clearUserProperties: unit => unit = "clearUserProperties";

[@bs.module "expo-analytics-amplitude"]
external logEvent: string => unit = "logEvent";

[@bs.module "expo-analytics-amplitude"]
external logEventWithProperties: (string, 'a) => unit =
  "logEventWithProperties";

[@bs.module "expo-analytics-amplitude"]
external setGroup: (string, array(string)) => unit = "setGroup";
