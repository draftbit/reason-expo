[@bs.deriving abstract]
type intentResult('extras) = {
  resultCode: int,
  [@bs.optional]
  data: string,
  [@bs.optional]
  extra: 'extras,
};

[@bs.module "expo-intent-launcher"]
external startActivityAsync: (string, 'a) => intentResult('extras) =
  "startActivityAsync";
