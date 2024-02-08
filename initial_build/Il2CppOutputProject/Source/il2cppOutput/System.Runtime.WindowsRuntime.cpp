#include "il2cpp-config.h"

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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Threading.TimerCallback
struct TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
IL2CPP_EXTERN_C String_t* _stringLiteral3D54973F528B01019A58A52D34D518405A01B891;
IL2CPP_EXTERN_C String_t* _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B;
IL2CPP_EXTERN_C String_t* _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57;
IL2CPP_EXTERN_C String_t* _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651;
IL2CPP_EXTERN_C String_t* _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030;
IL2CPP_EXTERN_C String_t* _stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3CB685CC566A445B0072B307F675ED68731A9C;
IL2CPP_EXTERN_C String_t* _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7441938D5F79A2DBB130D9141124EE2D6FC20CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9;
IL2CPP_EXTERN_C String_t* _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19;
IL2CPP_EXTERN_C String_t* _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87System_Runtime_WindowsRuntime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22 
{
public:

public:
};


// System.Object

// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t725A33FE8879B717322060E4A76D34D63D700548 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m5745CFEF40ED7190B05A09CE37B07650634038C9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mDADF6292B118D0FD40831F9C33D7EFE7AEDB889B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m60458A1E0C478452AFD6A20A5B7090AEA469A8B0(uint32_t ___value0) = 0;
};
struct Il2CppArrayBounds;

// System.Array


// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions
struct WindowsRuntimeBufferExtensions_t6C6C86A0BF5285EAC9C96756390AA4E5EE822291  : public RuntimeObject
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


// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields, ___s_idGenerator_0)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_idGenerator_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions
struct WindowsRuntimeSystemExtensions_tD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// Windows.Foundation.TokenizerHelper
struct TokenizerHelper_t9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
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
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
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


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// System.VoidValueTypeParameter
struct VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA__padding[1];
	};

public:
};


