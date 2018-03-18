[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenUnlocked : int = "WHEN_UNLOCKED";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external afterFirstUnlock : int = "AFTER_FIRST_UNLOCK";

[@bs.scope "SecureStore"] [@bs.module "expo"] external always : int = "ALWAYS";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenUnlockedThisDeviceOnly : int = "WHEN_UNLOCKED_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenPasscodeSetThisDeviceOnly : int =
  "WHEN_PASSCODE_SET_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external afterFirstUnlockThisDeviceOnly : int =
  "AFTER_FIRST_UNLOCK_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external alwaysThisDeviceOnly : int = "ALWAYS_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external setItemAsyncWithOptions :
  (
    string,
    string,
    {
      .
      keychainService: string,
      keychainAccessible: int,
    }
  ) =>
  Js.Promise.t(unit) =
  "setItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external setItemAsync : (string, string) => Js.Promise.t(unit) =
  "setItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external getItemAsyncWithOptions :
  (string, {. keychainService: string}) => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external getItemAsync : string => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external deleteItemAsync : string => Js.Promise.t(unit) = "deleteItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external deleteItemAsyncWithOptions :
  (string, {. keychainService: string}) => Js.Promise.t(unit) =
  "deleteItemAsync";