module Constants = {
  module Mode = {
    type t;

    [@bs.module "expo"] [@bs.scope ("FaceDetector", "Constants", "Mode")]
    external fast: t = "";

    [@bs.module "expo"] [@bs.scope ("FaceDetector", "Constants", "Mode")]
    external accurate: t = "";
  };

  module Landmarks = {
    type t;

    [@bs.module "expo"] [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
    external all: t = "";

    [@bs.module "expo"] [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
    external none: t = "";
  };

  module Classifications = {
    type t;

    [@bs.module "expo"]
    [@bs.scope ("FaceDetector", "Constants", "Classifications")]
    external all: t = "";

    [@bs.module "expo"]
    [@bs.scope ("FaceDetector", "Constants", "Classifications")]
    external none: t = "";
  };
};

[@bs.deriving abstract]
type point = {
  x: int,
  y: int,
};

[@bs.deriving abstract]
type faceFeature = {
  bounds: {
    .
    size: {
      .
      width: int,
      height: int,
    },
    origin: point,
  },
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
};

[@bs.deriving abstract]
type detectionOptions = {
  mode: Js.Nullable.t(Constants.Mode.t),
  detectLandmarks: Js.Nullable.t(Constants.Landmarks.t),
  runClassifications: Js.Nullable.t(Constants.Classifications.t),
};

[@bs.module "expo"] [@bs.scope "FaceDetector"]
external detectFacesAsync:
  (string, detectionOptions) =>
  Js.Promise.t({
    .
    "faces": array(faceFeature),
    "image": {
      .
      "uri": string,
      "width": float,
      "height": float,
      "orientation": int,
    },
  }) =
  "";