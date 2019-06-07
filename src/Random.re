[@bs.module "expo"] [@bs.scope "Random"]
external getRandomBytesAsync: int => Js.Promise.t(Js.Typed_array.Uint8Array.t) =
  "";