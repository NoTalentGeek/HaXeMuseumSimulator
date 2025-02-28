#ifndef INCLUDED_CollectionPremadeTag
#define INCLUDED_CollectionPremadeTag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(CollectionPremadeTag)


class HXCPP_CLASS_ATTRIBUTES  CollectionPremadeTag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollectionPremadeTag_obj OBJ_;
		CollectionPremadeTag_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="CollectionPremadeTag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollectionPremadeTag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollectionPremadeTag_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CollectionPremadeTag","\xe0","\x8b","\x6a","\xd1"); }

		static Void PremadeTagStructVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructVoid_dyn();

		static Void PremadeTagStructAdjVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructAdjVoid_dyn();

		static Void PremadeTagStructAdvVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructAdvVoid_dyn();

		static Void PremadeTagStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounAliveAbstractVoid_dyn();

		static Void PremadeTagStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounAliveConcreteVoid_dyn();

		static Void PremadeTagStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateHoldAbstractVoid_dyn();

		static Void PremadeTagStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateHoldConcreteVoid_dyn();

		static Void PremadeTagStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimatePlaceAbstractVoid_dyn();

		static Void PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid_dyn();

		static Void PremadeTagStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimatePlaceConcreteOwnerVoid_dyn();

		static Void PremadeTagStructNounInanimateSeeAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateSeeAbstractVoid_dyn();

		static Void PremadeTagStructNounInanimateSeeConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateSeeConcreteVoid_dyn();

		static Void PremadeTagStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateTitleAbstractVoid_dyn();

		static Void PremadeTagStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateWearAbstractVoid_dyn();

		static Void PremadeTagStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructNounInanimateWearConcreteVoid_dyn();

		static Void PremadeTagStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructVerbVoidIntransitiveVoid_dyn();

		static Void PremadeTagStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeTagStructVerbVoidTransitiveVoid_dyn();

};


#endif /* INCLUDED_CollectionPremadeTag */ 
