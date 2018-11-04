type t =
  | All
  | AllButUpsideDown
  | Portrait
  | PortraitUp
  | PortraitDown
  | Landscape
  | LandscapeLeft
  | LandscapeRight;

let allowAsync: t => Js.Promise.t(unit);