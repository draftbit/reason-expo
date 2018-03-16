type t =
  | All
  | All_but_upside_down
  | Portrait
  | Portrait_up;

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external all : string = "ALL";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external all_but_upside_down : string = "ALL_BUT_UPSIDE_DOWN";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external portrait : string = "PORTRAIT";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"] [@bs.val]
external _allow : string => unit = "allow";

let allow = orient =>
  (
    switch orient {
    | All => all
    | All_but_upside_down => all_but_upside_down
    }
  )
  |> _allow;
