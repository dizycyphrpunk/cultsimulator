﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D;
struct Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758;
struct Action_2_t94C644233E37D574986F0297182FA2BD8972B44A;
struct Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D;
struct Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF;
struct Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB;
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6;
struct DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A;
struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A;
struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4;
struct List_1_t179992B095C528117EEF4782A1F45568BD2D51EA;
struct ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03;
struct ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8;
struct ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2;
struct ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693;
struct ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF;
struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F;
struct ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8;
struct ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C;
struct IContainer_tBD9F21C42D4253E306C4EF7CFC72480E0C7C89B5;
struct Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295;
struct U3CU3Ec__DisplayClass170_0_t6317DA3AA199FDD3FA209BBE7DA777574B1C0C11;
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer_0;
};

struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array_0;
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	bool ___imported_0;
	bool ___shared_1;
	bool ___sharedExplicitRelease_2;
	bool ___requestFallBack_3;
	uint32_t ___writeCount_4;
	int32_t ___cachedHash_5;
	int32_t ___transientPassIndex_6;
	int32_t ___sharedResourceLastFrameUsed_7;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool_8;
};

struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};

struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF  : public RuntimeObject
{
	Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295* ___m_Panel_0;
	RuntimeObject* ___m_Parent_1;
	int32_t ___U3CflagsU3Ek__BackingField_2;
	String_t* ___U3CdisplayNameU3Ek__BackingField_3;
	String_t* ___U3CtooltipU3Ek__BackingField_4;
	String_t* ___U3CqueryPathU3Ek__BackingField_5;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___isHiddenCallback_6;
};

struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray_0;
	int32_t ___sharedResourcesCount_1;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool_2;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback_3;
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback_4;
};

struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor_0;
};

struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data_0;
};

struct U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data_0;
};

struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data_0;
};

struct Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CgetterU3Ek__BackingField_7;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CsetterU3Ek__BackingField_8;
	Action_2_tB3E4CF19F3493DE4FE84AFFB77005AE79F9A3758* ___onValueChanged_9;
};

struct Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___U3CgetterU3Ek__BackingField_7;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CsetterU3Ek__BackingField_8;
	Action_2_t94C644233E37D574986F0297182FA2BD8972B44A* ___onValueChanged_9;
};

struct Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3  : public Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___U3CgetterU3Ek__BackingField_7;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___U3CsetterU3Ek__BackingField_8;
	Action_2_tD2AB9B0AB95F0653AC53DC5114E5EC2958A3E36A* ___onValueChanged_9;
};

struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue_0;
	int32_t ___value_1;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};

struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};

struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask_0;
};

struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	bool ___squaredDistWeighting_4;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	int32_t ___squaredDistWeighting_4;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	int32_t ___squaredDistWeighting_4;
};

struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B 
{
	int32_t ___memoryBudget_0;
	int32_t ___blendingMemoryBudget_1;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh_2;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader_3;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh_4;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader_5;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader_6;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData_7;
	int32_t ___shBands_8;
	bool ___supportsRuntimeDebug_9;
	bool ___supportStreaming_10;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_pinvoke
{
	int32_t ___memoryBudget_0;
	int32_t ___blendingMemoryBudget_1;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh_2;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader_3;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh_4;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader_5;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader_6;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData_7;
	int32_t ___shBands_8;
	int32_t ___supportsRuntimeDebug_9;
	int32_t ___supportStreaming_10;
};
struct ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B_marshaled_com
{
	int32_t ___memoryBudget_0;
	int32_t ___blendingMemoryBudget_1;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___probeDebugMesh_2;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___probeDebugShader_3;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___offsetDebugMesh_4;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___offsetDebugShader_5;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___scenarioBlendingShader_6;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData_7;
	int32_t ___shBands_8;
	int32_t ___supportsRuntimeDebug_9;
	int32_t ___supportStreaming_10;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};

struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};

struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};

struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0_3;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3_6;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity_7;
	int32_t ___width_8;
	int32_t ___height_9;
	int32_t ___depth_10;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0_3;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3_6;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity_7;
	int32_t ___width_8;
	int32_t ___height_9;
	int32_t ___depth_10;
};
struct DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL0_L1rx_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_G_ry_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL1_B_rz_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_0_3;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_1_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_2_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___TexL2_3_6;
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___TexValidity_7;
	int32_t ___width_8;
	int32_t ___height_9;
	int32_t ___depth_10;
};

struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};

struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};

struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField_1;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField_2;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls_3;
	int32_t ___m_ControlCount_4;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer_5;
	int32_t ___m_StateSizeInBytes_6;
	int32_t ___m_RecordCount_7;
	int32_t ___m_HistoryDepth_8;
	int32_t ___m_ExtraMemoryPerRecord_9;
	int32_t ___m_HeadIndex_10;
	uint32_t ___m_CurrentVersion_11;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask_12;
	bool ___m_AddNewControls_13;
};

struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};

struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[8];
			uint32_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_2_OffsetPadding[12];
			int32_t ___controlIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_2_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_3_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_4_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_4_forAlignmentOnly;
		};
	};
};

struct U3CU3Ec__DisplayClass170_0_t6317DA3AA199FDD3FA209BBE7DA777574B1C0C11  : public RuntimeObject
{
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ___U3CU3E4__this_0;
	ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___parameters_1;
};

struct InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMinCellPosition_0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pendingMaxCellPosition_1;
};

struct RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posWS_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot_1;
	float ___scale_2;
};

struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
};

struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings_2;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings_2;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings_2;
};

struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};

struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F  : public RuntimeObject
{
	bool ___m_IsInitialized_0;
	bool ___m_SupportStreaming_1;
	RefVolTransform_t23FA849BA67F6FB0FDC6BA49A08C41D654FC8CE9 ___m_Transform_2;
	int32_t ___m_MaxSubdivision_3;
	ProbeBrickPool_tC43640788A2B356F3F99A068D2CED6702E721693* ___m_Pool_4;
	ProbeBrickIndex_tF1B02DB88E5F4CF79533962B018B5724D74E32D2* ___m_Index_5;
	ProbeCellIndices_t0A30314A2B1D5F97E16BD321C179801D1B42C6AF* ___m_CellIndices_6;
	ProbeBrickBlendingPool_tD0DBB9B875C8C88A6410A239987DA3F9F4BE18F8* ___m_BlendingPool_7;
	List_1_t179992B095C528117EEF4782A1F45568BD2D51EA* ___m_TmpSrcChunks_8;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_PositionOffsets_9;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_CurrGlobalBounds_10;
	Dictionary_2_tE62F67DD5E0705D89AA8A2987FB3C4C21A3C9AAF* ___cells_11;
	ObjectPool_1_t26A8D6F0AC3E7D5C10AB98A9AF68B2EBC2ABE7EF* ___m_CellInfoPool_12;
	ObjectPool_1_t7FA933D4164A730DB5D7E5E1D315B49D70184F03* ___m_BlendingCellInfoPool_13;
	DataLocation_t34FC6B68E8194966FC3C075EF4227E1522CB53BB ___m_TemporaryDataLocation_14;
	int32_t ___m_TemporaryDataLocationMemCost_15;
	int32_t ___m_CurrentProbeVolumeChunkSizeInBricks_16;
	ProbeVolumeSceneData_t29FD126D36ED1E093C2EBBFB3F248DD5E2A86D90* ___sceneData_17;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minLoadedCellPos_18;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxLoadedCellPos_19;
	Action_1_t00621160046FE06A171CE95A003D9AE71EBB2B1D* ___retrieveExtraDataAction_20;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___checksDuringBakeAction_21;
	bool ___m_BricksLoaded_22;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeLoaded_23;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_PendingAssetsToBeUnloaded_24;
	Dictionary_2_t18C83CD24384334A550468AC80B4F64B179517FB* ___m_ActiveAssets_25;
	bool ___m_NeedLoadAsset_26;
	bool ___m_ProbeReferenceVolumeInit_27;
	bool ___m_EnabledBySRP_28;
	InitInfo_t704DDF4A7F366AB2C84F08404C424B877802B058 ___m_PendingInitInfo_29;
	bool ___m_NeedsIndexRebuild_30;
	bool ___m_HasChangedIndex_31;
	int32_t ___m_CBShaderID_32;
	int32_t ___m_NumberOfCellsLoadedPerFrame_33;
	int32_t ___m_NumberOfCellsBlendedPerFrame_34;
	float ___m_TurnoverRate_35;
	int32_t ___m_MemoryBudget_36;
	int32_t ___m_BlendingMemoryBudget_37;
	int32_t ___m_SHBands_38;
	float ___m_ProbeVolumesWeight_39;
	bool ___clearAssetsOnVolumeClear_40;
	List_1_tCD7772AB40D4E7A61CCAFDDF9E33C190D4F9E6D4* ___U3CperSceneDataListU3Ek__BackingField_43;
	ProbeVolumeDebug_t295620780739F33AEAD1D1BB44C5252CE70D3DD8* ___U3CprobeVolumeDebugU3Ek__BackingField_46;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___U3CsubdivisionDebugColorsU3Ek__BackingField_47;
	WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* ___m_DebugItems_48;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugMesh_49;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugMaterial_50;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_DebugOffsetMesh_51;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DebugOffsetMaterial_52;
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___m_DebugFrustumPlanes_53;
	GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ___m_DebugScenarioNames_54;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_DebugScenarioValues_55;
	String_t* ___m_DebugActiveSceneGUID_56;
	String_t* ___m_DebugActiveScenario_57;
	EnumField_t15C8FC0EB96499DFDCEC2B9DBB27B2BBCD5E262C* ___m_DebugScenarioField_58;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___bakingProcessSettings_59;
	Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D* ___realtimeSubdivisionInfo_60;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_LoadedCells_61;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_ToBeLoadedCells_62;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToLoadList_63;
	DynamicArray_1_t85D77BAA52B2801695EAE751BA0F9DD3C26AA604* ___m_TempCellToUnloadList_64;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_LoadedBlendingCells_65;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_ToBeLoadedBlendingCells_66;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToLoadList_67;
	DynamicArray_1_tD456FAFFECC4879D97EE0F550727BF9C6B0B3FE6* ___m_TempBlendingCellToUnloadList_68;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FrozenCameraPosition_69;
	bool ___m_HasRemainingCellsToBlend_70;
};

