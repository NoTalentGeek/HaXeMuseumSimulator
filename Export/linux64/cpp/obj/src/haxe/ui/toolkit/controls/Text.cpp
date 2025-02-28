#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#include <haxe/ui/toolkit/text/TextDisplay.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Text_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","new",0x9d29c035,"haxe.ui.toolkit.controls.Text.new","haxe/ui/toolkit/controls/Text.hx",26,0x1a9e579b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(28)
	this->_valign = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	HX_STACK_LINE(29)
	this->set_autoSize(true);
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::text::TextDisplay tmp = ::haxe::ui::toolkit::text::TextDisplay_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->_textDisplay = tmp;
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::text::ITextDisplay tmp1 = this->_textDisplay;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	tmp1->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Text_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Text_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Text_obj >(this); }
Void Text_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","initialize",0x740a161b,"haxe.ui.toolkit.controls.Text.initialize","haxe/ui/toolkit/controls/Text.hx",37,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::initialize();
		HX_STACK_LINE(40)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::text::ITextDisplay tmp1 = this->_textDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::openfl::_legacy::display::DisplayObject tmp2 = tmp1->get_display();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		tmp->addChild(tmp2);
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::text::ITextDisplay tmp3 = this->_textDisplay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		bool tmp4 = this->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		tmp3->set_autoSize(tmp4);
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::String tmp6 = this->get_text();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		tmp5->set_text(tmp6);
		HX_STACK_LINE(44)
		bool tmp7 = this->get_autoSize();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		if ((tmp8)){
			HX_STACK_LINE(45)
			Float tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			if ((tmp10)){
				HX_STACK_LINE(46)
				::haxe::ui::toolkit::text::ITextDisplay tmp11 = this->_textDisplay;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				::openfl::_legacy::display::DisplayObject tmp12 = tmp11->get_display();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				this->set_width(tmp13);
			}
			HX_STACK_LINE(48)
			Float tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(48)
			bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			if ((tmp12)){
				HX_STACK_LINE(49)
				::haxe::ui::toolkit::text::ITextDisplay tmp13 = this->_textDisplay;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				::openfl::_legacy::display::DisplayObject tmp14 = tmp13->get_display();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				this->set_height(tmp15);
			}
		}
	}
return null();
}


Void Text_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","dispose",0x4f9f7ef4,"haxe.ui.toolkit.controls.Text.dispose","haxe/ui/toolkit/controls/Text.hx",54,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::text::ITextDisplay tmp1 = this->_textDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::openfl::_legacy::display::DisplayObject tmp2 = tmp1->get_display();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		bool tmp3 = tmp->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		if ((tmp3)){
			HX_STACK_LINE(56)
			::openfl::_legacy::display::Sprite tmp4 = this->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::openfl::_legacy::display::DisplayObject tmp6 = tmp5->get_display();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			tmp4->removeChild(tmp6);
		}
		HX_STACK_LINE(58)
		this->super::dispose();
	}
return null();
}


Void Text_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","invalidate",0x0e78fe46,"haxe.ui.toolkit.controls.Text.invalidate","haxe/ui/toolkit/controls/Text.hx",61,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(62)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(62)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(62)
			tmp4 = true;
		}
		HX_STACK_LINE(62)
		if ((tmp4)){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(66)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(67)
		this->_invalidating = true;
		HX_STACK_LINE(68)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		if ((tmp8)){
			HX_STACK_LINE(68)
			bool tmp10 = this->_autoSize;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			tmp9 = (tmp11 == false);
		}
		else{
			HX_STACK_LINE(68)
			tmp9 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp9)){
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::text::ITextDisplay tmp10 = this->_textDisplay;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			::openfl::_legacy::display::DisplayObject tmp11 = tmp10->get_display();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp12 = this->get_layout();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			Float tmp13 = tmp12->get_innerWidth();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			tmp11->set_width(tmp13);
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::text::ITextDisplay tmp14 = this->_textDisplay;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			::openfl::_legacy::display::DisplayObject tmp15 = tmp14->get_display();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp16 = this->get_layout();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(70)
			Float tmp17 = tmp16->get_innerHeight();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(70)
			tmp15->set_height(tmp17);
		}
		HX_STACK_LINE(72)
		this->_invalidating = false;
	}
