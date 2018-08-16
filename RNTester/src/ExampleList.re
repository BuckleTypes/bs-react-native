type item = {
  key: string,
  displayName: string,
  title: string,
  description: string,
  examples: array(Example.t),
};

module type ExampleT = {
  let displayName: string;
  let title: string;
  let description: string;
  let examples: array(Example.t);
};

module MakeExample = (Example: ExampleT) => {
  let item = key => {
    key,
    displayName: Example.displayName,
    title: Example.title,
    description: Example.description,
    examples: Example.examples,
  };
};

module TextInput = MakeExample(TextInputExample);

module Button = MakeExample(ButtonExample);

module View = MakeExample(ViewExample);

module WebView = MakeExample(WebViewExample);

module ImageBackground = MakeExample(ImageBackgroundExample);

module NetInfo = MakeExample(NetInfoExample);

module Geolocation = MakeExample(GeolocationExample);

module InputAccessoryView = MakeExample(InputAccessoryViewExample);

let components: array(item) = [|
  TextInput.item("TextInput"),
  Button.item("ButtonExample"),
  View.item("ViewExample"),
  WebView.item("WebViewExample"),
  ImageBackground.item("ImageBackground"),
  NetInfo.item("NetInfo"),
  Geolocation.item("Geolocation"),
  InputAccessoryView.item("InputAccessoryViewExample"),
|];
