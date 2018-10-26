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

module TSpan = {
  external js : ReasonReact.reactClass = "TSpan";
  [@bs.deriving abstract]
  type props = {
    x: string,
    y: string,
    dx: string,
    dy: string,
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
        ~dx,
        ~dy,
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
          ~dx,
          ~dy,
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

module TextPath = {
  external js : ReasonReact.reactClass = "TextPath";
  [@bs.deriving abstract]
  type props = {
    href: string,
    startOffset: string,
  };
  let make = (~href, ~startOffset, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~href, ~startOffset),
      children,
    );
};

module G = {
  external js : ReasonReact.reactClass = "G";
  [@bs.deriving abstract]
  type props = {
    rotation: string,
    origin: string,
  };
  let make = (~rotation, ~origin, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~rotation, ~origin),
      children,
    );
};

module Use = {
  external js : ReasonReact.reactClass = "Use";
  [@bs.deriving abstract]
  type props = {
    href: string,
    x: string,
    y: string,
  };
  let make = (~href, ~x, ~y, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~href, ~x, ~y),
      children,
    );
};

module Symbol = {
  external js : ReasonReact.reactClass = "Symbol";
  [@bs.deriving abstract]
  type props = {
    id: string,
    viewBox: string,
    width: string,
    height: string,
  };
  let make = (~id, ~viewBox, ~width, ~height, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~id, ~viewBox, ~width, ~height),
      children,
    );
};

module Defs = {
  external js : ReasonReact.reactClass = "Defs";
  let make = children =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=Js.Obj.empty(),
      children,
    );
};

module Image = {
  external js : ReasonReact.reactClass = "Image";
  [@bs.deriving abstract]
  type props = {
    x: string,
    y: string,
    width: string,
    height: string,
    preserveAspectRatio: string,
    opacity: string,
    href: string,
    clipPath: string,
  };
  let make =
      (
        ~x,
        ~y,
        ~width,
        ~height,
        ~preserveAspectRatio,
        ~opacity,
        ~href,
        ~clipPath,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=
        props(
          ~x,
          ~y,
          ~width,
          ~height,
          ~preserveAspectRatio,
          ~opacity,
          ~href,
          ~clipPath,
        ),
      children,
    );
};

module ClipPath = {
  external js : ReasonReact.reactClass = "ClipPath";
  [@bs.deriving abstract]
  type props = {id: string};
  let make = (~id, children) =>
    ReasonReact.wrapJsForReason(~reactClass=js, ~props=props(~id), children);
};

module LinearGradient = {
  external js : ReasonReact.reactClass = "LinearGradient";
  [@bs.deriving abstract]
  type props = {
    id: string,
    x1: string,
    y1: string,
    x2: string,
    y2: string,
  };
  let make = (~id, ~x1, ~y1, ~x2, ~y2, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~id, ~x1, ~y1, ~x2, ~y2),
      children,
    );
};

module RadialGradient = {
  external js : ReasonReact.reactClass = "RadialGradient";
  [@bs.deriving abstract]
  type props = {
    id: string,
    cx: string,
    cy: string,
    rx: string,
    ry: string,
    fx: string,
    fy: string,
    gradientUnits: string,
  };
  let make = (~id, ~cx, ~cy, ~rx, ~ry, ~fx, ~fy, ~gradientUnits, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~id, ~cx, ~cy, ~rx, ~ry, ~fx, ~fy, ~gradientUnits),
      children,
    );
};

module Stop = {
  external js : ReasonReact.reactClass = "Stop";
  [@bs.deriving abstract]
  type props = {
    offset: string,
    stopColor: string,
    stopOpacity: string,
  };
  let make = (~offset, ~stopColor, ~stopOpacity, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props=props(~offset, ~stopColor, ~stopOpacity),
      children,
    );
};