[@bs.deriving abstract]
type initializeOptions = {
  androidWriteKey: string,
  iosWriteKey: string,
};

[@bs.module "expo-analytics-segment"]
external initialize: initializeOptions => unit = "initialize";

[@bs.module "expo-analytics-segment"]
external identify: string => unit = "identify";

[@bs.module "expo-analytics-segment"]
external identifyWithTraits: (string, 'traitsType) => unit =
  "identifyWithTraits";

[@bs.module "expo-analytics-segment"] external reset: unit => unit = "reset";

[@bs.module "expo-analytics-segment"] external track: string => unit = "track";

[@bs.module "expo-analytics-segment"]
external trackWithProperties: (string, 'propertiesType) => unit =
  "trackWithProperties";

[@bs.module "expo-analytics-segment"]
external screen: string => unit = "screen";

[@bs.module "expo-analytics-segment"]
external screenWithProperties: (string, 'propertiesType) => unit =
  "screenWithProperties";

[@bs.module "expo-analytics-segment"] external flush: unit => unit = "flush";
