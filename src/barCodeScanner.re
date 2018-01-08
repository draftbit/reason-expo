[@bs.module "expo"]
external bar_code_scanner : ReasonReact.reactClass = "BarCodeScanner";

type bar_code_read =
  {
    .
    "type": string,
    "data": string
  } =>
  unit;

/* Todo, redo this with ppx_deriving and then add ppx-flags in bsconfig */
type facing =
  | Front
  | Back;

type torch_mode =
  | On
  | Off;

type bar_code_t =
  | Aztec
  | Codabar
  | Code39
  | Code93
  | Code128
  | Code138;

let make =
    (~onBarCodeRead: option(bar_code_read)=?, ~type_="back", ~torchMode="off") =>
  ReasonReact.wrapJsForReason(
    ~reactClass=bar_code_scanner,
    ~props=
      Js.Undefined.(
        {
          "onBarCodeRead": from_opt(onBarCodeRead),
          "type": type_,
          "torchMode": torchMode
        }
      )
  );
