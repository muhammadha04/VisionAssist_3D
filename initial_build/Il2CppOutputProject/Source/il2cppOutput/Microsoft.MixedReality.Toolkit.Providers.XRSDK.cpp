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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A;
// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_t38E9E096E0C046DDEE4B1A7F2713DC1DE3B177DC;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_tF68F07DB578C88E3AE8341A0B41CA0BB5160756E;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_tAADCDF188A2C78159B271F8D996EA26D2CE495F5;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t248DFF7414A9AB510441991DB718B5C34C5C5AB6;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t4F842C130737912434914318A1DB0DBAE4B1DD3F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t3A6652295F9D56A82A1975AACB10FFFF4724CD81;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tE135340F0FB3A26CE9F6B0A82E113E18F39CD11E;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t6AB3D6EF9A0B715EA9AB6581D5AE67F42DFFEBB7;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t5761CD6DB6C9EE33C6F7DF86CB7D95B89E4B2EE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tB73DE066AEFE85A61B407CDD5DAD0FD130BE176B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_t409FE642F283447D78BDA4636917430B10A561A1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t161F079BAB0ACFBE7B3A32BF6F2B4C44BE56A008;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_t802A31C279AA51E20CED414440E2650905DAA63C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_t7E2C593BC57B67E96766B6E859D4B66C39EDB6B7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tE6624A3B1C9B388386DEAC8D7802ACFA40CA9B8A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t64E20D4D31A951B5CBE415E765D11FF59273BE54;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC;
// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>[]
struct EntryU5BU5D_t61ACA09B36E08B1A428116FBFBCCC8E4AA49B4F3;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t8D706D3200ADCA9B8892831EE564316F84BDB136;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyCollection_t52965CF4EBC595D6792B21FE6260A3E0CDC3D3CB;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_t970B3704C29DBE77355C347BC481FD7BFAE00117;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct ValueCollection_t5EC67E5A4F437EEB7FF05995962F021F7FF4AF65;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t8151911C32EDE861A18D397F4BA15555DEBF5279;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t7A8E5A8C076F739632EBF4A8DE94B717A57D582C;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t8143743B04A978D6611266F79CAD01654558522A;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t66EAE6B508AEB87674F6ABBD26290A35CCB0237C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IEnumerable_1_t448FEE8C96A73BA9088849D34C261E56A1CA5D5C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct IEnumerable_1_t3EFCEAD451171A29A8447C09067E3DFC6B04725D;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t31E85CDA2550B5F9A119FA262255E83265909C80;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IEnumerator_1_t1D061211C57D79CD58592121033F3AD1319F5157;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct IEnumerator_1_t3FC5D727D8C542B0406838F474CFD68F9AD2453C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_t2C16C07D6C575244CCEB3AAD06291E9AB98CE0D6;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IList_1_t7CB91C75E88C495C8317D96D885565A57E43FCDD;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IReadOnlyDictionary_2_tB5EC41628DE8770084268613781FE716E29481A2;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t494C18571D1982792A7EF783885A1EFF5F6B53EC;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t756DFC8DF0FD037A43A0D93EAFAD3AA8B3AD2388;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t2EEB678B0B1F55D376B94D2687A470C7150BA9E9;
// System.Collections.Generic.List`1<System.UInt32Enum>
struct List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t8F98BAC5E5C976105490EE2595E39378A604BAE1;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct ReadOnlyCollection_1_t8964DC40F83EDD678854634BC6D8BD788F0B9072;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_t98106BF3136B6784C69CCC72800813EE673A5150;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityEngine.XR.InputDeviceCharacteristics[]
struct InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5;
// UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t0C60FE5616B84BCF61E9DE2AF62E89A4910FBC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1D061211C57D79CD58592121033F3AD1319F5157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t7B0D4AA917AB0DBC23F474C0D12AF295708C60EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tB73DE066AEFE85A61B407CDD5DAD0FD130BE176B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t161F079BAB0ACFBE7B3A32BF6F2B4C44BE56A008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityServiceState_t58BF1C965015DF6E6055D238A4CAB3F4A71D0F22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tFFBF38D04FB57D6FC250B4B814ECE5E1B26F4B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tB5EC41628DE8770084268613781FE716E29481A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t494C18571D1982792A7EF783885A1EFF5F6B53EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t66BD6319A1048DE8A50613B829F4F8D7142C9404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedControllerType_tDF4DCD04BE13C53E8D3F292183F9169D51CF15A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t03F63DF17E67718FB7C732876A58FA3A18568262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_tDB0BD0DBCB2ACA3E90F29FE50B9816970FC6D5E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE296311A457FFE1C3944791BF9732D5E79F1F7;
IL2CPP_EXTERN_C String_t* _stringLiteral1249972FDCC50B5C7B2157B8F41966506163A21C;
IL2CPP_EXTERN_C String_t* _stringLiteral18414638F2486DC587D4197BFFA93F7B78162975;
IL2CPP_EXTERN_C String_t* _stringLiteral25B27DC2BCC839C8D8BCE6F17F582B5C0F269F61;
IL2CPP_EXTERN_C String_t* _stringLiteral317AACC39186DC1C44AC5076FDEC1BDCA1F511E4;
IL2CPP_EXTERN_C String_t* _stringLiteral41DC700A22938E6F7AF528592CEA8E869DAC445E;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC6D5DE1EC5A7F2861EB2A043D91BCD0D44006B;
IL2CPP_EXTERN_C String_t* _stringLiteral65C11783667C26DA56C322C0E5D2C4061140987F;
IL2CPP_EXTERN_C String_t* _stringLiteral66861C39C40B0A9F1AFA51F9630E78B16F2AE304;
IL2CPP_EXTERN_C String_t* _stringLiteral739C8C13BE71CAB3DE588C8E504090675A764E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral74CA03DB3497544DC2BE05DE99A6DF69FA715DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral77361B86D8FA2FDF99E13C61E6868332120A7BE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD1C1B8581ACA99ABBB78789156656E3D35BE58;
IL2CPP_EXTERN_C String_t* _stringLiteral7F79AD01AB4618B7FDC047B4D4A94F162B17C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral86835A3DB5A72D8ADC8C34240A36AC24FDF843EF;
IL2CPP_EXTERN_C String_t* _stringLiteral88DCEDC643DED360EA3088928849B6CF238BF66E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F3BF1BF14ABA56C564F1F580570DDA329320392;
IL2CPP_EXTERN_C String_t* _stringLiteral94175EA7E8B3168F516F287A29CAE06BA16B23F7;
IL2CPP_EXTERN_C String_t* _stringLiteral9447F7E37D5005D39E8806CE1662654FE281E9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1F61DA8B24E3AF17E9F7E8D8761B5F5870B3FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA39B43A8A6F600EFACD0EC6E008FE53D5F23887F;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D0E411DDBE6FDDE9EAA084712803B7ABA68FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralAADD5DF8738ADE3C82E252C00EBF80F9B8903E94;
IL2CPP_EXTERN_C String_t* _stringLiteralAB66F54EDD78D450DE3C82D452E36F5036986609;
IL2CPP_EXTERN_C String_t* _stringLiteralB245477D5A96A319ED32B95AF7B4A7C31F5D863C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA79ABE37557B7DA2275AB771CCFEE23336BCB9;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC3A1EB621F66A9977AE9420F50B054C58D000C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC251F0EE7E738E9803C51B96A0610EF66A88F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC577C6AB98A4D18F7740145FB4769D96C375A2B2;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E794FDA9008E01221FD577CCC8A14541735C1C;
IL2CPP_EXTERN_C String_t* _stringLiteralD10397CA15A57B49D5488B325808B5D2AA18715F;
IL2CPP_EXTERN_C String_t* _stringLiteralED4EE0E0F4814BF1D025F3E41C608E4288258FD9;
IL2CPP_EXTERN_C String_t* _stringLiteralF7A067590AFFD7DF1CDC4EEF932AA9DFB8B56A74;
IL2CPP_EXTERN_C String_t* _stringLiteralF93A5C3A4465D9FD0CABB871B86C36222BB587EE;
IL2CPP_EXTERN_C String_t* _stringLiteralFD59EE74A1BD72C2A0FB6F83CA703C7D099CE606;
IL2CPP_EXTERN_C String_t* _stringLiteralFF2A274D9ABD27E6132C3242CDC12219147C12DD;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_mB9E1A10365D3305AE8D811BBFFE8221CBD0A42B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924_m7CD6D27B94E4828B18DA1A3A90EFCCB283834FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m06F42B5245F834E293ED807D6D40EEC286D08CC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m63D85FF53A4ABEE7A7178389220DFA582076E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1E3017A242D4A8182A9A206C32344EA209E7077A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9B766445837E27AB1B85BDD7D4096E44F0D34B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2F0B429341DF97D5F2E34116B109F5BAC84A7984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA68647C91E6A7C6D2F09DE53F635FDB20D742C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7C48132237238950E1271C3E82F68E0D7CF1ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5E681737293DCA92C004A75093276FEE5B52B1E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m897EF85B971417962DB845E3A17074F578E2376C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCB09A2FAADDBC6FAD64FDD8EDA372D003C69BD0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9B408322434F16B90842108106D0D370D876C069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED8988498ABE655F1AB6FF6012E8535293AB91A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_m9E4242AEB878FF59C2277F83C9A5FA6477B41BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_mD0A7F01906C7F911E109CE983974F33C1EAF289A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProviders_TisGenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_m9BADB1B81B594F037A9CF2E06B928BEA78063DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t802A31C279AA51E20CED414440E2650905DAA63C_m485FE3188C02C8DA2240644C4FD9DFEDB3C9F59D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBBBD1EAF4322076A0F6F7E4BEDC7928CF9692F46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m41628015D3C905BFD78ABD3187425CC2DA17E6D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m944FD215480A1F8C0CBDBEBF19BB35A56662CC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE5E0B12AEF225779CF661D52943C9982BDBEBD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mFE9904BA81EE41ADC600C6D16E724D47585D7BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_m0114E960F6C4DD6552B6103FE79628814DDBE280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_mECFAECF09F2D9DBE29AABEA8C751BE93BB166734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CustomUsages__cctor_mCA85ED295E6C92F22F1BFDD135645E9E2860436D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_Disable_mF32BC45138079F1C5DA6B1CFCC9DE7025C9DA62F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_Enable_mBBC5C5D240B328D7995C87FBE611194C270448EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_get_IsOpaque_m37539F3A30B5306CBDE8762200150DEEA749FB62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_StartHapticImpulse_m45DC41FD6EB4959D88B4191C68381F6F5286F6D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateButtonData_m1B042FD6C083606C0B6766A31445E0B3C171B6EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateController_m1A3AC9A51C63F856AE9134CE42E639D5E90626AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateDualAxisData_mD5E54708E9C8006EC0DED0E643CD900FA509E03F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdatePoseData_m51E076958E06E1334B0B3853FB25DAA032DABF4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateSingleAxisData_m86C43FA3884994FF074BBF008B4FFCA6E9DBE2C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateSixDofData_m32FC0D695A6448BC372D40C79CF29C43E7831E35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateSourceData_m16626C08BC396EB08F6391A38715DEF9BA29B052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateVelocity_mF251825885FACBEEDF5308A9108A111A1669E803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController__cctor_m4DC0D4D7545AF74268FAE071ACA10A9351D2DBD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController__ctor_mAA41922BE330B5EDCBDA2F2482BD782FA5A43AE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_CheckCapability_m7A54073E51D751B7F004892873EB89CD32C753D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ClearObservations_m08058D364C08065D6EE470177C43BC0AE156DA39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m964D6AECE3B2792B13B704C099A2B8F73D622F28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m4B7F9601DBA6B8B3FFC42EDE7CA3D71FD7AD33C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Enable_m1AC863BA8043D05D6E3C66614E6BA31B6518B68B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Initialize_m7E6523BF60B72C19084A6AAB31A231298D883C01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m3EA987E1DF87742A3AEE0F656E72332A69F82F07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_RequestMesh_m217539D29D0932511CE53050BE4944A790AEBA04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Resume_mD01A909C5EE240EBFF3580AF03D0B350ADFD7D87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Suspend_mAF8499353C78CCDA77891D065CB1A2E4D4A52E23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_m9E4242AEB878FF59C2277F83C9A5FA6477B41BCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_UpdateMeshes_m5D5B1A0324D245C986012DAEC3110FF1785E5972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_UpdateObserver_mB6555070FCF335AA6274E06EE2BDED3094F2D891_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Update_mD84E398DC0DC2EBF4AF6C852D89C9948B4A4777C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver__cctor_m5B9E5B6455E79866A33B2721D93A5EBB168FBDC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver__ctor_mCD94424D37AA33143FAFC1496320084C47912843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_get_IsActiveLoader_m105EC5F6D56596705EA7BF56C27ACB39FDFC2575_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoaderHelpers_IsLoaderActive_m9DE8F2A0B9F18D4F0044CE7F7BA452DDCF862390_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem_GetBoundaryGeometry_m918546E40336E0AB8BAA8EE0BB691B528EA8D1EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem_SetTrackingSpace_mE113C1BD784D2D87974F0D1807A24B7AA98ACC76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem__cctor_mB460CDC1FD6E335D0731E13C038F8A3FD1B7B3A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem__ctor_m0A1719298B910733F4093E000A4B62A773D806E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_Disable_m6AE58DDB8B37B9B1EE2C17237CAE15C8C53CC377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetControllerType_mF4778479FBBEDAE02E938261469BA1207B29A356_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetCurrentControllerType_mF8008D0125067AD0F00CF968AB23B59D9D6825BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetOrAddController_mD7720569CF0EE528849F060BBA1A2F0D6BDD06E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_IsLoaderActive_m3008DE72D2EBEAFD4FB2B1B86177A5947DAABD55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_RemoveControllerFromScene_mD8227E1600F0ED0420B58AC1688886F0B549AEFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_RemoveController_mC3C9D444F28F9CD399B930419DCA8EB16B7763A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_Update_mF0E337FAF6DC902A5E06EEC06A129A601EC0B38F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager__cctor_m96CDF7D454180982CA945D1A0845A6083C15AAED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager__ctor_m8877D020F89A096C3A176D6494A34AB6F50C869B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_DisplaySubsystem_m0E976E076CD7F85CDC824D7073AFBAB250B16DAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_InputSubsystem_m3CED0400D7AFF4CAFE31E2A3ACE7D583EC7D409C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_MeshSubsystem_mD6EF232EE23607F6570BF54869696CA37D7CA550_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB;
struct MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF8FB5A8A7B07D350D9B1781BFD29ED6F3CC4FF66 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions
struct FlagsExtensions_t24B6D4DA60BB9BADA344A14B826AA29D6A4EE62F  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers
struct LoaderHelpers_t168D07942DA65521BB6529391C1E2CC19D757AAC  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers
struct XRSDKSubsystemHelpers_tF569E4505C4635354C376B9A2BA4210EE18A2898  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t61ACA09B36E08B1A428116FBFBCCC8E4AA49B4F3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52965CF4EBC595D6792B21FE6260A3E0CDC3D3CB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5EC67E5A4F437EEB7FF05995962F021F7FF4AF65 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___entries_1)); }
	inline EntryU5BU5D_t61ACA09B36E08B1A428116FBFBCCC8E4AA49B4F3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t61ACA09B36E08B1A428116FBFBCCC8E4AA49B4F3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t61ACA09B36E08B1A428116FBFBCCC8E4AA49B4F3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___keys_7)); }
	inline KeyCollection_t52965CF4EBC595D6792B21FE6260A3E0CDC3D3CB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52965CF4EBC595D6792B21FE6260A3E0CDC3D3CB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52965CF4EBC595D6792B21FE6260A3E0CDC3D3CB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ___values_8)); }
	inline ValueCollection_t5EC67E5A4F437EEB7FF05995962F021F7FF4AF65 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5EC67E5A4F437EEB7FF05995962F021F7FF4AF65 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5EC67E5A4F437EEB7FF05995962F021F7FF4AF65 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8D706D3200ADCA9B8892831EE564316F84BDB136* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t970B3704C29DBE77355C347BC481FD7BFAE00117 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8151911C32EDE861A18D397F4BA15555DEBF5279 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___entries_1)); }
	inline EntryU5BU5D_t8D706D3200ADCA9B8892831EE564316F84BDB136* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8D706D3200ADCA9B8892831EE564316F84BDB136** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8D706D3200ADCA9B8892831EE564316F84BDB136* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___keys_7)); }
	inline KeyCollection_t970B3704C29DBE77355C347BC481FD7BFAE00117 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t970B3704C29DBE77355C347BC481FD7BFAE00117 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t970B3704C29DBE77355C347BC481FD7BFAE00117 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ___values_8)); }
	inline ValueCollection_t8151911C32EDE861A18D397F4BA15555DEBF5279 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8151911C32EDE861A18D397F4BA15555DEBF5279 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8151911C32EDE861A18D397F4BA15555DEBF5279 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____items_1)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637, ____items_1)); }
	inline InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* get__items_1() const { return ____items_1; }
	inline InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637_StaticFields, ____emptyArray_5)); }
	inline InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceCharacteristicsU5BU5D_t435E7B214D2F97BB4CF383E110495A78F03661A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____items_1)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__items_1() const { return ____items_1; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields, ____emptyArray_5)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____items_1)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* get__items_1() const { return ____items_1; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_StaticFields, ____emptyArray_5)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____array_0)); }
	inline MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* get__array_0() const { return ____array_0; }
	inline MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


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


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36  : public BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::RequiredMeshComponents
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___RequiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_RequiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_StaticFields, ___RequiredMeshComponents_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_RequiredMeshComponents_4() const { return ___RequiredMeshComponents_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_RequiredMeshComponents_4() { return &___RequiredMeshComponents_4; }
	inline void set_RequiredMeshComponents_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___RequiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequiredMeshComponents_4), (void*)value);
	}
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


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>
struct Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04, ___list_0)); }
	inline List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * get_list_0() const { return ___list_0; }
	inline List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04, ___current_3)); }
	inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * get_current_3() const { return ___current_3; }
	inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
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


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
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


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178 
{
public:
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_NumChannels
	uint32_t ___m_NumChannels_0;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsImpulse
	bool ___m_SupportsImpulse_1;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsBuffer
	bool ___m_SupportsBuffer_2;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferFrequencyHz
	uint32_t ___m_BufferFrequencyHz_3;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferMaxSize
	uint32_t ___m_BufferMaxSize_4;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferOptimalSize
	uint32_t ___m_BufferOptimalSize_5;

public:
	inline static int32_t get_offset_of_m_NumChannels_0() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_NumChannels_0)); }
	inline uint32_t get_m_NumChannels_0() const { return ___m_NumChannels_0; }
	inline uint32_t* get_address_of_m_NumChannels_0() { return &___m_NumChannels_0; }
	inline void set_m_NumChannels_0(uint32_t value)
	{
		___m_NumChannels_0 = value;
	}

	inline static int32_t get_offset_of_m_SupportsImpulse_1() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_SupportsImpulse_1)); }
	inline bool get_m_SupportsImpulse_1() const { return ___m_SupportsImpulse_1; }
	inline bool* get_address_of_m_SupportsImpulse_1() { return &___m_SupportsImpulse_1; }
	inline void set_m_SupportsImpulse_1(bool value)
	{
		___m_SupportsImpulse_1 = value;
	}

	inline static int32_t get_offset_of_m_SupportsBuffer_2() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_SupportsBuffer_2)); }
	inline bool get_m_SupportsBuffer_2() const { return ___m_SupportsBuffer_2; }
	inline bool* get_address_of_m_SupportsBuffer_2() { return &___m_SupportsBuffer_2; }
	inline void set_m_SupportsBuffer_2(bool value)
	{
		___m_SupportsBuffer_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferFrequencyHz_3() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_BufferFrequencyHz_3)); }
	inline uint32_t get_m_BufferFrequencyHz_3() const { return ___m_BufferFrequencyHz_3; }
	inline uint32_t* get_address_of_m_BufferFrequencyHz_3() { return &___m_BufferFrequencyHz_3; }
	inline void set_m_BufferFrequencyHz_3(uint32_t value)
	{
		___m_BufferFrequencyHz_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferMaxSize_4() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_BufferMaxSize_4)); }
	inline uint32_t get_m_BufferMaxSize_4() const { return ___m_BufferMaxSize_4; }
	inline uint32_t* get_address_of_m_BufferMaxSize_4() { return &___m_BufferMaxSize_4; }
	inline void set_m_BufferMaxSize_4(uint32_t value)
	{
		___m_BufferMaxSize_4 = value;
	}

	inline static int32_t get_offset_of_m_BufferOptimalSize_5() { return static_cast<int32_t>(offsetof(HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178, ___m_BufferOptimalSize_5)); }
	inline uint32_t get_m_BufferOptimalSize_5() const { return ___m_BufferOptimalSize_5; }
	inline uint32_t* get_address_of_m_BufferOptimalSize_5() { return &___m_BufferOptimalSize_5; }
	inline void set_m_BufferOptimalSize_5(uint32_t value)
	{
		___m_BufferOptimalSize_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178_marshaled_pinvoke
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for COM marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178_marshaled_com
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};

// UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.MeshId
struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___s_InvalidId_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___typeName_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___isEnabled_9)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_t3BE2E9A7044C4D7828FDD27288843B64A81E6355  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t3BE2E9A7044C4D7828FDD27288843B64A81E6355, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t3BE2E9A7044C4D7828FDD27288843B64A81E6355, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t3BE2E9A7044C4D7828FDD27288843B64A81E6355, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t934C02C5B8575BD97F34ABD1E862C2D3E8E21D39 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t934C02C5B8575BD97F34ABD1E862C2D3E8E21D39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t1354E2A8ED9B7D25A642081969F68253BF2B4ED9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t1354E2A8ED9B7D25A642081969F68253BF2B4ED9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_tDF4DCD04BE13C53E8D3F292183F9169D51CF15A2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tDF4DCD04BE13C53E8D3F292183F9169D51CF15A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t8D6F06590413C9E98479FBAF6930A449DCEC4165 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t8D6F06590413C9E98479FBAF6930A449DCEC4165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tA9180C5F8DA6D457C76873B0D43A40BE684FD185 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tA9180C5F8DA6D457C76873B0D43A40BE684FD185, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t2194B32CBB49DF95F08F1B49843CF3ED8A8E7656 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t2194B32CBB49DF95F08F1B49843CF3ED8A8E7656, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t03F63DF17E67718FB7C732876A58FA3A18568262 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t03F63DF17E67718FB7C732876A58FA3A18568262, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t72412F9BE53C28B329DDDA50AE339102E03A33DC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t72412F9BE53C28B329DDDA50AE339102E03A33DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t4E5061F358536FAC80324A6B6C685559C2B4D911 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t4E5061F358536FAC80324A6B6C685559C2B4D911, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct ExperienceScale_tCC9106BF121600721922A17CA8EA76E0AC80AB11 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_tCC9106BF121600721922A17CA8EA76E0AC80AB11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t0C60FE5616B84BCF61E9DE2AF62E89A4910FBC3C 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t0C60FE5616B84BCF61E9DE2AF62E89A4910FBC3C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_tDB0BD0DBCB2ACA3E90F29FE50B9816970FC6D5E5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tDB0BD0DBCB2ACA3E90F29FE50B9816970FC6D5E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924, ___key_0)); }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  get_key_0() const { return ___key_0; }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924, ___value_1)); }
	inline GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * get_value_1() const { return ___value_1; }
	inline GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>
struct KeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D, ___key_0)); }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  get_key_0() const { return ___key_0; }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___list_0)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_list_0() const { return ___list_0; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___current_3)); }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  get_current_3() const { return ___current_3; }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		___current_3 = value;
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
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


