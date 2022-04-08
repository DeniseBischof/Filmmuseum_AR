#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t1B695C6A76E9F1B5C71E049087059719B4A79F5C;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t89ACB735D32D96EED601ADE0E5A6A6571A158522 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t1B695C6A76E9F1B5C71E049087059719B4A79F5C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::isReference
	bool ___isReference_0;

public:
	inline static int32_t get_offset_of_isReference_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t1B695C6A76E9F1B5C71E049087059719B4A79F5C, ___isReference_0)); }
	inline bool get_isReference_0() const { return ___isReference_0; }
	inline bool* get_address_of_isReference_0() { return &___isReference_0; }
	inline void set_isReference_0(bool value)
	{
		___isReference_0 = value;
	}
};


// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Serialization.DataMemberAttribute::name
	String_t* ___name_0;
	// System.Int32 System.Runtime.Serialization.DataMemberAttribute::order
	int32_t ___order_1;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::isRequired
	bool ___isRequired_2;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::emitDefaultValue
	bool ___emitDefaultValue_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_isRequired_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390, ___isRequired_2)); }
	inline bool get_isRequired_2() const { return ___isRequired_2; }
	inline bool* get_address_of_isRequired_2() { return &___isRequired_2; }
	inline void set_isRequired_2(bool value)
	{
		___isRequired_2 = value;
	}

	inline static int32_t get_offset_of_emitDefaultValue_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390, ___emitDefaultValue_3)); }
	inline bool get_emitDefaultValue_3() const { return ___emitDefaultValue_3; }
	inline bool* get_address_of_emitDefaultValue_3() { return &___emitDefaultValue_3; }
	inline void set_emitDefaultValue_3(bool value)
	{
		___emitDefaultValue_3 = value;
	}
};


// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// System.Runtime.Serialization.IgnoreDataMemberAttribute
struct IgnoreDataMemberAttribute_tCFD9805B42E62C6D10135FA1E2BAFE557AA375D7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataContractAttribute_get_IsReference_mD233910F6BE95DC8F61D97C2B5BEB0BE0B817518 (DataContractAttribute_t1B695C6A76E9F1B5C71E049087059719B4A79F5C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isReference_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataMemberAttribute_get_Name_mB7896BB8772FA242DB9ECA0CF9C68130C40079DD (DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataMemberAttribute_get_Order_m6276D5139B7020DB7C0D545DC24E6BE287FFF382 (DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_order_1();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_IsRequired_mF7CC60E82900625E383EBAACDCB45E6C649E2DB7 (DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isRequired_2();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_EmitDefaultValue_mFAF0D3A1269ACCAD4A3EF9EA47A2FF6BF1E3AA3B (DataMemberAttribute_t12ACC483BA0D5675A8D631023C465C5D750ED390 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_emitDefaultValue_3();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3 (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
