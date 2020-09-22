type keychainAccessibilityType;

[@bs.module "expo-secure-store"]
external whenUnlocked: keychainAccessibilityType = "WHEN_UNLOCKED";

[@bs.module "expo-secure-store"]
external afterFirstUnlock: keychainAccessibilityType = "AFTER_FIRST_UNLOCK";

[@bs.module "expo-secure-store"]
external always: keychainAccessibilityType = "ALWAYS";

[@bs.module "expo-secure-store"]
external whenUnlockedThisDeviceOnly: keychainAccessibilityType =
  "WHEN_UNLOCKED_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external whenPasscodeSetThisDeviceOnly: keychainAccessibilityType =
  "WHEN_PASSCODE_SET_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external afterFirstUnlockThisDeviceOnly: keychainAccessibilityType =
  "AFTER_FIRST_UNLOCK_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external alwaysThisDeviceOnly: keychainAccessibilityType =
  "ALWAYS_THIS_DEVICE_ONLY";

[@bs.deriving abstract]
type setItemAsyncOptions = {
  keychainService: string,
  keychainAccessible: keychainAccessibilityType,
};

[@bs.module "expo-secure-store"]
external _setItemAsyncWithOptions:
  (string, string, setItemAsyncOptions) => Js.Promise.t(unit) =
  "setItemAsync";

[@bs.module "expo-secure-store"]
external _setItemAsync: (string, string) => Js.Promise.t(unit) =
  "setItemAsync";

let setItemAsync = (~key, ~value, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _setItemAsyncWithOptions(key, value, o)
  | None => _setItemAsync(key, value)
  };

[@bs.deriving abstract]
type getItemAsyncOptions = {keychainService: string};

[@bs.module "expo-secure-store"]
external _getItemAsyncWithOptions:
  (string, getItemAsyncOptions) => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

[@bs.module "expo-secure-store"]
external _getItemAsync: string => Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

let getItemAsync = (~key, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _getItemAsyncWithOptions(key, o)
  | None => _getItemAsync(key)
  };

[@bs.deriving abstract]
type deleteItemAsyncOptions = {keychainService: string};

[@bs.module "expo-secure-store"]
external _deleteItemAsync: string => Js.Promise.t(unit) = "deleteItemAsync";

[@bs.module "expo-secure-store"]
external _deleteItemAsyncWithOptions:
  (string, deleteItemAsyncOptions) => Js.Promise.t(unit) =
  "deleteItemAsync";

let deleteItemAsync = (~key, ~options=?, ()) =>
  switch (options) {
  | Some(o) => _deleteItemAsyncWithOptions(key, o)
  | None => _deleteItemAsync(key)
  };