// System.UInt32Enum
struct UInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA 
{
public:
	// System.UInt32 System.UInt32Enum::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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


// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshChangeState
struct MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshGenerationStatus
struct MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t682100CE6AADC8190CF15C37C4665959762F05FB  : public BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t682100CE6AADC8190CF15C37C4665959762F05FB, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t682100CE6AADC8190CF15C37C4665959762F05FB, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3  : public BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB  : public BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084  : public BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED  : public BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t2EEB678B0B1F55D376B94D2687A470C7150BA9E9 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t756DFC8DF0FD037A43A0D93EAFAD3AA8B3AD2388 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t8143743B04A978D6611266F79CAD01654558522A * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___postponedActions_15)); }
	inline List_1_t2EEB678B0B1F55D376B94D2687A470C7150BA9E9 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_t2EEB678B0B1F55D376B94D2687A470C7150BA9E9 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_t2EEB678B0B1F55D376B94D2687A470C7150BA9E9 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___postponedObjectActions_16)); }
	inline List_1_t756DFC8DF0FD037A43A0D93EAFAD3AA8B3AD2388 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t756DFC8DF0FD037A43A0D93EAFAD3AA8B3AD2388 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t756DFC8DF0FD037A43A0D93EAFAD3AA8B3AD2388 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t8143743B04A978D6611266F79CAD01654558522A * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t8143743B04A978D6611266F79CAD01654558522A ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t8143743B04A978D6611266F79CAD01654558522A * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_tA81181FDD07DDFA12F88D46364D13D3EE8CC9667  : public GenericBaseEventData_t3BE2E9A7044C4D7828FDD27288843B64A81E6355
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tA81181FDD07DDFA12F88D46364D13D3EE8CC9667, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5
struct U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>4__this
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3, ___U3CU3E4__this_2)); }
	inline GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>
struct Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B, ___list_0)); }
	inline List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * get_list_0() const { return ___list_0; }
	inline List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>
struct Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24, ___list_0)); }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * get_list_0() const { return ___list_0; }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
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


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_pinvoke
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_com
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t384DAAE2FC042D3200071902B2F1715E4BFC6226  : public BaseEventSystem_t1FE32A9B3C079E421246897E6F523F31D79C93ED
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t384DAAE2FC042D3200071902B2F1715E4BFC6226, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t4F842C130737912434914318A1DB0DBAE4B1DD3F  : public BaseDataProvider_1_t682100CE6AADC8190CF15C37C4665959762F05FB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t4F842C130737912434914318A1DB0DBAE4B1DD3F, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7  : public BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t5761CD6DB6C9EE33C6F7DF86CB7D95B89E4B2EE2* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t7A8E5A8C076F739632EBF4A8DE94B717A57D582C * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_t5761CD6DB6C9EE33C6F7DF86CB7D95B89E4B2EE2* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_t5761CD6DB6C9EE33C6F7DF86CB7D95B89E4B2EE2** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_t5761CD6DB6C9EE33C6F7DF86CB7D95B89E4B2EE2* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7, ___activePointersToConfig_17)); }
	inline Dictionary_2_t7A8E5A8C076F739632EBF4A8DE94B717A57D582C * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t7A8E5A8C076F739632EBF4A8DE94B717A57D582C ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t7A8E5A8C076F739632EBF4A8DE94B717A57D582C * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___inputAction_4)); }
	inline MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45, ___poseData_17)); }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063  : public BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CSourceIdU3Ek__BackingField_15)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_15() const { return ___U3CSourceIdU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_15() { return &___U3CSourceIdU3Ek__BackingField_15; }
	inline void set_U3CSourceIdU3Ek__BackingField_15(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CSourceNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_16() const { return ___U3CSourceNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_16() { return &___U3CSourceNameU3Ek__BackingField_16; }
	inline void set_U3CSourceNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CStartupBehaviorU3Ek__BackingField_17)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_17() const { return ___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_17() { return &___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_17(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CDefaultPhysicsLayerU3Ek__BackingField_18)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_18() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_18(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CIsRunningU3Ek__BackingField_19)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_19() const { return ___U3CIsRunningU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_19() { return &___U3CIsRunningU3Ek__BackingField_19; }
	inline void set_U3CIsRunningU3Ek__BackingField_19(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CIsStationaryObserverU3Ek__BackingField_20)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_20() const { return ___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return &___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_20(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CObserverRotationU3Ek__BackingField_21)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CObserverRotationU3Ek__BackingField_21() const { return ___U3CObserverRotationU3Ek__BackingField_21; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CObserverRotationU3Ek__BackingField_21() { return &___U3CObserverRotationU3Ek__BackingField_21; }
	inline void set_U3CObserverRotationU3Ek__BackingField_21(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CObserverRotationU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CObserverOriginU3Ek__BackingField_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObserverOriginU3Ek__BackingField_22() const { return ___U3CObserverOriginU3Ek__BackingField_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObserverOriginU3Ek__BackingField_22() { return &___U3CObserverOriginU3Ek__BackingField_22; }
	inline void set_U3CObserverOriginU3Ek__BackingField_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObserverOriginU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CObserverVolumeTypeU3Ek__BackingField_23)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_23() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return &___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_23(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CObservationExtentsU3Ek__BackingField_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObservationExtentsU3Ek__BackingField_24() const { return ___U3CObservationExtentsU3Ek__BackingField_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObservationExtentsU3Ek__BackingField_24() { return &___U3CObservationExtentsU3Ek__BackingField_24; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063, ___U3CUpdateIntervalU3Ek__BackingField_25)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_25() const { return ___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_25() { return &___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_25(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E  : public MixedRealitySpatialAwarenessEventData_tA81181FDD07DDFA12F88D46364D13D3EE8CC9667
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___U3CSpatialObjectU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E, ___U3CSpatialObjectU3Ek__BackingField_6)); }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * get_U3CSpatialObjectU3Ek__BackingField_6() const { return ___U3CSpatialObjectU3Ek__BackingField_6; }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 ** get_address_of_U3CSpatialObjectU3Ek__BackingField_6() { return &___U3CSpatialObjectU3Ek__BackingField_6; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_6(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0  : public BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___CurrentControllerRotation_15;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::lastInputDevice
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___lastInputDevice_16;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_12() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0, ___CurrentControllerPose_12)); }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  get_CurrentControllerPose_12() const { return ___CurrentControllerPose_12; }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * get_address_of_CurrentControllerPose_12() { return &___CurrentControllerPose_12; }
	inline void set_CurrentControllerPose_12(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  value)
	{
		___CurrentControllerPose_12 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_13() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0, ___LastControllerPose_13)); }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  get_LastControllerPose_13() const { return ___LastControllerPose_13; }
	inline MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * get_address_of_LastControllerPose_13() { return &___LastControllerPose_13; }
	inline void set_LastControllerPose_13(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  value)
	{
		___LastControllerPose_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0, ___CurrentControllerPosition_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0, ___CurrentControllerRotation_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___CurrentControllerRotation_15 = value;
	}

	inline static int32_t get_offset_of_lastInputDevice_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0, ___lastInputDevice_16)); }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  get_lastInputDevice_16() const { return ___lastInputDevice_16; }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * get_address_of_lastInputDevice_16() { return &___lastInputDevice_16; }
	inline void set_lastInputDevice_16(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		___lastInputDevice_16 = value;
	}
};

struct GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateSourceDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocityPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateVelocityPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateSingleAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateControllerPerfMarker_17)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_17() const { return ___UpdateControllerPerfMarker_17; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_17() { return &___UpdateControllerPerfMarker_17; }
	inline void set_UpdateControllerPerfMarker_17(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_UpdateSourceDataPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateSourceDataPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateSourceDataPerfMarker_18() const { return ___UpdateSourceDataPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateSourceDataPerfMarker_18() { return &___UpdateSourceDataPerfMarker_18; }
	inline void set_UpdateSourceDataPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateSourceDataPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateVelocityPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateVelocityPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateVelocityPerfMarker_19() const { return ___UpdateVelocityPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateVelocityPerfMarker_19() { return &___UpdateVelocityPerfMarker_19; }
	inline void set_UpdateVelocityPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateVelocityPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateButtonDataPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_20() const { return ___UpdateButtonDataPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_20() { return &___UpdateButtonDataPerfMarker_20; }
	inline void set_UpdateButtonDataPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateSingleAxisDataPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateSingleAxisDataPerfMarker_21() const { return ___UpdateSingleAxisDataPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateSingleAxisDataPerfMarker_21() { return &___UpdateSingleAxisDataPerfMarker_21; }
	inline void set_UpdateSingleAxisDataPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateSingleAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdateDualAxisDataPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_22() const { return ___UpdateDualAxisDataPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_22() { return &___UpdateDualAxisDataPerfMarker_22; }
	inline void set_UpdateDualAxisDataPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_23() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields, ___UpdatePoseDataPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_23() const { return ___UpdatePoseDataPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_23() { return &___UpdatePoseDataPerfMarker_23; }
	inline void set_UpdatePoseDataPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_23 = value;
	}
};


// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>
struct Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___list_0)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_list_0() const { return ___list_0; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___current_3)); }
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  get_current_3() const { return ___current_3; }
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  value)
	{
		___current_3 = value;
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_XRManager_8)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t8F98BAC5E5C976105490EE2595E39378A604BAE1 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t66EAE6B508AEB87674F6ABBD26290A35CCB0237C * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_Loaders_8)); }
	inline List_1_t8F98BAC5E5C976105490EE2595E39378A604BAE1 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t8F98BAC5E5C976105490EE2595E39378A604BAE1 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t8F98BAC5E5C976105490EE2595E39378A604BAE1 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t66EAE6B508AEB87674F6ABBD26290A35CCB0237C * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t66EAE6B508AEB87674F6ABBD26290A35CCB0237C ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t66EAE6B508AEB87674F6ABBD26290A35CCB0237C * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7  : public IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___trackingOriginUpdated_2)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___boundaryChanged_3)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___m_DeviceIdsCache_4)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B  : public BaseCoreSystem_t384DAAE2FC042D3200071902B2F1715E4BFC6226
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * ___U3CBoundaryProfileU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_t38E9E096E0C046DDEE4B1A7F2713DC1DE3B177DC * ___boundaryEventData_23;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_26;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_27;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boundaryVisualizationParent_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_31;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * ___boundaryVisualizationProfile_32;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_40;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_44;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_tF68F07DB578C88E3AE8341A0B41CA0BB5160756E* ___U3CBoundsU3Ek__BackingField_45;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___U3CFloorHeightU3Ek__BackingField_46;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_tAADCDF188A2C78159B271F8D996EA26D2CE495F5 * ___RectangularBounds_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentFloorObject_48;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentPlayAreaObject_49;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentTrackedAreaObject_50;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentBoundaryWallObject_51;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentCeilingObject_52;

public:
	inline static int32_t get_offset_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CIsXRDevicePresentU3Ek__BackingField_21)); }
	inline bool get_U3CIsXRDevicePresentU3Ek__BackingField_21() const { return ___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return &___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline void set_U3CIsXRDevicePresentU3Ek__BackingField_21(bool value)
	{
		___U3CIsXRDevicePresentU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryProfileU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CBoundaryProfileU3Ek__BackingField_22)); }
	inline MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * get_U3CBoundaryProfileU3Ek__BackingField_22() const { return ___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 ** get_address_of_U3CBoundaryProfileU3Ek__BackingField_22() { return &___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline void set_U3CBoundaryProfileU3Ek__BackingField_22(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * value)
	{
		___U3CBoundaryProfileU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundaryProfileU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryEventData_23() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___boundaryEventData_23)); }
	inline BoundaryEventData_t38E9E096E0C046DDEE4B1A7F2713DC1DE3B177DC * get_boundaryEventData_23() const { return ___boundaryEventData_23; }
	inline BoundaryEventData_t38E9E096E0C046DDEE4B1A7F2713DC1DE3B177DC ** get_address_of_boundaryEventData_23() { return &___boundaryEventData_23; }
	inline void set_boundaryEventData_23(BoundaryEventData_t38E9E096E0C046DDEE4B1A7F2713DC1DE3B177DC * value)
	{
		___boundaryEventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CSourceIdU3Ek__BackingField_26)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_26() const { return ___U3CSourceIdU3Ek__BackingField_26; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_26() { return &___U3CSourceIdU3Ek__BackingField_26; }
	inline void set_U3CSourceIdU3Ek__BackingField_26(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CSourceNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_27() const { return ___U3CSourceNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_27() { return &___U3CSourceNameU3Ek__BackingField_27; }
	inline void set_U3CSourceNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___boundaryVisualizationParent_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boundaryVisualizationParent_30() const { return ___boundaryVisualizationParent_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boundaryVisualizationParent_30() { return &___boundaryVisualizationParent_30; }
	inline void set_boundaryVisualizationParent_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boundaryVisualizationParent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_30), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___ignoreRaycastLayerValue_31)); }
	inline int32_t get_ignoreRaycastLayerValue_31() const { return ___ignoreRaycastLayerValue_31; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_31() { return &___ignoreRaycastLayerValue_31; }
	inline void set_ignoreRaycastLayerValue_31(int32_t value)
	{
		___ignoreRaycastLayerValue_31 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___boundaryVisualizationProfile_32)); }
	inline MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * get_boundaryVisualizationProfile_32() const { return ___boundaryVisualizationProfile_32; }
	inline MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 ** get_address_of_boundaryVisualizationProfile_32() { return &___boundaryVisualizationProfile_32; }
	inline void set_boundaryVisualizationProfile_32(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * value)
	{
		___boundaryVisualizationProfile_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CScaleU3Ek__BackingField_33)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_33() const { return ___U3CScaleU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_33() { return &___U3CScaleU3Ek__BackingField_33; }
	inline void set_U3CScaleU3Ek__BackingField_33(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CBoundaryHeightU3Ek__BackingField_34)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_34() const { return ___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_34() { return &___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_34(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_showFloor_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___showFloor_35)); }
	inline bool get_showFloor_35() const { return ___showFloor_35; }
	inline bool* get_address_of_showFloor_35() { return &___showFloor_35; }
	inline void set_showFloor_35(bool value)
	{
		___showFloor_35 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___showPlayArea_36)); }
	inline bool get_showPlayArea_36() const { return ___showPlayArea_36; }
	inline bool* get_address_of_showPlayArea_36() { return &___showPlayArea_36; }
	inline void set_showPlayArea_36(bool value)
	{
		___showPlayArea_36 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___floorPhysicsLayer_37)); }
	inline int32_t get_floorPhysicsLayer_37() const { return ___floorPhysicsLayer_37; }
	inline int32_t* get_address_of_floorPhysicsLayer_37() { return &___floorPhysicsLayer_37; }
	inline void set_floorPhysicsLayer_37(int32_t value)
	{
		___floorPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___showTrackedArea_38)); }
	inline bool get_showTrackedArea_38() const { return ___showTrackedArea_38; }
	inline bool* get_address_of_showTrackedArea_38() { return &___showTrackedArea_38; }
	inline void set_showTrackedArea_38(bool value)
	{
		___showTrackedArea_38 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___playAreaPhysicsLayer_39)); }
	inline int32_t get_playAreaPhysicsLayer_39() const { return ___playAreaPhysicsLayer_39; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_39() { return &___playAreaPhysicsLayer_39; }
	inline void set_playAreaPhysicsLayer_39(int32_t value)
	{
		___playAreaPhysicsLayer_39 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___showBoundaryWalls_40)); }
	inline bool get_showBoundaryWalls_40() const { return ___showBoundaryWalls_40; }
	inline bool* get_address_of_showBoundaryWalls_40() { return &___showBoundaryWalls_40; }
	inline void set_showBoundaryWalls_40(bool value)
	{
		___showBoundaryWalls_40 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___trackedAreaPhysicsLayer_41)); }
	inline int32_t get_trackedAreaPhysicsLayer_41() const { return ___trackedAreaPhysicsLayer_41; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_41() { return &___trackedAreaPhysicsLayer_41; }
	inline void set_trackedAreaPhysicsLayer_41(int32_t value)
	{
		___trackedAreaPhysicsLayer_41 = value;
	}

	inline static int32_t get_offset_of_showCeiling_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___showCeiling_42)); }
	inline bool get_showCeiling_42() const { return ___showCeiling_42; }
	inline bool* get_address_of_showCeiling_42() { return &___showCeiling_42; }
	inline void set_showCeiling_42(bool value)
	{
		___showCeiling_42 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_43() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___boundaryWallsPhysicsLayer_43)); }
	inline int32_t get_boundaryWallsPhysicsLayer_43() const { return ___boundaryWallsPhysicsLayer_43; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_43() { return &___boundaryWallsPhysicsLayer_43; }
	inline void set_boundaryWallsPhysicsLayer_43(int32_t value)
	{
		___boundaryWallsPhysicsLayer_43 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_44() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___ceilingPhysicsLayer_44)); }
	inline int32_t get_ceilingPhysicsLayer_44() const { return ___ceilingPhysicsLayer_44; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_44() { return &___ceilingPhysicsLayer_44; }
	inline void set_ceilingPhysicsLayer_44(int32_t value)
	{
		___ceilingPhysicsLayer_44 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CBoundsU3Ek__BackingField_45)); }
	inline EdgeU5BU5D_tF68F07DB578C88E3AE8341A0B41CA0BB5160756E* get_U3CBoundsU3Ek__BackingField_45() const { return ___U3CBoundsU3Ek__BackingField_45; }
	inline EdgeU5BU5D_tF68F07DB578C88E3AE8341A0B41CA0BB5160756E** get_address_of_U3CBoundsU3Ek__BackingField_45() { return &___U3CBoundsU3Ek__BackingField_45; }
	inline void set_U3CBoundsU3Ek__BackingField_45(EdgeU5BU5D_tF68F07DB578C88E3AE8341A0B41CA0BB5160756E* value)
	{
		___U3CBoundsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___U3CFloorHeightU3Ek__BackingField_46)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_U3CFloorHeightU3Ek__BackingField_46() const { return ___U3CFloorHeightU3Ek__BackingField_46; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_U3CFloorHeightU3Ek__BackingField_46() { return &___U3CFloorHeightU3Ek__BackingField_46; }
	inline void set_U3CFloorHeightU3Ek__BackingField_46(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___U3CFloorHeightU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_47() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___RectangularBounds_47)); }
	inline InscribedRectangle_tAADCDF188A2C78159B271F8D996EA26D2CE495F5 * get_RectangularBounds_47() const { return ___RectangularBounds_47; }
	inline InscribedRectangle_tAADCDF188A2C78159B271F8D996EA26D2CE495F5 ** get_address_of_RectangularBounds_47() { return &___RectangularBounds_47; }
	inline void set_RectangularBounds_47(InscribedRectangle_tAADCDF188A2C78159B271F8D996EA26D2CE495F5 * value)
	{
		___RectangularBounds_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_47), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_48() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___currentFloorObject_48)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentFloorObject_48() const { return ___currentFloorObject_48; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentFloorObject_48() { return &___currentFloorObject_48; }
	inline void set_currentFloorObject_48(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentFloorObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_49() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___currentPlayAreaObject_49)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentPlayAreaObject_49() const { return ___currentPlayAreaObject_49; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentPlayAreaObject_49() { return &___currentPlayAreaObject_49; }
	inline void set_currentPlayAreaObject_49(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentPlayAreaObject_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_50() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___currentTrackedAreaObject_50)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentTrackedAreaObject_50() const { return ___currentTrackedAreaObject_50; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentTrackedAreaObject_50() { return &___currentTrackedAreaObject_50; }
	inline void set_currentTrackedAreaObject_50(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentTrackedAreaObject_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_51() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___currentBoundaryWallObject_51)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentBoundaryWallObject_51() const { return ___currentBoundaryWallObject_51; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentBoundaryWallObject_51() { return &___currentBoundaryWallObject_51; }
	inline void set_currentBoundaryWallObject_51(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentBoundaryWallObject_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_51), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_52() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B, ___currentCeilingObject_52)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentCeilingObject_52() const { return ___currentCeilingObject_52; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentCeilingObject_52() { return &___currentCeilingObject_52; }
	inline void set_currentCeilingObject_52(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentCeilingObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_52), (void*)value);
	}
};

struct BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_t98106BF3136B6784C69CCC72800813EE673A5150 * ___OnVisualizationChanged_25;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B_StaticFields, ___OnVisualizationChanged_25)); }
	inline EventFunction_1_t98106BF3136B6784C69CCC72800813EE673A5150 * get_OnVisualizationChanged_25() const { return ___OnVisualizationChanged_25; }
	inline EventFunction_1_t98106BF3136B6784C69CCC72800813EE673A5150 ** get_address_of_OnVisualizationChanged_25() { return &___OnVisualizationChanged_25; }
	inline void set_OnVisualizationChanged_25(EventFunction_1_t98106BF3136B6784C69CCC72800813EE673A5150 * value)
	{
		___OnVisualizationChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49  : public BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___floorMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___floorScale_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___playAreaMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___trackedAreaMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedAreaMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___boundaryWallMaterial_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryWallMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___boundaryCeilingMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryCeilingMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t248DFF7414A9AB510441991DB718B5C34C5C5AB6  : public BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0  : public BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * ___meshEventData_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___observedObjectParent_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___meshEventData_26)); }
	inline MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * get_meshEventData_26() const { return ___meshEventData_26; }
	inline MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E ** get_address_of_meshEventData_26() { return &___meshEventData_26; }
	inline void set_meshEventData_26(MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * value)
	{
		___meshEventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___observedObjectParent_27)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_observedObjectParent_27() const { return ___observedObjectParent_27; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_observedObjectParent_27() { return &___observedObjectParent_27; }
	inline void set_observedObjectParent_27(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___observedObjectParent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___meshes_39)); }
	inline Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___occlusionMaterial_43)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___physicsMaterial_44)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___visibleMaterial_45)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970  : public BaseCameraSettingsProvider_t4F842C130737912434914318A1DB0DBAE4B1DD3F
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::trackedPoseDriver
	TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * ___trackedPoseDriver_15;

public:
	inline static int32_t get_offset_of_trackedPoseDriver_15() { return static_cast<int32_t>(offsetof(GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970, ___trackedPoseDriver_15)); }
	inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * get_trackedPoseDriver_15() const { return ___trackedPoseDriver_15; }
	inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A ** get_address_of_trackedPoseDriver_15() { return &___trackedPoseDriver_15; }
	inline void set_trackedPoseDriver_15(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * value)
	{
		___trackedPoseDriver_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedPoseDriver_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC  : public BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC, ___inputDevices_22)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC, ___inputDevicesSubset_23)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC, ___lastInputDevices_24)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
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


// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474  : public BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___meshWorkQueue_50)); }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___meshInfos_51)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___oldObserverOrigin_63)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___oldObservationExtents_64)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008  : public BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008, ___U3CNameU3Ek__BackingField_54)); }
	inline String_t* get_U3CNameU3Ek__BackingField_54() const { return ___U3CNameU3Ek__BackingField_54; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_54() { return &___U3CNameU3Ek__BackingField_54; }
	inline void set_U3CNameU3Ek__BackingField_54(String_t* value)
	{
		___U3CNameU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_54), (void*)value);
	}
};

struct XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * ___XRInputSubsystems_53;

