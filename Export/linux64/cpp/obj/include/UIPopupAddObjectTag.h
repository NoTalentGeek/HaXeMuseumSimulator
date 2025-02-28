#ifndef INCLUDED_UIPopupAddObjectTag
#define INCLUDED_UIPopupAddObjectTag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(UIPopupAddObjectTag)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Grid)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,Popup)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,ListSelector)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)


class HXCPP_CLASS_ATTRIBUTES  UIPopupAddObjectTag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIPopupAddObjectTag_obj OBJ_;
		UIPopupAddObjectTag_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="UIPopupAddObjectTag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UIPopupAddObjectTag_obj > __new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIPopupAddObjectTag_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UIPopupAddObjectTag","\xd2","\xb5","\x57","\xec"); }

		::haxe::ui::toolkit::controls::Button buttonObject;
		::CollectionGlobal collectionGlobalObject;
		::haxe::ui::toolkit::containers::Grid gridObject;
		::haxe::ui::toolkit::controls::TextInput inputAdjTextInputObject;
		::haxe::ui::toolkit::controls::Text inputAdjTextObject;
		::haxe::ui::toolkit::controls::TextInput inputAdvTextInputObject;
		::haxe::ui::toolkit::controls::Text inputAdvTextObject;
		::haxe::ui::toolkit::controls::TextInput inputNounPosTextInputObject;
		::haxe::ui::toolkit::controls::Text inputNounPosTextObject;
		::haxe::ui::toolkit::controls::TextInput inputNounSPosTextInputObject;
		::haxe::ui::toolkit::controls::Text inputNounSPosTextObject;
		::haxe::ui::toolkit::controls::TextInput inputNounSTextInputObject;
		::haxe::ui::toolkit::controls::Text inputNounSTextObject;
		::haxe::ui::toolkit::controls::TextInput inputNounTextInputObject;
		::haxe::ui::toolkit::controls::Text inputNounTextObject;
		::haxe::ui::toolkit::controls::TextInput inputTagNameTextInputObject;
		::haxe::ui::toolkit::controls::TextInput inputVerb1TextInputObject;
		::haxe::ui::toolkit::controls::Text inputVerb1TextObject;
		::haxe::ui::toolkit::controls::TextInput inputVerb2TextInputObject;
		::haxe::ui::toolkit::controls::Text inputVerb2TextObject;
		::haxe::ui::toolkit::controls::TextInput inputVerb3TextInputObject;
		::haxe::ui::toolkit::controls::Text inputVerb3TextObject;
		::haxe::ui::toolkit::controls::TextInput inputVerbIngTextInputObject;
		::haxe::ui::toolkit::controls::Text inputVerbIngTextObject;
		::haxe::ui::toolkit::controls::TextInput inputVerbSTextInputObject;
		::haxe::ui::toolkit::controls::Text inputVerbSTextObject;
		::haxe::ui::toolkit::controls::popups::Popup popupObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectFeelListSelectorObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectGeneralListSelectorObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectTagTypeListSelectorObject;
		::String selectTagTypeListSelectorPrevString;
		::String selectTagTypeListSelectorString;
		cpp::ArrayBase textInputStructArray;
		virtual Void UpdateVoid( );
		Dynamic UpdateVoid_dyn();

		virtual Void CreateGUIObjectVoid( );
		Dynamic CreateGUIObjectVoid_dyn();

};


#endif /* INCLUDED_UIPopupAddObjectTag */ 
