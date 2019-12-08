module Constants = {
  module Mode = {
    type t;

    [@bs.module "expo-face-detector"] [@bs.scope ("Constants", "Mode")]
    external fast: t = "fast";

    [@bs.module "expo-face-detector"] [@bs.scope ("Constants", "Mode")]
    external accurate: t = "accurate";
  };

  module Landmarks = {
    type t;

    [@bs.module "expo-face-detector"] [@bs.scope ("Constants", "Landmarks")]
    external all: t = "all";

    [@bs.module "expo-face-detector"] [@bs.scope ("Constants", "Landmarks")]
    external none: t = "none";
  };

  module Classifications = {
    type t;

    [@bs.module "expo-face-detector"]
    [@bs.scope ("Constants", "Classifications")]
    external all: t = "all";

    [@bs.module "expo-face-detector"]
    [@bs.scope ("Constants", "Classifications")]
    external none: t = "none";
  };
};

// [@bs.deriving abstract]
type point = {
  x: int,
  y: int,
};

// [@bs.deriving abstract]
type faceFeature = {
  bounds,
  smilingProbability: Js.Nullable.t(float),
  leftEarPosition: Js.Nullable.t(point),
  rightEarPosition: Js.Nullable.t(point),
  leftEyePosition: Js.Nullable.t(point),
  leftEyeOpenProbability: Js.Nullable.t(float),
  rightEyePosition: Js.Nullable.t(point),
  rightEyeOpenProbability: Js.Nullable.t(float),
  leftCheekPosition: Js.Nullable.t(point),
  rightCheekPosition: Js.Nullable.t(point),
  leftMouthPosition: Js.Nullable.t(point),
  mouthPosition: Js.Nullable.t(point),
  rightMouthPosition: Js.Nullable.t(point),
  bottomMouthPosition: Js.Nullable.t(point),
  noseBasePosition: Js.Nullable.t(point),
  yawAngle: Js.Nullable.t(float),
  rollAngle: Js.Nullable.t(float),
}
and bounds = {
  size,
  origin: point,
}
and size = {
  width: int,
  height: int,
};

// [@bs.deriving abstract]
type detectionOptions = {
  mode: Js.Nullable.t(Constants.Mode.t),
  detectLandmarks: Js.Nullable.t(Constants.Landmarks.t),
  runClassifications: Js.Nullable.t(Constants.Classifications.t),
};
type detectFacesAsyncResponse = {
  faces: array(faceFeature),
  image,
}
and image = {
  uri: string,
  width: float,
  height: float,
  orientation: int,
};
[@bs.module "expo-face-detector"]
external detectFacesAsync:
  (string, detectionOptions) => Js.Promise.t(detectFacesAsyncResponse) =
  "detectFacesAsync";