public:
	inline static int32_t get_offset_of_XRInputSubsystems_53() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields, ___XRInputSubsystems_53)); }
	inline List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * get_XRInputSubsystems_53() const { return ___XRInputSubsystems_53; }
	inline List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E ** get_address_of_XRInputSubsystems_53() { return &___XRInputSubsystems_53; }
	inline void set_XRInputSubsystems_53(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * value)
	{
		___XRInputSubsystems_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRInputSubsystems_53), (void*)value);
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_OriginPose_10)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m8EB7BF00A9E0CC905E204B8585F1A47E426DD9C2_gshared_inline (BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_gshared (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A_gshared (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m7FBFB745BF419112971A4BF0DB915D296F08165E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___descriptors0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_gshared (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m15BCBD8F715A9CC23083F191D16513B71BF2628A_gshared (MixedRealitySpatialAwarenessEventData_1_t64E20D4D31A951B5CBE415E765D11FF59273BE54 * __this, RuntimeObject* ___observer0, int32_t ___id1, RuntimeObject * ___spatialObject2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_gshared (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_gshared (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m6BBA043605000151F6589C77CD139A6C78F47650_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m68D04A0E1B76A52658117C40C78659DECA2D015C_gshared (List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m44B3E478D2C0D1B64A245DFF887C4A119ABB3417_gshared (List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * __this, uint32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.UInt32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B  List_1_GetEnumerator_m39A02363052A7B052B130EE6B9953BC8249F7CE6_gshared (List_1_tCE3956FC64FBF5C2518AB6500C576D38043A1A53 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_mBED471430FFE3E90CD7FCF155D9992B447D0EF48_gshared_inline (Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_gshared (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_gshared (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCA42D713A5C7469D2F1B83545C0CBF65CFE72DE0_gshared (Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCF2DA39EF247E5F1F52AA39CB0C7DC8A37B7DF6A_gshared (Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t8964DC40F83EDD678854634BC6D8BD788F0B9072 * CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D_m7F2B67CEC48013DE7C8C3473F3F5E5D3B1A29A1F_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m73A4221EDBB06A225806FD07EB197CD2ABF47C28_gshared (ReadOnlyCollection_1_t8964DC40F83EDD678854634BC6D8BD788F0B9072 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  KeyValuePair_2_get_Key_mFF140D58C613850E4E3FDB9DB653B038C4FD4968_gshared_inline (KeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD78F20403483801D607D886AFF68B77F589CA3B5_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mDD151E9EBB701B9B8E2A884BFEFA6FEBED3B6811_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3BF41F57B73B4C1A2357C3172B39A77BA797AA0D_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m25EB694C1F473D3D37E2074EF0C8617E96DDFDA2_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mBE5E4BF8C453D123B1C73DC3885170EDF1B50197_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_m6BAC1839727BE19B4FE8B53487BD2444B75430F6_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m55C8B8338B0C67531FDF4EE59140C36F66EDC463_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m52FF5763B7D6743B1C0F6F7767E1FDF43D536AF9_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___instances0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m713D7DF041DB5ED663F1D3F4EF0BF91389CB969D (BaseCameraSettingsProvider_t4F842C130737912434914318A1DB0DBAE4B1DD3F * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t248DFF7414A9AB510441991DB718B5C34C5C5AB6 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSubsystemHelpers_get_DisplaySubsystem_mCF1D9DB605AAF97DF84D4A6948A8FE3CB19DA738 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mD979EF121108458D7235CE01165CD58C4BECFC40 (BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m5009DAC8452671CDEE3A7013731DB04387D22E38 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_mA03D6F46B7CFEF7AB40AC0C5D4BCECE3C04F5E97 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_mD188966A9F33CA52E0BF2E497D87E7644714899F (BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
inline void Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver__ctor_mAA02955012B0AF1953DFE5CAF0B0BAF29E2E1433 (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline (XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline (BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t70942A6A15B89BC9DE1432F4050E190BE1ABC7EB *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m8EB7BF00A9E0CC905E204B8585F1A47E426DD9C2_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996 (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, bool, const RuntimeMethod*))Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_gshared)(__this, ___value0, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m4B7F9601DBA6B8B3FFC42EDE7CA3D71FD7AD33C3 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialObserver_Enable_mCAEB2562DF6DCA5E0205A800E69453463CCED586 (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsRunning()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_set_meshDensity_mD315BB1EB878525460C446B5A68A3FDB38216126 (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6 (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRMeshSubsystemDescriptor>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5 (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m7FBFB745BF419112971A4BF0DB915D296F08165E_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_inline (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m75CAEE899CA83B23B8092433CC6C799B7012D4D3 (BaseService_t8AB2DDC95E2400A0255605D8A73BE91BB9F4B47A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mB6555070FCF335AA6274E06EE2BDED3094F2D891 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Start_m37CC4D2EEF19F87CC187680C29AADAB07B502786 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_IsRunning(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m706DEFF2E7AB2078C09A1D88A35E5E973DBF1424_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Stop_m3A7F5B736EF2209500BE0A3EA463B77DAB2CECAF (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
inline void Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialMeshObserver_get_Meshes_mCE59E4B52D5D90C07B46A9A3E5EE6A4630A7ECEA (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
inline int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	return ((  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m217539D29D0932511CE53050BE4944A790AEBA04 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_UpdateInterval()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m17D87C437E446A67DE5DA135EAB8FB9C65879D9C_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m08AB4C962E6CE82698096C146DCA0F6586C76512_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsStationaryObserver()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m9DDC57F208759812811FE66EBB86711B0DE24315_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverOrigin(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_mA53D9F23AE74383FC62669E287F1AF9A9813AABB_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_m32691622E093BD37877174447CC77D7487E55B00 (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfosOut0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m5D5B1A0324D245C986012DAEC3110FF1785E5972 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_MeshPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_m8D47E69D3586A3EA61692FF4E76455F3BA5F0749_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626 (MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Create(UnityEngine.Mesh,System.Int32,System.String,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * SpatialAwarenessMeshObject_Create_m8167026EF6A559FF61632816E693258881315382 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, int32_t ___layer1, String_t* ___name2, int32_t ___meshId3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___meshParent4, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_GameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::set_Id(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m95F868930CA6126C725C800CA0BB583FC2F2F10D_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Filter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * BaseSpatialAwarenessObject_get_Filter_m620DBB4B251424A2F54B0B784DC293FA2C5C7E15_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::get_Collider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * SpatialAwarenessMeshObject_get_Collider_mA1072D4448B7AE25875D5A053EE1BB8063065F92_inline (SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682 (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m3893DD22BD77435E85D51F9C1E48313DB9559EAD (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh1, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___meshCollider2, int32_t ___attributes3, Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * ___onMeshGenerationComplete4, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE7C48132237238950E1271C3E82F68E0D7CF1ED3 (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * __this, int32_t ___key0, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C *, int32_t, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Remove(!0)
inline bool Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056 (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___availableMeshObject0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8 (MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * __this, RuntimeObject* ___observer0, int32_t ___id1, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___spatialObject2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E *, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m15BCBD8F715A9CC23083F191D16513B71BF2628A_gshared)(__this, ___observer0, ___id1, ___spatialObject2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Cleanup(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAwarenessMeshObject_Cleanup_mD5A1720AF8338C34FECDA191B089D66D25018CCF (SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___meshObject0, bool ___destroyGameObject1, bool ___destroyMeshes2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m5F569496631B87D6B9E0710C0D4324E87DDB070E_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m8362D2A63D7E14740340C7D604B2EA2C0ED92F48_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
inline void Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , const RuntimeMethod*))Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447 (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442 (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_gshared)(__this, method);
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9B766445837E27AB1B85BDD7D4096E44F0D34B23 (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_DisplayOption()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_mC51C549752D741052215751CB6E14F3F9CF2C846_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_VisibleMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_VisibleMaterial_m246A8857A12B2951A12E6BDC7B3776CA5DEC9B29_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_OcclusionMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_OcclusionMaterial_m847C6CCE117F2B64CD8E1EC49004BFEDC787CD8B_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Item(!0)
inline SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * (*) (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Renderer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RecalculateNormals()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m3D682F3FC6CAB78020EBE5A81774CC6D3F8219DB_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_m40E07BB15DA58D2EF6F6796C6778163107DD7E1B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_PhysicsMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * BaseSpatialMeshObserver_get_PhysicsMaterial_m2E92F342F81E23F21C130FB66EAEADA2E47B4560_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74 (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Add(!0,!1)
inline void Dictionary_2_Add_m63D85FF53A4ABEE7A7178389220DFA582076E6CE (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * __this, int32_t ___key0, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C *, int32_t, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver_Initialize_m012256F77EE108D27198EF2B76223663A4D6A324 (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RuntimeSpatialMeshPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_mEC17538AF73B9A3B7304AC908272D4C10800DBFA_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::AddRuntimeSpatialMeshPrefabToHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver_AddRuntimeSpatialMeshPrefabToHierarchy_mFB56DD39E17BE00698661FEB8858E89D72B5210C (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m3EA987E1DF87742A3AEE0F656E72332A69F82F07 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * AwaiterExtensions_GetAwaiter_m27292A47E155CEEFAB3A0197F9BD00A7A4281A18 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m4B266CB59DA91A3FFA3514B0FAEE2F619EC63D98_inline (SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_mB9E1A10365D3305AE8D811BBFFE8221CBD0A42B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C **, U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m6BBA043605000151F6589C77CD139A6C78F47650_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m50B1134C9B4A58EC645E63DEA52F86548108B331 (SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m2B49C13A5AB9774F30F1B20FFEA3BF765CDA3DE8 (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_gshared)(__this, ___usageName0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_mEE0D5265A4CA2E967C956FEC8E707EDB5D0D3224 (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m4681A023FA3BF1CA5D459ED23C56FBF2AFE8E6BC_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Enabled_mFF877D74D7656DEB83B92C7D1613AB455EFD1164_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_m750180796F1201E1F85C1B84616F4E990EDAA183_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSourceData_m16626C08BC396EB08F6391A38715DEF9BA29B052 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocity(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateVelocity_mF251825885FACBEEDF5308A9108A111A1669E803 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::get_TrackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mFBC3E7D5E92AD348F3BC6E41F20ED130E4526457 (MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___left0, MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m6F62071B690742FBBF470A0B9DB0BDCE97F07E4B_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionApproximate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m5BB091F204862801E2CC962FB6776F4CCF43C308_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m7EE06C12BF5988E2549269E7263D8139FA44A8F3_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_TrackingState(Microsoft.MixedReality.Toolkit.TrackingState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m6CB6CF295491DF729307BFEF8CA9AFA7B6BED260_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_mB94D95B95E62B2A84C2EAE56AE58F77C46F29817 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_m194C97D990A9824AF00859675067A179CDC641EC (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mF0EA1790DE1DEFA29E35CF3516FEB9B0A69E8A90_inline (MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mE9AE7872BF96696640024ECA83C6731401D2D4E4_inline (MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Velocity_mB91F1402293A2EAD1B435FC6F3C2E1E29DA2EEAE_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_AngularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_AngularVelocity_m6257EF26E4EB6333F5DB1660322BA4D2A2A1FEBF_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___usage0, float* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2 (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920 (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m9684711A29DD53B873F9FFAC6F0D0D4FC199C97F_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_FloatData(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_FloatData_m274E342B85D8F2F4F3E291E3716C01DFB76F6F8C (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m0F508CBA0F9F0E86A6DC3D0E3CCDBA9AFF6429EE_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m48B25188C3B24DAF9D4DF38B48F43D32D36B719F (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mE0094FBA28A6C9DC369E19D0187525689321E412_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m5C112889FC27E01E526D007823E94DCFD667AED6 (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  MixedRealityInteractionMapping_get_PoseData_mF508694C03C1B865F3922354B735D578B92316E6_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mFE28A9F4256407EE9FC3CF5263A92A69288D23BC (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178 * ___capabilities0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m122CFE87E6360815E41E8C2AB53DCD608599B24C (HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_mEF8C0265F9BC94E18E661934F1AEEC9A7CEFC6C3 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevice::StopHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice_StopHaptics_m28EFDD62D005090EA42D770BFC271118567EFB3E (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::.ctor()
inline void List_1__ctor_m944FD215480A1F8C0CBDBEBF19BB35A56662CC3A (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 *, const RuntimeMethod*))List_1__ctor_m68D04A0E1B76A52658117C40C78659DECA2D015C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::Add(!0)
inline void List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 *, uint32_t, const RuntimeMethod*))List_1_Add_m44B3E478D2C0D1B64A245DFF887C4A119ABB3417_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m93C708537A70AF36690D7AFA9D596DE73C4F061E (BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * ___profile3, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  LoaderHelpers_IsLoaderActive_m9DE8F2A0B9F18D4F0044CE7F7BA452DDCF862390 (String_t* ___loaderName0, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
inline void List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::GetEnumerator()
inline Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24  List_1_GetEnumerator_m41628015D3C905BFD78ABD3187425CC2DA17E6D0 (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24  (*) (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 *, const RuntimeMethod*))List_1_GetEnumerator_m39A02363052A7B052B130EE6B9953BC8249F7CE6_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::get_Current()
inline uint32_t Enumerator_get_Current_mED8988498ABE655F1AB6FF6012E8535293AB91A0_inline (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *, const RuntimeMethod*))Enumerator_get_Current_mBED471430FFE3E90CD7FCF155D9992B447D0EF48_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577 (uint32_t ___desiredCharacteristics0, List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733 (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
inline bool List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
inline void List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50 (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9 (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::MoveNext()
inline bool Enumerator_MoveNext_m9B408322434F16B90842108106D0D370D876C069 (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *, const RuntimeMethod*))Enumerator_MoveNext_mCA42D713A5C7469D2F1B83545C0CBF65CFE72DE0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::Dispose()
inline void Enumerator_Dispose_mCB09A2FAADDBC6FAD64FDD8EDA372D003C69BD0F (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *, const RuntimeMethod*))Enumerator_Dispose_mCF2DA39EF247E5F1F52AA39CB0C7DC8A37B7DF6A_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mE3289A300EC9C35B2570C561ED671D3B0FB49030 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
inline bool List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2 (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_gshared)(__this, ___collection0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C * CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924_m7CD6D27B94E4828B18DA1A3A90EFCCB283834FDC (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D_m7F2B67CEC48013DE7C8C3473F3F5E5D3B1A29A1F_gshared)(___elements0, method);
}
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFE9904BA81EE41ADC600C6D16E724D47585D7BD5 (ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m73A4221EDBB06A225806FD07EB197CD2ABF47C28_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Key()
inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  KeyValuePair_2_get_Key_mBBBD1EAF4322076A0F6F7E4BEDC7928CF9692F46_inline (KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924 * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  (*) (KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mFF140D58C613850E4E3FDB9DB653B038C4FD4968_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1E3017A242D4A8182A9A206C32344EA209E7077A (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_ContainsKey_mD78F20403483801D607D886AFF68B77F589CA3B5_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(!0)
inline GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * Dictionary_2_get_Item_m897EF85B971417962DB845E3A17074F578E2376C (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_get_Item_mDD151E9EBB701B9B8E2A884BFEFA6FEBED3B6811_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mABC40706BC261F3AFC4FB0F3FFF2F38D167AEAEC (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_inline (BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t11B33CE742FD04EDA35A9C2F079963DB3C7E21B3 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m8EB7BF00A9E0CC905E204B8585F1A47E426DD9C2_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17 (Type_t * ___type0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(!0,!1)
inline void Dictionary_2_Add_m06F42B5245F834E293ED807D6D40EEC286D08CC7 (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 *, const RuntimeMethod*))Dictionary_2_Add_m3BF41F57B73B4C1A2357C3172B39A77BA797AA0D_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA68647C91E6A7C6D2F09DE53F635FDB20D742C22 (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m25EB694C1F473D3D37E2074EF0C8617E96DDFDA2_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerFromScene(Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveControllerFromScene_mD8227E1600F0ED0420B58AC1688886F0B549AEFD (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * ___controller0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(!0)
inline bool Dictionary_2_Remove_m2F0B429341DF97D5F2E34116B109F5BAC84A7984 (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_Remove_mBE5E4BF8C453D123B1C73DC3885170EDF1B50197_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::get_Visualizer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m132439AD05819B7D85719BC5B034D25F9DF82086_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_m0114E960F6C4DD6552B6103FE79628814DDBE280 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m6BAC1839727BE19B4FE8B53487BD2444B75430F6_gshared)(___interface0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::.ctor()
inline void Dictionary_2__ctor_m5E681737293DCA92C004A75093276FEE5B52B1E1 (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *, const RuntimeMethod*))Dictionary_2__ctor_m55C8B8338B0C67531FDF4EE59140C36F66EDC463_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBoundarySystem__ctor_m012654FF0A5C91B51EF33AED6E3DB85AB8D8DC07 (BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B * __this, MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * ___profile0, int32_t ___scale1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared)(__this, ___capacity0, method);
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryGetBoundaryPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryGetBoundaryPoints_m65DBE5495B42A5F3091CB61E05CB07761A0787ED (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___boundaryPoints0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918 (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * ___instances0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m52FF5763B7D6743B1C0F6F7767E1FDF43D536AF9_gshared)(___instances0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::GetEnumerator()
inline Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  (*) (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::get_Current()
inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_inline (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 * __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * (*) (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::Dispose()
inline void Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97 (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::get_Scale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mD4749E123BA2FEA755BC7A5038AB5618682232D3_inline (BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_mBE5E0B12AEF225779CF661D52943C9982BDBEBD8 (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSubsystemHelpers_get_MeshSubsystem_m4CFB1CE253A5AFCEA97DABF8160FF81C23A05328 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mABC40706BC261F3AFC4FB0F3FFF2F38D167AEAEC (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method)
{
	{
		// return (a & b) == b;
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		uint32_t L_2 = ___b1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.TrackingOriginModeFlags,UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_m02CA49E2B7E485159BE694925F8593BD6544FAE6 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		// return (a & b) == b;
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___b1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings__ctor_m1AB1B8C26F478305918902897174D504500DD0C8 (GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t248DFF7414A9AB510441991DB718B5C34C5C5AB6 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t248DFF7414A9AB510441991DB718B5C34C5C5AB6 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m713D7DF041DB5ED663F1D3F4EF0BF91389CB969D(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKCameraSettings_get_IsOpaque_m37539F3A30B5306CBDE8762200150DEEA749FB62 (GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_get_IsOpaque_m37539F3A30B5306CBDE8762200150DEEA749FB62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B2_0 = NULL;
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mCF1D9DB605AAF97DF84D4A6948A8FE3CB19DA738(/*hidden argument*/NULL);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Enable_mBBC5C5D240B328D7995C87FBE611194C270448EB (GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_Enable_mBBC5C5D240B328D7995C87FBE611194C270448EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_mD979EF121108458D7235CE01165CD58C4BECFC40(__this, /*hidden argument*/NULL);
		// if (!CameraCache.Main.GetComponent<TrackedPoseDriver>())
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = CameraCache_get_Main_m5009DAC8452671CDEE3A7013731DB04387D22E38(/*hidden argument*/NULL);
		NullCheck(L_0);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_1 = Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67(L_0, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// trackedPoseDriver = CameraCache.Main.gameObject.AddComponent<TrackedPoseDriver>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = CameraCache_get_Main_m5009DAC8452671CDEE3A7013731DB04387D22E38(/*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_5 = GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2(L_4, /*hidden argument*/GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2_RuntimeMethod_var);
		__this->set_trackedPoseDriver_15(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Disable_mF32BC45138079F1C5DA6B1CFCC9DE7025C9DA62F (GenericXRSDKCameraSettings_t2D6ABCA7FF87B0B32FDC917E13861043C82D1970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_Disable_mF32BC45138079F1C5DA6B1CFCC9DE7025C9DA62F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedPoseDriver != null)
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_0 = __this->get_trackedPoseDriver_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(trackedPoseDriver);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_2 = __this->get_trackedPoseDriver_15();
		UnityObjectExtensions_DestroyObject_mA03D6F46B7CFEF7AB40AC0C5D4BCECE3C04F5E97(L_2, (0.0f), /*hidden argument*/NULL);
		// trackedPoseDriver = null;
		__this->set_trackedPoseDriver_15((TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A *)NULL);
	}

IL_0025:
	{
		// base.Disable();
		BaseService_Disable_mD188966A9F33CA52E0BF2E497D87E7644714899F(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_mCD94424D37AA33143FAFC1496320084C47912843 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver__ctor_mCD94424D37AA33143FAFC1496320084C47912843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<MeshId> meshWorkQueue = new Queue<MeshId>();
		Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_0 = (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *)il2cpp_codegen_object_new(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993(L_0, /*hidden argument*/Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_RuntimeMethod_var);
		__this->set_meshWorkQueue_50(L_0);
		// private readonly List<MeshInfo> meshInfos = new List<MeshInfo>();
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_1 = (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *)il2cpp_codegen_object_new(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var);
		List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2(L_1, /*hidden argument*/List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_RuntimeMethod_var);
		__this->set_meshInfos_51(L_1);
		// private Vector3 oldObserverOrigin = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_oldObserverOrigin_63(L_2);
		// private Vector3 oldObservationExtents = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_oldObservationExtents_64(L_3);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_4 = ___spatialAwarenessSystem0;
		String_t* L_5 = ___name1;
		uint32_t L_6 = ___priority2;
		BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * L_7 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var);
		BaseSpatialMeshObserver__ctor_mAA02955012B0AF1953DFE5CAF0B0BAF29E2E1433(__this, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  GenericXRSDKSpatialMeshObserver_get_IsActiveLoader_m105EC5F6D56596705EA7BF56C27ACB39FDFC2575 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_get_IsActiveLoader_m105EC5F6D56596705EA7BF56C27ACB39FDFC2575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * V_3 = NULL;
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B14_0 = 0;
	RuntimeObject* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	RuntimeObject* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	int32_t G_B20_1 = 0;
	{
		// if (XRGeneralSettings.Instance != null
		//     && XRGeneralSettings.Instance.Manager != null
		//     && XRGeneralSettings.Instance.Manager.activeLoader != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_2 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_3 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_5 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_6 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_7 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0100;
		}
	}
	{
		// if ((observersCache == null || observersCache.Count == 0)
		//     && Service is IMixedRealityDataProviderAccess spatialAwarenessDataProviderAccess
		//     && Service is IMixedRealityServiceState spatialAwarenessState
		//     && spatialAwarenessState.IsInitialized)
		RuntimeObject* L_9 = __this->get_observersCache_47();
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_observersCache_47();
		NullCheck(L_10);
		int32_t L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Count() */, IReadOnlyCollection_1_tFFBF38D04FB57D6FC250B4B814ECE5E1B26F4B7D_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_0086;
		}
	}

IL_0054:
	{
		RuntimeObject* L_12 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IMixedRealityDataProviderAccess_t7B0D4AA917AB0DBC23F474C0D12AF295708C60EF_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_14 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
		RuntimeObject* L_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IMixedRealityServiceState_t58BF1C965015DF6E6055D238A4CAB3F4A71D0F22_il2cpp_TypeInfo_var));
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityServiceState::get_IsInitialized() */, IMixedRealityServiceState_t58BF1C965015DF6E6055D238A4CAB3F4A71D0F22_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		// observersCache = spatialAwarenessDataProviderAccess.GetDataProviders<GenericXRSDKSpatialMeshObserver>();
		RuntimeObject* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IMixedRealityDataProviderAccess_GetDataProviders_TisGenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_m9BADB1B81B594F037A9CF2E06B928BEA78063DF7_RuntimeMethod_var, L_18);
		__this->set_observersCache_47(L_19);
	}

IL_0086:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		V_2 = 0;
		goto IL_00c3;
	}

IL_008a:
	{
		// GenericXRSDKSpatialMeshObserver observer = observersCache[i];
		RuntimeObject* L_20 = __this->get_observersCache_47();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_22 = InterfaceFuncInvoker1< GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Item(System.Int32) */, IReadOnlyList_1_t494C18571D1982792A7EF783885A1EFF5F6B53EC_il2cpp_TypeInfo_var, L_20, L_21);
		V_3 = L_22;
		// if (observer != this && (observer.IsActiveLoader ?? false))
		GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_23 = V_3;
		if ((((RuntimeObject*)(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 *)L_23) == ((RuntimeObject*)(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 *)__this)))
		{
			goto IL_00bf;
		}
	}
	{
		GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_24 = V_3;
		NullCheck(L_24);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_25 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, L_24);
		V_4 = L_25;
		bool L_26 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_00b6;
	}

IL_00af:
	{
		bool L_27 = Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var);
		G_B14_0 = ((int32_t)(L_27));
	}

IL_00b6:
	{
		if (!G_B14_0)
		{
			goto IL_00bf;
		}
	}
	{
		// return false;
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996((&L_28), (bool)0, /*hidden argument*/Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var);
		return L_28;
	}

IL_00bf:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00c3:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		int32_t L_30 = V_2;
		RuntimeObject* L_31 = __this->get_observersCache_47();
		RuntimeObject* L_32 = L_31;
		G_B18_0 = L_32;
		G_B18_1 = L_30;
		if (L_32)
		{
			G_B19_0 = L_32;
			G_B19_1 = L_30;
			goto IL_00da;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_33 = V_6;
		G_B20_0 = L_33;
		G_B20_1 = G_B18_1;
		goto IL_00e4;
	}

IL_00da:
	{
		NullCheck(G_B19_0);
		int32_t L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Count() */, IReadOnlyCollection_1_tFFBF38D04FB57D6FC250B4B814ECE5E1B26F4B7D_il2cpp_TypeInfo_var, G_B19_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_35), L_34, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
	}

IL_00e4:
	{
		V_5 = G_B20_0;
		int32_t L_36 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_37 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B20_1) < ((int32_t)L_36))? 1 : 0)&(int32_t)L_37)))
		{
			goto IL_008a;
		}
	}
	{
		// return true;
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996((&L_38), (bool)1, /*hidden argument*/Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var);
		return L_38;
	}

IL_0100:
	{
		// return null;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 ));
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_39 = V_4;
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Enable_m1AC863BA8043D05D6E3C66614E6BA31B6518B68B (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Enable_m1AC863BA8043D05D6E3C66614E6BA31B6518B68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_0 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m4B7F9601DBA6B8B3FFC42EDE7CA3D71FD7AD33C3(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_2 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_2;
		bool L_3 = Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// ConfigureObserverVolume();
		VirtActionInvoker0::Invoke(92 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
		// base.Enable();
		BaseSpatialObserver_Enable_mCAEB2562DF6DCA5E0205A800E69453463CCED586(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m4B7F9601DBA6B8B3FFC42EDE7CA3D71FD7AD33C3 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m4B7F9601DBA6B8B3FFC42EDE7CA3D71FD7AD33C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_m69E1CBB650FD82CE07BE084D1EB04A38DE9F74C6_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * V_1 = NULL;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B4_0 = NULL;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B5_1 = NULL;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B7_0 = NULL;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B6_0 = NULL;
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * G_B8_0 = NULL;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * G_B8_1 = NULL;
	{
		//         private XRMeshSubsystem MeshSubsystem => meshSubsystem != null && meshSubsystem.running
		//             ? meshSubsystem :
		// #if XR_MANAGEMENT_ENABLED
		//             meshSubsystem = IsActiveLoader ?? false
		//                 ? XRGeneralSettings.Instance.Manager.activeLoader.GetLoadedSubsystem<XRMeshSubsystem>()
		//                 : null;
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_0 = __this->get_meshSubsystem_48();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = __this->get_meshSubsystem_48();
		NullCheck(L_1);
		bool L_2 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0052;
		}
	}

IL_0015:
	{
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_3 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_3;
		bool L_4 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_0029;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_0029:
	{
		bool L_5 = Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		G_B6_0 = G_B5_1;
		if (G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_0035;
		}
	}
	{
		G_B8_0 = ((XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_6 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_7 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_8 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_9 = GenericVirtFuncInvoker0< XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_mECFAECF09F2D9DBE29AABEA8C751BE93BB166734_RuntimeMethod_var, L_8);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_10 = G_B8_0;
		V_1 = L_10;
		NullCheck(G_B8_1);
		G_B8_1->set_meshSubsystem_48(L_10);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_11 = V_1;
		return L_11;
	}

IL_0052:
	{
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_12 = __this->get_meshSubsystem_48();
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CleanupObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CleanupObserver_m6033A5C62492C021A2B039516B47CFEEE1E56A5A (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	{
		// if (IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Suspend();
		VirtActionInvoker0::Invoke(64 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::LookupTriangleDensity(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_mF2C659BAF5B18EEED6B10D4C1D928A3E39E135F2 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, int32_t ___levelOfDetail0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int level = (int)levelOfDetail;
		int32_t L_0 = ___levelOfDetail0;
		V_0 = L_0;
		// if (MeshSubsystem != null)
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (levelOfDetail == SpatialAwarenessMeshLevelOfDetail.Unlimited)
		int32_t L_2 = ___levelOfDetail0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0024;
		}
	}
	{
		// MeshSubsystem.meshDensity = 1;
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		XRMeshSubsystem_set_meshDensity_mD315BB1EB878525460C446B5A68A3FDB38216126(L_3, (1.0f), /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_0024:
	{
		// MeshSubsystem.meshDensity = level / (float)SpatialAwarenessMeshLevelOfDetail.Fine; // For now, map Coarse to 0.0 and Fine to 1.0
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRMeshSubsystem_set_meshDensity_mD315BB1EB878525460C446B5A68A3FDB38216126(L_4, ((float)((float)(((float)((float)L_5)))/(float)(2.0f))), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// return level;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_CheckCapability_m7A54073E51D751B7F004892873EB89CD32C753D9 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_CheckCapability_m7A54073E51D751B7F004892873EB89CD32C753D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (capability != MixedRealityCapability.SpatialAwarenessMesh)
		int32_t L_0 = ___capability0;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0006;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0006:
	{
		// var descriptors = new List<XRMeshSubsystemDescriptor>();
		List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * L_1 = (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *)il2cpp_codegen_object_new(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_il2cpp_TypeInfo_var);
		List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6(L_1, /*hidden argument*/List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(descriptors);
		List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5(L_2, /*hidden argument*/SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5_RuntimeMethod_var);
		// return descriptors.Count > 0 && (IsActiveLoader ?? false);
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_inline(L_2, /*hidden argument*/List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_4 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_4;
		bool L_5 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		bool L_6 = Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var);
		return L_6;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Update_mD84E398DC0DC2EBF4AF6C852D89C9948B4A4777C (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Update_mD84E398DC0DC2EBF4AF6C852D89C9948B4A4777C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_49();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!IsEnabled)
			bool L_2 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
			if (L_2)
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			// return;
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}

IL_0018:
		{
			// base.Update();
			BaseService_Update_m75CAEE899CA83B23B8092433CC6C799B7012D4D3(__this, /*hidden argument*/NULL);
			// UpdateObserver();
			GenericXRSDKSpatialMeshObserver_UpdateObserver_mB6555070FCF335AA6274E06EE2BDED3094F2D891(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Resume_mD01A909C5EE240EBFF3580AF03D0B350ADFD7D87 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Resume_mD01A909C5EE240EBFF3580AF03D0B350ADFD7D87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently running.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral86835A3DB5A72D8ADC8C34240A36AC24FDF843EF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (ResumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_ResumePerfMarker_55();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			// if (MeshSubsystem != null && !MeshSubsystem.running)
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0041;
			}
		}

IL_0029:
		{
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			bool L_5 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0041;
			}
		}

IL_0036:
		{
			// MeshSubsystem.Start();
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_6 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			IntegratedSubsystem_Start_m37CC4D2EEF19F87CC187680C29AADAB07B502786(L_6, /*hidden argument*/NULL);
		}

IL_0041:
		{
			// lastUpdated = 0;
			__this->set_lastUpdated_54((0.0f));
			// IsRunning = true;
			BaseSpatialObserver_set_IsRunning_m706DEFF2E7AB2078C09A1D88A35E5E973DBF1424_inline(__this, (bool)1, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Suspend_mAF8499353C78CCDA77891D065CB1A2E4D4A52E23 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Suspend_mAF8499353C78CCDA77891D065CB1A2E4D4A52E23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently stopped.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralFD59EE74A1BD72C2A0FB6F83CA703C7D099CE606, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (SuspendPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_SuspendPerfMarker_56();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			// if (MeshSubsystem != null && MeshSubsystem.running)
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0041;
			}
		}

IL_0029:
		{
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			bool L_5 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0041;
			}
		}

IL_0036:
		{
			// MeshSubsystem.Stop();
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_6 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			IntegratedSubsystem_Stop_m3A7F5B736EF2209500BE0A3EA463B77DAB2CECAF(L_6, /*hidden argument*/NULL);
		}

IL_0041:
		{
			// IsRunning = false;
			BaseSpatialObserver_set_IsRunning_m706DEFF2E7AB2078C09A1D88A35E5E973DBF1424_inline(__this, (bool)0, /*hidden argument*/NULL);
			// meshWorkQueue.Clear();
			Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_7 = __this->get_meshWorkQueue_50();
			NullCheck(L_7);
			Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4(L_7, /*hidden argument*/Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ClearObservations_m08058D364C08065D6EE470177C43BC0AE156DA39 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ClearObservations_m08058D364C08065D6EE470177C43BC0AE156DA39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ClearObservationsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_ClearObservationsPerfMarker_57();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool wasRunning = false;
			V_2 = (bool)0;
			// if (IsRunning)
			bool L_2 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0018:
		{
			// wasRunning = true;
			V_2 = (bool)1;
			// Suspend();
			VirtActionInvoker0::Invoke(64 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
		}

IL_0020:
		{
			// IReadOnlyList<int> observations = new List<int>(Meshes.Keys);
			RuntimeObject* L_3 = BaseSpatialMeshObserver_get_Meshes_mCE59E4B52D5D90C07B46A9A3E5EE6A4630A7ECEA(__this, /*hidden argument*/NULL);
			NullCheck(L_3);
			RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!0> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Keys() */, IReadOnlyDictionary_2_tB5EC41628DE8770084268613781FE716E29481A2_il2cpp_TypeInfo_var, L_3);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
			List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797(L_5, L_4, /*hidden argument*/List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_RuntimeMethod_var);
			// foreach (int meshId in observations)
			NullCheck(L_5);
			RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var, L_5);
			V_3 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0048;
			}

IL_0038:
			{
				// foreach (int meshId in observations)
				RuntimeObject* L_7 = V_3;
				NullCheck(L_7);
				int32_t L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_7);
				V_4 = L_8;
				// RemoveMeshObject(meshId);
				int32_t L_9 = V_4;
				GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930(__this, L_9, /*hidden argument*/NULL);
			}

IL_0048:
			{
				// foreach (int meshId in observations)
				RuntimeObject* L_10 = V_3;
				NullCheck(L_10);
				bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0038;
				}
			}

IL_0050:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0052);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_12 = V_3;
				if (!L_12)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(82)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// if (wasRunning)
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0065;
			}
		}

IL_005f:
		{
			// Resume();
			VirtActionInvoker0::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
		}

IL_0065:
		{
			// }
			IL2CPP_LEAVE(0x75, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(103)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mB6555070FCF335AA6274E06EE2BDED3094F2D891 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_UpdateObserver_mB6555070FCF335AA6274E06EE2BDED3094F2D891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		RuntimeObject* L_0 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		return;
	}

IL_0011:
	{
		// using (UpdateObserverPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_UpdateObserverPerfMarker_58();
		V_1 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			// if (IsRunning && (outstandingMeshObject == null))
			bool L_4 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_00d8;
			}
		}

IL_002a:
		{
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_5 = __this->get_outstandingMeshObject_52();
			if (L_5)
			{
				goto IL_00d8;
			}
		}

IL_0035:
		{
			// if (meshWorkQueue.Count > 0)
			Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_6 = __this->get_meshWorkQueue_50();
			NullCheck(L_6);
			int32_t L_7 = Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_inline(L_6, /*hidden argument*/Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_RuntimeMethod_var);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0059;
			}
		}

IL_0043:
		{
			// RequestMesh(meshWorkQueue.Dequeue());
			Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_8 = __this->get_meshWorkQueue_50();
			NullCheck(L_8);
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_9 = Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6(L_8, /*hidden argument*/Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_RuntimeMethod_var);
			GenericXRSDKSpatialMeshObserver_RequestMesh_m217539D29D0932511CE53050BE4944A790AEBA04(__this, L_9, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xE8, FINALLY_00da);
		}

IL_0059:
		{
			// else if (Time.time - lastUpdated >= UpdateInterval)
			float L_10 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
			float L_11 = __this->get_lastUpdated_54();
			float L_12 = BaseSpatialObserver_get_UpdateInterval_m17D87C437E446A67DE5DA135EAB8FB9C65879D9C_inline(__this, /*hidden argument*/NULL);
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_11))) >= ((float)L_12))))
			{
				goto IL_00d8;
			}
		}

IL_006d:
		{
			// if (ObserverVolumeType == VolumeType.UserAlignedCube)
			int32_t L_13 = BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)2))))
			{
				goto IL_008b;
			}
		}

IL_0076:
		{
			// ObserverRotation = CameraCache.Main.transform.rotation;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m5009DAC8452671CDEE3A7013731DB04387D22E38(/*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
			BaseSpatialObserver_set_ObserverRotation_m08AB4C962E6CE82698096C146DCA0F6586C76512_inline(__this, L_16, /*hidden argument*/NULL);
		}

IL_008b:
		{
			// if (!IsStationaryObserver)
			bool L_17 = BaseSpatialObserver_get_IsStationaryObserver_m9DDC57F208759812811FE66EBB86711B0DE24315_inline(__this, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_00a8;
			}
		}

IL_0093:
		{
			// ObserverOrigin = CameraCache.Main.transform.position;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = CameraCache_get_Main_m5009DAC8452671CDEE3A7013731DB04387D22E38(/*hidden argument*/NULL);
			NullCheck(L_18);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
			BaseSpatialObserver_set_ObserverOrigin_mA53D9F23AE74383FC62669E287F1AF9A9813AABB_inline(__this, L_20, /*hidden argument*/NULL);
		}

IL_00a8:
		{
			// ConfigureObserverVolume();
			VirtActionInvoker0::Invoke(92 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
			// if (MeshSubsystem.TryGetMeshInfos(meshInfos))
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_21 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_22 = __this->get_meshInfos_51();
			NullCheck(L_21);
			bool L_23 = XRMeshSubsystem_TryGetMeshInfos_m32691622E093BD37877174447CC77D7487E55B00(L_21, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00cd;
			}
		}

IL_00c1:
		{
			// UpdateMeshes(meshInfos);
			List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_24 = __this->get_meshInfos_51();
			GenericXRSDKSpatialMeshObserver_UpdateMeshes_m5D5B1A0324D245C986012DAEC3110FF1785E5972(__this, L_24, /*hidden argument*/NULL);
		}

IL_00cd:
		{
			// lastUpdated = Time.time;
			float L_25 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
			__this->set_lastUpdated_54(L_25);
		}

IL_00d8:
		{
			// }
			IL2CPP_LEAVE(0xE8, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE8, IL_00e8)
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m217539D29D0932511CE53050BE4944A790AEBA04 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_RequestMesh_m217539D29D0932511CE53050BE4944A790AEBA04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RequestMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_RequestMeshPerfMarker_59();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// string meshName = ("SpatialMesh - " + meshId);
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_2 = ___meshId0;
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_3 = L_2;
			RuntimeObject * L_4 = Box(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var, &L_3);
			String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB245477D5A96A319ED32B95AF7B4A7C31F5D863C, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// if (spareMeshObject == null)
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_6 = __this->get_spareMeshObject_53();
			if (L_6)
			{
				goto IL_0045;
			}
		}

IL_0027:
		{
			// newMesh = SpatialAwarenessMeshObject.Create(
			//     null,
			//     MeshPhysicsLayer,
			//     meshName,
			//     meshId.GetHashCode());
			int32_t L_7 = BaseSpatialMeshObserver_get_MeshPhysicsLayer_m8D47E69D3586A3EA61692FF4E76455F3BA5F0749_inline(__this, /*hidden argument*/NULL);
			String_t* L_8 = V_2;
			int32_t L_9 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&___meshId0), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_10 = SpatialAwarenessMeshObject_Create_m8167026EF6A559FF61632816E693258881315382((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)NULL, L_7, L_8, L_9, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
			V_3 = L_10;
			// }
			goto IL_007e;
		}

IL_0045:
		{
			// newMesh = spareMeshObject;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_11 = __this->get_spareMeshObject_53();
			V_3 = L_11;
			// spareMeshObject = null;
			__this->set_spareMeshObject_53((SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *)NULL);
			// newMesh.GameObject.name = meshName;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_12 = V_3;
			NullCheck(L_12);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline(L_12, /*hidden argument*/NULL);
			String_t* L_14 = V_2;
			NullCheck(L_13);
			Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_13, L_14, /*hidden argument*/NULL);
			// newMesh.Id = meshId.GetHashCode();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_15 = V_3;
			int32_t L_16 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&___meshId0), /*hidden argument*/NULL);
			NullCheck(L_15);
			BaseSpatialAwarenessObject_set_Id_m95F868930CA6126C725C800CA0BB583FC2F2F10D_inline(L_15, L_16, /*hidden argument*/NULL);
			// newMesh.GameObject.SetActive(true);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_17 = V_3;
			NullCheck(L_17);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)1, /*hidden argument*/NULL);
		}

IL_007e:
		{
			// MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_19 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_20 = ___meshId0;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_21 = V_3;
			NullCheck(L_21);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_22 = BaseSpatialAwarenessObject_get_Filter_m620DBB4B251424A2F54B0B784DC293FA2C5C7E15_inline(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_23 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_22, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_24 = V_3;
			NullCheck(L_24);
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_25 = SpatialAwarenessMeshObject_get_Collider_mA1072D4448B7AE25875D5A053EE1BB8063065F92_inline(L_24, /*hidden argument*/NULL);
			Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * L_26 = (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C *)il2cpp_codegen_object_new(Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C_il2cpp_TypeInfo_var);
			Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682(L_26, __this, (intptr_t)((intptr_t)GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_mD0A7F01906C7F911E109CE983974F33C1EAF289A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_RuntimeMethod_var);
			NullCheck(L_19);
			XRMeshSubsystem_GenerateMeshAsync_m3893DD22BD77435E85D51F9C1E48313DB9559EAD(L_19, L_20, L_23, L_25, 1, L_26, /*hidden argument*/NULL);
			// outstandingMeshObject = newMesh;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_27 = V_3;
			__this->set_outstandingMeshObject_52(L_27);
			// }
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// using (RemoveMeshObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_RemoveMeshObjectPerfMarker_60();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (meshes.TryGetValue(id, out mesh))
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_2 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			int32_t L_3 = ___id0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_mE7C48132237238950E1271C3E82F68E0D7CF1ED3(L_2, L_3, (SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mE7C48132237238950E1271C3E82F68E0D7CF1ED3_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_005c;
			}
		}

IL_001e:
		{
			// meshes.Remove(id);
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_5 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			int32_t L_6 = ___id0;
			NullCheck(L_5);
			Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056_RuntimeMethod_var);
			// ReclaimMeshObject(mesh);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_7 = V_2;
			GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1(__this, L_7, /*hidden argument*/NULL);
			// meshEventData.Initialize(this, id, null);
			MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * L_8 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshEventData_26();
			int32_t L_9 = ___id0;
			NullCheck(L_8);
			MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8(L_8, __this, L_9, (SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *)NULL, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8_RuntimeMethod_var);
			// Service?.HandleEvent(meshEventData, OnMeshRemoved);
			RuntimeObject* L_10 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
			RuntimeObject* L_11 = L_10;
			G_B3_0 = L_11;
			if (L_11)
			{
				G_B4_0 = L_11;
				goto IL_004c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_004c:
		{
			MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * L_12 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshEventData_26();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var);
			EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * L_13 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var))->get_OnMeshRemoved_36();
			NullCheck(G_B4_0);
			GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t802A31C279AA51E20CED414440E2650905DAA63C_m485FE3188C02C8DA2240644C4FD9DFEDB3C9F59D_RuntimeMethod_var, G_B4_0, L_12, L_13);
		}

IL_005c:
		{
			// }
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * ___availableMeshObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ReclaimMeshObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_ReclaimMeshObjectPerfMarker_61();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (spareMeshObject == null)
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_2 = __this->get_spareMeshObject_53();
			if (L_2)
			{
				goto IL_0043;
			}
		}

IL_0016:
		{
			// SpatialAwarenessMeshObject.Cleanup(availableMeshObject, false);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_3 = ___availableMeshObject0;
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_Cleanup_mD5A1720AF8338C34FECDA191B089D66D25018CCF(L_3, (bool)0, (bool)1, /*hidden argument*/NULL);
			// availableMeshObject.GameObject.name = "Unused Spatial Mesh";
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_4 = ___availableMeshObject0;
			NullCheck(L_4);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_5, _stringLiteral5DC6D5DE1EC5A7F2861EB2A043D91BCD0D44006B, /*hidden argument*/NULL);
			// availableMeshObject.GameObject.SetActive(false);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_6 = ___availableMeshObject0;
			NullCheck(L_6);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
			// spareMeshObject = availableMeshObject;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_8 = ___availableMeshObject0;
			__this->set_spareMeshObject_53(L_8);
			// }
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}

IL_0043:
		{
			// SpatialAwarenessMeshObject.Cleanup(availableMeshObject);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_9 = ___availableMeshObject0;
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_Cleanup_mD5A1720AF8338C34FECDA191B089D66D25018CCF(L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m964D6AECE3B2792B13B704C099A2B8F73D622F28 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m964D6AECE3B2792B13B704C099A2B8F73D622F28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (MeshSubsystem == null
		//     || (oldObserverOrigin == ObserverOrigin
		//     && oldObservationExtents == ObservationExtents
		//     && oldObserverVolumeType == ObserverVolumeType))
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_0 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_oldObserverOrigin_63();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = BaseSpatialObserver_get_ObserverOrigin_m5F569496631B87D6B9E0710C0D4324E87DDB070E_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_3 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_oldObservationExtents_64();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = BaseSpatialObserver_get_ObservationExtents_m8362D2A63D7E14740340C7D604B2EA2C0ED92F48_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_6 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = __this->get_oldObserverVolumeType_65();
		int32_t L_8 = BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_003d;
		}
	}

IL_003c:
	{
		// return;
		return;
	}

IL_003d:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_62();
		V_1 = L_9;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_10 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_11 = BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline(__this, /*hidden argument*/NULL);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((!(((uint32_t)L_12) == ((uint32_t)1))))
			{
				goto IL_0070;
			}
		}

IL_0056:
		{
			// MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_13 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = BaseSpatialObserver_get_ObserverOrigin_m5F569496631B87D6B9E0710C0D4324E87DDB070E_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = BaseSpatialObserver_get_ObservationExtents_m8362D2A63D7E14740340C7D604B2EA2C0ED92F48_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_13);
			XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA(L_13, L_14, L_15, /*hidden argument*/NULL);
			// break;
			goto IL_008a;
		}

IL_0070:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_16 = BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline(__this, /*hidden argument*/NULL);
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(VolumeType_tDB0BD0DBCB2ACA3E90F29FE50B9816970FC6D5E5_il2cpp_TypeInfo_var, &L_17);
			String_t* L_19 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77, L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_19, /*hidden argument*/NULL);
		}

IL_008a:
		{
			// oldObserverOrigin = ObserverOrigin;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = BaseSpatialObserver_get_ObserverOrigin_m5F569496631B87D6B9E0710C0D4324E87DDB070E_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverOrigin_63(L_20);
			// oldObservationExtents = ObservationExtents;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = BaseSpatialObserver_get_ObservationExtents_m8362D2A63D7E14740340C7D604B2EA2C0ED92F48_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObservationExtents_64(L_21);
			// oldObserverVolumeType = ObserverVolumeType;
			int32_t L_22 = BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverVolumeType_65(L_22);
			// }
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m5D5B1A0324D245C986012DAEC3110FF1785E5972 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_UpdateMeshes_m5D5B1A0324D245C986012DAEC3110FF1785E5972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!IsRunning) { return; }
		bool L_0 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateMeshesPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_UpdateMeshesPerfMarker_66();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// foreach (MeshInfo meshInfo in meshInfos)
			List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_3 = ___meshInfos0;
			NullCheck(L_3);
			Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  L_4 = List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A(L_3, /*hidden argument*/List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_RuntimeMethod_var);
			V_2 = L_4;
		}

IL_001e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_006d;
			}

IL_0020:
			{
				// foreach (MeshInfo meshInfo in meshInfos)
				MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_5 = Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_inline((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_2), /*hidden argument*/Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_RuntimeMethod_var);
				V_3 = L_5;
				// switch (meshInfo.ChangeState)
				int32_t L_6 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_3), /*hidden argument*/NULL);
				V_4 = L_6;
				int32_t L_7 = V_4;
				if ((!(((uint32_t)L_7) > ((uint32_t)1))))
				{
					goto IL_003d;
				}
			}

IL_0036:
			{
				int32_t L_8 = V_4;
				if ((((int32_t)L_8) == ((int32_t)2)))
				{
					goto IL_0051;
				}
			}

IL_003b:
			{
				goto IL_006d;
			}

IL_003d:
			{
				// meshWorkQueue.Enqueue(meshInfo.MeshId);
				Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_9 = __this->get_meshWorkQueue_50();
				MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_10 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_3), /*hidden argument*/NULL);
				NullCheck(L_9);
				Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F(L_9, L_10, /*hidden argument*/Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_RuntimeMethod_var);
				// break;
				goto IL_006d;
			}

IL_0051:
			{
				// RemoveMeshObject(meshInfo.MeshId.GetHashCode());
				MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_11 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_3), /*hidden argument*/NULL);
				V_5 = L_11;
				int32_t L_12 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_5), /*hidden argument*/NULL);
				GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m21200E8AC00862D4ECF34365FD06678D5614C930(__this, L_12, /*hidden argument*/NULL);
			}

IL_006d:
			{
				// foreach (MeshInfo meshInfo in meshInfos)
				bool L_13 = Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0020;
				}
			}

IL_0076:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0078);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0078;
		}

FINALLY_0078:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_2), /*hidden argument*/Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_RuntimeMethod_var);
			IL2CPP_END_FINALLY(120)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(120)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x94, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x94, IL_0094)
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m3EA987E1DF87742A3AEE0F656E72332A69F82F07 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m3EA987E1DF87742A3AEE0F656E72332A69F82F07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * V_3 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_4 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_5 = NULL;
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	bool G_B10_0 = false;
	bool G_B9_0 = false;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B11_0 = NULL;
	bool G_B11_1 = false;
	bool G_B13_0 = false;
	bool G_B12_0 = false;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B14_0 = NULL;
	bool G_B14_1 = false;
	bool G_B16_0 = false;
	bool G_B15_0 = false;
	bool G_B18_0 = false;
	bool G_B17_0 = false;
	bool G_B20_0 = false;
	bool G_B19_0 = false;
	bool G_B22_0 = false;
	bool G_B21_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B23_0 = NULL;
	bool G_B23_1 = false;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	{
		// if (!IsRunning) { return; }
		bool L_0 = BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (MeshGenerationActionPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1 = ((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->get_MeshGenerationActionPerfMarker_67();
		V_1 = L_1;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// if (outstandingMeshObject == null)
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_3 = __this->get_outstandingMeshObject_52();
			if (L_3)
			{
				goto IL_003f;
			}
		}

IL_001f:
		{
			// Debug.LogWarning($"MeshGenerationAction called for mesh id {meshGenerationResult.MeshId} while no request was outstanding.");
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_4 = MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_5 = L_4;
			RuntimeObject * L_6 = Box(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var, &L_5);
			String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral77361B86D8FA2FDF99E13C61E6868332120A7BE3, L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_7, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x214, FINALLY_0206);
		}

IL_003f:
		{
			// switch (meshGenerationResult.Status)
			int32_t L_8 = MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			V_2 = L_8;
			int32_t L_9 = V_2;
			switch (L_9)
			{
				case 0:
				{
					goto IL_0072;
				}
				case 1:
				{
					goto IL_0066;
				}
				case 2:
				{
					goto IL_0204;
				}
				case 3:
				{
					goto IL_0066;
				}
				case 4:
				{
					goto IL_0066;
				}
			}
		}

IL_0061:
		{
			goto IL_0204;
		}

IL_0066:
		{
			// outstandingMeshObject = null;
			__this->set_outstandingMeshObject_52((SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *)NULL);
			// break;
			goto IL_0204;
		}

IL_0072:
		{
			// SpatialAwarenessMeshObject meshObject = outstandingMeshObject;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_10 = __this->get_outstandingMeshObject_52();
			V_3 = L_10;
			// meshObject.Id = meshGenerationResult.MeshId.GetHashCode();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_11 = V_3;
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_12 = MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			V_6 = L_12;
			int32_t L_13 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_6), /*hidden argument*/NULL);
			NullCheck(L_11);
			BaseSpatialAwarenessObject_set_Id_m95F868930CA6126C725C800CA0BB583FC2F2F10D_inline(L_11, L_13, /*hidden argument*/NULL);
			// outstandingMeshObject = null;
			__this->set_outstandingMeshObject_52((SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 *)NULL);
			// bool isMeshUpdate = meshes.ContainsKey(meshObject.Id);
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_14 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_15 = V_3;
			NullCheck(L_15);
			int32_t L_16 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_17 = Dictionary_2_ContainsKey_m9B766445837E27AB1B85BDD7D4096E44F0D34B23(L_14, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m9B766445837E27AB1B85BDD7D4096E44F0D34B23_RuntimeMethod_var);
			// Material material = (DisplayOption == SpatialAwarenessMeshDisplayOptions.Occlusion) ?
			//     OcclusionMaterial : VisibleMaterial;
			int32_t L_18 = BaseSpatialMeshObserver_get_DisplayOption_mC51C549752D741052215751CB6E14F3F9CF2C846_inline(__this, /*hidden argument*/NULL);
			G_B9_0 = L_17;
			if ((((int32_t)L_18) == ((int32_t)2)))
			{
				G_B10_0 = L_17;
				goto IL_00be;
			}
		}

IL_00b6:
		{
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = BaseSpatialMeshObserver_get_VisibleMaterial_m246A8857A12B2951A12E6BDC7B3776CA5DEC9B29_inline(__this, /*hidden argument*/NULL);
			G_B11_0 = L_19;
			G_B11_1 = G_B9_0;
			goto IL_00c4;
		}

IL_00be:
		{
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = BaseSpatialMeshObserver_get_OcclusionMaterial_m847C6CCE117F2B64CD8E1EC49004BFEDC787CD8B_inline(__this, /*hidden argument*/NULL);
			G_B11_0 = L_20;
			G_B11_1 = G_B10_0;
		}

IL_00c4:
		{
			V_4 = G_B11_0;
			// material = isMeshUpdate ? meshes[meshObject.Id].Renderer.sharedMaterial : material;
			bool L_21 = G_B11_1;
			G_B12_0 = L_21;
			if (L_21)
			{
				G_B13_0 = L_21;
				goto IL_00cd;
			}
		}

IL_00c9:
		{
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = V_4;
			G_B14_0 = L_22;
			G_B14_1 = G_B12_0;
			goto IL_00e8;
		}

IL_00cd:
		{
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_23 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_24 = V_3;
			NullCheck(L_24);
			int32_t L_25 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_26 = Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F(L_23, L_25, /*hidden argument*/Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F_RuntimeMethod_var);
			NullCheck(L_26);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_27 = BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_27, /*hidden argument*/NULL);
			G_B14_0 = L_28;
			G_B14_1 = G_B13_0;
		}

IL_00e8:
		{
			V_4 = G_B14_0;
			// meshObject.Renderer.sharedMaterial = material;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_29 = V_3;
			NullCheck(L_29);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_30 = BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline(L_29, /*hidden argument*/NULL);
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_31 = V_4;
			NullCheck(L_30);
			Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_30, L_31, /*hidden argument*/NULL);
			// if (RecalculateNormals)
			bool L_32 = BaseSpatialMeshObserver_get_RecalculateNormals_m3D682F3FC6CAB78020EBE5A81774CC6D3F8219DB_inline(__this, /*hidden argument*/NULL);
			G_B15_0 = G_B14_1;
			if (!L_32)
			{
				G_B16_0 = G_B14_1;
				goto IL_010f;
			}
		}

IL_00ff:
		{
			// meshObject.Filter.sharedMesh.RecalculateNormals();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_33 = V_3;
			NullCheck(L_33);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_34 = BaseSpatialAwarenessObject_get_Filter_m620DBB4B251424A2F54B0B784DC293FA2C5C7E15_inline(L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_35 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_35, /*hidden argument*/NULL);
			G_B16_0 = G_B15_0;
		}

IL_010f:
		{
			// meshObject.Renderer.enabled = (DisplayOption != SpatialAwarenessMeshDisplayOptions.None);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_36 = V_3;
			NullCheck(L_36);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_37 = BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline(L_36, /*hidden argument*/NULL);
			int32_t L_38 = BaseSpatialMeshObserver_get_DisplayOption_mC51C549752D741052215751CB6E14F3F9CF2C846_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_37);
			Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_37, (bool)((!(((uint32_t)L_38) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
			// if (meshObject.Renderer.enabled)
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_39 = V_3;
			NullCheck(L_39);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_40 = BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline(L_39, /*hidden argument*/NULL);
			NullCheck(L_40);
			bool L_41 = Renderer_get_enabled_m40E07BB15DA58D2EF6F6796C6778163107DD7E1B(L_40, /*hidden argument*/NULL);
			G_B17_0 = G_B16_0;
			if (!L_41)
			{
				G_B18_0 = G_B16_0;
				goto IL_0141;
			}
		}

IL_0130:
		{
			// meshObject.Collider.material = PhysicsMaterial;
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_42 = V_3;
			NullCheck(L_42);
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_43 = SpatialAwarenessMeshObject_get_Collider_mA1072D4448B7AE25875D5A053EE1BB8063065F92_inline(L_42, /*hidden argument*/NULL);
			PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_44 = BaseSpatialMeshObserver_get_PhysicsMaterial_m2E92F342F81E23F21C130FB66EAEADA2E47B4560_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_43);
			Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_43, L_44, /*hidden argument*/NULL);
			G_B18_0 = G_B17_0;
		}

IL_0141:
		{
			// if (isMeshUpdate)
			bool L_45 = G_B18_0;
			G_B19_0 = L_45;
			if (!L_45)
			{
				G_B20_0 = L_45;
				goto IL_016d;
			}
		}

IL_0144:
		{
			// ReclaimMeshObject(meshes[meshObject.Id]);
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_46 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_47 = V_3;
			NullCheck(L_47);
			int32_t L_48 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_47, /*hidden argument*/NULL);
			NullCheck(L_46);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_49 = Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F(L_46, L_48, /*hidden argument*/Dictionary_2_get_Item_m5C2DD45FCFE4592AE20B171B08922A4E371BD40F_RuntimeMethod_var);
			GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_mD9AC1DB5EBBAD34586E69E2E4A711549B31D79D1(__this, L_49, /*hidden argument*/NULL);
			// meshes.Remove(meshObject.Id);
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_50 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_51 = V_3;
			NullCheck(L_51);
			int32_t L_52 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_51, /*hidden argument*/NULL);
			NullCheck(L_50);
			Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056(L_50, L_52, /*hidden argument*/Dictionary_2_Remove_m1CCC247F7F780A34E363A9BF087536887C9B2056_RuntimeMethod_var);
			G_B20_0 = G_B19_0;
		}

IL_016d:
		{
			// meshes.Add(meshObject.Id, meshObject);
			Dictionary_2_t3722A5D12FEFAC73A361C67341D2FDF485B7F14C * L_53 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshes_39();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_54 = V_3;
			NullCheck(L_54);
			int32_t L_55 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_54, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_56 = V_3;
			NullCheck(L_53);
			Dictionary_2_Add_m63D85FF53A4ABEE7A7178389220DFA582076E6CE(L_53, L_55, L_56, /*hidden argument*/Dictionary_2_Add_m63D85FF53A4ABEE7A7178389220DFA582076E6CE_RuntimeMethod_var);
			// Transform meshObjectParent = (ObservedObjectParent.transform != null) ? ObservedObjectParent.transform : null;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_57 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(84 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
			NullCheck(L_57);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_57, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_59 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_58, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B21_0 = G_B20_0;
			if (L_59)
			{
				G_B22_0 = G_B20_0;
				goto IL_0195;
			}
		}

IL_0192:
		{
			G_B23_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
			G_B23_1 = G_B21_0;
			goto IL_01a0;
		}

IL_0195:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(84 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
			NullCheck(L_60);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_60, /*hidden argument*/NULL);
			G_B23_0 = L_61;
			G_B23_1 = G_B22_0;
		}

IL_01a0:
		{
			V_5 = G_B23_0;
			// meshObject.GameObject.transform.SetParent(meshObjectParent, false);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_62 = V_3;
			NullCheck(L_62);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline(L_62, /*hidden argument*/NULL);
			NullCheck(L_63);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_63, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = V_5;
			NullCheck(L_64);
			Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_64, L_65, (bool)0, /*hidden argument*/NULL);
			// meshEventData.Initialize(this, meshObject.Id, meshObject);
			MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * L_66 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshEventData_26();
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_67 = V_3;
			NullCheck(L_67);
			int32_t L_68 = BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline(L_67, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * L_69 = V_3;
			NullCheck(L_66);
			MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8(L_66, __this, L_68, L_69, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m9F29D99A7408508ACC21ACBED5A86007ADF2F3B8_RuntimeMethod_var);
			// if (isMeshUpdate)
			if (!G_B23_1)
			{
				goto IL_01e8;
			}
		}

IL_01ca:
		{
			// Service?.HandleEvent(meshEventData, OnMeshUpdated);
			RuntimeObject* L_70 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
			RuntimeObject* L_71 = L_70;
			G_B25_0 = L_71;
			if (L_71)
			{
				G_B26_0 = L_71;
				goto IL_01d6;
			}
		}

IL_01d3:
		{
			IL2CPP_LEAVE(0x214, FINALLY_0206);
		}

IL_01d6:
		{
			MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * L_72 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshEventData_26();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var);
			EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * L_73 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var))->get_OnMeshUpdated_34();
			NullCheck(G_B26_0);
			GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t802A31C279AA51E20CED414440E2650905DAA63C_m485FE3188C02C8DA2240644C4FD9DFEDB3C9F59D_RuntimeMethod_var, G_B26_0, L_72, L_73);
			// }
			IL2CPP_LEAVE(0x214, FINALLY_0206);
		}

IL_01e8:
		{
			// Service?.HandleEvent(meshEventData, OnMeshAdded);
			RuntimeObject* L_74 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
			RuntimeObject* L_75 = L_74;
			G_B28_0 = L_75;
			if (L_75)
			{
				G_B29_0 = L_75;
				goto IL_01f4;
			}
		}

IL_01f1:
		{
			IL2CPP_LEAVE(0x214, FINALLY_0206);
		}

IL_01f4:
		{
			MixedRealitySpatialAwarenessEventData_1_tABA642DBAAD2030A730FD8BC444A8E3B4AF23E6E * L_76 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 *)__this)->get_meshEventData_26();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var);
			EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * L_77 = ((BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0_il2cpp_TypeInfo_var))->get_OnMeshAdded_32();
			NullCheck(G_B29_0);
			GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tDB2B110EE1343C45C1792E37D43D17EE31966AB0 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t802A31C279AA51E20CED414440E2650905DAA63C_m485FE3188C02C8DA2240644C4FD9DFEDB3C9F59D_RuntimeMethod_var, G_B29_0, L_76, L_77);
		}

IL_0204:
		{
			// }
			IL2CPP_LEAVE(0x214, FINALLY_0206);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0206;
	}

FINALLY_0206:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(518)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(518)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x214, IL_0214)
	}

IL_0214:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Initialize_m7E6523BF60B72C19084A6AAB31A231298D883C01 (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Initialize_m7E6523BF60B72C19084A6AAB31A231298D883C01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseSpatialMeshObserver_Initialize_m012256F77EE108D27198EF2B76223663A4D6A324(__this, /*hidden argument*/NULL);
		// if (Service == null || MeshSubsystem == null) { return; }
		RuntimeObject* L_0 = BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mA89295E1794A8DB0174689C323719635775C3966_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_mB1DA275F1C1EC954036C14261CA82CD60B18099D(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		return;
	}

IL_0017:
	{
		// if (RuntimeSpatialMeshPrefab != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_mEC17538AF73B9A3B7304AC908272D4C10800DBFA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// AddRuntimeSpatialMeshPrefabToHierarchy();
		BaseSpatialMeshObserver_AddRuntimeSpatialMeshPrefabToHierarchy_mFB56DD39E17BE00698661FEB8858E89D72B5210C(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__cctor_m5B9E5B6455E79866A33B2721D93A5EBB168FBDC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver__cctor_m5B9E5B6455E79866A33B2721D93A5EBB168FBDC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral88DCEDC643DED360EA3088928849B6CF238BF66E, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_49(L_0);
		// private static readonly ProfilerMarker ResumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Resume");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral9F1F61DA8B24E3AF17E9F7E8D8761B5F5870B3FD, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_ResumePerfMarker_55(L_1);
		// private static readonly ProfilerMarker SuspendPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Suspend");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralAADD5DF8738ADE3C82E252C00EBF80F9B8903E94, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_SuspendPerfMarker_56(L_2);
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ClearObservations");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteralF7A067590AFFD7DF1CDC4EEF932AA9DFB8B56A74, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_ClearObservationsPerfMarker_57(L_3);
		// private static readonly ProfilerMarker UpdateObserverPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.UpdateObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_4), _stringLiteral9447F7E37D5005D39E8806CE1662654FE281E9DD, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_UpdateObserverPerfMarker_58(L_4);
		// private static readonly ProfilerMarker RequestMeshPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.RequestMesh");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_5), _stringLiteral1249972FDCC50B5C7B2157B8F41966506163A21C, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_RequestMeshPerfMarker_59(L_5);
		// private static readonly ProfilerMarker RemoveMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.RemoveMeshObject");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteralF93A5C3A4465D9FD0CABB871B86C36222BB587EE, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_RemoveMeshObjectPerfMarker_60(L_6);
		// private static readonly ProfilerMarker ReclaimMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ReclaimMeshObject");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_7), _stringLiteral94175EA7E8B3168F516F287A29CAE06BA16B23F7, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_ReclaimMeshObjectPerfMarker_61(L_7);
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_8), _stringLiteralD10397CA15A57B49D5488B325808B5D2AA18715F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_62(L_8);
		// private static readonly ProfilerMarker UpdateMeshesPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.UpdateMeshes");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_9), _stringLiteral65C11783667C26DA56C322C0E5D2C4061140987F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_UpdateMeshesPerfMarker_66(L_9);
		// private static readonly ProfilerMarker MeshGenerationActionPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.MeshGenerationAction");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_10), _stringLiteral66861C39C40B0A9F1AFA51F9630E78B16F2AE304, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474_il2cpp_TypeInfo_var))->set_MeshGenerationActionPerfMarker_67(L_10);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<EnableIfLoaderBecomesActive>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_m9E4242AEB878FF59C2277F83C9A5FA6477B41BCD (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_m9E4242AEB878FF59C2277F83C9A5FA6477B41BCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_0 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<RequestMesh>b__28_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_mD0A7F01906C7F911E109CE983974F33C1EAF289A (GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method)
{
	{
		// MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
		MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  L_0 = ___meshGenerationResult0;
		GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m3EA987E1DF87742A3AEE0F656E72332A69F82F07(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * V_1 = NULL;
	SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * V_2 = NULL;
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_3 = V_1;
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_4, L_3, (intptr_t)((intptr_t)GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_m9E4242AEB878FF59C2277F83C9A5FA6477B41BCD_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_5 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * L_6 = AwaiterExtensions_GetAwaiter_m27292A47E155CEEFAB3A0197F9BD00A7A4281A18(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * L_7 = V_2;
			NullCheck(L_7);
			bool L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m4B266CB59DA91A3FFA3514B0FAEE2F619EC63D98_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_mB9E1A10365D3305AE8D811BBFFE8221CBD0A42B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_11, (SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3_mB9E1A10365D3305AE8D811BBFFE8221CBD0A42B3_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m50B1134C9B4A58EC645E63DEA52F86548108B331(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_16 = VirtFuncInvoker0< Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, L_15);
			V_3 = L_16;
			bool L_17 = Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_m7C9CFCE6186F3CD55B4D63BB50E6D3D48A78583A_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			GenericXRSDKSpatialMeshObserver_t7093A2579FF710DF4C0DCA923D283BADE1332474 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008a;
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_19, L_20, /*hidden argument*/NULL);
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_mEE94D8F079E51A5846FC9600AD7A3BD28A01FE5B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m2B49C13A5AB9774F30F1B20FFEA3BF765CDA3DE8 (U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m2B49C13A5AB9774F30F1B20FFEA3BF765CDA3DE8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__5_t93645AD89BE8620DBA1DE960CD28AD755E0466B3 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m2B49C13A5AB9774F30F1B20FFEA3BF765CDA3DE8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUsages__cctor_mCA85ED295E6C92F22F1BFDD135645E9E2860436D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomUsages__cctor_mCA85ED295E6C92F22F1BFDD135645E9E2860436D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly InputFeatureUsage<Vector3> PointerPosition = new InputFeatureUsage<Vector3>("PointerPosition");
		InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0((&L_0), _stringLiteral739C8C13BE71CAB3DE588C8E504090675A764E3C, /*hidden argument*/InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_RuntimeMethod_var);
		((CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_il2cpp_TypeInfo_var))->set_PointerPosition_0(L_0);
		// public static readonly InputFeatureUsage<Quaternion> PointerRotation = new InputFeatureUsage<Quaternion>("PointerRotation");
		InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054((&L_1), _stringLiteralA3D0E411DDBE6FDDE9EAA084712803B7ABA68FFC, /*hidden argument*/InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_RuntimeMethod_var);
		((CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t24115A18031853F03E17D21FAF5F1B1AD770759E_il2cpp_TypeInfo_var))->set_PointerRotation_1(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_mAA41922BE330B5EDCBDA2F2482BD782FA5A43AE5 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController__ctor_mAA41922BE330B5EDCBDA2F2482BD782FA5A43AE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected MixedRealityPose CurrentControllerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_il2cpp_TypeInfo_var);
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_0 = MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0_inline(/*hidden argument*/NULL);
		__this->set_CurrentControllerPose_12(L_0);
		// protected MixedRealityPose LastControllerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_1 = MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0_inline(/*hidden argument*/NULL);
		__this->set_LastControllerPose_13(L_1);
		// protected Vector3 CurrentControllerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_CurrentControllerPosition_14(L_2);
		// protected Quaternion CurrentControllerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_CurrentControllerRotation_15(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_4 = ___trackingState0;
		uint8_t L_5 = ___controllerHandedness1;
		RuntimeObject* L_6 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_7 = ___interactions3;
		RuntimeObject* L_8 = ___definition4;
		BaseController__ctor_mEE0D5265A4CA2E967C956FEC8E707EDB5D0D3224(__this, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m1A3AC9A51C63F856AE9134CE42E639D5E90626AF (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateController_m1A3AC9A51C63F856AE9134CE42E639D5E90626AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	int32_t G_B15_1 = 0;
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_17();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2 = BaseController_get_Enabled_m4681A023FA3BF1CA5D459ED23C56FBF2AFE8E6BC_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0xFB, FINALLY_00ed);
		}

IL_001b:
		{
			// if (Interactions == null)
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_3 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_0023:
		{
			// Debug.LogError($"No interaction configuration for {GetType().Name}");
			Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBEC3A1EB621F66A9977AE9420F50B054C58D000C, L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_6, /*hidden argument*/NULL);
			// Enabled = false;
			BaseController_set_Enabled_mFF877D74D7656DEB83B92C7D1613AB455EFD1164_inline(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// UpdateSixDofData(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_7 = ___inputDevice0;
			VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSixDofData(UnityEngine.XR.InputDevice) */, __this, L_7);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_00ae;
		}

IL_004f:
		{
			// switch (Interactions[i].AxisType)
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_8 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			int32_t L_9 = V_2;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			NullCheck(L_11);
			int32_t L_12 = MixedRealityInteractionMapping_get_AxisType_m750180796F1201E1F85C1B84616F4E990EDAA183_inline(L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			int32_t L_13 = V_3;
			switch (L_13)
			{
				case 0:
				{
					goto IL_00aa;
				}
				case 1:
				{
					goto IL_00aa;
				}
				case 2:
				{
					goto IL_0079;
				}
				case 3:
				{
					goto IL_008a;
				}
				case 4:
				{
					goto IL_009b;
				}
			}
		}

IL_0077:
		{
			goto IL_00aa;
		}

IL_0079:
		{
			// UpdateButtonData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_14 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_2;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_18 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_17, L_18);
			// break;
			goto IL_00aa;
		}

IL_008a:
		{
			// UpdateSingleAxisData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_19 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			int32_t L_20 = V_2;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_23 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_22, L_23);
			// break;
			goto IL_00aa;
		}

IL_009b:
		{
			// UpdateDualAxisData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_24 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			int32_t L_25 = V_2;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_28 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(31 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_27, L_28);
		}

IL_00aa:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_29 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		}

IL_00ae:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_30 = V_2;
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_31 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_32 = L_31;
			G_B13_0 = L_32;
			G_B13_1 = L_30;
			if (L_32)
			{
				G_B14_0 = L_32;
				G_B14_1 = L_30;
				goto IL_00c5;
			}
		}

IL_00b8:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_33 = V_5;
			G_B15_0 = L_33;
			G_B15_1 = G_B13_1;
			goto IL_00cc;
		}

IL_00c5:
		{
			NullCheck(G_B14_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_34;
			memset((&L_34), 0, sizeof(L_34));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_34), (((int32_t)((int32_t)(((RuntimeArray*)G_B14_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B15_0 = L_34;
			G_B15_1 = G_B14_1;
		}

IL_00cc:
		{
			V_4 = G_B15_0;
			int32_t L_35 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_36 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B15_1) < ((int32_t)L_35))? 1 : 0)&(int32_t)L_36)))
			{
				goto IL_004f;
			}
		}

IL_00e4:
		{
			// lastInputDevice = inputDevice;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_37 = ___inputDevice0;
			__this->set_lastInputDevice_16(L_37);
			// }
			IL2CPP_LEAVE(0xFB, FINALLY_00ed);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ed;
	}

FINALLY_00ed:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(237)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(237)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFB, IL_00fb)
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSixDofData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSixDofData_m32FC0D695A6448BC372D40C79CF29C43E7831E35 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateSixDofData_m32FC0D695A6448BC372D40C79CF29C43E7831E35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	int32_t G_B24_1 = 0;
	{
		// UpdateSourceData(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_0 = ___inputDevice0;
		GenericXRSDKController_UpdateSourceData_m16626C08BC396EB08F6391A38715DEF9BA29B052(__this, L_0, /*hidden argument*/NULL);
		// UpdateVelocity(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_1 = ___inputDevice0;
		GenericXRSDKController_UpdateVelocity_mF251825885FACBEEDF5308A9108A111A1669E803(__this, L_1, /*hidden argument*/NULL);
		// if (TrackingState == TrackingState.Tracked && LastControllerPose != CurrentControllerPose)
		int32_t L_2 = BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00bb;
		}
	}
	{
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_3 = __this->get_LastControllerPose_13();
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_4 = __this->get_CurrentControllerPose_12();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_il2cpp_TypeInfo_var);
		bool L_5 = MixedRealityPose_op_Inequality_mFBC3E7D5E92AD348F3BC6E41F20ED130E4526457(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00bb;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_6 = BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		bool L_7 = BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, CurrentControllerPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_004b;
		}
	}
	{
		goto IL_00bb;
	}

IL_004b:
	{
		RuntimeObject* L_10 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_11 = __this->get_CurrentControllerPose_12();
		NullCheck(G_B6_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B6_0, L_10, __this, L_11);
		// }
		goto IL_00bb;
	}

IL_005f:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_12 = BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		bool L_13 = BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, CurrentControllerPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		G_B10_0 = L_15;
		if (L_15)
		{
			G_B11_0 = L_15;
			goto IL_007a;
		}
	}
	{
		goto IL_00bb;
	}

IL_007a:
	{
		RuntimeObject* L_16 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = __this->get_CurrentControllerPosition_14();
		NullCheck(G_B11_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B11_0, L_16, __this, L_17);
		// }
		goto IL_00bb;
	}

IL_008e:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_18 = BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline(__this, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_19 = BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, CurrentControllerRotation);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
		RuntimeObject* L_20 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
		RuntimeObject* L_21 = L_20;
		G_B15_0 = L_21;
		if (L_21)
		{
			G_B16_0 = L_21;
			goto IL_00a9;
		}
	}
	{
		goto IL_00bb;
	}

IL_00a9:
	{
		RuntimeObject* L_22 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = __this->get_CurrentControllerRotation_15();
		NullCheck(G_B16_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B16_0, L_22, __this, L_23);
	}

IL_00bb:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_0 = 0;
		goto IL_00e4;
	}

IL_00bf:
	{
		// switch (Interactions[i].AxisType)
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_24 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28 = MixedRealityInteractionMapping_get_AxisType_m750180796F1201E1F85C1B84616F4E990EDAA183_inline(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		int32_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)7))))
		{
			goto IL_00e0;
		}
	}
	{
		// UpdatePoseData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_30 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_34 = ___inputDevice0;
		VirtActionInvoker2< MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_33, L_34);
	}

IL_00e0:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00e4:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_36 = V_0;
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_37 = BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_38 = L_37;
		G_B22_0 = L_38;
		G_B22_1 = L_36;
		if (L_38)
		{
			G_B23_0 = L_38;
			G_B23_1 = L_36;
			goto IL_00fa;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_39 = V_3;
		G_B24_0 = L_39;
		G_B24_1 = G_B22_1;
		goto IL_0101;
	}

IL_00fa:
	{
		NullCheck(G_B23_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_40), (((int32_t)((int32_t)(((RuntimeArray*)G_B23_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B24_0 = L_40;
		G_B24_1 = G_B23_1;
	}

IL_0101:
	{
		V_2 = G_B24_0;
		int32_t L_41 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_42 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B24_1) < ((int32_t)L_41))? 1 : 0)&(int32_t)L_42)))
		{
			goto IL_00bf;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSourceData_m16626C08BC396EB08F6391A38715DEF9BA29B052 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateSourceData_m16626C08BC396EB08F6391A38715DEF9BA29B052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// using (UpdateSourceDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateSourceDataPerfMarker_18();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// var lastState = TrackingState;
			int32_t L_2 = BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline(__this, /*hidden argument*/NULL);
			// LastControllerPose = CurrentControllerPose;
			MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_3 = __this->get_CurrentControllerPose_12();
			__this->set_LastControllerPose_13(L_3);
			// IsPositionAvailable = inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out CurrentControllerPosition);
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_4 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_devicePosition_19();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_CurrentControllerPosition_14();
			bool L_6 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_5, /*hidden argument*/NULL);
			BaseController_set_IsPositionAvailable_m6F62071B690742FBBF470A0B9DB0BDCE97F07E4B_inline(__this, L_6, /*hidden argument*/NULL);
			// IsPositionApproximate = false;
			BaseController_set_IsPositionApproximate_m5BB091F204862801E2CC962FB6776F4CCF43C308_inline(__this, (bool)0, /*hidden argument*/NULL);
			// IsRotationAvailable = inputDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out CurrentControllerRotation);
			InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_7 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_deviceRotation_44();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_8 = __this->get_address_of_CurrentControllerRotation_15();
			bool L_9 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_7, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_8, /*hidden argument*/NULL);
			BaseController_set_IsRotationAvailable_m7EE06C12BF5988E2549269E7263D8139FA44A8F3_inline(__this, L_9, /*hidden argument*/NULL);
			// TrackingState = (IsPositionAvailable || IsRotationAvailable) ? TrackingState.Tracked : TrackingState.NotTracked;
			bool L_10 = BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline(__this, /*hidden argument*/NULL);
			G_B2_0 = __this;
			G_B2_1 = L_2;
			if (L_10)
			{
				G_B4_0 = __this;
				G_B4_1 = L_2;
				goto IL_006b;
			}
		}

IL_0060:
		{
			bool L_11 = BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline(__this, /*hidden argument*/NULL);
			G_B3_0 = G_B2_0;
			G_B3_1 = G_B2_1;
			if (L_11)
			{
				G_B4_0 = G_B2_0;
				G_B4_1 = G_B2_1;
				goto IL_006b;
			}
		}

IL_0068:
		{
			G_B5_0 = 1;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_006c;
		}

IL_006b:
		{
			G_B5_0 = 2;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
		}

IL_006c:
		{
			NullCheck(G_B5_1);
			BaseController_set_TrackingState_m6CB6CF295491DF729307BFEF8CA9AFA7B6BED260_inline(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			// CurrentControllerPosition = MixedRealityPlayspace.TransformPoint(CurrentControllerPosition);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_CurrentControllerPosition_14();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t66BD6319A1048DE8A50613B829F4F8D7142C9404_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = MixedRealityPlayspace_TransformPoint_mB94D95B95E62B2A84C2EAE56AE58F77C46F29817(L_12, /*hidden argument*/NULL);
			__this->set_CurrentControllerPosition_14(L_13);
			// CurrentControllerRotation = MixedRealityPlayspace.Rotation * CurrentControllerRotation;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = MixedRealityPlayspace_get_Rotation_m194C97D990A9824AF00859675067A179CDC641EC(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = __this->get_CurrentControllerRotation_15();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_14, L_15, /*hidden argument*/NULL);
			__this->set_CurrentControllerRotation_15(L_16);
			// CurrentControllerPose.Position = CurrentControllerPosition;
			MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * L_17 = __this->get_address_of_CurrentControllerPose_12();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = __this->get_CurrentControllerPosition_14();
			MixedRealityPose_set_Position_mF0EA1790DE1DEFA29E35CF3516FEB9B0A69E8A90_inline((MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D *)L_17, L_18, /*hidden argument*/NULL);
			// CurrentControllerPose.Rotation = CurrentControllerRotation;
			MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * L_19 = __this->get_address_of_CurrentControllerPose_12();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = __this->get_CurrentControllerRotation_15();
			MixedRealityPose_set_Rotation_mE9AE7872BF96696640024ECA83C6731401D2D4E4_inline((MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D *)L_19, L_20, /*hidden argument*/NULL);
			// if (lastState != TrackingState)
			int32_t L_21 = BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)G_B5_2) == ((int32_t)L_21)))
			{
				goto IL_00df;
			}
		}

IL_00c2:
		{
			// CoreServices.InputSystem?.RaiseSourceTrackingStateChanged(InputSource, this, TrackingState);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_22 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_23 = L_22;
			G_B7_0 = L_23;
			if (L_23)
			{
				G_B8_0 = L_23;
				goto IL_00cd;
			}
		}

IL_00ca:
		{
			IL2CPP_LEAVE(0xEF, FINALLY_00e1);
		}

IL_00cd:
		{
			RuntimeObject* L_24 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			int32_t L_25 = BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline(__this, /*hidden argument*/NULL);
			NullCheck(G_B8_0);
			InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceTrackingStateChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.TrackingState) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B8_0, L_24, __this, L_25);
		}

IL_00df:
		{
			// }
			IL2CPP_LEAVE(0xEF, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(225)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEF, IL_00ef)
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocity(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateVelocity_mF251825885FACBEEDF5308A9108A111A1669E803 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateVelocity_mF251825885FACBEEDF5308A9108A111A1669E803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdateVelocityPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateVelocityPerfMarker_19();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out newVelocity))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_2 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_deviceVelocity_24();
			bool L_3 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			// Velocity = newVelocity;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_2;
			BaseController_set_Velocity_mB91F1402293A2EAD1B435FC6F3C2E1E29DA2EEAE_inline(__this, L_4, /*hidden argument*/NULL);
		}

IL_0025:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.deviceAngularVelocity, out newAngularVelocity))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_5 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_deviceAngularVelocity_25();
			bool L_6 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			// AngularVelocity = newAngularVelocity;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_3;
			BaseController_set_AngularVelocity_m6257EF26E4EB6333F5DB1660322BA4D2A2A1FEBF_inline(__this, L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			// }
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m1B042FD6C083606C0B6766A31445E0B3C171B6EF (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateButtonData_m1B042FD6C083606C0B6766A31445E0B3C171B6EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B32_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B35_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_20();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (interactionMapping.InputType == DeviceInputType.TriggerTouch
			//     && inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_0041;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_4 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_trigger_15();
			bool L_5 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_4, (float*)(&V_2), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0041;
			}
		}

IL_0028:
		{
			// interactionMapping.BoolData = !Mathf.Approximately(triggerData, 0.0f);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_6 = ___interactionMapping0;
			float L_7 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			bool L_8 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_7, (0.0f), /*hidden argument*/NULL);
			NullCheck(L_6);
			MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2(L_6, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			// }
			goto IL_0141;
		}

IL_0041:
		{
			// else if (interactionMapping.InputType == DeviceInputType.GripTouch
			//     && inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_9 = ___interactionMapping0;
			NullCheck(L_9);
			int32_t L_10 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)58)))))
			{
				goto IL_0074;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_11 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_grip_16();
			bool L_12 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_11, (float*)(&V_3), /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0074;
			}
		}

IL_005b:
		{
			// interactionMapping.BoolData = !Mathf.Approximately(gripData, 0.0f);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_13 = ___interactionMapping0;
			float L_14 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			bool L_15 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_14, (0.0f), /*hidden argument*/NULL);
			NullCheck(L_13);
			MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2(L_13, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			// }
			goto IL_0141;
		}

IL_0074:
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			int32_t L_17 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_16, /*hidden argument*/NULL);
			V_6 = L_17;
			int32_t L_18 = V_6;
			if ((((int32_t)L_18) > ((int32_t)((int32_t)27))))
			{
				goto IL_00c3;
			}
		}

IL_0082:
		{
			int32_t L_19 = V_6;
			if ((((int32_t)L_19) == ((int32_t)7)))
			{
				goto IL_00eb;
			}
		}

IL_0087:
		{
			int32_t L_20 = V_6;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)12)))) > ((uint32_t)1))))
			{
				goto IL_00d9;
			}
		}

IL_008f:
		{
			int32_t L_21 = V_6;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)18))))
			{
				case 0:
				{
					goto IL_0121;
				}
				case 1:
				{
					goto IL_0118;
				}
				case 2:
				{
					goto IL_012a;
				}
				case 3:
				{
					goto IL_012a;
				}
				case 4:
				{
					goto IL_00fd;
				}
				case 5:
				{
					goto IL_012a;
				}
				case 6:
				{
					goto IL_0106;
				}
				case 7:
				{
					goto IL_00d9;
				}
				case 8:
				{
					goto IL_012a;
				}
				case 9:
				{
					goto IL_010f;
				}
			}
		}

IL_00c1:
		{
			goto IL_012a;
		}

IL_00c3:
		{
			int32_t L_22 = V_6;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)51))))
			{
				goto IL_00eb;
			}
		}

IL_00c9:
		{
			int32_t L_23 = V_6;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)54))))
			{
				goto IL_00f4;
			}
		}

