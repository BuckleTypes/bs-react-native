// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var TextInput$BsReactNative = require("bs-react-native/lib/js/src/components/textInput.js");

var examples = /* array */[/* record */[
    /* title */"Simple TextInput",
    /* description */"Checking a simple TextInput with onKeyPress handler works",
    /* render */(function () {
        return ReasonReact.element(undefined, undefined, TextInput$BsReactNative.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, (function (ev) {
                            console.log(ev.nativeEvent.key);
                            return /* () */0;
                          }), undefined, undefined, undefined)(/* array */[]));
      })
  ]];

var exampleType = /* FullScreen */1;

var displayName = "TextInputExample";

var title = "<TextInput>";

var description = "Simple React Native text input component.";

exports.exampleType = exampleType;
exports.displayName = displayName;
exports.title = title;
exports.description = description;
exports.examples = examples;
/* ReasonReact Not a pure module */