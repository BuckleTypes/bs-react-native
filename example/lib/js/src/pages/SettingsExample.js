// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var View$BsReactNative = require("bs-react-native/lib/js/src/components/view.js");
var Alert$BsReactNative = require("bs-react-native/lib/js/src/alert.js");
var Button$BsReactNative = require("bs-react-native/lib/js/src/components/button.js");
var Settings$BsReactNative = require("bs-react-native/lib/js/src/settings.js");
var TextInput$BsReactNative = require("bs-react-native/lib/js/src/components/textInput.js");

var component = ReasonReact.reducerComponent("SetExample");

function make() {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */(function () {
              Settings$BsReactNative.watchKeys(/* :: */[
                    "name_preference",
                    /* [] */0
                  ], (function () {
                      console.log("New value set");
                      return /* () */0;
                    }));
              return Settings$BsReactNative.clearWatch(Settings$BsReactNative.watchKeys(/* :: */[
                              "name_preference",
                              /* [] */0
                            ], (function () {
                                console.log("New value set 2");
                                return /* () */0;
                              })));
            }),
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (self) {
              return ReasonReact.element(undefined, undefined, View$BsReactNative.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined)(/* array */[
                              ReasonReact.element(undefined, undefined, TextInput$BsReactNative.make(undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, (function (text) {
                                            return Curry._1(self[/* send */3], /* SetVersion */[text]);
                                          }), undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, self[/* state */1][/* version */0], undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined)(/* array */[])),
                              ReasonReact.element(undefined, undefined, Button$BsReactNative.make("See an informative alert", undefined, undefined, (function () {
                                            var settings = { };
                                            settings["version_preference"] = self[/* state */1][/* version */0];
                                            return Settings$BsReactNative.set(settings);
                                          }), undefined, "Set version")(/* array */[]))
                            ]));
            }),
          /* initialState */(function () {
              return /* record */[/* version */"1.0"];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, _) {
              return /* Update */Block.__(0, [/* record */[/* version */action[0]]]);
            }),
          /* subscriptions */component[/* subscriptions */13],
          /* jsElementWrapped */component[/* jsElementWrapped */14]
        ];
}

var SetExample = /* module */[
  /* component */component,
  /* make */make
];

var examples = /* array */[
  /* record */[
    /* title */"Set",
    /* description */"Set Settings values",
    /* render */(function () {
        return ReasonReact.element(undefined, undefined, make(/* array */[]));
      })
  ],
  /* record */[
    /* title */"Get",
    /* description */"Get Settings value",
    /* render */(function () {
        return ReasonReact.element(undefined, undefined, Button$BsReactNative.make("See an informative alert", undefined, undefined, (function () {
                            var version = Settings$BsReactNative.get("version_preference");
                            return Alert$BsReactNative.alert("version -> " + version, undefined, undefined, undefined, undefined, /* () */0);
                          }), undefined, "Get version")(/* array */[]));
      })
  ]
];

var exampleType = /* Multiple */0;

var displayName = "SettingsExample";

var title = "SettingsExample";

var description = "SettingsExample (iOS only)";

exports.exampleType = exampleType;
exports.displayName = displayName;
exports.title = title;
exports.description = description;
exports.SetExample = SetExample;
exports.examples = examples;
/* component Not a pure module */