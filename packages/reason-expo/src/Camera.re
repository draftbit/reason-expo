module Constants = {
  module Type = {
    type t;

    [@bs.module "expo-camera"] [@bs.scope ("Camera", "Constants", "Type")]
    external front: t = "front";
    [@bs.module "expo-camera"] [@bs.scope ("Camera", "Constants", "Type")]
    external back: t = "back";
  };

  module FlashMode = {
    type t;

    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "FlashMode")]
    external on: t = "on";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "FlashMode")]
    external off: t = "off";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "FlashMode")]
    external auto: t = "auto";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "FlashMode")]
    external torch: t = "torch";
  };

  module AutoFocus = {
    type t;

    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external on: t = "on";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external off: t = "off";
  };

  module WhiteBalance = {
    type t;

    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external auto: t = "auto";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external sunny: t = "sunny";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external cloudy: t = "cloudy";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external shadow: t = "shadow";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external fluorescent: t = "fluorescent";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external incandescent: t = "incandescent";
  };

  module FaceDetection = {
    module Mode = {
      type t;

      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Mode")]
      external fast: t = "fast";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Mode")]
      external accurate: t = "accurate";
    };

    module Landmarks = {
      type t;

      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
      external all: t = "all";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
      external none: t = "none";
    };

    module Classifications = {
      type t;

      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Classifications")]
      external all: t = "all";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Classifications")]
      external none: t = "none";
    };
  };
};

type face = {
  faceID: int,
  bounds,
}
and bounds = {
  origin: xy,
  size,
  rollAngle: float,
  yawAngle: float,
  smilingProbability: Js.nullable(float),
  leftEarPosition: xy,
  rightEarPosition: xy,
  leftEyePosition: xy,
  leftEyeOpenProbability: Js.nullable(float),
  rightEyePosition: xy,
  rightEyeOpenProbability: Js.nullable(float),
  leftCheekPosition: xy,
  rightCheekPosition: xy,
  mouthPosition: xy,
  leftMouthPosition: xy,
  rightMouthPosition: xy,
  noseBasePosition: xy,
}
and size = {
  width: float,
  height: float,
}
and xy = {
  x: float,
  y: float,
};

type barCodeScannerSettings = {
  barCodeTypes: array(string),
  useCamera2Api: bool,
};
type onBarCodeScanned = {
  [@bs.as "type"]
  _type: string,
  data: string,
};

type onFacesDetected = {faces: array(face)};

[@bs.module "expo-camera"] [@react.component]
external make:
  (
    ~type_: Constants.Type.t,
    ~flashMode: Constants.FlashMode.t,
    ~autoFocus: Constants.AutoFocus.t,
    ~zoom: float,
    ~whiteBalance: Constants.WhiteBalance.t,
    ~focusDepth: float,
    ~ratio: string,
    ~onCameraReady: unit => unit,
    ~onFacesDetected: onFacesDetected => unit,
    ~faceDetectionMode: Constants.FaceDetection.Mode.t,
    ~faceDetectionLandmarks: Constants.FaceDetection.Landmarks.t,
    ~faceDetectionClassifications: Constants.FaceDetection.Classifications.t,
    ~onMountError: string => unit,
    ~onBarCodeScanned: onBarCodeScanned => unit,
    ~barCodeScannerSettings: barCodeScannerSettings=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "Camera";
