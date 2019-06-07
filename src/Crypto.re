module CryptoDigestAlgorithm = {
  type t = string;
  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external sha1: t = "SHA1";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external sha256: t = "SHA256";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external sha384: t = "SHA384";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external sha512: t = "SHA512";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external md2: t = "MD2";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external md4: t = "MD4";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoDigestAlgorithm")]
  external md5: t = "MD5";
};

module CryptoEncoding = {
  type t = string;
  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoEncoding")]
  external hex: t = "HEX";

  [@bs.module "expo"] [@bs.scope ("Crypto", "CryptoEncoding")]
  external base64: t = "BASE64";
};

[@bs.deriving abstract]
type cryptoDigestOptions = {encoding: CryptoEncoding.t};

[@bs.module "expo"] [@bs.scope "Crypto"]
external digestStringAsync:
  (CryptoDigestAlgorithm.t, string, cryptoDigestOptions) =>
  Js.Promise.t(string) =
  "";