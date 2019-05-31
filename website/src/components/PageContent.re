open Belt;
open ReactNative;
open ReactMultiversal;

// ⚠️ if you update this, also update PrepareMdToJson if needed
type pageData = {
  id: string,
  title: string,
  wip: option(bool),
  officialDoc: option(string),
  autoLinkToOfficialDoc: option(bool),
  body: string,
  modulesIndex: array(string),
};

let styles =
  StyleSheet.create(
    Style.{
      "container": style(~flex=1., ~flexBasis=500.->pt, ()),
      "title":
        style(
          ~flexDirection=`row,
          ~justifyContent=`spaceBetween,
          ~alignItems=`center,
          (),
        ),
      "titleText":
        style(
          ~fontSize=48.,
          ~fontWeight=`_700,
          ~color=Consts.Colors.darkless,
          (),
        ),
      "editLink":
        style(
          ~alignSelf=`flexEnd,
          ~borderWidth=1.,
          ~borderStyle=`solid,
          ~borderColor=Consts.Colors.accent,
          ~borderRadius=4.,
          (),
        ),
      "editLinkText":
        style(~color=Consts.Colors.accent, ~alignItems=`center, ()),
      "officialDocLink":
        style(
          ~display=`flex,
          ~flexDirection=`row,
          ~fontSize=14.,
          ~fontWeight=`_300,
          ~alignItems=`center,
          ~color=Consts.Colors.accent,
          (),
        ),
      "wip":
        style(
          ~borderWidth=1.,
          ~borderStyle=`solid,
          ~borderColor="#ffe58f",
          ~backgroundColor="#fffbe6",
          ~borderRadius=4.,
          (),
        ),
      "wipText": style(~fontSize=16., ~lineHeight=16. *. 1.5, ()),
      "wipEditLink": style(~color=Consts.Colors.accent, ()),
    },
  );

[@react.component]
let make = (~pageData) => {
  if (pageData.wip->Option.getWithDefault(false)) {
    Js.log3("@todo", pageData.title, "docs is still WIP");
  };
  let officialDocHref =
    if (pageData.officialDoc->Option.isSome) {
      Some(pageData.officialDoc->Option.getWithDefault(""));
    } else if (!pageData.autoLinkToOfficialDoc->Option.getWithDefault(true)) {
      None;
    } else if (pageData.id
               |> Js.String.startsWith("apis/")
               || pageData.id
               |> Js.String.startsWith("components/")) {
      Some(
        "http://facebook.github.io/react-native/docs/"
        ++ pageData.title->Js.String.toLocaleLowerCase
        ++ "/",
      );
    } else {
      None;
    };
  let editHref =
    "https://github.com/reasonml-community/bs-react-native/blob/master/reason-react-native/src/"
    ++ pageData.id
    ++ ".md";
  <SpacedView style=styles##container vertical=SpacedView.L>
    <View style=styles##title>
      <Text style=styles##titleText> pageData.title->React.string </Text>
      {officialDocHref
       ->Option.map(officialDocHref =>
           <TextLink style=styles##officialDocLink href=officialDocHref>
             <SVGExternalLink
               width={14.->ReactFromSvg.Size.pt}
               height={14.->ReactFromSvg.Size.pt}
               fill=Consts.Colors.accent
             />
             {| Official documentation |}->React.string
           </TextLink>
         )
       ->Option.getWithDefault(React.null)}
    </View>
    <Spacer />
    <TextLink href=editHref style=styles##editLink>
      <SpacedView vertical=SpacedView.XS horizontal=SpacedView.XS>
        <Text style=styles##editLinkText> {|Edit|}->React.string </Text>
      </SpacedView>
    </TextLink>
    {pageData.wip
     ->Option.flatMap(wip =>
         if (wip) {
           Some(
             <>
               <SpacedView style=styles##wip>
                 <Text style=styles##wipText>
                   {|This module below has been implemented but not properly documented. You may find below partial documentation or just raw code to show you requirements for its usage.
If you want you can help us to improve the situation by |}
                   ->React.string
                   <TextLink style=styles##wipEditLink href=editHref>
                     {|editing this file|}->React.string
                   </TextLink>
                   {|.|}->React.string
                 </Text>
               </SpacedView>
               <Spacer size=Spacer.L />
             </>,
           );
         } else {
           None;
         }
       )
     ->Option.getWithDefault(React.null)}
    <div
      className="htmlContent"
      style={ReactDOMRe.Style.make(
        ~display="flex",
        ~flexDirection="column",
        ~flexGrow="1",
        ~flexShrink="1",
        ~whiteSpace="normal",
        (),
      )}
      dangerouslySetInnerHTML={"__html": pageData.body}
    />
  </SpacedView>;
};
