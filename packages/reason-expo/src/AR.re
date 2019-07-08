module HitTestResultTypes = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external featurePoint: t = "FeaturePoint";

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external horizontalPlane: t = "HorizontalPlane";

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external verticalPlane: t = "VerticalPlane";

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external existingPlane: t = "ExistingPlane";

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external existingPlaneUsingExtent: t = "ExistingPlaneUsingExtent";

  [@bs.module "expo"] [@bs.scope ("AR", "HitTestResultTypes")]
  external existingPlaneUsingGeometry: t = "ExistingPlaneUsingGeometry";
};

module TrackingConfiguration = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingConfiguration")]
  external world: t = "World";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingConfiguration")]
  external orientation: t = "Orientation";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingConfiguration")]
  external face: t = "Face";
};

module DepthDataQuality = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "DepthDataQuality")]
  external low: t = "Low";

  [@bs.module "expo"] [@bs.scope ("AR", "DepthDataQuality")]
  external high: t = "High";
};

module DepthDataAccuracy = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "DepthDataAccuracy")]
  external absolute: t = "Absolute";

  [@bs.module "expo"] [@bs.scope ("AR", "DepthDataAccuracy")]
  external relative: t = "Relative";
};

module BlendShape = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external browDownL: t = "BrowDownL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external browDownR: t = "BrowDownR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external browInnerUp: t = "BrowInnerUp";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external browOuterUpL: t = "BrowOuterUpL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external browOuterUpR: t = "BrowOuterUpR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external cheekPuff: t = "CheekPuff";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external cheekSquintL: t = "CheekSquintL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external cheekSquintR: t = "CheekSquintR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeBlinkL: t = "EyeBlinkL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeBlinkR: t = "EyeBlinkR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookDownL: t = "EyeLookDownL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookDownR: t = "EyeLookDownR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookInL: t = "EyeLookInL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookInR: t = "EyeLookInR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookOutL: t = "EyeLookOutL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookOutR: t = "EyeLookOutR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookUpL: t = "EyeLookUpL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeLookUpR: t = "EyeLookUpR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeSquintL: t = "EyeSquintL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeSquintR: t = "EyeSquintR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeWideL: t = "EyeWideL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external eyeWideR: t = "EyeWideR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external jawForward: t = "JawForward";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external jawLeft: t = "JawLeft";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external jawOpen: t = "JawOpen";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external jawRight: t = "JawRight";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthClose: t = "MouthClose";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthDimpleL: t = "MouthDimpleL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthDimpleR: t = "MouthDimpleR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthFrownL: t = "MouthFrownL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthFrownR: t = "MouthFrownR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthFunnel: t = "MouthFunnel";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthLeft: t = "MouthLeft";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthLowerDownL: t = "MouthLowerDownL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthLowerDownR: t = "MouthLowerDownR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthPressL: t = "MouthPressL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthPressR: t = "MouthPressR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthPucker: t = "MouthPucker";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthRight: t = "MouthRight";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthRollLower: t = "MouthRollLower";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthRollUpper: t = "MouthRollUpper";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthShrugLower: t = "MouthShrugLower";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthShrugUpper: t = "MouthShrugUpper";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthSmileL: t = "MouthSmileL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthSmileR: t = "MouthSmileR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthStretchL: t = "MouthStretchL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthStretchR: t = "MouthStretchR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthUpperUpL: t = "MouthUpperUpL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external mouthUpperUpR: t = "MouthUpperUpR";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external noseSneerL: t = "NoseSneerL";

  [@bs.module "expo"] [@bs.scope ("AR", "BlendShape")]
  external noseSneerR: t = "NoseSneerR";
};

module FaceAnchorProp = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "FaceAnchorProp")]
  external geometry: t = "Geometry";

  [@bs.module "expo"] [@bs.scope ("AR", "FaceAnchorProp")]
  external blendShapes: t = "BlendShapes";
};

module PlaneDetection = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "PlaneDetection")]
  external none: t = "None";

  [@bs.module "expo"] [@bs.scope ("AR", "PlaneDetection")]
  external horizontal: t = "Horizontal";

  [@bs.module "expo"] [@bs.scope ("AR", "PlaneDetection")]
  external vertical: t = "Vertical";
};

module WorldAlignment = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "WorldAlignment")]
  external gravity: t = "Gravity";

  [@bs.module "expo"] [@bs.scope ("AR", "WorldAlignment")]
  external gravityAndHeading: t = "GravityAndHeading";

  [@bs.module "expo"] [@bs.scope ("AR", "WorldAlignment")]
  external alignmentCamera: t = "AlignmentCamera";
};

