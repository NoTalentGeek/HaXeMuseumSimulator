#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#define INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,DataProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,IXMLProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,XMLProcessor)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  DataProcessor_obj : public ::haxe::ui::toolkit::core::xml::XMLProcessor_obj{
	public:
		typedef ::haxe::ui::toolkit::core::xml::XMLProcessor_obj super;
		typedef DataProcessor_obj OBJ_;
		DataProcessor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.xml.DataProcessor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DataProcessor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataProcessor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DataProcessor","\xa8","\x81","\x88","\x26"); }

		static ::haxe::ui::toolkit::data::IDataSource createDataSource( ::String className,::Xml config);
		static Dynamic createDataSource_dyn();

		virtual Dynamic process( ::Xml node);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml

#endif /* INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor */ 
