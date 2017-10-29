/***
 * Components
 */
module ActivityIndicator = ActivityIndicatorRe;

module Button = ButtonRe;

module DatePickerIOS = DatePickerIOSRe;

module FlatList = FlatListRe;

module Modal = ModalRe;

module Picker = PickerRe;

module RefreshControl = RefreshControlRe;

module ScrollView = ScrollViewRe.ScrollView;

module SectionList = SectionListRe;

module Slider = SliderRe;

module StatusBar = StatusBarRe;

module Switch = SwitchRe;

module TabBarIOS = TabBarIOSRe;

module Text = TextRe.Text;

module TextInput = TextInputRe;

module TouchableHighlight = TouchableHighlightRe;

module TouchableOpacity = TouchableOpacityRe;

module TouchableWithoutFeedback = TouchableWithoutFeedbackRe;

module WebView = WebViewRe;

module View = {
  include ViewRe.View;
  include ResponderUtils;
};

module Image = ImageRe.Image;

module ImageBackground = ImageBackgroundRe;

module Animated = {
  include AnimatedRe;
  module Text = AnimatedComponentsRe.Text;
  module ScrollView = AnimatedComponentsRe.ScrollView;
  module View = AnimatedComponentsRe.View;
  module Image = AnimatedComponentsRe.Image;
};


/***
 *  APIs
 */
module Alert = AlertRe;

module AlertIOS = AlertIOSRe;

module AppRegistry = AppRegistryRe;

module AppState = AppStateRe;

module AsyncStorage = AsyncStorageRe;

module BackHandler = BackHandlerRe;

module Dimensions = DimensionsRe;

module Linking = LinkingRe;

module NativeModules = NativeModulesRe;

module NativeEventEmitter = NativeEventEmitterRe;

module Platform = PlatformRe;

module PixelRatio = PixelRatioRe;

module StyleSheet = StyleSheetRe;

module PanResponder = {
  include PanResponderRe;
  include PanResponderUtils;
};

module Vibration = VibrationRe;

module SegmentedControllOS = SegmentedControllOSRe;


/***
 * New Modules due to Reason
 */
module Packager = PackagerRe;

module Style = StyleRe;
