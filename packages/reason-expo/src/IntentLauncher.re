type intentResult('extras) = {
  resultCode: int,
  data: option(string),
  extra: option('extras),
};

[@bs.module "expo-intent-launcher"]
external startActivityAsync: (string, 'a) => intentResult('extras) =
  "startActivityAsync";