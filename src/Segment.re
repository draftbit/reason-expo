[@bs.deriving abstract]
type initializeOptions = {
  androidWriteKey: string,
  iosWriteKey: string,
};

[@bs.module "expo"] [@bs.scope "Segment"]
external initialize: initializeOptions => unit = "initialize";

[@bs.module "expo"] [@bs.scope "Segment"]
external identify: string => unit = "identify";

[@bs.module "expo"] [@bs.scope "Segment"]
external identifyWithTraits: (string, 'traitsType) => unit =
  "identifyWithTraits";

[@bs.module "expo"] [@bs.scope "Segment"]
external reset: unit => unit = "reset";

[@bs.module "expo"] [@bs.scope "Segment"]
external track: string => unit = "track";

[@bs.module "expo"] [@bs.scope "Segment"]
external trackWithProperties: (string, 'propertiesType) => unit =
  "trackWithProperties";

[@bs.module "expo"] [@bs.scope "Segment"]
external screen: string => unit = "screen";

[@bs.module "expo"] [@bs.scope "Segment"]
external screenWithProperties: (string, 'propertiesType) => unit =
  "screenWithProperties";

[@bs.module "expo"] [@bs.scope "Segment"]
external flush: unit => unit = "flush";