module Constants = {
  module Type = {
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "Type")]
    external front : 'a = "front";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "Type")]
    external back : 'a = "back";
  };
  module FlashMode = {
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "FlashMode")]
    external on : 'a = "on";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "FlashMode")]
    external off : 'a = "off";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "FlashMode")]
    external auto : 'a = "auto";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "FlashMode")]
    external torch : 'a = "torch";
  };
  module AutoFocus = {
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external on : 'a = "on";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "AutoFocus")]
    external off : 'a = "off";
  };
  module WhiteBalance = {
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external auto : 'a = "auto";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external sunny : 'a = "sunny";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external cloudy : 'a = "cloudy";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external shadow : 'a = "shadow";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external fluorescent : 'a = "fluorescent";
    [@bs.module "expo"] [@bs.scope ("Camera", "Constants", "WhiteBalance")]
    external incandescent : 'a = "incandescent";
  };
  module FaceDetection = {
    module Mode = {
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Mode")]
      external fast : 'a = "fast";
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Mode")]
      external accurate : 'a = "accurate";
    };
    module Landmarks = {
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Landmarks")]
      external all : 'a = "all";
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Landmarks")]
      external none : 'a = "none";
    };
    module Classifications = {
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Classifications")]
      external all : 'a = "all";
      [@bs.module "expo"]
      [@bs.scope ("Camera", "Constants", "FaceDetection", "Classifications")]
      external none : 'a = "none";
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

type face = {
  .
  faceID: int,
  bounds: {
    .
    origin: {
      .
      x: float,
      y: float,
    },
    size: {
      .
      width: float,
      height: float,
    },
    rollAngle: float,
    yawAngle: float,
    smilingProbability: Js.nullable(float),
    leftEarPosition: {
      .
      x: float,
      y: float,
    },
    rightEarPosition: {
      .
      x: float,
      y: float,
    },
    leftEyePosition: {
      .
      x: float,
      y: float,
    },
    leftEyeOpenProbability: Js.nullable(float),
    rightEyePosition: {
      .
      x: float,
      y: float,
    },
    rightEyeOpenProbability: Js.nullable(float),
    leftCheekPosition: {
      .
      x: float,
      y: float,
    },
    rightCheekPosition: {
      .
      x: float,
      y: float,
    },
    mouthPosition: {
      .
      x: float,
      y: float,
    },
    leftMouthPosition: {
      .
      x: float,
      y: float,
    },
    rightMouthPosition: {
      .
      x: float,
      y: float,
    },
    noseBasePosition: {
      .
      x: float,
      y: float,
    },
  },
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

[@bs.module "expo"] external js : ReasonReact.reactClass = "Camera";

let make =
    (
      ~type_: cameraType,
      ~flashMode: flashMode,
      ~autoFocus: autoFocusType,
      ~zoom: float,
      ~whiteBalance: whiteBalanceType,
      ~focusDepth: float,
      ~ratio: string,
      ~onCameraReady: unit => unit,
      ~onFacesDetected: {. "faces": array(face)} => unit,
      ~faceDetectionMode: faceDetectionMode,
      ~faceDetectionLandmarks: faceDetectionLandmarks,
      ~faceDetectionClassifications: faceDetectionClassifications,
      ~onMountError: {. "message": string} => unit,
      ~onBarCodeRead:
         {
           .
           "type": string,
           "data": string,
         } =>
         unit,
      ~barCodeTypes: array(string),
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props={
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
      "onBarCodeRead": onBarCodeRead,
      "barCodeTypes": barCodeTypes,
      "style": Js.Undefined.fromOption(style),
    },
    children,
  );