type t =
  | All
  | AllButUpsideDown
  | Portrait
  | PortraitUp
  | PortraitDown
  | Landscape
  | LandscapeLeft
  | LandscapeRight;

[@bs.deriving abstract]
type orientation = {
  [@bs.as "ALL"]
  all: string,
  [@bs.as "ALL_BUT_UPSIDE_DOWN"]
  allButUpsideDown: string,
  [@bs.as "PORTRAIT"]
  portrait: string,
  [@bs.as "PORTRAIT_UP"]
  portraitUp: string,
  [@bs.as "PORTRAIT_DOWN"]
  portraitDown: string,
  [@bs.as "LANDSCAPE"]
  landscape: string,
  [@bs.as "LANDSCAPE_LEFT"]
  landscapeLeft: string,
  [@bs.as "LANDSCAPE_RIGHT"]
  landscapeRight: string,
};

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external orientation: orientation = "Orientation";

[@bs.module "expo"] [@bs.scope "ScreenOrientation"]
external _allow: string => unit = "allow";

let allow = orient =>
  (
    switch (orient) {
    | All => allGet(orientation)
    | AllButUpsideDown => allButUpsideDownGet(orientation)
    | Portrait => portraitGet(orientation)
    | PortraitUp => portraitUpGet(orientation)
    | PortraitDown => portraitDownGet(orientation)
    | Landscape => landscapeGet(orientation)
    | LandscapeLeft => landscapeLeftGet(orientation)
    | LandscapeRight => landscapeRightGet(orientation)
    }
  )
  |> _allow;