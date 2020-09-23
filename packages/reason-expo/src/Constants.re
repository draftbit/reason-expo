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

[@bs.module "expo-constants"] external constants: t = "default";
