type t;

[@bs.module "expo-secure-store"] external whenUnlocked: t = "WHEN_UNLOCKED";

[@bs.module "expo-secure-store"]
external afterFirstUnlock: t = "AFTER_FIRST_UNLOCK";

[@bs.module "expo-secure-store"] external always: t = "ALWAYS";

[@bs.module "expo-secure-store"]
external whenUnlockedThisDeviceOnly: t = "WHEN_UNLOCKED_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external whenPasscodeSetThisDeviceOnly: t =
  "WHEN_PASSCODE_SET_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external afterFirstUnlockThisDeviceOnly: t =
  "AFTER_FIRST_UNLOCK_THIS_DEVICE_ONLY";

[@bs.module "expo-secure-store"]
external alwaysThisDeviceOnly: t = "ALWAYS_THIS_DEVICE_ONLY";

type setItemAsyncOptions;
[@bs.obj]
external setItemAsyncOptions:
  (~keychainService: string, ~keychainAccessible: t) => setItemAsyncOptions;

[@bs.module "expo-secure-store"]
external setItemAsync:
  (~key: string, ~value: string, ~options: setItemAsyncOptions=?, unit) =>
  Js.Promise.t(unit) =
  "setItemAsync";

type getItemAsyncOptions;
[@bs.obj]
external getItemAsyncOptions:
  (~keychainService: string) => getItemAsyncOptions;

[@bs.module "expo-secure-store"]
external getItemAsync:
  (~key: string, ~options: getItemAsyncOptions=?, unit) =>
  Js.Promise.t(Js.nullable(string)) =
  "getItemAsync";

type deleteItemAsyncOptions;
[@bs.obj]
external deleteItemAsyncOptions:
  (~keychainService: string) => deleteItemAsyncOptions;

[@bs.module "expo-secure-store"]
external deleteItemAsyncWithOptions:
  (~key: string, ~options: deleteItemAsyncOptions=?, unit) =>
  Js.Promise.t(unit) =
  "deleteItemAsync";
