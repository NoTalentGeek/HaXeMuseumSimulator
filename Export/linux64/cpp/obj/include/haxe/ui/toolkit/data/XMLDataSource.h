#ifndef INCLUDED_haxe_ui_toolkit_data_XMLDataSource
#define INCLUDED_haxe_ui_toolkit_data_XMLDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,ArrayDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,XMLDataSource)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  XMLDataSource_obj : public ::haxe::ui::toolkit::data::ArrayDataSource_obj{
	public:
		typedef ::haxe::ui::toolkit::data::ArrayDataSource_obj super;
		typedef XMLDataSource_obj OBJ_;
		XMLDataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.data.XMLDataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XMLDataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLDataSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XMLDataSource","\x3c","\x6f","\x4b","\x17"); }

		virtual Void create( ::Xml config);

		virtual Void createFromString( ::String data,Dynamic config);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_XMLDataSource */ 
