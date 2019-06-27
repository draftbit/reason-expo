type cameraType =
  | Front
  | Back;

type torchMode =
  | On
  | Off;

[@bs.module "expo-barcode-scanner"]
external js: ReasonReact.reactClass = "BarCodeScanner";

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
  style: BsReactNative.Style.t,
};

let make =
    (
      ~onBarCodeScanned,
      ~type_=Back,
      ~torchMode=Off,
      ~barCodeScannerSettings=?,
      ~style=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=
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
        ~barCodeScannerSettings=
          Js.Nullable.fromOption(barCodeScannerSettings),
        ~style,
      ),
    children,
  );