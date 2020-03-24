module Constants = {
  type t;

  module Type = {
    [@bs.module "expo-camera"] [@bs.scope ("Camera", "Constants", "Type")]
    external front: t = "front";
    [@bs.module "expo-camera"] [@bs.scope ("Camera", "Constants", "Type")]
    external back: t = "back";
  };

  module FlashMode = {
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
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external on: t = "on";
    [@bs.module "expo-camera"]
    [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external off: t = "off";
  };

  module WhiteBalance = {
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
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Mode")]
      external fast: t = "fast";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Mode")]
      external accurate: t = "accurate";
    };

    module Landmarks = {
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
      external all: t = "all";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Landmarks")]
      external none: t = "none";
    };

    module Classifications = {
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Classifications")]
      external all: t = "all";
      [@bs.module "expo-camera"]
      [@bs.scope ("FaceDetector", "Constants", "Classifications")]
      external none: t = "none";
    };
  };
};

type cameraType =
  | Front
  | Back;

type flashMode =
  | On
  | Off
  | Auto
  | Torch;

type autoFocusType =
  | On
  | Off;

type whiteBalanceType =
  | Auto
  | Sunny
  | Cloudy
  | Shadow
  | Fluorescent
  | Incandescent;
type position = {
  x: float,
  y: float,
};
type face = {
  faceID: int,
  bounds,
}
and bounds = {
  origin,
  size,
  rollAngle: float,
  yawAngle: float,
  smilingProbability: Js.nullable(float),
  leftEarPosition: position,
  rightEarPosition: position,
  leftEyePosition: position,
  leftEyeOpenProbability: Js.nullable(float),
  rightEyePosition: position,
  rightEyeOpenProbability: Js.nullable(float),
  leftCheekPosition: position,
  rightCheekPosition: position,
  mouthPosition: position,
  leftMouthPosition: position,
  rightMouthPosition: position,
  noseBasePosition: position,
}
and origin = {
  x: float,
  y: float,
}
and size = {
  width: float,
  height: float,
};

type faceDetectionMode =
  | Fast
  | Accurate;

type faceDetectionLandmarks =
  | All
  | None;

type faceDetectionClassifications =
  | All
  | None;

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
type message = string;
let props =
    (
      ~type_: cameraType,
      ~flashMode: flashMode,
      ~autoFocus: autoFocusType,
      ~zoom: float,
      ~whiteBalance: whiteBalanceType,
      ~focusDepth: float,
      ~ratio: string,
      ~onCameraReady: unit => unit,
      ~onFacesDetected: onFacesDetected => unit,
      ~faceDetectionMode: faceDetectionMode,
      ~faceDetectionLandmarks: faceDetectionLandmarks,
      ~faceDetectionClassifications: faceDetectionClassifications,
      ~onMountError: message => unit,
      ~onBarCodeScanned: onBarCodeScanned => unit,
      ~barCodeScannerSettings=?,
      ~style=?,
      ~children,
    ) => {
  "type":
    switch (type_) {
    | Front => Constants.Type.front
    | Back => Constants.Type.back
    },
  "flashMode":
    switch (flashMode) {
    | On => Constants.FlashMode.on
    | Off => Constants.FlashMode.off
    | Auto => Constants.FlashMode.auto
    | Torch => Constants.FlashMode.torch
    },
  "autoFocus":
    switch (autoFocus) {
    | On => Constants.AutoFocus.on
    | Off => Constants.AutoFocus.off
    },
  "zoom": zoom,
  "whiteBalance":
    switch (whiteBalance) {
    | Auto => Constants.WhiteBalance.auto
    | Sunny => Constants.WhiteBalance.sunny
    | Cloudy => Constants.WhiteBalance.cloudy
    | Shadow => Constants.WhiteBalance.shadow
    | Fluorescent => Constants.WhiteBalance.fluorescent
    | Incandescent => Constants.WhiteBalance.incandescent
    },
  "focusDepth": focusDepth,
  "ratio": ratio,
  "onCameraReady": onCameraReady,
  "onFacesDetected": onFacesDetected,
  "faceDetectionMode":
    switch (faceDetectionMode) {
    | Fast => Constants.FaceDetection.Mode.fast
    | Accurate => Constants.FaceDetection.Mode.accurate
    },
  "faceDetectionLandmarks":
    switch (faceDetectionLandmarks) {
    | All => Constants.FaceDetection.Landmarks.all
    | None => Constants.FaceDetection.Landmarks.none
    },
  "faceDetectionClassifications":
    switch (faceDetectionClassifications) {
    | All => Constants.FaceDetection.Classifications.all
    | None => Constants.FaceDetection.Classifications.none
    },
  "onMountError": onMountError,
  "onBarCodeScanned": onBarCodeScanned,
  "barCodeScannerSettings": Js.Nullable.fromOption(barCodeScannerSettings),
  "style": Js.Undefined.fromOption(style),
  "children": children,
};

[@bs.module "expo-camera"] [@react.component]
external make: props => React.element = "Camera";
/* external make: 'a => React.element = "Camera"*/