IL_00cf:
		{
			int32_t L_24 = V_6;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)59)))) > ((uint32_t)1))))
			{
				goto IL_00e2;
			}
		}

IL_00d7:
		{
			goto IL_012a;
		}

IL_00d9:
		{
			// buttonUsage = CommonUsages.triggerButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_25 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_triggerButton_6();
			V_4 = L_25;
			// break;
			goto IL_012c;
		}

IL_00e2:
		{
			// buttonUsage = CommonUsages.gripButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_26 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_gripButton_5();
			V_4 = L_26;
			// break;
			goto IL_012c;
		}

IL_00eb:
		{
			// buttonUsage = CommonUsages.primaryButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_27 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primaryButton_1();
			V_4 = L_27;
			// break;
			goto IL_012c;
		}

IL_00f4:
		{
			// buttonUsage = CommonUsages.secondaryButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_28 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondaryButton_3();
			V_4 = L_28;
			// break;
			goto IL_012c;
		}

IL_00fd:
		{
			// buttonUsage = CommonUsages.secondary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_29 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxisTouch_11();
			V_4 = L_29;
			// break;
			goto IL_012c;
		}

IL_0106:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_30 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_4 = L_30;
			// break;
			goto IL_012c;
		}

IL_010f:
		{
			// buttonUsage = CommonUsages.menuButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_31 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_menuButton_7();
			V_4 = L_31;
			// break;
			goto IL_012c;
		}

