type t =
  | All
  | AllButUpsideDown
  | Portrait
  | PortraitUp
  | PortraitDown
  | Landscape
  | LandscapeLeft
  | LandscapeRight;

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external orientation : {
  .
  "_ALL": string,
  "_ALL_BUT_UPSIDE_DOWN": string,
  "_PORTRAIT": string,
  "_PORTRAIT_UP": string,
  "_PORTRAIT_DOWN": string,
  "_LANDSCAPE": string,
  "_LANDSCAPE_LEFT": string,
  "_LANDSCAPE_RIGHT": string,
} =
  "Orientation";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external _allow : string => unit = "allow";

let allow = orient =>
  (
    switch (orient) {
    | All => orientation##_ALL
    | AllButUpsideDown => orientation##_ALL_BUT_UPSIDE_DOWN
    | Portrait => orientation##_PORTRAIT
    | PortraitUp => orientation##_PORTRAIT_UP
    | PortraitDown => orientation##_PORTRAIT_DOWN
    | Landscape => orientation##_LANDSCAPE
    | LandscapeLeft => orientation##_LANDSCAPE_LEFT
    | LandscapeRight => orientation##_LANDSCAPE_RIGHT
    }
  )
  |> _allow;