module EventType = {
  type t;

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external frameDidUpdate: t = "FrameDidUpdate";

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external didFailWithError: t = "DidFailWithError";

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external anchorsDidUpdate: t = "AnchorsDidUpdate";

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external cameraDidChangeTrackingState: t = "CameraDidChangeTrackingState";

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external sessionWasInterrupted: t = "SessionWasInterrupted";

  [@bs.module "expo"] [@bs.scope ("AR", "EventType")]
  external sessionInterruptionEnded: t = "SessionInterruptionEnded";
};

module AnchorType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorType")]
  external face: t = "Face";

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorType")]
  external image: t = "Image";

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorType")]
  external plane: t = "Plane";

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorType")]
  external anchor: t = "Anchor";
};

module AnchorEventType = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorEventType")]
  external add: t = "Add";

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorEventType")]
  external update: t = "Update";

  [@bs.module "expo"] [@bs.scope ("AR", "AnchorEventType")]
  external remove: t = "Remove";
};

module FrameAttribute = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "FrameAttribute")]
  external anchors: t = "Anchors";

  [@bs.module "expo"] [@bs.scope ("AR", "FrameAttribute")]
  external rawFeaturePoints: t = "RawFeaturePoints";

  [@bs.module "expo"] [@bs.scope ("AR", "FrameAttribute")]
  external lightEstimation: t = "LightEstimation";

  [@bs.module "expo"] [@bs.scope ("AR", "FrameAttribute")]
  external capturedDepthData: t = "CapturedDepthData";
};

module TrackingState = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingState")]
  external notAvailable: t = "NotAvailable";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingState")]
  external limited: t = "Limited";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingState")]
  external normal: t = "Normal";
};

module TrackingStateReason = {
  type t = string;

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingStateReason")]
  external none: t = "None";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingStateReason")]
  external initializing: t = "Initializing";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingStateReason")]
  external excessiveMotion: t = "ExcessiveMotion";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingStateReason")]
  external insufficientFeatures: t = "InsufficientFeatures";

  [@bs.module "expo"] [@bs.scope ("AR", "TrackingStateReason")]
  external relocalizing: t = "Relocalizing";
};

[@bs.deriving abstract]
type size = {
  width: float,
  height: float,
};

[@bs.deriving abstract]
type vector3 = {
  x: float,
  y: float,
  z: float,
};

[@bs.deriving abstract]
type vector2 = {
  x: float,
  y: float,
};

[@bs.deriving abstract]
type textureCoordinate = {
  u: float,
  v: float,
};

type matrix = array(float);

[@bs.deriving abstract]
type faceGeometry = {
  vertexCount: float,
  textureCoordinateCount: float,
  triangleCount: float,
  vertices: array(vector3),
  textureCoordinates: array(textureCoordinate),
  triangleIndices: array(float),
};

[@bs.deriving abstract]
type anchor = {
  [@bs.as "type"]
  type_: AnchorType.t,
  transform: matrix,
  id: string,
  [@bs.optional]
  center: vector3,
  [@bs.optional]
  extent: {
    .
    width: float,
    length: float,
  },
  [@bs.optional]
  image: {
    .
    name: string,
    size: size,
  },
  [@bs.optional]
  geometry: faceGeometry,
  [@bs.optional]
  blendShapes: Js.Dict.t(float),
};

[@bs.deriving abstract]
type hitTest = {
  [@bs.as "type"]
  type_: float,
  distance: float,
  localTransform: array(float),
  worldTransform: array(float),
  anchor,
};

[@bs.deriving abstract]
type hitTestResults = {hitTest};

[@bs.deriving abstract]
type detectionImage = {
  uri: string,
  width: float,
  [@bs.optional]
  name: string,
};

[@bs.deriving abstract]
type arFrameAnchorRequest = {
  [@bs.as "ARFaceTrackingConfiguration"] [@bs.optional]
  arFaceTrackingConfiguration: {
    .
    geometry: bool,
    blendShapes: array(BlendShape.t),
  },
};

[@bs.deriving abstract]
type arFrameRequest = {
  [@bs.optional]
  anchors: arFrameAnchorRequest,
  [@bs.optional]
  rawFeaturePoints: bool,
  [@bs.optional]
  lightEstimation: bool,
  [@bs.optional]
  capturedDepthData: bool,
};

[@bs.deriving abstract]
type lightEstimation = {
  ambientIntensity: float,
  ambientColorTemperature: float,
  [@bs.optional]
  primaryLightDirection: vector3,
  [@bs.optional]
  primaryLightIntensity: float,
};