return null();
}


::String Text_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_text",0x01001441,"haxe.ui.toolkit.controls.Text.get_text","haxe/ui/toolkit/controls/Text.hx",78,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_text",0xaf5d6db5,"haxe.ui.toolkit.controls.Text.set_text","haxe/ui/toolkit/controls/Text.hx",82,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	value = tmp1;
	HX_STACK_LINE(85)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(86)
	bool tmp4 = this->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	if ((tmp5)){
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::text::ITextDisplay tmp6 = this->_textDisplay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::openfl::_legacy::display::DisplayObject tmp7 = tmp6->get_display();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		Float tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		this->set_width(tmp8);
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::text::ITextDisplay tmp9 = this->_textDisplay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		::openfl::_legacy::display::DisplayObject tmp10 = tmp9->get_display();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		Float tmp12 = this->heightFix();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(88)
		this->set_height(tmp13);
	}
	HX_STACK_LINE(90)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	return tmp6;
}


bool Text_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_autoSize",0x1df654d8,"haxe.ui.toolkit.controls.Text.set_autoSize","haxe/ui/toolkit/controls/Text.hx",93,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	bool tmp1 = this->super::set_autoSize(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	value = tmp1;
	HX_STACK_LINE(95)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	if ((tmp3)){
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		tmp4->set_autoSize(tmp5);
	}
	HX_STACK_LINE(98)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	return tmp4;
}


Float Text_obj::set_width( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_width",0x7f2bfbfe,"haxe.ui.toolkit.controls.Text.set_width","haxe/ui/toolkit/controls/Text.hx",101,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(102)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	this->super::set_width(tmp);
	HX_STACK_LINE(103)
	::haxe::ui::toolkit::text::ITextDisplay tmp1 = this->_textDisplay;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	::openfl::_legacy::display::DisplayObject tmp2 = tmp1->get_display();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	tmp2->set_width(tmp3);
	HX_STACK_LINE(104)
	::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	::String tmp5 = this->get_text();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(105)
	::haxe::ui::toolkit::text::ITextDisplay tmp6 = this->_textDisplay;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	::openfl::_legacy::display::DisplayObject tmp7 = tmp6->get_display();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	Float tmp9 = this->heightFix();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(105)
	this->set_height(tmp10);
	HX_STACK_LINE(107)
	Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(107)
	return tmp11;
}


Void Text_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","applyStyle",0xb6be05ae,"haxe.ui.toolkit.controls.Text.applyStyle","haxe/ui/toolkit/controls/Text.hx",113,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->super::applyStyle();
		HX_STACK_LINE(117)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			tmp2->set_style(tmp3);
			HX_STACK_LINE(119)
			bool tmp4 = this->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			if ((tmp5)){
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::text::ITextDisplay tmp6 = this->_textDisplay;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				::openfl::_legacy::display::DisplayObject tmp7 = tmp6->get_display();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(120)
				Float tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				this->set_width(tmp8);
				HX_STACK_LINE(121)
				::haxe::ui::toolkit::text::ITextDisplay tmp9 = this->_textDisplay;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				::openfl::_legacy::display::DisplayObject tmp10 = tmp9->get_display();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				Float tmp12 = this->heightFix();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				this->set_height(tmp13);
			}
		}
	}
return null();
}


Float Text_obj::heightFix( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","heightFix",0x3c6719c3,"haxe.ui.toolkit.controls.Text.heightFix","haxe/ui/toolkit/controls/Text.hx",126,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	Float fs = (int)-1;		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(128)
	::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	if ((tmp1)){
		HX_STACK_LINE(129)
		::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		Float tmp3 = tmp2->get_fontSize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		fs = tmp3;
	}
	HX_STACK_LINE(131)
	Float fix = (int)0;		HX_STACK_VAR(fix,"fix");
	HX_STACK_LINE(151)
	Float tmp2 = fix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,heightFix,return )

