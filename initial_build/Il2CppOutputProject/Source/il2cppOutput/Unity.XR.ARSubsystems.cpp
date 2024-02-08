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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t5C3A4E60A7DD2A96D7C8F1979D89B7D6E34088A0;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct SubsystemDescriptor_1_t5BDE137BCA9CC9ECFF0B7F81A014F830532B51A8;
// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86;
// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079;

IL2CPP_EXTERN_C RuntimeClass* Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065;
IL2CPP_EXTERN_C String_t* _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5D999C478CCB89B73D744A0781362458C30380;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4E8CB62B5C9AA47AEDDAC7C3F9DA543AECB0F9;
IL2CPP_EXTERN_C String_t* _stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB803153B51A277297BD55B487E4635F22FE4D888;
IL2CPP_EXTERN_C const RuntimeMethod* IProvider_get_frameRate_m157CFC505E86907CB821238B45B2BA6FA4983813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IProvider_set_matchFrameRate_mFD6D9C6FD79B16E999A0E7650260F954F1CA6B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m2C999F2616F64FCDB6A90CF3941CB34F0D3EEA85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_mD65C52804D9B44F231361FAA55B367475C283ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m020C527B26482E917C5BE9D3B45967038BB072A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_mDAF2B56D38676920B9370CF1213E1C3232FB1697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_m30209BB62AAA5069EACA5EC686F94E7C54134C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_get_frameRate_m157CFC505E86907CB821238B45B2BA6FA4983813_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_set_matchFrameRate_mFD6D9C6FD79B16E999A0E7650260F954F1CA6B66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId__cctor_m874A4E0F53AF39A7D95AEA9A0E8164BA2B6EA32F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CDUnity_XR_ARSubsystems_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointSubsystemDescriptor_Create_m6560F038F7DD64D1FEE3924A57AD4DBC79D29988_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointSubsystemDescriptor__ctor_m549A60C3584AADA3A0DE752C0F363113A61FD0A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointSubsystem__ctor_m00BC1D2247754D96678FBCC67FE14BBC2107D275_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystemDescriptor_RegisterDescriptor_m3EF9E7985B16FFF8FE15FBEDFC87FF1BB811D49E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystemDescriptor__ctor_m1956ED91DA6DA8D4EAA62906C378B69F5F3E8C1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD4E2C466946EFCC911763D21CD7F606F5D963632 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.NativeCopyUtility
struct NativeCopyUtility_t829515E8900A8C56970A8DCA18252FF587DA40D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions
struct SessionAvailabilityExtensions_tB752BB8E4FBD8671A4C947FB3000A6E9601C863C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
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


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
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


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct SubsystemDescriptor_1_t5BDE137BCA9CC9ECFF0B7F81A014F830532B51A8  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct Subsystem_1_t2D4C03D0BBC12F09C936C232E7DBF3427B7F754D  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Vector2Int
struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
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

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899  : public Subsystem_1_t2D4C03D0BBC12F09C936C232E7DBF3427B7F754D
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D  : public SubsystemDescriptor_1_t5BDE137BCA9CC9ECFF0B7F81A014F830532B51A8
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079  : public SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsInstallU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_2() const { return ___U3CsupportsInstallU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_2() { return &___U3CsupportsInstallU3Ek__BackingField_2; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsMatchFrameRateU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_3() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_3 = value;
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3  : public TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_Provider
	IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_DefaultReferencePoint
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___m_DefaultReferencePoint_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_Provider_2)); }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultReferencePoint_3() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_DefaultReferencePoint_3)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_m_DefaultReferencePoint_3() const { return ___m_DefaultReferencePoint_3; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_m_DefaultReferencePoint_3() { return &___m_DefaultReferencePoint_3; }
	inline void set_m_DefaultReferencePoint_3(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___m_DefaultReferencePoint_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7AB136126F271CC1CF77B79DD04F23CE085B0FC4_gshared (TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m05BD33589EBFFAAA645D9A6F574D01E5D2FF88C6_gshared (SubsystemDescriptor_1_t5C3A4E60A7DD2A96D7C8F1979D89B7D6E34088A0 * __this, const RuntimeMethod* method);
// !0 UnityEngine.Subsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mF800BACE693EF3C3ACD025FE3DD01DE978D06665_gshared (Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mEACBDF57E27E9B855A620930D966F9DDA490DE2D_gshared (Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m620606AC246BEEC637A748B22FAB588CB93120B8 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6F1171936847F6A193255FABDCA3772D7AE57328 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mB8FF48A7F895DEE1E826EDD6126475258BE9ADC2 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_mD4597D205E31CBA88C523E616E7A45D78C95BF3E (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRReferencePoint_GetHashCode_mAA9EDDD897E7DDD88AA10A7B9E10FC2025E4F7CA (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_mDC7BF74A9CA0E8F34E4BD3C584918380A624D3E8 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id10, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id21, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::op_Equality(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_op_Equality_m412E2304E51F689B220BDAF927058DBEC0CEDD5B (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___a0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___b1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(UnityEngine.XR.ARSubsystems.XRReferencePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_m30209BB62AAA5069EACA5EC686F94E7C54134C3E (TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_m7AB136126F271CC1CF77B79DD04F23CE085B0FC4_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor__ctor_m549A60C3584AADA3A0DE752C0F363113A61FD0A2 (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_m951CAFC452443413A2DD2D9BA9042415A960E0F8 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_mD65C52804D9B44F231361FAA55B367475C283ECA (SubsystemDescriptor_1_t5BDE137BCA9CC9ECFF0B7F81A014F830532B51A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t5BDE137BCA9CC9ECFF0B7F81A014F830532B51A8 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m05BD33589EBFFAAA645D9A6F574D01E5D2FF88C6_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_mA84B0580E0938F338B6E2A07BF02E893649A49FA_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAE7AE6B41C6BC0E59B6EC4E9BB6E93A98F4B7BF9_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_m3FBD1AAB8470EFCF3A9F31271331B1BE0DAA93BF_inline (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !0 UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * Subsystem_1_get_SubsystemDescriptor_mDAF2B56D38676920B9370CF1213E1C3232FB1697 (Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * (*) (Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_mF800BACE693EF3C3ACD025FE3DD01DE978D06665_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m6A46D829025B00AFFCEE06A8A66A3D383AF2757E_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m020C527B26482E917C5BE9D3B45967038BB072A1 (Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533 * __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533 *, const RuntimeMethod*))Subsystem_1__ctor_mEACBDF57E27E9B855A620930D966F9DDA490DE2D_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(___result0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_m1956ED91DA6DA8D4EAA62906C378B69F5F3E8C1E (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m2C999F2616F64FCDB6A90CF3941CB34F0D3EEA85 (SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m05BD33589EBFFAAA645D9A6F574D01E5D2FF88C6_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m8660DC05AA837607AC160D4300E7D1D204BD1E18_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9371FEB427307794FC0EB7DF361E2F47E6E3F378_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m977BF9AC1B8FF7224144F0979A8A30325256EE12_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m74048D3192BAF559FEFAB878921C3EBB68ACB635_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m5D06AEAC2DD5497E37C5C8A1E06952186ACDCC70 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mAA0877F7CE8BCEC50F568C257794F50C3A4BFDB8 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___other0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_mE7271B43B00DD99C98FA00AAAE3A948E0822D624 (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		// return (availability & SessionAvailability.Supported) != SessionAvailability.None;
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m199B1D6F5729DE0A1BC7144BE38DEF9896B68A33 (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		// return (availability & SessionAvailability.Installed) != SessionAvailability.None;
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
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
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId { get { return s_InvalidId; } }
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m620606AC246BEEC637A748B22FAB588CB93120B8 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___subId10;
		__this->set_m_SubId1_1(L_0);
		// m_SubId2 = subId2;
		uint64_t L_1 = ___subId21;
		__this->set_m_SubId2_2(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_m620606AC246BEEC637A748B22FAB588CB93120B8_AdjustorThunk (RuntimeObject * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + _offset);
	TrackableId__ctor_m620606AC246BEEC637A748B22FAB588CB93120B8(_thisAdjusted, ___subId10, ___subId21, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		String_t* L_1 = UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71((uint64_t*)L_0, _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		String_t* L_3 = UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71((uint64_t*)L_2, _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9C4E8CB62B5C9AA47AEDDAC7C3F9DA543AECB0F9, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + _offset);
	return TrackableId_ToString_m9C04F12E2DA81C481BAABC989B14E8B3509DADB2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6F1171936847F6A193255FABDCA3772D7AE57328 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method)
{
	{
		// var hash = m_SubId1.GetHashCode();
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		int32_t L_1 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_0, /*hidden argument*/NULL);
		// return hash * 486187739 + m_SubId2.GetHashCode();
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		int32_t L_3 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_m6F1171936847F6A193255FABDCA3772D7AE57328_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + _offset);
	return TrackableId_GetHashCode_m6F1171936847F6A193255FABDCA3772D7AE57328(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TrackableId_Equals_mB8FF48A7F895DEE1E826EDD6126475258BE9ADC2((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)__this, ((*(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)UnBox(L_1, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + _offset);
	return TrackableId_Equals_m513A2978A536C42A1AFE1A4D42BEE78EE056BD28(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mB8FF48A7F895DEE1E826EDD6126475258BE9ADC2 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method)
{
	{
		// return (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->get_m_SubId1_1();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_SubId1_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->get_m_SubId2_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_mB8FF48A7F895DEE1E826EDD6126475258BE9ADC2_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + _offset);
	return TrackableId_Equals_mB8FF48A7F895DEE1E826EDD6126475258BE9ADC2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_mDC7BF74A9CA0E8F34E4BD3C584918380A624D3E8 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id10, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id21, const RuntimeMethod* method)
{
	{
		// return
		//     (id1.m_SubId1 == id2.m_SubId1) &&
		//     (id1.m_SubId2 == id2.m_SubId2);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___id10;
		uint64_t L_1 = L_0.get_m_SubId1_1();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = ___id21;
		uint64_t L_3 = L_2.get_m_SubId1_1();
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___id10;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___id21;
		uint64_t L_7 = L_6.get_m_SubId2_2();
		return (bool)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m874A4E0F53AF39A7D95AEA9A0E8164BA2B6EA32F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId__cctor_m874A4E0F53AF39A7D95AEA9A0E8164BA2B6EA32F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TrackableId__ctor_m620606AC246BEEC637A748B22FAB588CB93120B8((&L_0), (((int64_t)((int64_t)0))), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->set_s_InvalidId_0(L_0);
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
// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new XRReferencePoint(
		//     TrackableId.invalidId,
		//     Pose.identity,
		//     TrackingState.None,
		//     IntPtr.Zero);
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRReferencePoint__ctor_mD4597D205E31CBA88C523E616E7A45D78C95BF3E((&L_2), L_0, L_1, 0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_mD4597D205E31CBA88C523E616E7A45D78C95BF3E (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	{
		// m_Id = trackableId;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_Id_0(L_0);
		// m_Pose = pose;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		__this->set_m_Pose_1(L_1);
		// m_TrackingState = trackingState;
		int32_t L_2 = ___trackingState2;
		__this->set_m_TrackingState_2(L_2);
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___nativePtr3;
		__this->set_m_NativePtr_3((intptr_t)L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRReferencePoint__ctor_mD4597D205E31CBA88C523E616E7A45D78C95BF3E_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + _offset);
	XRReferencePoint__ctor_mD4597D205E31CBA88C523E616E7A45D78C95BF3E(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRReferencePoint_GetHashCode_mAA9EDDD897E7DDD88AA10A7B9E10FC2025E4F7CA (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		// var hashCode = m_Id.GetHashCode();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1 = TrackableId_GetHashCode_m6F1171936847F6A193255FABDCA3772D7AE57328((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Pose.GetHashCode();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = __this->get_address_of_m_Pose_1();
		int32_t L_3 = Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_2, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_TrackingState.GetHashCode();
		int32_t* L_4 = __this->get_address_of_m_TrackingState_2();
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_4, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_3();
		int32_t L_7 = IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A((intptr_t*)L_6, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRReferencePoint_GetHashCode_mAA9EDDD897E7DDD88AA10A7B9E10FC2025E4F7CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + _offset);
	return XRReferencePoint_GetHashCode_mAA9EDDD897E7DDD88AA10A7B9E10FC2025E4F7CA(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(UnityEngine.XR.ARSubsystems.XRReferencePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     m_Id == other.m_Id &&
		//     m_Pose == other.m_Pose &&
		//     m_TrackingState == other.m_TrackingState &&
		//     m_NativePtr == other.m_NativePtr;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_Id_0();
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		bool L_3 = TrackableId_op_Equality_mDC7BF74A9CA0E8F34E4BD3C584918380A624D3E8(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = __this->get_m_Pose_1();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_5 = ___other0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = L_5.get_m_Pose_1();
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		bool L_7 = Pose_op_Equality_m412E2304E51F689B220BDAF927058DBEC0CEDD5B(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_2();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_3();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_3();
		bool L_14 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D_AdjustorThunk (RuntimeObject * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + _offset);
	return XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// return Equals((XRReferencePoint)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRReferencePoint_Equals_m4783954B81A2A4496B718B1940FEB8D9BD99C15D((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)__this, ((*(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)UnBox(L_1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + _offset);
	return XRReferencePoint_Equals_m63D1CD2AE3191F649B2791970AB507AA379B78FA(_thisAdjusted, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem__ctor_m00BC1D2247754D96678FBCC67FE14BBC2107D275 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystem__ctor_m00BC1D2247754D96678FBCC67FE14BBC2107D275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRReferencePointSubsystem()
		TrackingSubsystem_2__ctor_m30209BB62AAA5069EACA5EC686F94E7C54134C3E(__this, /*hidden argument*/TrackingSubsystem_2__ctor_m30209BB62AAA5069EACA5EC686F94E7C54134C3E_RuntimeMethod_var);
		// m_Provider = CreateProvider();
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = VirtFuncInvoker0< IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * >::Invoke(11 /* UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		// m_DefaultReferencePoint = XRReferencePoint.GetDefault();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_1 = XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8(/*hidden argument*/NULL);
		__this->set_m_DefaultReferencePoint_3(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_Start_m92D4BE486883048A2C181BB0D4C3E75A10F834BE (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = ((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Provider.Start();
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Start() */, L_1);
	}

IL_0013:
	{
		// m_Running = true;
		((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_Stop_mFAFD07F36E8E1ADDB46CEE80E65A0A65CFFB0E99 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = ((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Provider.Stop();
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Stop() */, L_1);
	}

IL_0013:
	{
		// m_Running = false;
		((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_OnDestroy_m49B0CE290FA4181799996BB3343CE6412D58E4C5 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		// Stop();
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Stop() */, __this);
		// m_Provider.Destroy();
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Destroy() */, L_0);
		// }
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Start_m36529D200576FC422EF0E0815D4CE54C9452B51D (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Stop_m6E16DE8C2AB51A51A05D3DE786D0720FBE2607BF (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Destroy_mDE0559C0896A464F033F677A73CD0A16CB082A88 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRReferencePoint,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  IProvider_GetChanges_m7F99F4F7722D3F7761B2144E01E5964B90A0D579 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultReferencePoint0, int32_t ___allocator1, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default(TrackableChanges<XRReferencePoint>);
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF ));
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IProvider_TryAddReferencePoint_m272B550B20E72D235C3E9347E87BBBEA456415A8 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		// referencePoint = default(XRReferencePoint);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_0 = ___referencePoint1;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IProvider_TryRemoveReferencePoint_mFF0DA84C79423650C0D155402B7D69EF0F8D436B (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m7D69D152ED0A017FF02C31CDD297F546148C9DD5 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_m3FBD1AAB8470EFCF3A9F31271331B1BE0DAA93BF (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_Create_m6560F038F7DD64D1FEE3924A57AD4DBC79D29988 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystemDescriptor_Create_m6560F038F7DD64D1FEE3924A57AD4DBC79D29988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRReferencePointSubsystemDescriptor(cinfo));
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_0 = ___cinfo0;
		XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * L_1 = (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D *)il2cpp_codegen_object_new(XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_il2cpp_TypeInfo_var);
		XRReferencePointSubsystemDescriptor__ctor_m549A60C3584AADA3A0DE752C0F363113A61FD0A2(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m951CAFC452443413A2DD2D9BA9042415A960E0F8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor__ctor_m549A60C3584AADA3A0DE752C0F363113A61FD0A2 (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystemDescriptor__ctor_m549A60C3584AADA3A0DE752C0F363113A61FD0A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRReferencePointSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_mD65C52804D9B44F231361FAA55B367475C283ECA(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_mD65C52804D9B44F231361FAA55B367475C283ECA_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_mA84B0580E0938F338B6E2A07BF02E893649A49FA_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAE7AE6B41C6BC0E59B6EC4E9BB6E93A98F4B7BF9_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsTrackableAttachments = cinfo.supportsTrackableAttachments;
		bool L_2 = Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_m3FBD1AAB8470EFCF3A9F31271331B1BE0DAA93BF_inline(__this, L_2, /*hidden argument*/NULL);
		// }
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke_back(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke_cleanup(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com_back(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com_cleanup(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id == null) ? 0 : id.GetHashCode();
		String_t* L_0 = Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType == null) ? 0 : subsystemImplementationType.GetHashCode());
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_GetHashCode_m44A7F0571AF0F4CEFECFDF9347EA517EA62F8E5D(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, ((*(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)UnBox(L_1, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_Equals_m48D047F332BBAC4B19A45B966678D92CADC6F0F2(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     String.Equals(id, other.id) &&
		//     subsystemImplementationType == other.subsystemImplementationType;
		String_t* L_0 = Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3_AdjustorThunk (RuntimeObject * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + _offset);
	return Cinfo_Equals_m62C82D4C3A17A329222BC38370B76CDB219ED6F3(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_running_m0AF2183320BAA9C43DD4B9E12B11514E579487E6 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = __this->get_m_Running_1();
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * XRSessionSubsystem_GetAvailabilityAsync_mE1444BD33C0A1EAD4982FC0AE64D1251635487ED (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Provider.GetAvailabilityAsync();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_1 = VirtFuncInvoker0< Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * >::Invoke(11 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::GetAvailabilityAsync() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SubsystemDescriptor.supportsInstall)
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_0 = Subsystem_1_get_SubsystemDescriptor_mDAF2B56D38676920B9370CF1213E1C3232FB1697(__this, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_mDAF2B56D38676920B9370CF1213E1C3232FB1697_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = XRSessionSubsystemDescriptor_get_supportsInstall_m6A46D829025B00AFFCEE06A8A66A3D383AF2757E_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new NotSupportedException("InstallAsync is not supported on this platform.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var);
	}

IL_0018:
	{
		// return m_Provider.InstallAsync();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_3 = __this->get_m_Provider_2();
		NullCheck(L_3);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_4 = VirtFuncInvoker0< Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * >::Invoke(12 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::InstallAsync() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRSessionSubsystem()
		Subsystem_1__ctor_m020C527B26482E917C5BE9D3B45967038BB072A1(__this, /*hidden argument*/Subsystem_1__ctor_m020C527B26482E917C5BE9D3B45967038BB072A1_RuntimeMethod_var);
		// m_Provider = CreateProvider();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = VirtFuncInvoker0< IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * >::Invoke(11 /* UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Start_m4309ED22C582729B7E0CE7593EA4F05E5D01E80C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = __this->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Provider.Resume();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Resume() */, L_1);
	}

IL_0013:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_m09A1C906E574CD27377602632572058C88958773 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// m_Provider.Reset();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Reset() */, L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Stop_m660C2C790C22C34B49054B5AC0033BD1B2993A6D (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = __this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Provider.Pause();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Pause() */, L_1);
	}

IL_0013:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnDestroy_m6E173EA064A32E49BF31E67245A70BFB0970890C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// Stop();
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Stop() */, __this);
		// m_Provider.Destroy();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Destroy() */, L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m40F8405ECB47FDC56B0B203F09655E3E5F637EFB (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		// m_Provider.Update(updateParams);
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_1 = ___updateParams0;
		NullCheck(L_0);
		VirtActionInvoker1< XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  >::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_m5030BDDD5E7BB722D7259D98C988911335751945 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// m_Provider.OnApplicationPause();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationPause() */, L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_m47B8B29B90F5DDF27221EE1E32D5DBA22C347FBD (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// m_Provider.OnApplicationResume();
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationResume() */, L_0);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Provider.trackingState; }
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(13 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2425113BCCDD44CEF92AA9A045C002CAF981B6D7 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Provider.notTrackingReason; }
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(14 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_notTrackingReason() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRate_mC750A3D6F4EA06E45880B76305178E568E04C82A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Provider.matchFrameRate; }
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_matchFrameRate() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_matchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_matchFrameRate_mAE3C92CA2CA959912C6AF7AB1BD10B2B9A9FC54C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Provider.matchFrameRate = value; }
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::set_matchFrameRate(System.Boolean) */, L_0, L_1);
		// set { m_Provider.matchFrameRate = value; }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_frameRate_m0E723AB90D900D24D7DA2F5A2A8009CB4946A62B (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Provider.frameRate; }
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_frameRate() */, L_0);
		return L_1;
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Resume_mE7AD058BDE3BD98A07B26F97C71FB5AB0BD85CA3 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Pause_mE01D418A52EA40CB3BDDACC95052A68BF4646C32 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Update_m5547CB709CDEBCAC2330B3F5EBBF9758B4C3EC89 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Destroy_m2284C5D0C971DFE6960647F4876A139CCE3BCC97 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Reset_m4A833C1AC1AEEF1926652298879EC04C355B3506 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_OnApplicationPause_m225EDBE7D139FAA2ACD88CFEC0159C060DFA197C (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_OnApplicationResume_m7214879F26973B5CCB17D476416DD9345B13E0D5 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_0 = Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_0 = Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IProvider_get_trackingState_m3D36F03D7C209523EDDFEF23BAFDBD41B56E1128 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// get { return TrackingState.None; }
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IProvider_get_notTrackingReason_mD52FF69EFF5BAB7432DDF25F883C86FFA9BF2D3F (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// get { return NotTrackingReason.Unsupported; }
		return (int32_t)(6);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_matchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IProvider_get_matchFrameRate_m7D043BC7FAC35BB9E54EFB6035864487B775624C (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::set_matchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_set_matchFrameRate_mFD6D9C6FD79B16E999A0E7650260F954F1CA6B66 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_set_matchFrameRate_mFD6D9C6FD79B16E999A0E7650260F954F1CA6B66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Matching frame rate is not supported.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, _stringLiteralB803153B51A277297BD55B487E4635F22FE4D888, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, IProvider_set_matchFrameRate_mFD6D9C6FD79B16E999A0E7650260F954F1CA6B66_RuntimeMethod_var);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IProvider_get_frameRate_m157CFC505E86907CB821238B45B2BA6FA4983813 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_get_frameRate_m157CFC505E86907CB821238B45B2BA6FA4983813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral8D5D999C478CCB89B73D744A0781362458C30380, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IProvider_get_frameRate_m157CFC505E86907CB821238B45B2BA6FA4983813_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m44F52AA14885F4899E67E09988D8B08C827DEFED (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m6A46D829025B00AFFCEE06A8A66A3D383AF2757E (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m8660DC05AA837607AC160D4300E7D1D204BD1E18 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m331D3B1192D04F6EF98D9172D70EC35A5B24A02B (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9371FEB427307794FC0EB7DF361E2F47E6E3F378 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m3EF9E7985B16FFF8FE15FBEDFC87FF1BB811D49E (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor_RegisterDescriptor_m3EF9E7985B16FFF8FE15FBEDFC87FF1BB811D49E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemRegistration.CreateDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_0 = ___cinfo0;
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_1 = (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 *)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_il2cpp_TypeInfo_var);
		XRSessionSubsystemDescriptor__ctor_m1956ED91DA6DA8D4EAA62906C378B69F5F3E8C1E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m951CAFC452443413A2DD2D9BA9042415A960E0F8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_m1956ED91DA6DA8D4EAA62906C378B69F5F3E8C1E (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor__ctor_m1956ED91DA6DA8D4EAA62906C378B69F5F3E8C1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptor_1__ctor_m2C999F2616F64FCDB6A90CF3941CB34F0D3EEA85(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m2C999F2616F64FCDB6A90CF3941CB34F0D3EEA85_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0 = Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_mA84B0580E0938F338B6E2A07BF02E893649A49FA_inline(__this, L_0, /*hidden argument*/NULL);
		// subsystemImplementationType = cinfo.subsystemImplementationType;
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAE7AE6B41C6BC0E59B6EC4E9BB6E93A98F4B7BF9_inline(__this, L_1, /*hidden argument*/NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_2 = Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_m8660DC05AA837607AC160D4300E7D1D204BD1E18_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_3 = Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9371FEB427307794FC0EB7DF361E2F47E6E3F378_inline(__this, L_3, /*hidden argument*/NULL);
		// }
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke_back(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke_cleanup(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com_back(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com_cleanup(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var hash = (id != null) ? id.GetHashCode() : 0;
		String_t* L_0 = Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hash = hash * 486187739 + ((subsystemImplementationType != null) ? subsystemImplementationType.GetHashCode() : 0);
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_7 = Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_GetHashCode_m10FAF407C61975E8F03E5F4B961BC2583EA369A9(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, ((*(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)UnBox(L_1, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_Equals_m2AB456C7BFFE6923D76AE087F4548493143B1B7B(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     string.Equals(id, other.id) &&
		//     (subsystemImplementationType == other.subsystemImplementationType) &&
		//     (supportsInstall == other.supportsInstall) &&
		//     (supportsMatchFrameRate == other.supportsMatchFrameRate);
		String_t* L_0 = Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67_AdjustorThunk (RuntimeObject * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + _offset);
	return Cinfo_Equals_m1FEB5A86DE5F73249471CC686193B327ED687B67(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m977BF9AC1B8FF7224144F0979A8A30325256EE12 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CscreenOrientationU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenOrientation_m977BF9AC1B8FF7224144F0979A8A30325256EE12_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	XRSessionUpdateParams_set_screenOrientation_m977BF9AC1B8FF7224144F0979A8A30325256EE12_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m74048D3192BAF559FEFAB878921C3EBB68ACB635 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = ___value0;
		__this->set_U3CscreenDimensionsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenDimensions_m74048D3192BAF559FEFAB878921C3EBB68ACB635_AdjustorThunk (RuntimeObject * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	XRSessionUpdateParams_set_screenDimensions_m74048D3192BAF559FEFAB878921C3EBB68ACB635_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m5D06AEAC2DD5497E37C5C8A1E06952186ACDCC70 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var hash = ((int)screenOrientation).GetHashCode();
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + screenDimensions.GetHashCode();
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_1), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_m5D06AEAC2DD5497E37C5C8A1E06952186ACDCC70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_GetHashCode_m5D06AEAC2DD5497E37C5C8A1E06952186ACDCC70(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is XRSessionUpdateParams))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((XRSessionUpdateParams)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRSessionUpdateParams_Equals_mAA0877F7CE8BCEC50F568C257794F50C3A4BFDB8((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, ((*(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)UnBox(L_1, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_Equals_m0D01CBAE986724E42B3FF0EBE51808915F873B92(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("Screen Orientation: {0}, Screen Dimensions: {1}",
		//     screenOrientation, screenDimensions);
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_ToString_mC2C61A95F598C42B879A6E20982DA96B16E23B6D(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mAA0877F7CE8BCEC50F568C257794F50C3A4BFDB8 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return
		//     (screenOrientation == other.screenOrientation) &&
		//     (screenDimensions.Equals(other.screenDimensions));
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		bool L_4 = Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mAA0877F7CE8BCEC50F568C257794F50C3A4BFDB8_AdjustorThunk (RuntimeObject * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + _offset);
	return XRSessionUpdateParams_Equals_mAA0877F7CE8BCEC50F568C257794F50C3A4BFDB8(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CDUnity_XR_ARSubsystems_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId { get { return s_InvalidId; } }
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m915E41A74906A167A3AD5FA288FC098F301167D9_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_mA84B0580E0938F338B6E2A07BF02E893649A49FA_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m66047A62536BD79CB4452C2FE4878FFE035293C2_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAE7AE6B41C6BC0E59B6EC4E9BB6E93A98F4B7BF9_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_mE8629D11414D8E706864D0F179E39CA063035137_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_m3FBD1AAB8470EFCF3A9F31271331B1BE0DAA93BF_inline (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m6A46D829025B00AFFCEE06A8A66A3D383AF2757E_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m038FCFC448004E0F21D8DF6F22FBFA0F5AE14870_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m27F97E21F5CC1903B5358E2C386343D53F3379BF_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m010F6B6254015F5F477114A35C4F11F4A3334E2E_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m8660DC05AA837607AC160D4300E7D1D204BD1E18_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m7DD61A2A7B767E475C97DF33FA4785C2DC12B6E3_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9371FEB427307794FC0EB7DF361E2F47E6E3F378_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m977BF9AC1B8FF7224144F0979A8A30325256EE12_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CscreenOrientationU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m74048D3192BAF559FEFAB878921C3EBB68ACB635_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = ___value0;
		__this->set_U3CscreenDimensionsU3Ek__BackingField_1(L_0);
		return;
	}
}
