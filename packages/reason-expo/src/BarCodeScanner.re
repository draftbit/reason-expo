type cameraType =
  | Front
  | Back;

type torchMode =
  | On
  | Off;

type onBarCodeScannedResult = {
  [@bs.as "type"]
  _type: string,
  data: string,
};

type barCodeScannerSettings = {
  barCodeTypes: array(string),
  useCamera2Api: bool,
};

type props = {
  onBarCodeScanned: onBarCodeScannedResult => unit,
  [@bs.as "type"]
  _type: string,
  torchMode: string,
  barCodeScannerSettings: Js.Nullable.t(barCodeScannerSettings),
  style: ReactNative.Style.t,
  children: React.element,
};

let props =
    (
      ~onBarCodeScanned,
      ~type_=Back,
      ~torchMode=Off,
      ~barCodeScannerSettings=?,
      ~style=ReactNative.Style.style(),
      ~children,
    ) => {
  onBarCodeScanned,
  _type:
    switch (type_) {
    | Front => "front"
    | Back => "back"
    },
  torchMode:
    switch (torchMode) {
    | On => "on"
    | Off => "off"
    },
  barCodeScannerSettings: Js.Nullable.fromOption(barCodeScannerSettings),
  style,
  children,
};

[@bs.module "expo-barcode-scanner"] [@react.component]
external make: props => React.element = "BarCodeScanner";