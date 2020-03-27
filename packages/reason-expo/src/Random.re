[@bs.module "expo-random"]
external getRandomBytesAsync: int => Js.Promise.t(Js.Typed_array.Uint8Array.t) =
  "getRandomBytesAsync";