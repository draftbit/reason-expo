module CryptoDigestAlgorithm = {
  type t = string;
  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external sha1: t = "SHA1";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external sha256: t = "SHA256";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external sha384: t = "SHA384";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external sha512: t = "SHA512";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external md2: t = "MD2";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external md4: t = "MD4";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoDigestAlgorithm"]
  external md5: t = "MD5";
};

module CryptoEncoding = {
  type t = string;
  [@bs.module "expo-crypto"] [@bs.scope "CryptoEncoding"]
  external hex: t = "HEX";

  [@bs.module "expo-crypto"] [@bs.scope "CryptoEncoding"]
  external base64: t = "BASE64";
};

type cryptoDigestOptions = {encoding: CryptoEncoding.t};

[@bs.module "expo-crypto"]
external digestStringAsync:
  (CryptoDigestAlgorithm.t, string, cryptoDigestOptions) =>
  Js.Promise.t(string) =
  "digestStringAsync";