[@bs.module "expo"] [@bs.scope "Svg"]
external js : ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type props = {
  height: string,
  width: string,
};

let make = (~height, ~width, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=js,
    ~props=props(~height, ~width),
    children,
  );

module Rect = {
  external js : ReasonReact.reactClass = "Rect";
  [@bs.deriving abstract]
  type props = {
    x: string,
    y: string,
    width: string,
    height: string,
    fill: string,
    strokeWidth: string,
    stroke: string,
  };
  let make = (~x, ~y, ~width, ~height, ~fill, ~strokeWidth, ~stroke, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~x, ~y, ~width, ~height, ~fill, ~strokeWidth, ~stroke),
      children,
    );
};

module Circle = {
  external js : ReasonReact.reactClass = "Circle";
  [@bs.deriving abstract]
  type props = {
    cx: string,
    cy: string,
    r: string,
    fill: string,
  };
  let make = (~cx: string, ~cy: string, ~r: string, ~fill: string, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~cx, ~cy, ~r, ~fill),
      children,
    );
};

module Ellipse = {
  external js : ReasonReact.reactClass = "Ellipse";
  [@bs.deriving abstract]
  type props = {
    cx: string,
    cy: string,
    rx: string,
    ry: string,
    stroke: string,
    strokeWidth: string,
    fill: string,
  };
  let make = (~cx, ~cy, ~rx, ~ry, ~fill, ~stroke, ~strokeWidth, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~cx, ~cy, ~rx, ~ry, ~stroke, ~strokeWidth, ~fill),
      children,
    );
};

module Line = {
  external js : ReasonReact.reactClass = "Line";
  [@bs.deriving abstract]
  type props = {
    x1: string,
    y1: string,
    x2: string,
    y2: string,
    stroke: string,
    strokeWidth: string,
  };
  let make = (~x1, ~y1, ~x2, ~y2, ~stroke, ~strokeWidth, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~x1, ~y1, ~x2, ~y2, ~stroke, ~strokeWidth),
      children,
    );
};

module Polygon = {
  external js : ReasonReact.reactClass = "Polygon";
  [@bs.deriving abstract]
  type props = {
    points: string,
    fill: string,
    stroke: string,
    strokeWidth: string,
  };
  let make = (~points, ~fill, ~stroke, ~strokeWidth, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~points, ~fill, ~stroke, ~strokeWidth),
      children,
    );
};

module Polyline = {
  external js : ReasonReact.reactClass = "Polyline";
  [@bs.deriving abstract]
  type props = {
    points: string,
    fill: string,
    stroke: string,
    strokeWidth: string,
  };
  let make = (~points, ~fill, ~stroke, ~strokeWidth, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~points, ~fill, ~stroke, ~strokeWidth),
      children,
    );
};

module Path = {
  external js : ReasonReact.reactClass = "Path";
  [@bs.deriving abstract]
  type props = {
    d: string,
    fill: string,
    stroke: string,
  };
  let make = (~d, ~fill, ~stroke, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~d, ~fill, ~stroke),
      children,
    );
};

module Text = {
  external js : ReasonReact.reactClass = "Text";
  [@bs.deriving abstract]
  type props = {
    x: string,
    y: string,
    fontSize: string,
    fontWeight: string,
    textAnchor: string,
    fill: string,
    stroke: string,
    strokeWidth: string,
  };
  let make =
      (
        ~x,
        ~y,
        ~fontSize,
        ~fontWeight,
        ~textAnchor,
        ~fill,
        ~stroke,
        ~strokeWidth,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=
        props(
          ~x,
          ~y,
          ~fontSize,
          ~fontWeight,
          ~textAnchor,
          ~fill,
          ~stroke,
          ~strokeWidth,
        ),
      children,
    );
};