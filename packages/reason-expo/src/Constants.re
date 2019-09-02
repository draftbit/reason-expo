type platforms = array(string);

[@bs.deriving {abstract: light}]
type ios = {supportsTablet: bool};

[@bs.deriving {abstract: light}]
type developer = {
  projectRoot: string,
  tool: string,
};

[@bs.deriving {abstract: light}]
type packagerOpts = {
  dev: bool,
  hostType: string,
  lanType: string,
  minify: bool,
  urlRandomness: string,
};

[@bs.deriving {abstract: light}]
type splash = {
  backgroundColor: string,
  image: string,
  imageUrl: string,
  resizeMode: string,
};

[@bs.deriving {abstract: light}]
type updates = {fallbackToCacheTimeout: int};

[@bs.deriving {abstract: light}]
type manifest = {
  assetBundlePatterns: array(string),
  bundleUrl: string,
  debuggerHost: string,
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

[@bs.deriving {abstract: light}]
type platformIOS = {
  buildNumber: string,
  platform: string,
  model: string,
  userInterfaceIdiom: string,
  systemVersion: string,
};

[@bs.deriving {abstract: light}]
type platformAndroid = {versionCode: int};

[@bs.deriving {abstract: light}]
type platform = {
  ios: platformIOS,
  android: platformAndroid,
};

[@bs.deriving {abstract: light}]
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

[@bs.module "expo-constants"] external constants: t = "default";

let deviceId = constants->deviceId;
let deviceName = constants->deviceName;
let deviceYearClass = constants->deviceYearClass;
let linkingUrl = constants->linkingUrl;
let statusBarHeight = constants->statusBarHeight;
let appOwnership = constants->appOwnership;
let expoVersion = constants->expoVersion;
let installationId = constants->installationId;
let isDevice = constants->isDevice;
let getWebViewUserAgentAsync = constants->getWebViewUserAgentAsync;
let systemFonts = constants->systemFonts;
let platform = constants->platform;
let sessionId = constants->sessionId;
let manifest = constants->manifest;
