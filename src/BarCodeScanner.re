type cameraType =
  | Front
  | Back;

type torchMode =
  | On
  | Off;

[@bs.module "expo"] external js : ReasonReact.reactClass = "BarCodeScanner";

let make =
    (
      ~onBarCodeRead:
         {
           .
           "type": string,
           "data": string,
         } =>
         unit,
      ~type_: cameraType,
      ~torchMode: torchMode,
      ~barCodeTypes: array(string),
      ~style: option(BsReactNative.Style.t),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
      "onBarCodeRead": onBarCodeRead,
      "type":
        switch (type_) {
        | Front => "front"
        | Back => "back"
        },
      "torchMode":
        switch (torchMode) {
        | On => "on"
        | Off => "off"
        },
      "barCodeTypes": barCodeTypes,
      "style": Js.Nullable.fromOption(style),
    },
    children,
  );