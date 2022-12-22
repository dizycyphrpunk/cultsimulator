﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Video.VideoClip
struct VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1;

IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_errorReceived_mABB9E416B6E5F505A4F408CB041BE9FE1597FC5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_frameDropped_m3814AD28574DF3BE40B7FCBC2D6CB7F8760E6A06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_frameReady_mB7641568597E988CE68BC3E3BEF068F558DBCF6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_loopPointReached_m67619E2B83DC46D8DA3DF0CFAC24399FA0A2D932_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_seekCompleted_m6884EFA42474E5E146989B4DB9E624EF10FE270C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_add_started_m97B60BBA14F176FAC93E2713AB9B0B1D1E094207_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_errorReceived_m94B7BA2DE9A008839683C9A3311A01A36CEDAB88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_frameDropped_m3BB8D079C760AEBB05E16970B9EA0B2054AA26C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_frameReady_m0232BE22F0F4E3FA43A9D30C5176892DB1DC30D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_loopPointReached_m1E4A0D894AA6C597E9E7EC9F389069BF6E9E2F0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_seekCompleted_mF6B1BD552840E9ACA57E5FA3275F564EF83D5F95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoPlayer_remove_started_m7F677227C0FE32FBFCC830D2D0507A455210FB1F_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t064756C4EE8D64CEFE107E600CEBCB3F77894990 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Video.Video3DLayout
struct  Video3DLayout_t5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1 
{
public:
	// System.Int32 UnityEngine.Video.Video3DLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Video3DLayout_t5F64D0CE5E9B37C2FCE67F397FA5CFE9C047E4A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAspectRatio
struct  VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379 
{
public:
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoRenderMode
struct  VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoSource
struct  VideoSource_t32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoSource_t32501B57EA7F9CF835FBA8184C9AF427CBBEFD0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoTimeReference
struct  VideoTimeReference_t9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeReference_t9EAEBD354AE5E56F0D0F36E73A428BB2A0B8B31B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoTimeSource
struct  VideoTimeSource_t15F04FD6B3D75A8D98480E8B77117C0FF691BB77 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeSource_t15F04FD6B3D75A8D98480E8B77117C0FF691BB77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.Video.VideoClipPlayable
struct  VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Video.VideoClip
struct  VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Video.VideoPlayer_ErrorEventHandler
struct  ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer_EventHandler
struct  EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer_FrameReadyEventHandler
struct  FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer_TimeEventHandler
struct  TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// UnityEngine.Video.VideoPlayer_EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer_EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer_EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___started_6;
	// UnityEngine.Video.VideoPlayer_EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer_ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer_EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer_TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer_FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___prepareCompleted_4)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___loopPointReached_5)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___started_6)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_started_6() const { return ___started_6; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameDropped_7)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___errorReceived_8)); }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___seekCompleted_9)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameReady_11)); }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10 (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *>(__this + _offset);
	return VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2 (VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242((VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = VideoClipPlayable_GetHandle_m5B2EFD8CFE93DB4D2EE29A600E598233471DF242((VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2_AdjustorThunk (RuntimeObject * __this, VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t4B7997FDB02C74F9E88F37574F0F4F9DE08CCC12 *>(__this + _offset);
	return VideoClipPlayable_Equals_m2F07E6EBA96043274F2384F18E43B66035058BC2(_thisAdjusted, ___other0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClip__ctor_m9BB7ECD808FCBD3DA63594134BEEC12B17852117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Video.VideoClip::get_originalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_originalPath_m2A5B5BD6026E06E89487B1D6FE3ACF4BED358F79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_originalPath()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoClip_get_frameCount_m4C975B2BE9AAFC46D6DC3C6CFDA2F8F53BA8F812 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoClip_get_frameCount_m4C975B2BE9AAFC46D6DC3C6CFDA2F8F53BA8F812_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_frameCount_m4C975B2BE9AAFC46D6DC3C6CFDA2F8F53BA8F812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameCount_m4C975B2BE9AAFC46D6DC3C6CFDA2F8F53BA8F812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameCount()");
	uint64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_frameRate_m810D26D2FABD566884970B63F33647DAF1FE34F0 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_frameRate_m810D26D2FABD566884970B63F33647DAF1FE34F0_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_frameRate_m810D26D2FABD566884970B63F33647DAF1FE34F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameRate_m810D26D2FABD566884970B63F33647DAF1FE34F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameRate()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_length_m33EC3F6A3D2F851ECC2B672D1603F956AB1887FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_length()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_width_m89215785A9E7EEB59F7A23BC64C3D7F446621E2E (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_width_m89215785A9E7EEB59F7A23BC64C3D7F446621E2E_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_width_m89215785A9E7EEB59F7A23BC64C3D7F446621E2E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_width_m89215785A9E7EEB59F7A23BC64C3D7F446621E2E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_width()");
	uint32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_height_mFCE61A0B0DD212D9A9773AE66148D25270656819 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_height_mFCE61A0B0DD212D9A9773AE66148D25270656819_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_height_mFCE61A0B0DD212D9A9773AE66148D25270656819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_height_mFCE61A0B0DD212D9A9773AE66148D25270656819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_height()");
	uint32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_get_audioTrackCount_mF0CCBF177B3DC5338F603F4D94429787D8CFAD83 (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoClip_get_audioTrackCount_mF0CCBF177B3DC5338F603F4D94429787D8CFAD83_ftn) (VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoClip_get_audioTrackCount_mF0CCBF177B3DC5338F603F4D94429787D8CFAD83_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_audioTrackCount_mF0CCBF177B3DC5338F603F4D94429787D8CFAD83_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_audioTrackCount()");
	uint16_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_source_m0B59B963847A0C4F206697FB61C618D9621949E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_source()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_source_mE27652C749468B4A44FE3557BA809C503C849ABE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Video.VideoPlayer::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_url_mC8F4EC64F3938721095E741897A83F4A35741203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_url()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*);
	static VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_url(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * (*VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clip()");
	VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 *);
	static VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoRenderMode UnityEngine.Video.VideoPlayer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_renderMode_mFBFD12B8E2C366663AA5F55A6087A4BB137D447E (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_renderMode_mFBFD12B8E2C366663AA5F55A6087A4BB137D447E_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_renderMode_mFBFD12B8E2C366663AA5F55A6087A4BB137D447E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_renderMode_mFBFD12B8E2C366663AA5F55A6087A4BB137D447E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_renderMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Camera UnityEngine.Video.VideoPlayer::get_targetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * VideoPlayer_get_targetCamera_mFDF3BD6E156461CC2C6BB44878886EDE4C995687 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*VideoPlayer_get_targetCamera_mFDF3BD6E156461CC2C6BB44878886EDE4C995687_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_targetCamera_mFDF3BD6E156461CC2C6BB44878886EDE4C995687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCamera_mFDF3BD6E156461CC2C6BB44878886EDE4C995687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCamera()");
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera_mAD892B74820C093D33A8808C6CA4BFF7935773C4 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetCamera_mAD892B74820C093D33A8808C6CA4BFF7935773C4_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *);
	static VideoPlayer_set_targetCamera_mAD892B74820C093D33A8808C6CA4BFF7935773C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCamera_mAD892B74820C093D33A8808C6CA4BFF7935773C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * VideoPlayer_get_targetTexture_mDFF8E4B60BDFE26F5535E5D15CAAA8546DB939E3 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * (*VideoPlayer_get_targetTexture_mDFF8E4B60BDFE26F5535E5D15CAAA8546DB939E3_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_targetTexture_mDFF8E4B60BDFE26F5535E5D15CAAA8546DB939E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetTexture_mDFF8E4B60BDFE26F5535E5D15CAAA8546DB939E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetTexture()");
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetTexture_m4088B6058A001D48C911DC71023AC723BD3C8252 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetTexture_m4088B6058A001D48C911DC71023AC723BD3C8252_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *);
	static VideoPlayer_set_targetTexture_m4088B6058A001D48C911DC71023AC723BD3C8252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetTexture_m4088B6058A001D48C911DC71023AC723BD3C8252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_targetMaterialProperty_mB8798BF77416FFAA2CA67BB0B2664C0DD6E072FB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_get_targetMaterialProperty_mB8798BF77416FFAA2CA67BB0B2664C0DD6E072FB_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_targetMaterialProperty_mB8798BF77416FFAA2CA67BB0B2664C0DD6E072FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetMaterialProperty_mB8798BF77416FFAA2CA67BB0B2664C0DD6E072FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetMaterialProperty_m8BF9B84E27C0C3090FA0231FC2C449B2BED9435F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetMaterialProperty_m8BF9B84E27C0C3090FA0231FC2C449B2BED9435F_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*);
	static VideoPlayer_set_targetMaterialProperty_m8BF9B84E27C0C3090FA0231FC2C449B2BED9435F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetMaterialProperty_m8BF9B84E27C0C3090FA0231FC2C449B2BED9435F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoAspectRatio UnityEngine.Video.VideoPlayer::get_aspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_aspectRatio_mF5A5478D9C1E0FDE8A530CEE17B043A4C57C5E07 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_aspectRatio_mF5A5478D9C1E0FDE8A530CEE17B043A4C57C5E07_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_aspectRatio_mF5A5478D9C1E0FDE8A530CEE17B043A4C57C5E07_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_aspectRatio_mF5A5478D9C1E0FDE8A530CEE17B043A4C57C5E07_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_aspectRatio()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_targetCameraAlpha_mD196E8A77E2D28FF9F90842D18320843F52D6184 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_targetCameraAlpha_mD196E8A77E2D28FF9F90842D18320843F52D6184_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_targetCameraAlpha_mD196E8A77E2D28FF9F90842D18320843F52D6184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCameraAlpha_mD196E8A77E2D28FF9F90842D18320843F52D6184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCameraAlpha_m3326BD7558151BF416178CCE7C26ACC0C55D7660 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetCameraAlpha_m3326BD7558151BF416178CCE7C26ACC0C55D7660_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, float);
	static VideoPlayer_set_targetCameraAlpha_m3326BD7558151BF416178CCE7C26ACC0C55D7660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCameraAlpha_m3326BD7558151BF416178CCE7C26ACC0C55D7660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * (*VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_texture()");
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Prepare()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPrepared()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_waitForFirstFrame_m0A34CAAA86DC05A4EC680FB127D6B9B015A0E67E (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_waitForFirstFrame_m0A34CAAA86DC05A4EC680FB127D6B9B015A0E67E_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_waitForFirstFrame_m0A34CAAA86DC05A4EC680FB127D6B9B015A0E67E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_waitForFirstFrame_m0A34CAAA86DC05A4EC680FB127D6B9B015A0E67E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m8E11586971ADCEBC6535C065ABB23BC5E4C49875 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_waitForFirstFrame_m8E11586971ADCEBC6535C065ABB23BC5E4C49875_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, bool);
	static VideoPlayer_set_waitForFirstFrame_m8E11586971ADCEBC6535C065ABB23BC5E4C49875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_waitForFirstFrame_m8E11586971ADCEBC6535C065ABB23BC5E4C49875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_playOnAwake_m3F510732AC70AF08A33907810B3AD0D3672EDB68 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_playOnAwake_m3F510732AC70AF08A33907810B3AD0D3672EDB68_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_playOnAwake_m3F510732AC70AF08A33907810B3AD0D3672EDB68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playOnAwake_m3F510732AC70AF08A33907810B3AD0D3672EDB68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playOnAwake()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m3109BDD49A2981518F062FACBF0ECF1DB8BFE207 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_playOnAwake_m3109BDD49A2981518F062FACBF0ECF1DB8BFE207_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, bool);
	static VideoPlayer_set_playOnAwake_m3109BDD49A2981518F062FACBF0ECF1DB8BFE207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playOnAwake_m3109BDD49A2981518F062FACBF0ECF1DB8BFE207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Pause()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Stop_mBEDCB786A42A95603F9D8B7763DEC3BD97565852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTime_m875362EEC923AAAAA882CC775CC9816AE974603C (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetTime_m875362EEC923AAAAA882CC775CC9816AE974603C_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canSetTime_m875362EEC923AAAAA882CC775CC9816AE974603C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTime_m875362EEC923AAAAA882CC775CC9816AE974603C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTime()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_time_mF842FC1E9A1FD2333C7C9D13338D3B178665564A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_time()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, double ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double);
	static VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_time(System.Double)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frame_mB7F5972A74C2D4039855454F552AD08BF12F30A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frame()");
	int64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canStep()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::StepForward()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetPlaybackSpeed_m06A2D6459930861D61847ED28A29DAD6C668A788 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetPlaybackSpeed_m06A2D6459930861D61847ED28A29DAD6C668A788_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canSetPlaybackSpeed_m06A2D6459930861D61847ED28A29DAD6C668A788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetPlaybackSpeed_m06A2D6459930861D61847ED28A29DAD6C668A788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playbackSpeed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, float);
	static VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isLooping()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTimeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTimeSource_m7B87AE87F7F18588A51241D68F599C0FDD3B6853 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetTimeSource_m7B87AE87F7F18588A51241D68F599C0FDD3B6853_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canSetTimeSource_m7B87AE87F7F18588A51241D68F599C0FDD3B6853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTimeSource_m7B87AE87F7F18588A51241D68F599C0FDD3B6853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTimeSource()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Video.VideoTimeSource UnityEngine.Video.VideoPlayer::get_timeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_timeSource_m57C09418AD61A6C849ABBBDF7F1469F66EEA2656 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_timeSource_m57C09418AD61A6C849ABBBDF7F1469F66EEA2656_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_timeSource_m57C09418AD61A6C849ABBBDF7F1469F66EEA2656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_timeSource_m57C09418AD61A6C849ABBBDF7F1469F66EEA2656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_timeSource()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeSource_mBCED110DD2B0822D2F719CEBD1D103E9E7D3F2EB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_timeSource_mBCED110DD2B0822D2F719CEBD1D103E9E7D3F2EB_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_timeSource_mBCED110DD2B0822D2F719CEBD1D103E9E7D3F2EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_timeSource_mBCED110DD2B0822D2F719CEBD1D103E9E7D3F2EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetSkipOnDrop_mA3D1E789DDCF90416DDD15D95DD32B73135D8210 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetSkipOnDrop_mA3D1E789DDCF90416DDD15D95DD32B73135D8210_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canSetSkipOnDrop_mA3D1E789DDCF90416DDD15D95DD32B73135D8210_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetSkipOnDrop_mA3D1E789DDCF90416DDD15D95DD32B73135D8210_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_skipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_skipOnDrop_m2690695BAFD5C39A6A2E65153609D8257D820362 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_skipOnDrop_m2690695BAFD5C39A6A2E65153609D8257D820362_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_skipOnDrop_m2690695BAFD5C39A6A2E65153609D8257D820362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_skipOnDrop_m2690695BAFD5C39A6A2E65153609D8257D820362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_skipOnDrop()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, bool);
	static VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_m89C61BE7B88F1A573FA42C2A7564230A2234F709 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoPlayer_get_frameCount_m89C61BE7B88F1A573FA42C2A7564230A2234F709_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_frameCount_m89C61BE7B88F1A573FA42C2A7564230A2234F709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameCount_m89C61BE7B88F1A573FA42C2A7564230A2234F709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameCount()");
	uint64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_frameRate_mEC5D740D0A22EBB929373F80343AB4675D6F05DE (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_frameRate_mEC5D740D0A22EBB929373F80343AB4675D6F05DE_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_frameRate_mEC5D740D0A22EBB929373F80343AB4675D6F05DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameRate_mEC5D740D0A22EBB929373F80343AB4675D6F05DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameRate()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_audioTrackCount_m9B51B6DCE2D782A177500AC4C5DC645813FE7C44 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_get_audioTrackCount_m9B51B6DCE2D782A177500AC4C5DC645813FE7C44_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_audioTrackCount_m9B51B6DCE2D782A177500AC4C5DC645813FE7C44_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioTrackCount_m9B51B6DCE2D782A177500AC4C5DC645813FE7C44_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioTrackCount()");
	uint16_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackMaxCount_m5CD07FAE01ADA002F88F9E7B3432993AB52DAAF1 (const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_get_controlledAudioTrackMaxCount_m5CD07FAE01ADA002F88F9E7B3432993AB52DAAF1_ftn) ();
	static VideoPlayer_get_controlledAudioTrackMaxCount_m5CD07FAE01ADA002F88F9E7B3432993AB52DAAF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_controlledAudioTrackMaxCount_m5CD07FAE01ADA002F88F9E7B3432993AB52DAAF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()");
	uint16_t retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.Video.VideoAudioOutputMode UnityEngine.Video.VideoPlayer::get_audioOutputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_audioOutputMode_m9EF734E8234CE0E7C5F50370FC03703E4C57F09D (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_audioOutputMode_m9EF734E8234CE0E7C5F50370FC03703E4C57F09D_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_audioOutputMode_m9EF734E8234CE0E7C5F50370FC03703E4C57F09D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioOutputMode_m9EF734E8234CE0E7C5F50370FC03703E4C57F09D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioOutputMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int32_t);
	static VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetDirectAudioVolume_mAB106A790AF2874B4EF6A606D134A5A9A9A516F8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetDirectAudioVolume_mAB106A790AF2874B4EF6A606D134A5A9A9A516F8_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_canSetDirectAudioVolume_mAB106A790AF2874B4EF6A606D134A5A9A9A516F8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetDirectAudioVolume_mAB106A790AF2874B4EF6A606D134A5A9A9A516F8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_prepareCompleted_mA09867482AAB164B8AA6820FFE57E3F391CB8FE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_prepareCompleted_m6BBFD6B47A7627DA597319ADA50403B8C0F02186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m67619E2B83DC46D8DA3DF0CFAC24399FA0A2D932 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_loopPointReached_m67619E2B83DC46D8DA3DF0CFAC24399FA0A2D932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_loopPointReached_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_loopPointReached_5();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_loopPointReached(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_loopPointReached_m1E4A0D894AA6C597E9E7EC9F389069BF6E9E2F0B (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_loopPointReached_m1E4A0D894AA6C597E9E7EC9F389069BF6E9E2F0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_loopPointReached_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_loopPointReached_5();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_started_m97B60BBA14F176FAC93E2713AB9B0B1D1E094207 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_started_m97B60BBA14F176FAC93E2713AB9B0B1D1E094207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_started_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_started_6();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_started(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_started_m7F677227C0FE32FBFCC830D2D0507A455210FB1F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_started_m7F677227C0FE32FBFCC830D2D0507A455210FB1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_started_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_started_6();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameDropped(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameDropped_m3814AD28574DF3BE40B7FCBC2D6CB7F8760E6A06 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_frameDropped_m3814AD28574DF3BE40B7FCBC2D6CB7F8760E6A06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_frameDropped_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_frameDropped_7();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameDropped(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameDropped_m3BB8D079C760AEBB05E16970B9EA0B2054AA26C6 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_frameDropped_m3BB8D079C760AEBB05E16970B9EA0B2054AA26C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_frameDropped_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_frameDropped_7();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_errorReceived(UnityEngine.Video.VideoPlayer_ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_errorReceived_mABB9E416B6E5F505A4F408CB041BE9FE1597FC5D (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_errorReceived_mABB9E416B6E5F505A4F408CB041BE9FE1597FC5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_0 = NULL;
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_1 = NULL;
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_2 = NULL;
	{
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_0 = __this->get_errorReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_2 = V_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222_il2cpp_TypeInfo_var));
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** L_5 = __this->get_address_of_errorReceived_8();
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_6 = V_2;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_7 = V_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *>((ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 **)L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_9 = V_0;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)L_9) == ((RuntimeObject*)(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_errorReceived(UnityEngine.Video.VideoPlayer_ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_errorReceived_m94B7BA2DE9A008839683C9A3311A01A36CEDAB88 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_errorReceived_m94B7BA2DE9A008839683C9A3311A01A36CEDAB88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_0 = NULL;
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_1 = NULL;
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * V_2 = NULL;
	{
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_0 = __this->get_errorReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_2 = V_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222_il2cpp_TypeInfo_var));
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** L_5 = __this->get_address_of_errorReceived_8();
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_6 = V_2;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_7 = V_1;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *>((ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 **)L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_9 = V_0;
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)L_9) == ((RuntimeObject*)(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_seekCompleted_m6884EFA42474E5E146989B4DB9E624EF10FE270C (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_seekCompleted_m6884EFA42474E5E146989B4DB9E624EF10FE270C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_seekCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_seekCompleted_9();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_seekCompleted(UnityEngine.Video.VideoPlayer_EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_seekCompleted_mF6B1BD552840E9ACA57E5FA3275F564EF83D5F95 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_seekCompleted_mF6B1BD552840E9ACA57E5FA3275F564EF83D5F95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_0 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_1 = NULL;
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * V_2 = NULL;
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_0 = __this->get_seekCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_2 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308_il2cpp_TypeInfo_var));
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** L_5 = __this->get_address_of_seekCompleted_9();
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_6 = V_2;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_7 = V_1;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_8 = InterlockedCompareExchangeImpl<EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *>((EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_9 = V_0;
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_9) == ((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_sendFrameReadyEvents_m89D1724E521FDBC0B76953D5351EB0782B7BF6B5 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_sendFrameReadyEvents_m89D1724E521FDBC0B76953D5351EB0782B7BF6B5_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *);
	static VideoPlayer_get_sendFrameReadyEvents_m89D1724E521FDBC0B76953D5351EB0782B7BF6B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_sendFrameReadyEvents_m89D1724E521FDBC0B76953D5351EB0782B7BF6B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD_ftn) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, bool);
	static VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameReady(UnityEngine.Video.VideoPlayer_FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameReady_mB7641568597E988CE68BC3E3BEF068F558DBCF6F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_frameReady_mB7641568597E988CE68BC3E3BEF068F558DBCF6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_0 = NULL;
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_1 = NULL;
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_2 = NULL;
	{
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_0 = __this->get_frameReady_11();
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_2 = V_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** L_5 = __this->get_address_of_frameReady_11();
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_6 = V_2;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_7 = V_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *>((FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 **)L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_9 = V_0;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameReady(UnityEngine.Video.VideoPlayer_FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameReady_m0232BE22F0F4E3FA43A9D30C5176892DB1DC30D8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_frameReady_m0232BE22F0F4E3FA43A9D30C5176892DB1DC30D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_0 = NULL;
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_1 = NULL;
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * V_2 = NULL;
	{
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_0 = __this->get_frameReady_11();
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_2 = V_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** L_5 = __this->get_address_of_frameReady_11();
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_6 = V_2;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_7 = V_1;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *>((FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 **)L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_9 = V_0;
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_m4CFD7054C97BE95CAC055CF18466E90D060E9B53 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_prepareCompleted_4();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = L_3->get_prepareCompleted_4();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_m4F62FC3695CFC72045E3C90503D541AE6E023EE8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_1 = L_0->get_frameReady_11();
		V_0 = (bool)((!(((RuntimeObject*)(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_4 = L_3->get_frameReady_11();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		int64_t L_6 = ___frameIdx1;
		NullCheck(L_4);
		FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m1A07EB382FD3CE673FF171A11047BEC54A6BB9AB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_loopPointReached_5();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = L_3->get_loopPointReached_5();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_m28D5BF153FC37959C225292BE859135FF778C8BB (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_started_6();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = L_3->get_started_6();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_m669EAEF06893B53351EE81C3858BD62661228C58 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_frameDropped_7();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = L_3->get_frameDropped_7();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_mF7849030756F4A2B5226437C165ECDFE6E52E385 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_1 = L_0->get_errorReceived_8();
		V_0 = (bool)((!(((RuntimeObject*)(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * L_4 = L_3->get_errorReceived_8();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		String_t* L_6 = ___errorStr1;
		NullCheck(L_4);
		ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_mFFB686F5BF044F61495CCF2EFB3517857F98C078 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_1 = L_0->get_seekCompleted_9();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * L_4 = L_3->get_seekCompleted_9();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m21D2B32DDE5ED48F6D6F2ECA9B7A0A2724AF9D6F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * L_1 = L_0->get_clockResyncOccurred_10();
		V_0 = (bool)((!(((RuntimeObject*)(TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_3 = ___source0;
		NullCheck(L_3);
		TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * L_4 = L_3->get_clockResyncOccurred_10();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = ___source0;
		double L_6 = ___seconds1;
		NullCheck(L_4);
		TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
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
// System.Void UnityEngine.Video.VideoPlayer_ErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m9E9B3A7A439858703258976491E29057CB17F534 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer_ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0A812811B673439792D99C125EE4FFE5E358EF6C (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___message1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
					else
						GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___message1);
					else
						VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), ___message1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer_ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorEventHandler_BeginInvoke_mD4C6F60629C221D7702E40D460818B90032FBAA7 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer_ErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_EndInvoke_m7ABF3F8E15D2EF4AE6961324B66208A7FD127295 (ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer_EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA31DCA369A8B7C473F6CE19F6B53D6F3FAF7D6A7 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer_EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m137A7D976F198147AD939AEF51E157107A3B1FBC (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___source0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
					else
						GenericVirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						VirtActionInvoker1< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer_EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_mCA1B5193B15F3D56BCB40A8DDBA703724040F348 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Video.VideoPlayer_EventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_m95A975D9455F92F836E7E19BDB85538B1EBF4067 (EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer_FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_m7DFDBF9203E8F9FC1093E1655C5E2695623D7E3D (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer_FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m88D0AC1BED08D66B6CFA18DA23C58D10795DDA70 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___frameIdx1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___frameIdx1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___frameIdx1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___frameIdx1);
					else
						VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___frameIdx1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), ___frameIdx1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer_FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1 (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_BeginInvoke_m5DA99DFE61C78E158FF79535447F7649FC09E5F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer_FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_EndInvoke_mC54DCEDB2F8CB30CBC6CD1590E2C08150E3E0CFF (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer_TimeEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_mF41715E69B793B1C7DCA3A619CFB05097466523F (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer_TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m278E51F2838EC435606BE1CB3AD0E881505FAE10 (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___seconds1);
					else
						VirtActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___seconds1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___seconds1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___seconds1);
					else
						VirtActionInvoker2< VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___seconds1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), ___seconds1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer_TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, double ___seconds1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_BeginInvoke_m184CF1FDB1D643F00FE3C60982ED62EC4888F21D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer_TimeEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_EndInvoke_m2759449ABAAE5711D31E414D5906AB042725F7AA (TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
