type t =
  | All
  | AllButUpsideDown
  | Portrait
  | PortraitUp
  | PortraitDown
  | Landscape
  | LandscapeLeft
  | LandscapeRight;

let allow: t => unit;