// Windows.Foundation.Point
struct Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207(uint32_t ___dwReserved0) = 0;
};
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058(intptr_t* comReturnValue) = 0;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____data_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____pinHandle_5)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_pinvoke
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_com
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_kernelEvent_3)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_timer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.TypeLoadException
struct TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DllNotFoundException
struct DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76  : public TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3EA4CBB9A00BC498783C5EDA61DC26E3FF20314C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644 (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.IntPtr System.Threading.Interlocked::CompareExchange(System.IntPtr&,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m0A02B16A9B99B35E70831EF919482BDFCE046D7A (intptr_t* ___location10, intptr_t ___value1, intptr_t ___comparand2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879 (const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510 (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5 (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * ___continuationAction0, RuntimeObject * ___state1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, int32_t ___continuationOptions3, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___scheduler4, const RuntimeMethod* method);
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457 (CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472 (double* __this, double ___obj0, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A (RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E_inline (NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
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
// System.Runtime.InteropServices.IAgileObject
const Il2CppGuid IAgileObject_t725A33FE8879B717322060E4A76D34D63D700548::IID = { 0x94ea2b94, 0xe9cc, 0x49e0, 0xc0, 0xff, 0xee, 0x64, 0xca, 0x8f, 0x5b, 0x90 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IMarshal
const Il2CppGuid IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C::IID = { 0x3, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_GetUnmarshalClass_m394D399AF3D58E5C260D663B63E34F4A37BF6F76(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, ___pCid5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_GetMarshalSizeMax_mBAF33A0B75ABDA690A09809CBC0758AC94C591A1(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, ___pSize5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616 (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_MarshalInterface_m00480B6CD7532674DAA33AB7D4379125D03FC616(___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_UnmarshalInterface_mDD2463F15F49EA8390415A654870C8A2482E2BEA(___pStm0, ___riid1, ___ppv2);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298 (RuntimeObject* __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_ReleaseMarshalData_m03292BAE558EA56FAA11F9CBF8136DDB3D31E298(___pStm0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207 (RuntimeObject* __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C = il2cpp_codegen_com_query_interface<IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C->IMarshal_DisconnectObject_mE3689A76176F7E4FC4D556C9DF8D3F55DC8C9207(___dwReserved0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
const Il2CppGuid IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7::IID = { 0x905a0fef, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7* ____ibufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7 = il2cpp_codegen_com_query_interface<IBufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	intptr_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ibufferByteAccess_tFCEF19FBAF4E19CB5BD75DC16CDE5061DC9758D7->IBufferByteAccess_GetBuffer_m0047AB72261718E613B316AE41337C99050B2058(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL RoGetBufferMarshaler(IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
#endif
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bufferMarshalerPtr0' to native representation
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C* ____bufferMarshalerPtr0_empty = NULL;
	IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C** ____bufferMarshalerPtr0_marshaled = &____bufferMarshalerPtr0_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetBufferMarshaler)(____bufferMarshalerPtr0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____bufferMarshalerPtr0_marshaled);
	#endif

	// Marshaling of parameter '___bufferMarshalerPtr0' back from native representation
	RuntimeObject* _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____bufferMarshalerPtr0_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced), IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C::IID, *____bufferMarshalerPtr0_marshaled);
		}
	}
	else
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___bufferMarshalerPtr0 = _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___bufferMarshalerPtr0, (void*)____bufferMarshalerPtr0_marshaled);

	// Marshaling cleanup of parameter '___bufferMarshalerPtr0' native representation
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		(*____bufferMarshalerPtr0_marshaled)->Release();
		*____bufferMarshalerPtr0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_m92635310D29611651BA2CEAE7078C4D60657EEAF((RuntimeObject**)(&V_0), /*hidden argument*/NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->set_s_winRtMarshalProxy_0(L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_003b;
			}
		}

IL_001a:
		{
			String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559, _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57, _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD, /*hidden argument*/NULL);
			Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_5, L_4, /*hidden argument*/NULL);
			Exception_t * L_6 = L_5;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_6, L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_0;
			if (L_8)
			{
				goto IL_0058;
			}
		}

IL_003e:
		{
			String_t* L_9 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6905F850EE139FEF18EE2BDBB20F1F47C1FFA559, _stringLiteral4E9DBDE61B5DADBC3F242C5DEA103B2AC13F5E57, _stringLiteralF5948B04AE471713F9168EC57782B460CF1E14CD, /*hidden argument*/NULL);
			NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_10 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
		}

IL_0058:
		{
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.DllNotFoundException)
		V_2 = ((DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 *)__exception_local);
		DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 * L_11 = V_2;
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_12 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3EA4CBB9A00BC498783C5EDA61DC26E3FF20314C(L_12, _stringLiteral6B3CB685CC566A445B0072B307F675ED68731A9C, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_002e:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_004d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0060:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___data0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0074:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00_RuntimeMethod_var);
	}

IL_0084:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___data0;
		__this->set__data_1(L_19);
		int32_t L_20 = ___offset1;
		__this->set__dataStartOffs_2(L_20);
		int32_t L_21 = ___length2;
		__this->set__usefulDataLength_3(L_21);
		int32_t L_22 = ___capacity3;
		__this->set__maxDataCapacity_4(L_22);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x78, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		{
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__data_1();
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
			V_0 = L_1;
			intptr_t L_2 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
			int32_t L_3 = __this->get__dataStartOffs_2();
			intptr_t L_4 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_2, L_3, /*hidden argument*/NULL);
			V_2 = (intptr_t)L_4;
			intptr_t* L_5 = __this->get_address_of__dataPtr_6();
			intptr_t L_6 = V_2;
			intptr_t L_7 = Interlocked_CompareExchange_m0A02B16A9B99B35E70831EF919482BDFCE046D7A((intptr_t*)L_5, (intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_8 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x77, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				bool L_9 = V_1;
				if (L_9)
				{
					goto IL_0057;
				}
			}

IL_004e:
			{
				GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
				goto IL_0076;
			}

IL_0057:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_10 = __this->get_address_of__pinHandle_5();
				bool L_11 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_006f;
				}
			}

IL_0064:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_12 = __this->get_address_of__pinHandle_5();
				GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_12, /*hidden argument*/NULL);
			}

IL_006f:
			{
				GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = V_0;
				__this->set__pinHandle_5(L_13);
			}

IL_0076:
			{
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x77, IL_0077)
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(12)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		intptr_t L_14 = V_2;
		void* L_15 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_14, /*hidden argument*/NULL);
		return (uint8_t*)(L_15);
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_mE1F0E0D1245A31A26128A28A26B979B171C84FDA (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = __this->get_address_of__pinHandle_5();
			bool L_1 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000d:
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_2 = __this->get_address_of__pinHandle_5();
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_2, /*hidden argument*/NULL);
		}

IL_0018:
		{
			IL2CPP_LEAVE(0x21, FINALLY_001a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x21, IL_0021)
	}

IL_0021:
	{
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m94DAA0965A8E5DEDA6F3F77798CF72D140932948 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mB0F8ED9F7F05C763AE8698180336B9A531ABAF9F (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, _stringLiteral7441938D5F79A2DBB130D9141124EE2D6FC20CD1, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m89636F8978B5A5D597CFB74C2EF3509E52E190B9_RuntimeMethod_var);
	}

IL_0024:
	{
		uint32_t L_4 = ___value0;
		__this->set__usefulDataLength_3(L_4);
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mA4B0277D88CF6BE1640E0ABF95A4DBBD0A99E1B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = __this->get_address_of__dataPtr_6();
		intptr_t L_1 = VolatileRead((intptr_t*)L_0);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}

IL_001b:
	{
		uint8_t* L_5 = WindowsRuntimeBuffer_PinUnderlyingData_mD31E1965F0ABF312675E6F3AEA70C773C4CA057B(__this, /*hidden argument*/NULL);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		return (intptr_t)L_6;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055 (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m6508BA598A7093C8CAA21518740C488A13CB9055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		uint32_t L_1 = ___dwReserved0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m6A46F1695F97BDE4587C8CCE174FEE16A11B814B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlflags4;
		uint32_t* L_6 = ___pSize5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1 /* System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (uint32_t*)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mEE39B87F550E9BB968B24C873F3E2048C4C67F5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlFlags4;
		Guid_t * L_6 = ___pCid5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t * >::Invoke(0 /* System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (Guid_t *)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mAFC02F5CA4608E72AB872D21D1AEAB0C9E76808B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t L_3 = ___pv2;
		uint32_t L_4 = ___dwDestContext3;
		intptr_t L_5 = ___pvDestContext4;
		uint32_t L_6 = ___mshlflags5;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t)L_3, L_4, (intptr_t)L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m521849BEE7B8AE233B26A1BE492C4060B7BE678D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mB0B055B69C3BE22A68704EB42B4D0077360F59BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m8EA99F1848DDC7E830545DC80A8C53983B3E0879(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t* L_3 = ___ppv2;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t *, intptr_t* >::Invoke(3 /* System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&) */, IMarshal_t9798E44C73E4A0170F6E91C6FCE5FD6CAC06001C_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)L_3);
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
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mF47A7B4DC12145BA5E560C9FDA9298D3B7CC2551 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___source0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3 = WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870(L_0, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		return L_3;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteral7CB1F56D3FBE09E809244FC8E13671CD876E3860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_003b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_004e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, _stringLiteralA7512A2545D962556CA62F28AA7BD8D840985DA9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_0061:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, _stringLiteral58B2D91FD6A4CD3EB40D16D2CDAA0AED435EA030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, WindowsRuntimeBufferExtensions_AsBuffer_m44E577DC4024FAA0BB691593F68FBD5A972CE870_RuntimeMethod_var);
	}

IL_0070:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___source0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___length2;
		int32_t L_22 = ___capacity3;
		WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 * L_23 = (WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t538921471412CC57913645387EFEF96E98FBDE22_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m057CF397F8500BB4BE049EF15809461062E5DC00(L_23, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E (uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		uint32_t L_4 = AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E(/*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8 = Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03((int32_t*)(((uintptr_t)L_6)), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
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
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___source0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___sink1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B2_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B2_1 = NULL;
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B1_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B1_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B4_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B4_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B3_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_0 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_2 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_3 = (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)il2cpp_codegen_object_new(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_4 = L_3;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_5 = ___sink1;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_6 = CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_8 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_10 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_11 = (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *)il2cpp_codegen_object_new(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var);
		Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_12 = L_11;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_13 = V_0;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_14 = L_13;
		RuntimeObject * L_15 = Box(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_16 = CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var);
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_17 = TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87_inline(/*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C (Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
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
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_0 = (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E *)il2cpp_codegen_object_new(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)UnBox(L_0, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)(&V_0), /*hidden argument*/NULL);
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
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_11 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_13);
		double L_15 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_16);
		double L_18 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4(L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method)
{
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_1 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_3 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  L_1 = (*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562(L_1, ((*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)UnBox(L_2, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + _offset);
	return Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0 = Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_18 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_1 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_3 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_5 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_7 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  L_1 = (*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA(L_1, ((*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)UnBox(L_2, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + _offset);
	return Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return (((double)((double)L_0)));
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  L_1 = (*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8(L_1, ((*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)UnBox(L_2, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_3 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_4 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_7 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + _offset);
	return Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87System_Runtime_WindowsRuntime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var);
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_0 = ((TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E_inline (NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_numberDecimalSeparator_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