IL_0118:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_32 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_4 = L_32;
			// break;
			goto IL_012c;
		}

IL_0121:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_33 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_4 = L_33;
			// break;
			goto IL_012c;
		}

IL_012a:
		{
			// return;
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_012c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_34 = V_4;
			bool L_35 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_34, (bool*)(&V_5), /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_0141;
			}
		}

IL_0139:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_36 = ___interactionMapping0;
			bool L_37 = V_5;
			NullCheck(L_36);
			MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2(L_36, L_37, /*hidden argument*/NULL);
		}

IL_0141:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_38 = ___interactionMapping0;
			NullCheck(L_38);
			bool L_39 = MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920(L_38, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_0197;
			}
		}

IL_0149:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_40 = ___interactionMapping0;
			NullCheck(L_40);
			bool L_41 = MixedRealityInteractionMapping_get_BoolData_m9684711A29DD53B873F9FFAC6F0D0D4FC199C97F_inline(L_40, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0175;
			}
		}

IL_0151:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_42 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_43 = L_42;
			G_B31_0 = L_43;
			if (L_43)
			{
				G_B32_0 = L_43;
				goto IL_015c;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_015c:
		{
			RuntimeObject* L_44 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_45 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_46 = ___interactionMapping0;
			NullCheck(L_46);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_47 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_46, /*hidden argument*/NULL);
			NullCheck(G_B32_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B32_0, L_44, L_45, L_47);
			// }
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_0175:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_48 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_49 = L_48;
			G_B34_0 = L_49;
			if (L_49)
			{
				G_B35_0 = L_49;
				goto IL_0180;
			}
		}