struct ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F_StaticFields
{
	String_t* ___defaultLightingScenario_41;
	ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* ____instance_42;
	String_t* ___k_DebugPanelName_45;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___index0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___arg10, ___arg21, method);
}
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___arg10, ___arg21, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795 (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared)(___a0, ___b1, p2, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051 (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared)(___a0, ___b1, p2, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared)(___data0, ___start1, ___pivot2, ___end3, ___compare4, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared)(___data0, ___start1, ___pivot2, ___end3, ___compare4, method);
}
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, bool ___destroyPanel0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53 (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* __this, ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B ___parameters0, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___newSize0, ___keepContent1, method);
}
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___index0, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___ptr0, ___max1, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)__this->___m_Owner_0;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*>(__this + _offset);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_0 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_5 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_8 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_13 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_13->___data_0;
		int32_t L_15 = ___b1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisIl2CppFullySharedGenericAny_m2C056932E189D5E31D1107D28ABA7A6A5B5EC099_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* p2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	memset(V_0, 0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_0 = p2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_5 = p2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_8 = p2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_12, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_12);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* L_13 = p2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_13->___data_0;
		int32_t L_15 = ___b1;
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_tDB7A5E7DABCFD3E23853235D7F359DE185A4D541);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method) 
{
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_0 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_5 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_8 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_13 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_13->___data_0;
		int32_t L_15 = ___b1;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___data0;
		int32_t L_7 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_14 = ___compare3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___data0;
		int32_t L_22 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisIl2CppFullySharedGenericAny_m4D143D52B52C5F1F971193FD2EBC1F991E1DAF27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_15 = L_4;
	const Il2CppFullySharedGenericAny L_23 = L_4;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	memset(V_1, 0, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___data0;
		int32_t L_7 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1)))), L_11, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1)))), (void*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_14 = ___compare3;
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_14);
		int32_t L_20;
		L_20 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_19: *(void**)L_19));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___data0;
		int32_t L_22 = V_2;
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1)))), L_23, SizeOf_T_t4E7DADE3DB15D6ACACD4EA4FA1DFFF15559CC2B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1)))), (void*)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___data0;
		int32_t L_7 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_14 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___data0;
		int32_t L_22 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_16 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_21 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_30 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_35 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_43 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_44 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_mA6E8814C46DAB9D561A5440B447E24E67159A5A1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_20 = L_6;
	const Il2CppFullySharedGenericAny L_34 = L_6;
	const Il2CppFullySharedGenericAny L_47 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_25 = L_11;
	const Il2CppFullySharedGenericAny L_39 = L_11;
	U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_1);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_21 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		il2cpp_codegen_memcpy(L_25, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_15);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_30 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		il2cpp_codegen_memcpy(L_34, (L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_29);
		int32_t L_40;
		L_40 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_39: *(void**)L_39));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_43 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		il2cpp_codegen_memcpy(L_47, (L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_47, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_16 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_21 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_30 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_35 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_43 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_44 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___compare3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_39);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_m712B611DAC06FA9738A8F85CAA404B955BB47029_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_24 = L_16;
	const Il2CppFullySharedGenericAny L_39 = L_16;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_2, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_3, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___compare3;
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___compare3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_19 = ___compare3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_24, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_19);
		int32_t L_25;
		L_25 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_23: *(void**)L_23), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_24: *(void**)L_24));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_33);
		il2cpp_codegen_memcpy((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), L_39, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), (void*)L_39);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		il2cpp_codegen_memcpy(L_43, V_3, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_40);
		il2cpp_codegen_memcpy((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)), L_43, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)), (void*)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_39);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mEC21DF5A7D470F44BB30B97EB39D03491BD65D1F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___data0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___data0;
		NullCheck(L_1);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_2 = ___compare1;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_7 = ___compare3;
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_13 = ___compare3;
		int32_t L_14;
		L_14 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___compare3;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_25 = ___compare3;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m64F66E9A59079142461E29BCD21FE90D0C81BB59_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_7 = ___compare3;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_13 = ___compare3;
		int32_t L_14;
		L_14 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_19 = ___compare3;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_25 = ___compare3;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_7 = ___compare3;
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_13 = ___compare3;
		int32_t L_14;
		L_14 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___compare3;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_25 = ___compare3;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass170_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6230B29E8098C1C9F9047C34D6D80B1FFF9D512B_gshared (U3CU3Ec__DisplayClass170_0_t6317DA3AA199FDD3FA209BBE7DA777574B1C0C11* __this, Field_1_t32151A22D4B1B5C1DFFDDACD9F3C78D19596507A* ___field0, bool ___value1, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = (ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B)__this->___parameters_1;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass170_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFC29BD649072DE96C4857E45DE43939FF26525_gshared (U3CU3Ec__DisplayClass170_0_t6317DA3AA199FDD3FA209BBE7DA777574B1C0C11* __this, Field_1_t7F813BE8CAF3F3F635B34474DDD7B797C5B6CD2A* ___field0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = (ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B)__this->___parameters_1;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass170_0_U3CRegisterDebugU3Eg__RefreshDebugU7C0_TisIl2CppFullySharedGenericAny_m60D01CCB414F73059DEA211AC43615983EE79D37_gshared (U3CU3Ec__DisplayClass170_0_t6317DA3AA199FDD3FA209BBE7DA777574B1C0C11* __this, Field_1_tEE1A923EA8160028BC34CE74DF77A8FB37FCA5D3* ___field0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	{
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_0 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ProbeReferenceVolume_UnregisterDebug_m29C8C2812597CC2D2B3FBD5CBD374E618C480187(L_0, (bool)0, NULL);
		ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F* L_1 = (ProbeReferenceVolume_t05ED7EF2BB9B58F26CE1629F0AA773D14100695F*)__this->___U3CU3E4__this_0;
		ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B L_2 = (ProbeVolumeSystemParameters_t0654F2626ACA367E00C375BEB6FEA5B86CB0A58B)__this->___parameters_1;
		NullCheck(L_1);
		ProbeReferenceVolume_RegisterDebug_m2F302154AB36B9D5C1739DE3E699CF8574918F53(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___outRes0, bool ___pooledResource1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_9 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_11;
		L_11 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_9, L_10, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
	}

IL_004b:
	{
		RuntimeObject** L_13 = ___outRes0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_14 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_16;
		L_16 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_14, L_15, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_17 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_16);
		*(RuntimeObject**)L_13 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		RuntimeObject** L_18 = ___outRes0;
		bool L_19 = ___pooledResource1;
		if (L_19)
		{
			G_B4_0 = L_18;
			goto IL_006f;
		}
		G_B3_0 = L_18;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0075;
	}

IL_006f:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_20 = (IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)__this->___pool_2;
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0075:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		int32_t L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___dptr0;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0054:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0058:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___n4;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___dptr0;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0053:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___n4;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_9 = L_3;
	const Il2CppFullySharedGenericStruct L_15 = L_3;
	const Il2CppFullySharedGenericStruct L_26 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_40 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_124 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_27 = L_16;
	const Il2CppFullySharedGenericStruct L_31 = L_16;
	const Il2CppFullySharedGenericStruct L_41 = L_16;
	const Il2CppFullySharedGenericStruct L_51 = L_16;
	const Il2CppFullySharedGenericStruct L_125 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_8, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_12, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		Il2CppFullySharedGenericStruct* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_9, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_8, L_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_14;
		L_14 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_15, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_16, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_25;
		L_25 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_26, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_27, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_29;
		L_29 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_30, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_31, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_39;
		L_39 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_41, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_120;
		L_120 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_124, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_125, V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_1, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___len0, int32_t ___imm81, Il2CppFullySharedGenericStruct ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_7, ___allOnesT2, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), L_7, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), (void*)L_7);
		goto IL_0049;
	}

IL_0038:
	{
		Il2CppFullySharedGenericStruct* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		il2cpp_codegen_memcpy(L_10, ___allOnesT7, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		il2cpp_codegen_memcpy(L_14, ___allOnesT5, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CsizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}