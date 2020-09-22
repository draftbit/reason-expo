type keychainAccessibilityType;

let whenUnlocked: keychainAccessibilityType;

let afterFirstUnlock: keychainAccessibilityType;

let always: keychainAccessibilityType;

let whenUnlockedThisDeviceOnly: keychainAccessibilityType;

let whenPasscodeSetThisDeviceOnly: keychainAccessibilityType;

let afterFirstUnlockThisDeviceOnly: keychainAccessibilityType;

let alwaysThisDeviceOnly: keychainAccessibilityType;

[@bs.deriving abstract]
type setItemAsyncOptions = {
  keychainService: string,
  keychainAccessible: keychainAccessibilityType,
};

let setItemAsync:
  (~key: string, ~value: string, ~options: setItemAsyncOptions=?, unit) =>
  Js.Promise.t(unit);

[@bs.deriving abstract]
type getItemAsyncOptions = {keychainService: string};

let getItemAsync:
  (~key: string, ~options: getItemAsyncOptions=?, unit) =>
  Js.Promise.t(Js.nullable(string));

[@bs.deriving abstract]
type deleteItemAsyncOptions = {keychainService: string};

let deleteItemAsync:
  (~key: string, ~options: deleteItemAsyncOptions=?, unit) =>
  Js.Promise.t(unit);
