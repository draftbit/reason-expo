type onBarCodeScannedResult = {
  [@bs.as "type"]
  _type: string,
  data: string,
};

type barCodeScannerSettings = {
  barCodeTypes: array(string),
  useCamera2Api: bool,
};

[@bs.module "expo-barcode-scanner"] [@react.component]
external make:
  (
    ~onBarCodeScanned: onBarCodeScannedResult => unit,
    ~_type: [ | `front | `back],
    ~torchMode: [ | `on | `off],
    ~barCodeScannerSettings: barCodeScannerSettings=?,
    ~style: ReactNative.Style.t,
    ~children: React.element
  ) =>
  React.element =
  "BarCodeScanner";
