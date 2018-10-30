type cameraType =
  | Front
  | Back;

type torchMode =
  | On
  | Off;

[@bs.module "expo"] external js: ReasonReact.reactClass = "BarCodeScanner";

[@bs.deriving abstract]
type barCodeReadResult = {
  [@bs.as "type"]
  _type: string,
  data: string,
};

[@bs.deriving abstract]
type props = {
  onBarCodeRead: barCodeReadResult => unit,
  [@bs.as "type"]
  _type: string,
  torchMode: string,
  [@bs.optional]
  barCodeTypes: Js.Nullable.t(array(string)),
  style: BsReactNative.Style.t,
};

let make =
    (
      ~onBarCodeRead,
      ~type_=Back,
      ~torchMode=Off,
      ~barCodeTypes=?,
      ~style=BsReactNative.Style.style([]),
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=
      props(
        ~onBarCodeRead,
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
        ~barCodeTypes=Js.Nullable.fromOption(barCodeTypes),
        ~style,
      ),
    children,
  );