[@bs.deriving abstract]
type rawFeaturePoint = {
  x: float,
  y: float,
  z: float,
  id: string,
};

[@bs.deriving abstract]
type cameraCalibrationData(
  'lensDistortionLookupTable,
  'inverseLensDistortionLookupTable,
) = {
  intrinsicMatrix: matrix,
  intrinsicMatrixReferenceDimensions: size,
  extrinsicMatrix: matrix,
  pixelSize: float,
  lensDistortionLookupTable: 'lensDistortionLookupTable,
  inverseLensDistortionLookupTable: 'inverseLensDistortionLookupTable,
  lensDistortionCenter: vector3,
};

[@bs.deriving abstract]
type capturedDepthData = {
  timestamp: float,
  depthDataQuality: DepthDataQuality.t,
  depthDataAccuracy: DepthDataAccuracy.t,
  depthDataFiltered: bool,
  cameraCalibrationData: cameraCalibrationData(string, string),
};

[@bs.deriving abstract]
type arFrame = {
  timestamp: float,
  [@bs.optional]
  anchors: array(anchor),
  [@bs.optional]
  rawFeaturePoints: array(rawFeaturePoint),
  [@bs.optional]
  lightEstimation,
  [@bs.optional]
  capturedDepthData,
};

[@bs.deriving abstract]
type arMatrices = {
  transform: matrix,
  viewMatrix: matrix,
  projectionMatrix: matrix,
};

[@bs.deriving abstract]
type arStartResult = {capturedImageTexture: float};

[@bs.deriving abstract]
type imageResolution = {
  width: float,
  height: float,
};

[@bs.deriving abstract]
type videoFormat = {
  [@bs.as "type"]
  type_: string,
  imageResolution,
  framesPerSecond: float,
};

[@bs.module "expo"] [@bs.scope "AR"] external isAvailable: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"] external getVersion: unit => string = "";

[@bs.module "expo"] [@bs.scope "AR"]
external removeAllListeners: EventType.t => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external onFrameDidUpdate: (unit => unit) => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external onDidFailWithError: ({. error: string} => unit) => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external onAnchorsDidUpdate:
  (
    {
      .
      anchors: array(anchor),
      eventType: AnchorEventType.t,
    } =>
    unit
  ) =>
  unit =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external onCameraDidChangeTrackingState:
  (
    {
      .
      trackingState: TrackingState.t,
      trackingStateReason: TrackingStateReason.t,
    } =>
    unit
  ) =>
  unit =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external onSessionWasInterrupted: (unit => unit) => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external onSessionInterruptionEnded: (unit => unit) => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external performHitTest:
  (
    {
      .
      x: float,
      y: float,
    },
    HitTestResultTypes.t
  ) =>
  hitTestResults =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external setDetectionImagesAsync:
  Js.Dict.t(detectionImage) => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external getCurrentFrame: arFrameRequest => Js.Nullable.t(arFrame) = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getARMatrices: (float, float) => array(arMatrices) = "";

[@bs.module "expo"] [@bs.scope "AR"]
external startAsync:
  (React.Ref.t(React.element), TrackingConfiguration.t) => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external stopAsync: unit => Js.Promise.t(unit) = "";

[@bs.module "expo"] [@bs.scope "AR"] external reset: unit => unit = "";

[@bs.module "expo"] [@bs.scope "AR"] external pause: unit => unit = "";

[@bs.module "expo"] [@bs.scope "AR"] external resume: unit => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external isConfigurationAvailable: TrackingConfiguration.t => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setConfigurationAsync: TrackingConfiguration.t => Js.Promise.t(unit) =
  "";

[@bs.module "expo"] [@bs.scope "AR"]
external isFrontCameraAvailable: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external isRearCameraAvailable: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external planeDetection: unit => PlaneDetection.t = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setPlaneDetection: PlaneDetection.t => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setWorldOriginAsync: matrix => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setLightEstimationEnabled: bool => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getLightEstimationEnabled: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setProvidesAudioData: bool => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getProvidesAudioData: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setAutoFocusEnabled: bool => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getAutoFocusEnabled: unit => bool = "";

[@bs.module "expo"] [@bs.scope "AR"]
external setWorldAlignment: WorldAlignment.t => unit = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getWorldAlignment: unit => WorldAlignment.t = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getCameraTexture: unit => float = "";

[@bs.module "expo"] [@bs.scope "AR"]
external getSupportedVideoFormats:
  TrackingConfiguration.t => array(videoFormat) =
  "";