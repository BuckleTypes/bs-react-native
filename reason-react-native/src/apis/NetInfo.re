module ConnectionType = {
  type t = string;

  [@bs.inline]
  let bluetooth = "bluetooth";

  [@bs.inline]
  let cellular = "cellular";

  [@bs.inline]
  let ethernet = "ethernet";

  [@bs.inline]
  let unknown = "unknown";

  [@bs.inline]
  let wifi = "wifi";

  [@bs.inline]
  let wimax = "wimax";
};

module EffectiveConnectionType = {
  type t = string;

  [@bs.inline]
  let net2G = "2g";

  [@bs.inline]
  let net3G = "3g";

  [@bs.inline]
  let net4G = "4g";

  [@bs.inline]
  let unknown = "unknown";
};

type info = {
  .
  "_type": ConnectionType.t,
  "effectiveType": EffectiveConnectionType.t,
};

type remove = {. "remove": unit => unit};

[@bs.module "react-native"] [@bs.scope "NetInfo"]
external addEventListener:
  ([@bs.string] [ | `connectionChange], info => unit) => remove =
  "";

[@bs.module "react-native"] [@bs.scope "NetInfo"]
external removeEventListener:
  ([@bs.string] [ | `connectionChange], info => unit) => unit =
  "";

[@bs.module "react-native"] [@bs.scope "NetInfo"]
external isConnectionExpensive: unit => Js.Promise.t(bool) = "";

[@bs.module "react-native"] [@bs.scope "NetInfo"]
external getConnectionInfo: unit => Js.Promise.t(info) = "";

module IsConnected = {
  [@bs.module "react-native"] [@bs.scope ("NetInfo", "isConnected")]
  external addEventListener:
    ([@bs.string] [ | `connectionChange], bool => unit) => remove =
    "";

  [@bs.module "react-native"] [@bs.scope ("NetInfo", "isConnected")]
  external removeEventListener:
    ([@bs.string] [ | `connectionChange], bool => unit) => unit =
    "";

  [@bs.module "react-native"] [@bs.scope ("NetInfo", "isConnected")]
  external fetch: unit => Js.Promise.t(bool) = "";
};