bool Text_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_multiline",0x17bb92d9,"haxe.ui.toolkit.controls.Text.get_multiline","haxe/ui/toolkit/controls/Text.hx",169,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = tmp->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_multiline,return )

bool Text_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_multiline",0x5cc174e5,"haxe.ui.toolkit.controls.Text.set_multiline","haxe/ui/toolkit/controls/Text.hx",173,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	tmp->set_multiline(tmp1);
	HX_STACK_LINE(175)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_multiline,return )

bool Text_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_wrapLines",0x922217c1,"haxe.ui.toolkit.controls.Text.get_wrapLines","haxe/ui/toolkit/controls/Text.hx",178,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	bool tmp1 = tmp->get_wrapLines();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_wrapLines,return )

bool Text_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_wrapLines",0xd727f9cd,"haxe.ui.toolkit.controls.Text.set_wrapLines","haxe/ui/toolkit/controls/Text.hx",182,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(183)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	tmp->set_wrapLines(tmp1);
	HX_STACK_LINE(184)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_wrapLines,return )

bool Text_obj::get_selectable( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_selectable",0xbf08e52a,"haxe.ui.toolkit.controls.Text.get_selectable","haxe/ui/toolkit/controls/Text.hx",187,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	bool tmp1 = tmp->get_selectable();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_selectable,return )

bool Text_obj::set_selectable( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_selectable",0xdf28cd9e,"haxe.ui.toolkit.controls.Text.set_selectable","haxe/ui/toolkit/controls/Text.hx",191,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(192)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	bool tmp2 = tmp->set_selectable(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_selectable,return )

::String Text_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_textAlign",0x3428a6c4,"haxe.ui.toolkit.controls.Text.get_textAlign","haxe/ui/toolkit/controls/Text.hx",195,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	if ((tmp1)){
		HX_STACK_LINE(197)
		return null();
	}
	HX_STACK_LINE(199)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	::String tmp3 = tmp2->get_textAlign();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_textAlign,return )

::String Text_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_textAlign",0x792e88d0,"haxe.ui.toolkit.controls.Text.set_textAlign","haxe/ui/toolkit/controls/Text.hx",202,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(203)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		tmp2->set_textAlign(tmp3);
	}
	HX_STACK_LINE(206)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_textAlign,return )

::haxe::ui::toolkit::core::DisplayObject Text_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","clone",0x3a746272,"haxe.ui.toolkit.controls.Text.clone","src/haxe/ui/toolkit/controls/Text.hx",1,0x1913c466)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Text c = ((::haxe::ui::toolkit::controls::Text)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_multiline(tmp1);
	HX_STACK_LINE(4)
	bool tmp2 = this->get_wrapLines();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_wrapLines(tmp2);
	HX_STACK_LINE(5)
	bool tmp3 = this->get_selectable();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_selectable(tmp3);
	HX_STACK_LINE(6)
	::String tmp4 = this->get_textAlign();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_textAlign(tmp4);
	HX_STACK_LINE(7)
	::haxe::ui::toolkit::controls::Text tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	return tmp5;
}


::haxe::ui::toolkit::core::DisplayObject Text_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","self",0xeaac7617,"haxe.ui.toolkit.controls.Text.self","src/haxe/ui/toolkit/controls/Text.hx",1,0x1913c466)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Text tmp = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"heightFix") ) { return heightFix_dyn(); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return get_textAlign(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return _textDisplay; }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast< ::haxe::ui::toolkit::text::ITextDisplay >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("wrapLines","\xd5","\x57","\x78","\x18"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::text::ITextDisplay*/ ,(int)offsetof(Text_obj,_textDisplay),HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("heightFix","\x2e","\x1c","\x98","\xae"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_wrapLines","\xac","\x2b","\xdc","\xd9"),
	HX_HCSTRING("set_wrapLines","\xb8","\x0d","\xe2","\x1e"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Text","\xc3","\x81","\x76","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