IL_017d:
		{
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_0180:
		{
			RuntimeObject* L_50 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_51 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_52 = ___interactionMapping0;
			NullCheck(L_52);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_53 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_52, /*hidden argument*/NULL);
			NullCheck(G_B35_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B35_0, L_50, L_51, L_53);
		}

IL_0197:
		{
			// }
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0199;
	}

FINALLY_0199:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(409)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(409)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A7, IL_01a7)
	}

IL_01a7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_m86C43FA3884994FF074BBF008B4FFCA6E9DBE2C3 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateSingleAxisData_m86C43FA3884994FF074BBF008B4FFCA6E9DBE2C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (UpdateSingleAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateSingleAxisDataPerfMarker_21();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
			{
				goto IL_0021;
			}
		}

IL_001a:
		{
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)60))))
			{
				goto IL_003a;
			}
		}

IL_001f:
		{
			goto IL_0052;
		}

IL_0021:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerPressed))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_6 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_triggerButton_6();
			bool L_7 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_6, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0052;
			}
		}

IL_0031:
		{
			// interactionMapping.BoolData = triggerPressed;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_8 = ___interactionMapping0;
			bool L_9 = V_3;
			NullCheck(L_8);
			MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2(L_8, L_9, /*hidden argument*/NULL);
			// break;
			goto IL_0052;
		}

IL_003a:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.gripButton, out bool gripPressed))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_10 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_gripButton_5();
			bool L_11 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_10, (bool*)(&V_4), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0052;
			}
		}

IL_004a:
		{
			// interactionMapping.BoolData = gripPressed;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_12 = ___interactionMapping0;
			bool L_13 = V_4;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_BoolData_m8A375F334350EF9F97106BF82309594C88F631E2(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0052:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15 = MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00a8;
			}
		}

IL_005a:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17 = MixedRealityInteractionMapping_get_BoolData_m9684711A29DD53B873F9FFAC6F0D0D4FC199C97F_inline(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0086;
			}
		}

IL_0062:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_18 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_19 = L_18;
			G_B11_0 = L_19;
			if (L_19)
			{
				G_B12_0 = L_19;
				goto IL_006d;
			}
		}

IL_006a:
		{
			goto IL_00a8;
		}

IL_006d:
		{
			RuntimeObject* L_20 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_21 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_23 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B12_0, L_20, L_21, L_23);
			// }
			goto IL_00a8;
		}

IL_0086:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_24 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_25 = L_24;
			G_B14_0 = L_25;
			if (L_25)
			{
				G_B15_0 = L_25;
				goto IL_0091;
			}
		}

IL_008e:
		{
			goto IL_00a8;
		}

IL_0091:
		{
			RuntimeObject* L_26 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_27 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_28 = ___interactionMapping0;
			NullCheck(L_28);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_29 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_28, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B15_0, L_26, L_27, L_29);
		}

IL_00a8:
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			int32_t L_31 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_30, /*hidden argument*/NULL);
			V_2 = L_31;
			int32_t L_32 = V_2;
			if ((((int32_t)L_32) == ((int32_t)((int32_t)10))))
			{
				goto IL_00bb;
			}
		}

IL_00b4:
		{
			int32_t L_33 = V_2;
			if ((((int32_t)L_33) == ((int32_t)((int32_t)57))))
			{
				goto IL_00d5;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0x12D, FINALLY_011f);
		}

IL_00bb:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_34 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_trigger_15();
			bool L_35 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_34, (float*)(&V_5), /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_00ed;
			}
		}

IL_00cb:
		{
			// interactionMapping.FloatData = triggerData;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_36 = ___interactionMapping0;
			float L_37 = V_5;
			NullCheck(L_36);
			MixedRealityInteractionMapping_set_FloatData_m274E342B85D8F2F4F3E291E3716C01DFB76F6F8C(L_36, L_37, /*hidden argument*/NULL);
			// break;
			goto IL_00ed;
		}

IL_00d5:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_38 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_grip_16();
			bool L_39 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_38, (float*)(&V_6), /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_00ed;
			}
		}

IL_00e5:
		{
			// interactionMapping.FloatData = gripData;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_40 = ___interactionMapping0;
			float L_41 = V_6;
			NullCheck(L_40);
			MixedRealityInteractionMapping_set_FloatData_m274E342B85D8F2F4F3E291E3716C01DFB76F6F8C(L_40, L_41, /*hidden argument*/NULL);
		}

IL_00ed:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_42 = ___interactionMapping0;
			NullCheck(L_42);
			bool L_43 = MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920(L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_011d;
			}
		}

IL_00f5:
		{
			// CoreServices.InputSystem?.RaiseFloatInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.FloatData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_44 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_45 = L_44;
			G_B25_0 = L_45;
			if (L_45)
			{
				G_B26_0 = L_45;
				goto IL_0100;
			}
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x12D, FINALLY_011f);
		}

IL_0100:
		{
			RuntimeObject* L_46 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_47 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_48 = ___interactionMapping0;
			NullCheck(L_48);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_49 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_48, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_50 = ___interactionMapping0;
			NullCheck(L_50);
			float L_51 = MixedRealityInteractionMapping_get_FloatData_m0F508CBA0F9F0E86A6DC3D0E3CCDBA9AFF6429EE_inline(L_50, /*hidden argument*/NULL);
			NullCheck(G_B26_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 , float >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseFloatInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Single) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B26_0, L_46, L_47, L_49, L_51);
		}

IL_011d:
		{
			// }
			IL2CPP_LEAVE(0x12D, FINALLY_011f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011f;
	}

FINALLY_011f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(287)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(287)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12D, IL_012d)
	}

IL_012d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_mD5E54708E9C8006EC0DED0E643CD900FA509E03F (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateDualAxisData_mD5E54708E9C8006EC0DED0E643CD900FA509E03F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_22();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}

IL_0024:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_6 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_6;
			// break;
			goto IL_0032;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_7 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_7;
		}

IL_0032:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_8 = V_2;
			bool L_9 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_8, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0045;
			}
		}

IL_003e:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_10 = ___interactionMapping0;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_3;
			NullCheck(L_10);
			MixedRealityInteractionMapping_set_Vector2Data_m48B25188C3B24DAF9D4DF38B48F43D32D36B719F(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0045:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_12 = ___interactionMapping0;
			NullCheck(L_12);
			bool L_13 = MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0075;
			}
		}

IL_004d:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_14 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_15 = L_14;
			G_B10_0 = L_15;
			if (L_15)
			{
				G_B11_0 = L_15;
				goto IL_0058;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}

