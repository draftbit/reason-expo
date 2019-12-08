type shareAsyncOptions = {
  mimeType: string,
  dialogTitle: string,
  [@bs.as "UTI"]
  uti: string,
};

[@bs.module "expo-sharing"]
external shareAsync: (string, shareAsyncOptions) => Js.Promise.t(unit) = "shareAsync";