type keychainAccessibilityType;

[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenUnlocked: keychainAccessibilityType = "WHEN_UNLOCKED";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external afterFirstUnlock: keychainAccessibilityType = "AFTER_FIRST_UNLOCK";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external always: keychainAccessibilityType = "ALWAYS";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenUnlockedThisDeviceOnly: keychainAccessibilityType =
  "WHEN_UNLOCKED_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external whenPasscodeSetThisDeviceOnly: keychainAccessibilityType =
  "WHEN_PASSCODE_SET_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external afterFirstUnlockThisDeviceOnly: keychainAccessibilityType =
  "AFTER_FIRST_UNLOCK_THIS_DEVICE_ONLY";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external alwaysThisDeviceOnly: keychainAccessibilityType =
  "ALWAYS_THIS_DEVICE_ONLY";

[@bs.deriving abstract]
type setItemAsyncOptions = {
  keychainService: string,
  keychainAccessible: keychainAccessibilityType,
};

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _setItemAsyncWithOptions:
  (string, string, setItemAsyncOptions) => Js.Promise.t(unit) =
  "setItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _setItemAsync: (string, string) => Js.Promise.t(unit) =
  "setItemAsync";

let setItemAsync = (~key, ~value, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _setItemAsyncWithOptions(key, value, o)
  | None => _setItemAsync(key, value)
  };

[@bs.deriving abstract]
type getItemAsyncOptions = {keychainService: string};

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _getItemAsyncWithOptions:
  (string, getItemAsyncOptions) => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _getItemAsync: string => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

let getItemAsync = (~key, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _getItemAsyncWithOptions(key, o)
  | None => _getItemAsync(key)
  };

[@bs.deriving abstract]
type deleteItemAsyncOptions = {keychainService: string};

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _deleteItemAsync: string => Js.Promise.t(unit) = "deleteItemAsync";

[@bs.scope "SecureStore"] [@bs.module "expo"]
external _deleteItemAsyncWithOptions:
  (string, deleteItemAsyncOptions) => Js.Promise.t(unit) =
  "deleteItemAsync";

let deleteItemAsync = (~key, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _deleteItemAsyncWithOptions(key, o)
  | None => _deleteItemAsync(key)
  };