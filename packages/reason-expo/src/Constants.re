type platforms = array(string);

type ios = {supportsTablet: bool};

type developer = {
  projectRoot: string,
  tool: string,
};

type packagerOpts = {
  dev: bool,
  hostType: string,
  lanType: string,
  minify: bool,
  urlRandomness: string,
};

type splash = {
  backgroundColor: string,
  image: string,
  imageUrl: string,
  resizeMode: string,
};

type updates = {fallbackToCacheTimeout: int};

type manifest = {
  assetBundlePatterns: array(string),
  bundleUrl: string,
  releaseChannel: option(string),
  debuggerHost: option(string),
  developer,
  env: Js.t({.}),
  hostUri: string,
  icon: string,
  iconUrl: string,
  id: string,
  ios,
  isVerified: bool,
  loadedFromCache: bool,
  logUrl: string,
  mainModuleName: string,
  name: string,
  orientation: string,
  packagerOpts,
  platforms,
  privacy: string,
  sdkVersion: string,
  slug: string,
  splash,
  updates,
  version: string,
  xde: bool,
};

type platformIOS = {
  buildNumber: string,
  platform: string,
  model: string,
  userInterfaceIdiom: string,
  systemVersion: string,
};

type platformAndroid = {versionCode: int};

type platform = {
  ios: platformIOS,
  android: platformAndroid,
};

type t = {
  appOwnership: string,
  debugMode: bool,
  deviceId: string,
  deviceName: string,
  deviceYearClass: int,
  experienceUrl: string,
  expoRuntimeVersion: string,
  expoVersion: string,
  getWebViewUserAgentAsync: unit => Js.Promise.t(string),
  installationId: string,
  isDetached: bool,
  isDevice: bool,
  isHeadless: bool,
  linkingUri: string,
  linkingUrl: string,
  manifest,
  nativeAppVersion: string,
  nativeBuildVersion: string,
  platform,
  sessionId: string,
  statusBarHeight: int,
  supportedExpoSdks: array(string),
  systemFonts: array(string),
};

[@bs.module "expo-constants"] external _constants: t = "default";

let appOwnership = _constants.appOwnership;
let debugMode = _constants.debugMode;
let deviceId = _constants.deviceId;
let deviceName = _constants.deviceName;
let deviceYearClass = _constants.deviceYearClass;
let experienceUrl = _constants.experienceUrl;
let expoRuntimeVersion = _constants.expoRuntimeVersion;
let expoVersion = _constants.expoVersion;
let getWebViewUserAgentAsync = _constants.getWebViewUserAgentAsync;
let installationId = _constants.installationId;
let isDetached = _constants.isDetached;
let isDevice = _constants.isDevice;
let isHeadless = _constants.isHeadless;
let linkingUri = _constants.linkingUri;
let linkingUrl = _constants.linkingUrl;
let manifest = _constants.manifest;
let nativeAppVersion = _constants.nativeAppVersion;
let nativeBuildVersion = _constants.nativeBuildVersion;
let platform = _constants.platform;
let sessionId = _constants.sessionId;
let statusBarHeight = _constants.statusBarHeight;
let supportedExpoSdks = _constants.supportedExpoSdks;
let systemFonts = _constants.systemFonts;