IL_0058:
		{
			RuntimeObject* L_16 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_17 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_19 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_18, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = MixedRealityInteractionMapping_get_Vector2Data_mE0094FBA28A6C9DC369E19D0187525689321E412_inline(L_20, /*hidden argument*/NULL);
			NullCheck(G_B11_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(42 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B11_0, L_16, L_17, L_19, L_21);
		}

IL_0075:
		{
			// }
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m51E076958E06E1334B0B3853FB25DAA032DABF4F (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdatePoseData_m51E076958E06E1334B0B3853FB25DAA032DABF4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_23();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_0020;
			}
		}

IL_0019:
		{
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_0020:
		{
			// interactionMapping.PoseData = CurrentControllerPose;
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_6 = ___interactionMapping0;
			MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_7 = __this->get_CurrentControllerPose_12();
			NullCheck(L_6);
			MixedRealityInteractionMapping_set_PoseData_m5C112889FC27E01E526D007823E94DCFD667AED6(L_6, L_7, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_8 = ___interactionMapping0;
			NullCheck(L_8);
			bool L_9 = MixedRealityInteractionMapping_get_Changed_m630829D10B56A6137B08171A4B74762FF0A85920(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005c;
			}
		}

IL_0034:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t67C0EF3EE84CED49CD78B11FFD5A07F1E1EF0728_il2cpp_TypeInfo_var);
			RuntimeObject* L_10 = CoreServices_get_InputSystem_m273A71260DFA1B8BFFC2BF26E29249389CAFC5F8(/*hidden argument*/NULL);
			RuntimeObject* L_11 = L_10;
			G_B6_0 = L_11;
			if (L_11)
			{
				G_B7_0 = L_11;
				goto IL_003f;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_003f:
		{
			RuntimeObject* L_12 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(__this, /*hidden argument*/NULL);
			uint8_t L_13 = BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_15 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline(L_14, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_17 = MixedRealityInteractionMapping_get_PoseData_mF508694C03C1B865F3922354B735D578B92316E6_inline(L_16, /*hidden argument*/NULL);
			NullCheck(G_B7_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634 , MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B7_0, L_12, L_13, L_15, L_17);
		}

IL_005c:
		{
			// }
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::StartHapticImpulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKController_StartHapticImpulse_m45DC41FD6EB4959D88B4191C68381F6F5286F6D1 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, float ___intensity0, float ___durationInSeconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_StartHapticImpulse_m45DC41FD6EB4959D88B4191C68381F6F5286F6D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lastInputDevice.TryGetHapticCapabilities(out HapticCapabilities hapticCapabilities) && hapticCapabilities.supportsImpulse)
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * L_0 = __this->get_address_of_lastInputDevice_16();
		bool L_1 = InputDevice_TryGetHapticCapabilities_mFE28A9F4256407EE9FC3CF5263A92A69288D23BC((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)L_0, (HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		bool L_2 = HapticCapabilities_get_supportsImpulse_m122CFE87E6360815E41E8C2AB53DCD608599B24C((HapticCapabilities_tE0DC4CEB52FD8E8EF4B1B358492EC370A6B0C178 *)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Mathf.Approximately(durationInSeconds, float.MaxValue))
		float L_3 = ___durationInSeconds1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_4 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_3, ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// lastInputDevice.SendHapticImpulse(0, intensity);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * L_5 = __this->get_address_of_lastInputDevice_16();
		float L_6 = ___intensity0;
		InputDevice_SendHapticImpulse_mEF8C0265F9BC94E18E661934F1AEEC9A7CEFC6C3((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)L_5, 0, L_6, (1.0f), /*hidden argument*/NULL);
		// }
		goto IL_0049;
	}

IL_003a:
	{
		// lastInputDevice.SendHapticImpulse(0, intensity, durationInSeconds);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * L_7 = __this->get_address_of_lastInputDevice_16();
		float L_8 = ___intensity0;
		float L_9 = ___durationInSeconds1;
		InputDevice_SendHapticImpulse_mEF8C0265F9BC94E18E661934F1AEEC9A7CEFC6C3((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)L_7, 0, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// return true;
		return (bool)1;
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::StopHapticFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_StopHapticFeedback_mC35B94BC302F3E60D89DF1F814E8D9CC71C95FE2 (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * __this, const RuntimeMethod* method)
{
	{
		// public void StopHapticFeedback() => lastInputDevice.StopHaptics();
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * L_0 = __this->get_address_of_lastInputDevice_16();
		InputDevice_StopHaptics_m28EFDD62D005090EA42D770BFC271118567EFB3E((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__cctor_m4DC0D4D7545AF74268FAE071ACA10A9351D2DBD2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController__cctor_m4DC0D4D7545AF74268FAE071ACA10A9351D2DBD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral7BD1C1B8581ACA99ABBB78789156656E3D35BE58, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_17(L_0);
		// private static readonly ProfilerMarker UpdateSourceDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealitySource.UpdateSourceData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral0EE296311A457FFE1C3944791BF9732D5E79F1F7, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateSourceDataPerfMarker_18(L_1);
		// private static readonly ProfilerMarker UpdateVelocityPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateVelocity");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralAB66F54EDD78D450DE3C82D452E36F5036986609, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateVelocityPerfMarker_19(L_2);
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateButtonData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteralFF2A274D9ABD27E6132C3242CDC12219147C12DD, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_20(L_3);
		// private static readonly ProfilerMarker UpdateSingleAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateSingleAxisData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_4), _stringLiteralBEA79ABE37557B7DA2275AB771CCFEE23336BCB9, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateSingleAxisDataPerfMarker_21(L_4);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateDualAxisData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_5), _stringLiteral317AACC39186DC1C44AC5076FDEC1BDCA1F511E4, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_22(L_5);
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdatePoseData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteralA39B43A8A6F600EFACD0EC6E008FE53D5F23887F, /*hidden argument*/NULL);
		((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_23(L_6);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m8877D020F89A096C3A176D6494A34AB6F50C869B (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager__ctor_m8877D020F89A096C3A176D6494A34AB6F50C869B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> inputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_0 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_0, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_inputDevices_22(L_0);
		// private readonly List<InputDevice> inputDevicesSubset = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_1 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_1, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_inputDevicesSubset_23(L_1);
		// private readonly List<InputDevice> lastInputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_2 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_2, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_lastInputDevices_24(L_2);
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		// {
		//     InputDeviceCharacteristics.Controller,
		//     InputDeviceCharacteristics.HandTracking
		// };
		List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_3 = (List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 *)il2cpp_codegen_object_new(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637_il2cpp_TypeInfo_var);
		List_1__ctor_m944FD215480A1F8C0CBDBEBF19BB35A56662CC3A(L_3, /*hidden argument*/List_1__ctor_m944FD215480A1F8C0CBDBEBF19BB35A56662CC3A_RuntimeMethod_var);
		List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA(L_4, ((int32_t)64), /*hidden argument*/List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA_RuntimeMethod_var);
		List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA(L_5, 8, /*hidden argument*/List_1_Add_m5101510EF9BA1D6E2ED99B88C9FEC1E1AC547BCA_RuntimeMethod_var);
		__this->set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(L_5);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_6 = ___inputSystem0;
		String_t* L_7 = ___name1;
		uint32_t L_8 = ___priority2;
		BaseMixedRealityProfile_tC67EBA6ED52892A8CA3947F4119ED1C433C8BBA3 * L_9 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_tD4B2E8578560D91631214F4CA838868032D932C7_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m93C708537A70AF36690D7AFA9D596DE73C4F061E(__this, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_CheckCapability_m77439E8BDB2DE601BFA87E9611CAAD18E00125BC (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// return (capability == MixedRealityCapability.MotionController);
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * XRSDKDeviceManager_get_DesiredInputCharacteristics_m5CF0749F5D5DCD633249BE874900E3E8997877E9 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, const RuntimeMethod* method)
{
	{
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_0 = __this->get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::set_DesiredInputCharacteristics(System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_set_DesiredInputCharacteristics_mF217140BB09056B65B5177A1A1C457541BDC303A (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * ___value0, const RuntimeMethod* method)
{
	{
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_0 = ___value0;
		__this->set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_IsLoaderActive_m3008DE72D2EBEAFD4FB2B1B86177A5947DAABD55 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, String_t* ___loaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_IsLoaderActive_m3008DE72D2EBEAFD4FB2B1B86177A5947DAABD55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// protected virtual bool IsLoaderActive(string loaderName) => LoaderHelpers.IsLoaderActive(loaderName) ?? false;
		String_t* L_0 = ___loaderName0;
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_1 = LoaderHelpers_IsLoaderActive_m9DE8F2A0B9F18D4F0044CE7F7BA452DDCF862390(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		bool L_3 = Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_mF0E337FAF6DC902A5E06EEC06A129A601EC0B38F (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_Update_mF0E337FAF6DC902A5E06EEC06A129A601EC0B38F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_4;
	memset((&V_4), 0, sizeof(V_4));
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * V_6 = NULL;
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_26();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!IsEnabled)
			bool L_2 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			// return;
			IL2CPP_LEAVE(0x19A, FINALLY_018c);
		}

IL_001b:
		{
			// base.Update();
			BaseService_Update_m75CAEE899CA83B23B8092433CC6C799B7012D4D3(__this, /*hidden argument*/NULL);
			// if (XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.running)
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_3 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0034;
			}
		}

IL_0028:
		{
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_4 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
			NullCheck(L_4);
			bool L_5 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0039;
			}
		}

IL_0034:
		{
			// return;
			IL2CPP_LEAVE(0x19A, FINALLY_018c);
		}

IL_0039:
		{
			// inputDevices.Clear();
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_6 = __this->get_inputDevices_22();
			NullCheck(L_6);
			List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC(L_6, /*hidden argument*/List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_RuntimeMethod_var);
			// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
			List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * L_7 = VirtFuncInvoker0< List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * >::Invoke(44 /* System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics() */, __this);
			NullCheck(L_7);
			Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24  L_8 = List_1_GetEnumerator_m41628015D3C905BFD78ABD3187425CC2DA17E6D0(L_7, /*hidden argument*/List_1_GetEnumerator_m41628015D3C905BFD78ABD3187425CC2DA17E6D0_RuntimeMethod_var);
			V_2 = L_8;
		}

IL_0050:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00b0;
			}

IL_0052:
			{
				// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
				uint32_t L_9 = Enumerator_get_Current_mED8988498ABE655F1AB6FF6012E8535293AB91A0_inline((Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mED8988498ABE655F1AB6FF6012E8535293AB91A0_RuntimeMethod_var);
				// InputDevices.GetDevicesWithCharacteristics(inputDeviceCharacteristics, inputDevicesSubset);
				List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_10 = __this->get_inputDevicesSubset_23();
				InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(L_9, L_10, /*hidden argument*/NULL);
				// foreach (InputDevice device in inputDevicesSubset)
				List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_11 = __this->get_inputDevicesSubset_23();
				NullCheck(L_11);
				Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  L_12 = List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733(L_11, /*hidden argument*/List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var);
				V_3 = L_12;
			}

IL_0070:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0097;
				}

IL_0072:
				{
					// foreach (InputDevice device in inputDevicesSubset)
					InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_13 = Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var);
					V_4 = L_13;
					// if (!inputDevices.Contains(device))
					List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_14 = __this->get_inputDevices_22();
					InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_15 = V_4;
					NullCheck(L_14);
					bool L_16 = List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D(L_14, L_15, /*hidden argument*/List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_RuntimeMethod_var);
					if (L_16)
					{
						goto IL_0097;
					}
				}

IL_008a:
				{
					// inputDevices.Add(device);
					List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_17 = __this->get_inputDevices_22();
					InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_18 = V_4;
					NullCheck(L_17);
					List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50(L_17, L_18, /*hidden argument*/List_1_Add_m0741A9A43BF6DB939FC788CB5D31604188DD1F50_RuntimeMethod_var);
				}

IL_0097:
				{
					// foreach (InputDevice device in inputDevicesSubset)
					bool L_19 = Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var);
					if (L_19)
					{
						goto IL_0072;
					}
				}

IL_00a0:
				{
					IL2CPP_LEAVE(0xB0, FINALLY_00a2);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00a2;
			}

FINALLY_00a2:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var);
				IL2CPP_END_FINALLY(162)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(162)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xB0, IL_00b0)
			}

IL_00b0:
			{
				// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
				bool L_20 = Enumerator_MoveNext_m9B408322434F16B90842108106D0D370D876C069((Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m9B408322434F16B90842108106D0D370D876C069_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0052;
				}
			}

IL_00b9:
			{
				IL2CPP_LEAVE(0xC9, FINALLY_00bb);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bb;
		}

FINALLY_00bb:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mCB09A2FAADDBC6FAD64FDD8EDA372D003C69BD0F((Enumerator_t92AD576B542EEB9029E8BC2FBBEC2C10506EBD24 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mCB09A2FAADDBC6FAD64FDD8EDA372D003C69BD0F_RuntimeMethod_var);
			IL2CPP_END_FINALLY(187)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(187)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xC9, IL_00c9)
		}

IL_00c9:
		{
			// foreach (InputDevice device in inputDevices)
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_21 = __this->get_inputDevices_22();
			NullCheck(L_21);
			Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  L_22 = List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733(L_21, /*hidden argument*/List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var);
			V_3 = L_22;
		}

IL_00d5:
		try
		{ // begin try (depth: 2)
			{
				goto IL_011d;
			}

IL_00d7:
			{
				// foreach (InputDevice device in inputDevices)
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_23 = Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var);
				V_5 = L_23;
				// if (device.isValid)
				bool L_24 = InputDevice_get_isValid_mE3289A300EC9C35B2570C561ED671D3B0FB49030((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_5), /*hidden argument*/NULL);
				if (!L_24)
				{
					goto IL_011d;
				}
			}

IL_00e9:
			{
				// GenericXRSDKController controller = GetOrAddController(device);
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_25 = V_5;
				GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_26 = VirtFuncInvoker1< GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(48 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_25);
				V_6 = L_26;
				// if (controller != null && lastInputDevices.Contains(device))
				GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_27 = V_6;
				if (!L_27)
				{
					goto IL_011d;
				}
			}

IL_00f7:
			{
				List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_28 = __this->get_lastInputDevices_24();
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_29 = V_5;
				NullCheck(L_28);
				bool L_30 = List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D(L_28, L_29, /*hidden argument*/List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_RuntimeMethod_var);
				if (!L_30)
				{
					goto IL_011d;
				}
			}

IL_0106:
			{
				// lastInputDevices.Remove(device);
				List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_31 = __this->get_lastInputDevices_24();
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_32 = V_5;
				NullCheck(L_31);
				List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2(L_31, L_32, /*hidden argument*/List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_RuntimeMethod_var);
				// controller.UpdateController(device);
				GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_33 = V_6;
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_34 = V_5;
				NullCheck(L_33);
				VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice) */, L_33, L_34);
			}

IL_011d:
			{
				// foreach (InputDevice device in inputDevices)
				bool L_35 = Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_00d7;
				}
			}

IL_0126:
			{
				IL2CPP_LEAVE(0x136, FINALLY_0128);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0128;
		}

FINALLY_0128:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var);
			IL2CPP_END_FINALLY(296)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(296)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x136, IL_0136)
		}

IL_0136:
		{
			// foreach (InputDevice device in lastInputDevices)
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_36 = __this->get_lastInputDevices_24();
			NullCheck(L_36);
			Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  L_37 = List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733(L_36, /*hidden argument*/List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var);
			V_3 = L_37;
		}

IL_0142:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0155;
			}

IL_0144:
			{
				// foreach (InputDevice device in lastInputDevices)
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_38 = Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var);
				V_7 = L_38;
				// RemoveController(device);
				InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_39 = V_7;
				VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(49 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_39);
			}

IL_0155:
			{
				// foreach (InputDevice device in lastInputDevices)
				bool L_40 = Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0144;
				}
			}

IL_015e:
			{
				IL2CPP_LEAVE(0x16E, FINALLY_0160);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0160;
		}

FINALLY_0160:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var);
			IL2CPP_END_FINALLY(352)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(352)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x16E, IL_016e)
		}

IL_016e:
		{
			// lastInputDevices.Clear();
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_41 = __this->get_lastInputDevices_24();
			NullCheck(L_41);
			List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC(L_41, /*hidden argument*/List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_RuntimeMethod_var);
			// lastInputDevices.AddRange(inputDevices);
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_42 = __this->get_lastInputDevices_24();
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_43 = __this->get_inputDevices_22();
			NullCheck(L_42);
			List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC(L_42, L_43, /*hidden argument*/List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x19A, FINALLY_018c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018c;
	}

FINALLY_018c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(396)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(396)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19A, IL_019a)
	}

IL_019a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Disable_m6AE58DDB8B37B9B1EE2C17237CAE15C8C53CC377 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_Disable_m6AE58DDB8B37B9B1EE2C17237CAE15C8C53CC377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var controllersCopy = ActiveControllers.ToReadOnlyCollection();
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
		Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_0 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
		ReadOnlyCollection_1_t59BD7C3C293321708E20B88835FDB93AF517D20C * L_1 = CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924_m7CD6D27B94E4828B18DA1A3A90EFCCB283834FDC(L_0, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924_m7CD6D27B94E4828B18DA1A3A90EFCCB283834FDC_RuntimeMethod_var);
		// foreach (var controller in controllersCopy)
		NullCheck(L_1);
		RuntimeObject* L_2 = ReadOnlyCollection_1_GetEnumerator_mFE9904BA81EE41ADC600C6D16E724D47585D7BD5(L_1, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mFE9904BA81EE41ADC600C6D16E724D47585D7BD5_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0012:
		{
			// foreach (var controller in controllersCopy)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924  L_4 = InterfaceFuncInvoker0< KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>::get_Current() */, IEnumerator_1_t1D061211C57D79CD58592121033F3AD1319F5157_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// RemoveController(controller.Key);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_5 = KeyValuePair_2_get_Key_mBBBD1EAF4322076A0F6F7E4BEDC7928CF9692F46_inline((KeyValuePair_2_t858852538F51B3319BEE01DC07D479E9AC1BD924 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mBBBD1EAF4322076A0F6F7E4BEDC7928CF9692F46_RuntimeMethod_var);
			VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(49 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_5);
		}

IL_0026:
		{
			// foreach (var controller in controllersCopy)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// base.Disable();
		BaseService_Disable_mD188966A9F33CA52E0BF2E497D87E7644714899F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * XRSDKDeviceManager_GetOrAddController_mD7720569CF0EE528849F060BBA1A2F0D6BDD06E5 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetOrAddController_mD7720569CF0EE528849F060BBA1A2F0D6BDD06E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	int32_t V_5 = 0;
	IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * V_8 = NULL;
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * V_9 = NULL;
	int32_t V_10 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	RuntimeObject* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	int32_t G_B23_1 = 0;
	IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (GetOrAddControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_GetOrAddControllerPerfMarker_27();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (ActiveControllers.ContainsKey(inputDevice))
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
			Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_2 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_3 = ___inputDevice0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_ContainsKey_m1E3017A242D4A8182A9A206C32344EA209E7077A(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m1E3017A242D4A8182A9A206C32344EA209E7077A_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_001b:
		{
			// var controller = ActiveControllers[inputDevice];
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
			Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_5 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_6 = ___inputDevice0;
			NullCheck(L_5);
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_7 = Dictionary_2_get_Item_m897EF85B971417962DB845E3A17074F578E2376C(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m897EF85B971417962DB845E3A17074F578E2376C_RuntimeMethod_var);
			// return controller;
			V_9 = L_7;
			IL2CPP_LEAVE(0x1C2, FINALLY_01b4);
		}

IL_002d:
		{
			// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left))
			uint32_t L_8 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
			bool L_9 = FlagsExtensions_IsMaskSet_mABC40706BC261F3AFC4FB0F3FFF2F38D167AEAEC(L_8, ((int32_t)256), /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_0040:
		{
			// controllingHand = Handedness.Left;
			V_2 = 1;
			// }
			goto IL_005d;
		}

IL_0044:
		{
			// else if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))
			uint32_t L_10 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
			bool L_11 = FlagsExtensions_IsMaskSet_mABC40706BC261F3AFC4FB0F3FFF2F38D167AEAEC(L_10, ((int32_t)512), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005b;
			}
		}

IL_0057:
		{
			// controllingHand = Handedness.Right;
			V_2 = 2;
			// }
			goto IL_005d;
		}

IL_005b:
		{
			// controllingHand = Handedness.None;
			V_2 = 0;
		}

IL_005d:
		{
			// SupportedControllerType currentControllerType = GetCurrentControllerType(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_12 = ___inputDevice0;
			int32_t L_13 = VirtFuncInvoker1< int32_t, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(52 /* Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice) */, __this, L_12);
			V_3 = L_13;
			// Type controllerType = GetControllerType(currentControllerType);
			int32_t L_14 = V_3;
			Type_t * L_15 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(50 /* System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_14);
			V_4 = L_15;
			// if (controllerType == null)
			Type_t * L_16 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_17 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_16, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0080;
			}
		}

IL_0078:
		{
			// return null;
			V_9 = (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 *)NULL;
			IL2CPP_LEAVE(0x1C2, FINALLY_01b4);
		}

IL_0080:
		{
			// InputSourceType inputSourceType = GetInputSourceType(currentControllerType);
			int32_t L_18 = V_3;
			int32_t L_19 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(51 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_18);
			V_5 = L_19;
			// IMixedRealityPointer[] pointers = RequestPointers(currentControllerType, controllingHand);
			int32_t L_20 = V_3;
			uint8_t L_21 = V_2;
			IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* L_22 = VirtFuncInvoker2< IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB*, int32_t, uint8_t >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointers(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, __this, L_20, L_21);
			V_6 = L_22;
			// IMixedRealityInputSource inputSource = Service?.RequestNewGenericInputSource($"{currentControllerType} Controller {controllingHand}", pointers, inputSourceType);
			RuntimeObject* L_23 = BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_RuntimeMethod_var);
			RuntimeObject* L_24 = L_23;
			G_B11_0 = L_24;
			if (L_24)
			{
				G_B12_0 = L_24;
				goto IL_00a0;
			}
		}

IL_009c:
		{
			G_B13_0 = ((RuntimeObject*)(NULL));
			goto IL_00bf;
		}

IL_00a0:
		{
			int32_t L_25 = V_3;
			int32_t L_26 = L_25;
			RuntimeObject * L_27 = Box(SupportedControllerType_tDF4DCD04BE13C53E8D3F292183F9169D51CF15A2_il2cpp_TypeInfo_var, &L_26);
			uint8_t L_28 = V_2;
			uint8_t L_29 = L_28;
			RuntimeObject * L_30 = Box(Handedness_t0C60FE5616B84BCF61E9DE2AF62E89A4910FBC3C_il2cpp_TypeInfo_var, &L_29);
			String_t* L_31 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral25B27DC2BCC839C8D8BCE6F17F582B5C0F269F61, L_27, L_30, /*hidden argument*/NULL);
			IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* L_32 = V_6;
			int32_t L_33 = V_5;
			NullCheck(G_B12_0);
			RuntimeObject* L_34 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B12_0, L_31, L_32, L_33);
			G_B13_0 = L_34;
		}

IL_00bf:
		{
			V_7 = G_B13_0;
			// GenericXRSDKController detectedController = Activator.CreateInstance(controllerType, TrackingState.NotTracked, controllingHand, inputSource, null) as GenericXRSDKController;
			Type_t * L_35 = V_4;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_36;
			int32_t L_38 = ((int32_t)1);
			RuntimeObject * L_39 = Box(TrackingState_t03F63DF17E67718FB7C732876A58FA3A18568262_il2cpp_TypeInfo_var, &L_38);
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, L_39);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_39);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = L_37;
			uint8_t L_41 = V_2;
			uint8_t L_42 = L_41;
			RuntimeObject * L_43 = Box(Handedness_t0C60FE5616B84BCF61E9DE2AF62E89A4910FBC3C_il2cpp_TypeInfo_var, &L_42);
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, L_43);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_43);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = L_40;
			RuntimeObject* L_45 = V_7;
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_45);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_45);
			RuntimeObject * L_46 = Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17(L_35, L_44, /*hidden argument*/NULL);
			V_8 = ((GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 *)IsInstClass((RuntimeObject*)L_46, GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_il2cpp_TypeInfo_var));
			// if (detectedController == null || !detectedController.Enabled)
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_47 = V_8;
			if (!L_47)
			{
				goto IL_00f9;
			}
		}

IL_00f0:
		{
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_48 = V_8;
			NullCheck(L_48);
			bool L_49 = BaseController_get_Enabled_m4681A023FA3BF1CA5D459ED23C56FBF2AFE8E6BC_inline(L_48, /*hidden argument*/NULL);
			if (L_49)
			{
				goto IL_011c;
			}
		}

IL_00f9:
		{
			// Debug.LogError($"Failed to create {controllerType.Name} controller");
			Type_t * L_50 = V_4;
			NullCheck(L_50);
			String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
			String_t* L_52 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralBFC251F0EE7E738E9803C51B96A0610EF66A88F3, L_51, _stringLiteral41DC700A22938E6F7AF528592CEA8E869DAC445E, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_52, /*hidden argument*/NULL);
			// return null;
			V_9 = (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 *)NULL;
			IL2CPP_LEAVE(0x1C2, FINALLY_01b4);
		}

IL_011c:
		{
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			V_10 = 0;
			goto IL_013d;
		}

IL_0121:
		{
			// detectedController.InputSource.Pointers[i].Controller = detectedController;
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_53 = V_8;
			NullCheck(L_53);
			RuntimeObject* L_54 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(L_53, /*hidden argument*/NULL);
			NullCheck(L_54);
			IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* L_55 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tB73DE066AEFE85A61B407CDD5DAD0FD130BE176B_il2cpp_TypeInfo_var, L_54);
			int32_t L_56 = V_10;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			RuntimeObject* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_59 = V_8;
			NullCheck(L_58);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_t161F079BAB0ACFBE7B3A32BF6F2B4C44BE56A008_il2cpp_TypeInfo_var, L_58, L_59);
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			int32_t L_60 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		}

IL_013d:
		{
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			int32_t L_61 = V_10;
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_62 = V_8;
			NullCheck(L_62);
			RuntimeObject* L_63 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(L_62, /*hidden argument*/NULL);
			RuntimeObject* L_64 = L_63;
			G_B19_0 = L_64;
			G_B19_1 = L_61;
			if (L_64)
			{
				G_B20_0 = L_64;
				G_B20_1 = L_61;
				goto IL_0156;
			}
		}

IL_0149:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_65 = V_12;
			G_B23_0 = L_65;
			G_B23_1 = G_B19_1;
			goto IL_0172;
		}

