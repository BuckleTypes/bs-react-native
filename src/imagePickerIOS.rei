let canUseCamera: (unit => unit) => unit;

let canRecordVideos: (unit => unit) => unit;

[@bs.deriving abstract]
type error = {
  code: int,
  message: string,
};

let openCameraDialog:
  (~videoMode: bool, string => unit, error => unit) => unit;

let openSelectDialog:
  (~showImages: bool, ~showVideos: bool, string => unit, error => unit) => unit;