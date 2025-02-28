#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#define INCLUDED_haxe_ui_toolkit_core_PopupManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,Popup)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,PopupContent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,PopupButtonInfo)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,PopupManager)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PopupManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PopupManager_obj OBJ_;
		PopupManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.PopupManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PopupManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PopupManager","\xc1","\xd9","\x50","\xdc"); }

		static ::haxe::ui::toolkit::core::PopupManager _instance;
		static ::haxe::ui::toolkit::core::PopupManager instance;
		static ::haxe::ui::toolkit::core::PopupManager get_instance( );
		static Dynamic get_instance_dyn();

		::String defaultTitle;
		int defaultWidth;
		::List _modalPopups;
		virtual Void onKeyPress( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyPress_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showSimple( ::String text,::String title,Dynamic config,Dynamic fn);
		Dynamic showSimple_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showCustom( ::haxe::ui::toolkit::core::interfaces::IDisplayObject display,::String title,Dynamic config,Dynamic fn);
		Dynamic showCustom_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showList( Dynamic items,hx::Null< int >  selectedIndex,::String title,Dynamic config,Dynamic fn);
		Dynamic showList_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showCalendar( ::String title,Dynamic fn);
		Dynamic showCalendar_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showBusy( ::String text,hx::Null< int >  delay,::String title,Dynamic config,Dynamic fn);
		Dynamic showBusy_dyn();

		virtual Void showPopup( ::haxe::ui::toolkit::controls::popups::Popup p);
		Dynamic showPopup_dyn();

		virtual Void hidePopup( ::haxe::ui::toolkit::controls::popups::Popup p,hx::Null< bool >  dispose);
		Dynamic hidePopup_dyn();

		virtual Void _onScreenResize( ::openfl::_legacy::events::Event event);
		Dynamic _onScreenResize_dyn();

		virtual Void centerPopup( ::haxe::ui::toolkit::controls::popups::Popup p);
		Dynamic centerPopup_dyn();

		virtual Void dismissModal( int action);
		Dynamic dismissModal_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup buildPopup( ::haxe::ui::toolkit::controls::popups::PopupContent content,::String title,Dynamic config,Dynamic fn);
		Dynamic buildPopup_dyn();

		virtual Dynamic buildConfig( Dynamic config);
		Dynamic buildConfig_dyn();

		virtual Array< ::Dynamic > buildButtonArray( Dynamic data);
		Dynamic buildButtonArray_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_PopupManager */ 
