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
external all : string = "ALL";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external all_but_upside_down : string = "ALL_BUT_UPSIDE_DOWN";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external portrait : string = "PORTRAIT";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external portrait_up : string = "PORTRAIT_UP";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external portrait_down : string = "PORTRAIT_DOWN";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external landscape : string = "LANDSCAPE";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external landscape_left : string = "LANDSCAPE_LEFT";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external landscape_right : string = "LANDSCAPE_RIGHT";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external _allow : string => unit = "allow";

let allow = orient =>
  (
    switch (orient) {
    | All => all
    | AllButUpsideDown => all_but_upside_down
    | Portrait => portrait
    | PortraitUp => portrait_up
    | PortraitDown => portrait_down
    | Landscape => landscape
    | LandscapeLeft => landscape_left
    | LandscapeRight => landscape_right
    }
  )
  |> _allow;