IL_0156:
		{
			NullCheck(G_B20_0);
			IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* L_66 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tB73DE066AEFE85A61B407CDD5DAD0FD130BE176B_il2cpp_TypeInfo_var, G_B20_0);
			IMixedRealityPointerU5BU5D_t6FEB696D66B8ED9F3662DFCA5926B8089D61E2AB* L_67 = L_66;
			G_B21_0 = L_67;
			G_B21_1 = G_B20_1;
			if (L_67)
			{
				G_B22_0 = L_67;
				G_B22_1 = G_B20_1;
				goto IL_016b;
			}
		}

IL_015e:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_68 = V_12;
			G_B23_0 = L_68;
			G_B23_1 = G_B21_1;
			goto IL_0172;
		}

IL_016b:
		{
			NullCheck(G_B22_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_69;
			memset((&L_69), 0, sizeof(L_69));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_69), (((int32_t)((int32_t)(((RuntimeArray*)G_B22_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B23_0 = L_69;
			G_B23_1 = G_B22_1;
		}

IL_0172:
		{
			V_11 = G_B23_0;
			int32_t L_70 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_11), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_71 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_11), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B23_1) < ((int32_t)L_70))? 1 : 0)&(int32_t)L_71)))
			{
				goto IL_0121;
			}
		}

IL_0187:
		{
			// ActiveControllers.Add(inputDevice, detectedController);
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
			Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_72 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_73 = ___inputDevice0;
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_74 = V_8;
			NullCheck(L_72);
			Dictionary_2_Add_m06F42B5245F834E293ED807D6D40EEC286D08CC7(L_72, L_73, L_74, /*hidden argument*/Dictionary_2_Add_m06F42B5245F834E293ED807D6D40EEC286D08CC7_RuntimeMethod_var);
			// Service?.RaiseSourceDetected(detectedController.InputSource, detectedController);
			RuntimeObject* L_75 = BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_RuntimeMethod_var);
			RuntimeObject* L_76 = L_75;
			G_B25_0 = L_76;
			if (L_76)
			{
				G_B26_0 = L_76;
				goto IL_01a0;
			}
		}

IL_019d:
		{
			goto IL_01ae;
		}

IL_01a0:
		{
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_77 = V_8;
			NullCheck(L_77);
			RuntimeObject* L_78 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(L_77, /*hidden argument*/NULL);
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_79 = V_8;
			NullCheck(G_B26_0);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B26_0, L_78, L_79);
		}

IL_01ae:
		{
			// return detectedController;
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_80 = V_8;
			V_9 = L_80;
			IL2CPP_LEAVE(0x1C2, FINALLY_01b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b4;
	}

FINALLY_01b4:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(436)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(436)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C2, IL_01c2)
	}

IL_01c2:
	{
		// }
		GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_81 = V_9;
		return L_81;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_mC3C9D444F28F9CD399B930419DCA8EB16B7763A4 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_RemoveController_mC3C9D444F28F9CD399B930419DCA8EB16B7763A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RemoveControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_RemoveControllerPerfMarker_28();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (ActiveControllers.TryGetValue(inputDevice, out GenericXRSDKController controller))
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
			Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_2 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_3 = ___inputDevice0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_mA68647C91E6A7C6D2F09DE53F635FDB20D742C22(L_2, L_3, (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mA68647C91E6A7C6D2F09DE53F635FDB20D742C22_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_001d:
		{
			// if (controller != null)
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_5 = V_2;
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0020:
		{
			// RemoveControllerFromScene(controller);
			GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_6 = V_2;
			XRSDKDeviceManager_RemoveControllerFromScene_mD8227E1600F0ED0420B58AC1688886F0B549AEFD(__this, L_6, /*hidden argument*/NULL);
		}

IL_0027:
		{
			// ActiveControllers.Remove(inputDevice);
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var);
			Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_7 = ((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->get_ActiveControllers_21();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_8 = ___inputDevice0;
			NullCheck(L_7);
			Dictionary_2_Remove_m2F0B429341DF97D5F2E34116B109F5BAC84A7984(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m2F0B429341DF97D5F2E34116B109F5BAC84A7984_RuntimeMethod_var);
		}

IL_0033:
		{
			// }
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerFromScene(Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveControllerFromScene_mD8227E1600F0ED0420B58AC1688886F0B549AEFD (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_RemoveControllerFromScene_mD8227E1600F0ED0420B58AC1688886F0B549AEFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// Service?.RaiseSourceLost(controller.InputSource, controller);
		RuntimeObject* L_0 = BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m5401A9174DCE4D1E6A3F5AED8808FACCA8566D06_RuntimeMethod_var);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_2 = ___controller0;
		NullCheck(L_2);
		RuntimeObject* L_3 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(L_2, /*hidden argument*/NULL);
		GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_4 = ___controller0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_tA9CB411D4B64E6B0E68063F1C4932363215A3E78_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
	}

IL_0018:
	{
		// RecyclePointers(controller.InputSource);
		GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_5 = ___controller0;
		NullCheck(L_5);
		RuntimeObject* L_6 = BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline(L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointers(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_6);
		// var visualizer = controller.Visualizer;
		GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0 * L_7 = ___controller0;
		NullCheck(L_7);
		RuntimeObject* L_8 = BaseController_get_Visualizer_m132439AD05819B7D85719BC5B034D25F9DF82086_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (!visualizer.IsNull() &&
		//     visualizer.GameObjectProxy != null)
		RuntimeObject* L_9 = V_0;
		bool L_10 = UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_m0114E960F6C4DD6552B6103FE79628814DDBE280(L_9, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_m0114E960F6C4DD6552B6103FE79628814DDBE280_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// visualizer.GameObjectProxy.SetActive(false);
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t42B3035C322B5B0E9C403409ACA5537236F7A191_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)0, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_mF4778479FBBEDAE02E938261469BA1207B29A356 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetControllerType_mF4778479FBBEDAE02E938261469BA1207B29A356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(GenericXRSDKController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (GenericXRSDKController_tA335CDB286B1D28890B1032A00257496BA77C8C0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mA3B6F8C9D76C5D6DA51365BAB272BF5B6A67F514 (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_mF8008D0125067AD0F00CF968AB23B59D9D6825BE (XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetCurrentControllerType_mF8008D0125067AD0F00CF968AB23B59D9D6825BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"{inputDevice.name} does not have a defined controller type, falling back to generic controller type");
		String_t* L_0 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralC577C6AB98A4D18F7740145FB4769D96C375A2B2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// return SupportedControllerType.GenericUnity;
		return (int32_t)(((int32_t)64));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__cctor_m96CDF7D454180982CA945D1A0845A6083C15AAED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager__cctor_m96CDF7D454180982CA945D1A0845A6083C15AAED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Dictionary<InputDevice, GenericXRSDKController> ActiveControllers = new Dictionary<InputDevice, GenericXRSDKController>();
		Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 * L_0 = (Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15 *)il2cpp_codegen_object_new(Dictionary_2_t55BEDED0676484D51C91E5EE4DB4441BCFB9EC15_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5E681737293DCA92C004A75093276FEE5B52B1E1(L_0, /*hidden argument*/Dictionary_2__ctor_m5E681737293DCA92C004A75093276FEE5B52B1E1_RuntimeMethod_var);
		((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->set_ActiveControllers_21(L_0);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteralC9E794FDA9008E01221FD577CCC8A14541735C1C, /*hidden argument*/NULL);
		((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_26(L_1);
		// private static readonly ProfilerMarker GetOrAddControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.GetOrAddController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteral8F3BF1BF14ABA56C564F1F580570DDA329320392, /*hidden argument*/NULL);
		((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->set_GetOrAddControllerPerfMarker_27(L_2);
		// private static readonly ProfilerMarker RemoveControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.RemoveController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7F79AD01AB4618B7FDC047B4D4A94F162B17C72F, /*hidden argument*/NULL);
		((XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_tB2596C3DC1526221BBACBD56228881355D7C83AC_il2cpp_TypeInfo_var))->set_RemoveControllerPerfMarker_28(L_3);
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
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  LoaderHelpers_IsLoaderActive_m9DE8F2A0B9F18D4F0044CE7F7BA452DDCF862390 (String_t* ___loaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoaderHelpers_IsLoaderActive_m9DE8F2A0B9F18D4F0044CE7F7BA452DDCF862390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (XRGeneralSettings.Instance != null
		//     && XRGeneralSettings.Instance.Manager != null
		//     && XRGeneralSettings.Instance.Manager.activeLoader != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_2 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_3 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_5 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_6 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_7 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// return XRGeneralSettings.Instance.Manager.activeLoader.name == loaderName;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_9 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_10 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_11 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		String_t* L_13 = ___loaderName0;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, L_13, /*hidden argument*/NULL);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var);
		return L_15;
	}

IL_0056:
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 ));
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__ctor_m0A1719298B910733F4093E000A4B62A773D806E6 (XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008 * __this, MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * ___profile0, int32_t ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem__ctor_m0A1719298B910733F4093E000A4B62A773D806E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		__this->set_U3CNameU3Ek__BackingField_54(_stringLiteralED4EE0E0F4814BF1D025F3E41C608E4288258FD9);
		// ExperienceScale scale) : base(profile, scale)
		MixedRealityBoundaryVisualizationProfile_t2EC6C5B596C074E1B4145C5C2B304FF41F2D4E49 * L_0 = ___profile0;
		int32_t L_1 = ___scale1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B_il2cpp_TypeInfo_var);
		BaseBoundarySystem__ctor_m012654FF0A5C91B51EF33AED6E3DB85AB8D8DC07(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSDKBoundarySystem_get_Name_m1ED49A8ED2C2B9DC730DBCE2CD43F4A92376BA9B (XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_set_Name_mC997AE069C8B955842E65F0F89DBFD300076DD5D (XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_54(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::GetBoundaryGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * XRSDKBoundarySystem_GetBoundaryGeometry_m918546E40336E0AB8BAA8EE0BB691B528EA8D1EF (XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem_GetBoundaryGeometry_m918546E40336E0AB8BAA8EE0BB691B528EA8D1EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * G_B2_0 = NULL;
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2(L_0, 0, /*hidden argument*/List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var);
		V_0 = L_0;
		// if (XRSubsystemHelpers.InputSubsystem?.GetTrackingOriginMode() != TrackingOriginModeFlags.Floor
		//     || !XRSubsystemHelpers.InputSubsystem.TryGetBoundaryPoints(boundaryGeometry)
		//     || boundaryGeometry.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_1 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001e;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		int32_t L_3 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001e:
	{
		if (G_B3_0)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_4 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = XRInputSubsystem_TryGetBoundaryPoints_m65DBE5495B42A5F3091CB61E05CB07761A0787ED(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_7, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0092;
		}
	}

IL_0035:
	{
		// SubsystemManager.GetInstances(XRInputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var);
		List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * L_9 = ((XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var))->get_XRInputSubsystems_53();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918(L_9, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918_RuntimeMethod_var);
		// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
		List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * L_10 = ((XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var))->get_XRInputSubsystems_53();
		NullCheck(L_10);
		Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  L_11 = List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED(L_10, /*hidden argument*/List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_004c:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_12 = Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_inline((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_RuntimeMethod_var);
			V_2 = L_12;
			// if (xrInputSubsystem.running
			//     && xrInputSubsystem.GetTrackingOriginMode() == TrackingOriginModeFlags.Floor
			//     && xrInputSubsystem.TryGetBoundaryPoints(boundaryGeometry)
			//     && boundaryGeometry.Count > 0)
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_13 = V_2;
			NullCheck(L_13);
			bool L_14 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_005c:
		{
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_15 = V_2;
			NullCheck(L_15);
			int32_t L_16 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_15, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_16) == ((uint32_t)2))))
			{
				goto IL_0079;
			}
		}

IL_0065:
		{
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_17 = V_2;
			List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_18 = V_0;
			NullCheck(L_17);
			bool L_19 = XRInputSubsystem_TryGetBoundaryPoints_m65DBE5495B42A5F3091CB61E05CB07761A0787ED(L_17, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0079;
			}
		}

IL_006e:
		{
			List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_20 = V_0;
			NullCheck(L_20);
			int32_t L_21 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_20, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
			if ((((int32_t)L_21) <= ((int32_t)0)))
			{
				goto IL_0079;
			}
		}

IL_0077:
		{
			// break;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0079:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			bool L_22 = Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_004c;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97_RuntimeMethod_var);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		// return boundaryGeometry;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_23 = V_0;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_SetTrackingSpace_mE113C1BD784D2D87974F0D1807A24B7AA98ACC76 (XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem_SetTrackingSpace_mE113C1BD784D2D87974F0D1807A24B7AA98ACC76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// switch (Scale)
		int32_t L_0 = BaseBoundarySystem_get_Scale_mD4749E123BA2FEA755BC7A5038AB5618682232D3_inline(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Floor;
		V_0 = 2;
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// break;
		goto IL_0037;
	}

IL_002b:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Device tracking space.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral18414638F2486DC587D4197BFFA93F7B78162975, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.TrySetTrackingOriginMode(trackingOriginMode))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_2 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_3 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_00a0;
		}
	}

IL_004b:
	{
		// SubsystemManager.GetInstances(XRInputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var);
		List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * L_6 = ((XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var))->get_XRInputSubsystems_53();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918(L_6, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mBD5993F0F22B9626089CEF8B1E3C790AE92A8918_RuntimeMethod_var);
		// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
		List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * L_7 = ((XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var))->get_XRInputSubsystems_53();
		NullCheck(L_7);
		Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04  L_8 = List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED(L_7, /*hidden argument*/List_1_GetEnumerator_mB483D9544236BD6A8A5680A6F6B6622DA8776AED_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_0062:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_9 = Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_inline((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1BF0D3645120EFF7E9C18A4352D744D045C1C919_RuntimeMethod_var);
			V_3 = L_9;
			// if (xrInputSubsystem.running && xrInputSubsystem.TrySetTrackingOriginMode(trackingOriginMode))
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_007d;
			}
		}

IL_0072:
		{
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_12 = V_3;
			int32_t L_13 = V_0;
			NullCheck(L_12);
			bool L_14 = XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4(L_12, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_007d;
			}
		}

IL_007b:
		{
			// return;
			IL2CPP_LEAVE(0xA0, FINALLY_0088);
		}

IL_007d:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			bool L_15 = Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m25AC8612E8ECB99273CBF13AFCCAEA7C9398A8FF_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0062;
			}
		}

IL_0086:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97((Enumerator_t11E7257AB0E5F70A2B82727A7C0B21D210F12A04 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mF39B5A426AF8C1EE8EECE5E10E739625C9BE8C97_RuntimeMethod_var);
		IL2CPP_END_FINALLY(136)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
	}

IL_0096:
	{
		// Debug.LogWarning("Tracking origin unable to be set.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral74CA03DB3497544DC2BE05DE99A6DF69FA715DC5, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__cctor_mB460CDC1FD6E335D0731E13C038F8A3FD1B7B3A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem__cctor_mB460CDC1FD6E335D0731E13C038F8A3FD1B7B3A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<XRInputSubsystem> XRInputSubsystems = new List<XRInputSubsystem>();
		List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E * L_0 = (List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E *)il2cpp_codegen_object_new(List_1_tD2D189C1AE66A3F23CBDC7E1EF06253AF2C3F92E_il2cpp_TypeInfo_var);
		List_1__ctor_mBE5E0B12AEF225779CF661D52943C9982BDBEBD8(L_0, /*hidden argument*/List_1__ctor_mBE5E0B12AEF225779CF661D52943C9982BDBEBD8_RuntimeMethod_var);
		((XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t076C3A7DC700F7EE290F571F0713033A5F39D008_il2cpp_TypeInfo_var))->set_XRInputSubsystems_53(L_0);
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
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSDKSubsystemHelpers_get_InputSubsystem_m3CED0400D7AFF4CAFE31E2A3ACE7D583EC7D409C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_InputSubsystem_m3CED0400D7AFF4CAFE31E2A3ACE7D583EC7D409C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRInputSubsystem InputSubsystem => XRSubsystemHelpers.InputSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = XRSubsystemHelpers_get_InputSubsystem_mC998FDBBA638076554478A161AAD17464E84B153(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSDKSubsystemHelpers_get_MeshSubsystem_mD6EF232EE23607F6570BF54869696CA37D7CA550 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_MeshSubsystem_mD6EF232EE23607F6570BF54869696CA37D7CA550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRMeshSubsystem MeshSubsystem => XRSubsystemHelpers.MeshSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_0 = XRSubsystemHelpers_get_MeshSubsystem_m4CFB1CE253A5AFCEA97DABF8160FF81C23A05328(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m0E976E076CD7F85CDC824D7073AFBAB250B16DAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_DisplaySubsystem_m0E976E076CD7F85CDC824D7073AFBAB250B16DAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRDisplaySubsystem DisplaySubsystem => XRSubsystemHelpers.DisplaySubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB55DF944E09033347DA87F02A07BFCDC986BF194_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mCF1D9DB605AAF97DF84D4A6948A8FE3CB19DA738(/*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = ((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline (XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m24B259B2C45E95F8912C92466AAC3BDE719EE7B8_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = __this->get_U3CIsRunningU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m706DEFF2E7AB2078C09A1D88A35E5E973DBF1424_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRunningU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m17D87C437E446A67DE5DA135EAB8FB9C65879D9C_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; // 3.5 seconds
		float L_0 = __this->get_U3CUpdateIntervalU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mB1DB12646E705D2E32941231BA187B84A8A48700_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m08AB4C962E6CE82698096C146DCA0F6586C76512_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion ObserverRotation { get; set; } = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CObserverRotationU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m9DDC57F208759812811FE66EBB86711B0DE24315_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsStationaryObserver { get; set; } = false;
		bool L_0 = __this->get_U3CIsStationaryObserverU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_mA53D9F23AE74383FC62669E287F1AF9A9813AABB_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CObserverOriginU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_m8D47E69D3586A3EA61692FF4E76455F3BA5F0749_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return meshPhysicsLayer; }
		int32_t L_0 = __this->get_meshPhysicsLayer_40();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialAwarenessObject_get_GameObject_m90AEDD0AFFDE7E81FBAFA313A25D4DD953B178A3_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m95F868930CA6126C725C800CA0BB583FC2F2F10D_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * BaseSpatialAwarenessObject_get_Filter_m620DBB4B251424A2F54B0B784DC293FA2C5C7E15_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter Filter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CFilterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * SpatialAwarenessMeshObject_get_Collider_mA1072D4448B7AE25875D5A053EE1BB8063065F92_inline (SpatialAwarenessMeshObject_t902BCCF39C4539F6AFCDF94FF6A20422E4F04E36 * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider Collider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CColliderU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m5F569496631B87D6B9E0710C0D4324E87DDB070E_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m8362D2A63D7E14740340C7D604B2EA2C0ED92F48_inline (BaseSpatialObserver_tF3CA0E6698F64EB5CCAD22A15B17DD4434D3D063 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CChangeStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	{
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method)
{
	{
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m44B26C367267AFD1EC75E80C683D5B4E98104622_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_mC51C549752D741052215751CB6E14F3F9CF2C846_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return displayOption; }
		int32_t L_0 = __this->get_displayOption_37();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_VisibleMaterial_m246A8857A12B2951A12E6BDC7B3776CA5DEC9B29_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return visibleMaterial; }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_visibleMaterial_45();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_OcclusionMaterial_m847C6CCE117F2B64CD8E1EC49004BFEDC787CD8B_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return occlusionMaterial; }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_occlusionMaterial_43();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * BaseSpatialAwarenessObject_get_Renderer_mB5FFA8F60938DD42C71A13B500B31D1CD5B1239B_inline (BaseSpatialAwarenessObject_t0EA0957225834EB54E2E40DB3094516412DDDD56 * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer Renderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CRendererU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m3D682F3FC6CAB78020EBE5A81774CC6D3F8219DB_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecalculateNormals { get; set; } = true;
		bool L_0 = __this->get_U3CRecalculateNormalsU3Ek__BackingField_41();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * BaseSpatialMeshObserver_get_PhysicsMaterial_m2E92F342F81E23F21C130FB66EAEADA2E47B4560_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return physicsMaterial; }
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = __this->get_physicsMaterial_44();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_mEC17538AF73B9A3B7304AC908272D4C10800DBFA_inline (BaseSpatialMeshObserver_tBF0E349F914291DC73004F1583FBD3ADE8F275E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return runtimeSpatialMeshPrefab; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_runtimeSpatialMeshPrefab_46();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m4B266CB59DA91A3FFA3514B0FAEE2F619EC63D98_inline (SimpleCoroutineAwaiter_tBB6A0DDA0FB684A125D483139A02A9210B12254C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m636D1A54558C87A0810CB41AB67EAA6CEAA822D0Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_il2cpp_TypeInfo_var);
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_0 = ((MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m4681A023FA3BF1CA5D459ED23C56FBF2AFE8E6BC_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* BaseController_get_Interactions_mE88E206608FDF37A2F138AA1E04518C35733F79D_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t7081364A3DDFDA110B152A2EA9CDADC34425C8EE* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Enabled_mFF877D74D7656DEB83B92C7D1613AB455EFD1164_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_m750180796F1201E1F85C1B84616F4E990EDAA183_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_mD17B75BCCC2FEB55E9FB50BC967C964B73795A56_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = __this->get_U3CTrackingStateU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mA8D9C612FDA743952ECAC088B09617678D436DD8_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m4F87E1B3E9289F7B29322D4652F66F988B45CE10_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mB5DC1F07770D461816F2CF497D0718BAC8189913_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m6F62071B690742FBBF470A0B9DB0BDCE97F07E4B_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m5BB091F204862801E2CC962FB6776F4CCF43C308_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionApproximate { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionApproximateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m7EE06C12BF5988E2549269E7263D8139FA44A8F3_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m6CB6CF295491DF729307BFEF8CA9AFA7B6BED260_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTrackingStateU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mF0EA1790DE1DEFA29E35CF3516FEB9B0A69E8A90_inline (MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mE9AE7872BF96696640024ECA83C6731401D2D4E4_inline (MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Velocity_mB91F1402293A2EAD1B435FC6F3C2E1E29DA2EEAE_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CVelocityU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_AngularVelocity_m6257EF26E4EB6333F5DB1660322BA4D2A2A1FEBF_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 AngularVelocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CAngularVelocityU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mF9668231C7A474E0C88C9A4656F102E33026EFB9_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m9684711A29DD53B873F9FFAC6F0D0D4FC199C97F_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mEE696C3EADB2F4078D7E3EBA75BB12563EF9BDCF_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  MixedRealityInteractionMapping_get_MixedRealityInputAction_mAA7AC1538AC5DFB0DA0F9E75F1CDC1F253190DDB_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t85A5B5240B58694FC9F077F47B626C9762A31634  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m0F508CBA0F9F0E86A6DC3D0E3CCDBA9AFF6429EE_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// return floatData;
		float L_0 = __this->get_floatData_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mE0094FBA28A6C9DC369E19D0187525689321E412_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  MixedRealityInteractionMapping_get_PoseData_mF508694C03C1B865F3922354B735D578B92316E6_inline (MixedRealityInteractionMapping_t524A0B817D84A2AA9A505727BA867C935DF0ED45 * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t0AA8EFD0B0CF12D8E0FB081150D5A3C963BDA97D  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m132439AD05819B7D85719BC5B034D25F9DF82086_inline (BaseController_tB863E0C3F1612FFCD4EA2E5FE651AE6D82E60611 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityControllerVisualizer Visualizer { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CVisualizerU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mD4749E123BA2FEA755BC7A5038AB5618682232D3_inline (BaseBoundarySystem_tBA7C5A398B8F492C9CE986078D649618BDF5547B * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m8EB7BF00A9E0CC905E204B8585F1A47E426DD9C2_gshared_inline (BaseDataProvider_1_tF0EEE7F4E1305140D065BCEA9FD5F0483D7D3084 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	{
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_0 = (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 )__this->get_current_3();
		return (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_mBED471430FFE3E90CD7FCF155D9992B447D0EF48_gshared_inline (Enumerator_t2292C800E66C8BBFE8F1661BEA8A5549126EE35B * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_current_3();
		return (uint32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	{
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_0 = (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )__this->get_current_3();
		return (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  KeyValuePair_2_get_Key_mFF140D58C613850E4E3FDB9DB653B038C4FD4968_gshared_inline (KeyValuePair_2_t65B0C06706D3337CB0488FE2711E8C75A35A696D * __this, const RuntimeMethod* method)
{
	{
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_0 = (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )__this->get_key_0();
		return (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
