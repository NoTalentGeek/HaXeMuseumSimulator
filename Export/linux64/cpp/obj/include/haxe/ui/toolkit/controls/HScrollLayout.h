#ifndef INCLUDED_haxe_ui_toolkit_controls_HScrollLayout
#define INCLUDED_haxe_ui_toolkit_controls_HScrollLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HScrollLayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,DefaultLayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  HScrollLayout_obj : public ::haxe::ui::toolkit::layout::DefaultLayout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::DefaultLayout_obj super;
		typedef HScrollLayout_obj OBJ_;
		HScrollLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.HScrollLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HScrollLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HScrollLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HScrollLayout","\xff","\x9a","\xb0","\x16"); }

		virtual Void resizeChildren( );

		virtual Void repositionChildren( );

		virtual Float get_usableWidth( );

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_HScrollLayout */ 
