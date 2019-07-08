type cameraType =
  | Front
  | Back;

type torchMode =
  | On
  | Off;

[@bs.deriving abstract]
type onBarCodeScannedResult = {
  [@bs.as "type"]
  _type: string,
  data: string,
};

[@bs.deriving abstract]
type barCodeScannerSettings = {
  barCodeTypes: array(string),
  useCamera2Api: bool,
};

[@bs.deriving abstract]
type props = {
  onBarCodeScanned: onBarCodeScannedResult => unit,
  [@bs.as "type"]
  _type: string,
  torchMode: string,
  [@bs.optional]
  barCodeScannerSettings: Js.Nullable.t(barCodeScannerSettings),
  style: ReactNative.Style.t,
  [@bs.optional]
  children: React.element,
};

let makeProps =
    (
      ~onBarCodeScanned,
      ~type_=Back,
      ~torchMode=Off,
      ~barCodeScannerSettings=?,
      ~style=ReactNative.Style.style(),
      ~children,
    ) =>
  props(
    ~onBarCodeScanned,
    ~_type=
      switch (type_) {
      | Front => "front"
      | Back => "back"
      },
    ~torchMode=
      switch (torchMode) {
      | On => "on"
      | Off => "off"
      },
    ~barCodeScannerSettings=Js.Nullable.fromOption(barCodeScannerSettings),
    ~style,
    ~children,
  );

[@bs.module "expo-barcode-scanner"] [@react.component]
external make: props => React.element = "BarCodeScanner";