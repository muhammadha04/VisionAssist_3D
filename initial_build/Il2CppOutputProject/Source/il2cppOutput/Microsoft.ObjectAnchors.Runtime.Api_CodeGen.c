#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* ObjectInstance_ChangedStaticHandler_m768015677076F1F34E60CB69B989082F360837E8_RuntimeMethod_var;
extern const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_m0AD929565B8F19CB566C3E4F4E81BEC898D04DA5_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnCompleteThunk_mCF6245E58C658DC816AC7D4E72DB100EFFBDDC76_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnErrorThunk_m05A83FEACEE22FCB7369E76279D31BB1B8F5B33E_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnProgressThunk_m206F1885BD06E15F0B0B530C501329CB24FACF47_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m6BA519E7E8EB399177467B8A6640BF2F40466815 (void);
// 0x00000002 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m6FCA6DF4B45D2757A3DD8F4347C961983E375504 (void);
// 0x00000003 System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
extern void ProjectedObjectHelpers_ConvertHandleToCookie_m23E707E2A6C9B0490800D596ACA769575D0BA861 (void);
// 0x00000004 System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
extern void ProjectedObjectHelpers_ConvertCookieToHandle_m89F2E21F13496DEEC105A1FE9971319A8EB4D2D3 (void);
// 0x00000005 System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie()
// 0x00000006 System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount()
// 0x00000007 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler(System.UInt64,System.String,T)
// 0x00000008 System.Boolean Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler(System.UInt64,System.String,T)
// 0x00000009 T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler(System.UInt64,System.String)
// 0x0000000A System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
extern void ProjectedObjectEventHandlerCache_Clear_mCA4EAC3F1309564F5230D7A5999D04924219E46E (void);
// 0x0000000B System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(System.UInt64)
extern void ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mDC323D6EDBA1BCC23812EC8BFF10E2FC9C027767 (void);
// 0x0000000C System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
extern void ProjectedObjectEventHandlerCache__cctor_mBA8F521624E7274498B6CAE124E583F1111C9340 (void);
// 0x0000000D System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
extern void ProjectedObjectCache__cctor_mE47A9146F9F1C97192A5A3524387222501F5CAEC (void);
// 0x0000000E System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectCache_Add_m5C88E3E81DF096FE7C2F9679890715CC8682BBD9 (void);
// 0x0000000F T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate(System.UInt64,System.Func`2<System.UInt64,T>)
// 0x00000010 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
extern void ProjectedObjectCache_Remove_m69527A7888442795D48F00393B5DBBB9ADAC5A25 (void);
// 0x00000011 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
extern void ProjectedObjectCache_ProjectedObjectCleanupHandler_m0AD929565B8F19CB566C3E4F4E81BEC898D04DA5 (void);
// 0x00000012 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative__ctor_mFF70706FC3444110063F974CF8C3B02A10874D5C (void);
// 0x00000013 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative_Invoke_mD92C60CE5C0C388D597B72E80EE513C34839949F (void);
// 0x00000014 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandlerNative_BeginInvoke_mB6EE080EA26BD9F081AF870C894668A50B0888EC (void);
// 0x00000015 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandlerNative_EndInvoke_mE2077E270E2153DC1F9F5D59D7F9533ECD03C23F (void);
// 0x00000016 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
extern void ProjectedObjectCleanupNative__ctor_m178026387406C36FD692DC30AEA03E251BE9552E (void);
// 0x00000017 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
extern void ProjectedObjectCleanupNative_Invoke_mDE545F266A6DA519CB7D1E96FB2329AD8E27D9E7 (void);
// 0x00000018 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ProjectedObjectCleanupNative_BeginInvoke_m04B492FEE334F5A8A85201676DA27511CFF9E8F1 (void);
// 0x00000019 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::EndInvoke(System.IAsyncResult)
extern void ProjectedObjectCleanupNative_EndInvoke_mC45BEA4D7B490365991507BE187EFA0D1C5E645B (void);
// 0x0000001A System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCreate(Microsoft.Azure.ObjectAnchors.PromiseCreateOptions&,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle&)
extern void NativeLibrary_PromiseCreate_mA950D22BCEAC948FEB70EA2240BB0EB0EC2C7E54 (void);
// 0x0000001B System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCancel(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_PromiseCancel_m963DCB56F7B6E7C22F25D20F79B7EC6BE1E8BEF0 (void);
// 0x0000001C System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseDestroy(System.IntPtr)
extern void NativeLibrary_PromiseDestroy_m6E18F817DE19CDA01ED8070D176BDB4CBC6A7B9C (void);
// 0x0000001D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
extern void NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m1F5D90EC3085BD79D3CE8C439B5683FD04201D55 (void);
// 0x0000001E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
extern void NativeLibrary_aoa_account_information_release_m9599DB65B93CC65D953CA183E5C37DCC10747724 (void);
// 0x0000001F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_addref(System.IntPtr)
extern void NativeLibrary_aoa_environment_observation_addref_mF0C7BCB94AD50C0D3EDC07800A4A4166149A0D33 (void);
// 0x00000020 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_origin(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
extern void NativeLibrary_aoa_environment_observation_get_origin_m6B23B209F315138B1A1241D279FA5B9035FB949B (void);
// 0x00000021 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_environment_observation_get_triangle_index_count_m9998BA14071DA070C519F46438F0CD677050DA3B (void);
// 0x00000022 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_environment_observation_get_triangle_indices_mC0531DADCFF6101CD3CBB81A1FDF543B4D111BCB (void);
// 0x00000023 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_environment_observation_get_vertex_count_mB50C81BBAB18807161DAA23202763E980B7F8DE7 (void);
// 0x00000024 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_environment_observation_get_vertex_normals_mF3E01FBD66CF0F1E833981F8369A986F9057827C (void);
// 0x00000025 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_environment_observation_get_vertex_positions_m5EF955472744479756DE2B37CBE37E72D003F3ED (void);
// 0x00000026 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_environment_observation_release(System.IntPtr)
extern void NativeLibrary_aoa_environment_observation_release_mC1C1F24D4F047BAFCB498E4746947002B61E8B15 (void);
// 0x00000027 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
extern void NativeLibrary_aoa_get_error_details_m17A7B7119B22FE2E0D1903F6B20B646CFC4D4A69 (void);
// 0x00000028 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_addref(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_search_area_addref_m0545FC7A947F1FF155ECF752315C396D06EBCCB6 (void);
// 0x00000029 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_get_count(System.IntPtr,System.Int32&)
extern void NativeLibrary_aoa_ilist_object_search_area_get_count_m4AD59AB5419E63DE963410FDC9C0FEC35D0ED7AB (void);
// 0x0000002A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_get_item(System.IntPtr,System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_ilist_object_search_area_get_item_m8FDDF10F8EADD22B846238A28A8EF256340ECC07 (void);
// 0x0000002B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_release(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_search_area_release_m1CA370C923593E4BDE5E9AFD55A484C84AAE54FB (void);
// 0x0000002C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_remove_item(System.IntPtr,System.Int32)
extern void NativeLibrary_aoa_ilist_object_search_area_remove_item_m72983356B7590102BFDF63C65ACD73041AB005A7 (void);
// 0x0000002D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_search_area_set_item(System.IntPtr,System.Int32,System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_search_area_set_item_m5B1CE1A499C42F983B0EE7B7A165D4004E641713 (void);
// 0x0000002E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m33670F46744C67231DD007085275FDDBC375DDBD (void);
// 0x0000002F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_object_observer_m00018C603424EA9C7224AE886859086C62C945D3 (void);
// 0x00000030 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_anchors_session_release_m943270C46989658E11FB92AFF30CDA5D63F91532 (void);
// 0x00000031 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_addref_m0BDD112429392C6983BF5EF560440995D194BEBA (void);
// 0x00000032 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_addref_m49C59CC1D5C72BE293F6B116C669D238D699BFE5 (void);
// 0x00000033 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_release_mE724F717FDDCE89A36B826F6A1CD1250EAC4BA0F (void);
// 0x00000034 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_dispose_m2BCA1FBF81D38BD270BD9FC1E88461BE83B93995 (void);
// 0x00000035 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
extern void NativeLibrary_aoa_object_instance_get_mode_mB1FA97401DC3EF37C2C85C9B76FCF1843E32A9C0 (void);
// 0x00000036 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_instance_get_model_id_mF16267852BED55E15C8B0BC05BFC4A305C2EEA7F (void);
// 0x00000037 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_release_m11C505914B94742F125A3151A7A1B6603EB1F3D5 (void);
// 0x00000038 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
extern void NativeLibrary_aoa_object_instance_set_changed_m047D791A5F98D34B1FE13F93FCC6ED5F0D233227 (void);
// 0x00000039 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void NativeLibrary_aoa_object_instance_set_mode_m1198C442214B9CB3E9174B26D6392974BAB62B1E (void);
// 0x0000003A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_addref_m6C6A7D1D700A0804C87D4689486E1910D5CAEB52 (void);
// 0x0000003B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_center(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
extern void NativeLibrary_aoa_object_instance_state_get_center_mE7D6E04D2EED565533A137CFB73F4014167874CD (void);
// 0x0000003C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_last_updated_time(System.IntPtr,System.Int64&)
extern void NativeLibrary_aoa_object_instance_state_get_last_updated_time_m42FD058C4E5B2E032F713D0C99AF6940AF49738A (void);
// 0x0000003D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_scale_change(System.IntPtr,System.Numerics.Vector3&)
extern void NativeLibrary_aoa_object_instance_state_get_scale_change_m4E455F467979E89FBDE7DC74A3B2298E6F41019A (void);
// 0x0000003E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_surface_coverage(System.IntPtr,System.Single&)
extern void NativeLibrary_aoa_object_instance_state_get_surface_coverage_m1B00A520ECC79760E410B4D72BCF3EBD4FFCE19A (void);
// 0x0000003F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_release_mEC80A6103294F46A1E4BCEFCA869459DF48ABBDB (void);
// 0x00000040 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_try_create_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_state_try_create_placement_mA9541DCAAC67713583922B67F1511C15FF03431C (void);
// 0x00000041 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_state(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_try_get_current_state_mAF36366BADAB96D95834ED87C061B0A744763385 (void);
// 0x00000042 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_model_addref_mD4CCB5261BC6C16E227C29DEDFE5FAB9A29A9125 (void);
// 0x00000043 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_model_dispose_m39EC8239BBD436544E58D92728ED22FE70035D1D (void);
// 0x00000044 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
extern void NativeLibrary_aoa_object_model_get_bounding_box_mBA70795A5EB75A1FFF9E16E91BCB13CD8A126D7F (void);
// 0x00000045 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_model_get_id_m47CC9D56359FD0C786C811805C6F848F740FD025 (void);
// 0x00000046 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
extern void NativeLibrary_aoa_object_model_get_origin_to_center_transform_m0C0235B9D60C79DAD55AB7DCF970D9B16E502286 (void);
// 0x00000047 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_triangle_index_count_m7DB3850A6EC3EF150D76E1C73D289FD8428DC7E2 (void);
// 0x00000048 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_triangle_indices_m163D524CAF734A6C29962C07BB4E7FA5C814FD2E (void);
// 0x00000049 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_vertex_count_mB5D9611A15438393A555E8C94B720AEDFE4C01F6 (void);
// 0x0000004A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_normals_mBA3FA03D2E003E8A44337195EDF134D6EA214AC1 (void);
// 0x0000004B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_positions_m6659ED49033EE67A72C2CBAB9C6E778BEA01A8C0 (void);
// 0x0000004C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
extern void NativeLibrary_aoa_object_model_release_m5F198110CF46F239C44C4C7555F5C5C95A126A3D (void);
// 0x0000004D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_addref_m58627BBAF6A1D60909CBF73056CBFCE30E5AD252 (void);
// 0x0000004E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_detect_async_queries_mCAD06940C256DF1F79544BA03E2E42551B57C1E8 (void);
// 0x0000004F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_dispose_mBAC7A1F4ECACB65EF621CAB08C6E3545CCE2E646 (void);
// 0x00000050 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_get_app_domain_unload_events(System.IntPtr&,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_get_app_domain_unload_events_m2256B08FD3EBEF6FEFFAB0689F232D5C26EF4D63 (void);
// 0x00000051 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
extern void NativeLibrary_aoa_object_observer_is_supported_m5EA59693F8055CD7D3481DDA2C4ED82C33F17C21 (void);
// 0x00000052 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_load_object_model_async_mB413B59038FABC4090E94000AE8AE29D4A0BD253 (void);
// 0x00000053 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_release_mB8571CB026DCDD8AF6F43F0C60B62CB7745A4F2D (void);
// 0x00000054 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_request_access_async_mE35AF5CCF1355122ABE7034EC1FC7A963EA6C7A4 (void);
// 0x00000055 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_compute_latest_environment_observation_async_environment_observation_topology_topology(System.IntPtr,Microsoft.Azure.ObjectAnchors.EnvironmentObservationTopology,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_query_compute_latest_environment_observation_async_environment_observation_topology_topology_mA0E7D7D631A62B2ACACE0934FD65D984029E344E (void);
// 0x00000056 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_m0A5849766AEA65E2190616FCF54C281B10929948 (void);
// 0x00000057 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m9876807D48B7B4FB8663DA2F7E026DDEF420FA17 (void);
// 0x00000058 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_query_dispose_mF106EC47BC9E2BA0A2C122998C163D74B5767FD6 (void);
// 0x00000059 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_get_min_surface_coverage(System.IntPtr,System.Single&)
extern void NativeLibrary_aoa_object_query_get_min_surface_coverage_m1AEBC20B8C2140B1AE9F9A9810F491C061EEBD43 (void);
// 0x0000005A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_get_search_areas(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_get_search_areas_mE2606EDAAA03BA40F416640DF0E564F319406E98 (void);
// 0x0000005B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
extern void NativeLibrary_aoa_object_query_release_m7CA33FB7F9851C7DDC0CE4D0AAB42BDF3EB18287 (void);
// 0x0000005C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_set_expected_max_vertical_orientation_in_degrees(System.IntPtr,System.Single)
extern void NativeLibrary_aoa_object_query_set_expected_max_vertical_orientation_in_degrees_mA0C3C17047F2146C4E0C7F6D81D3A236974DA026 (void);
// 0x0000005D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_set_is_expected_to_be_standing_on_ground_plane(System.IntPtr,System.Boolean)
extern void NativeLibrary_aoa_object_query_set_is_expected_to_be_standing_on_ground_plane_m2715C346BDB0352497B4DAAE3287D638CAC1DA9A (void);
// 0x0000005E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_set_max_scale_change(System.IntPtr,System.Single)
extern void NativeLibrary_aoa_object_query_set_max_scale_change_m8D294E5283A7392C8784B1291A2EB4894516903D (void);
// 0x0000005F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_set_min_surface_coverage(System.IntPtr,System.Single)
extern void NativeLibrary_aoa_object_query_set_min_surface_coverage_m31C17C496BAB2B490DCF239D3D81CC9ABD5DCAE8 (void);
// 0x00000060 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_search_area_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_search_area_addref_m721A43BC3AB9C789886F22961F0339C48B8DEBB4 (void);
// 0x00000061 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_search_area_from_oriented_box(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox,System.IntPtr&)
extern void NativeLibrary_aoa_object_search_area_from_oriented_box_mEC3A59EE08CE1F0C4A9F68D1D3E84EDCCA9CB724 (void);
// 0x00000062 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_search_area_release(System.IntPtr)
extern void NativeLibrary_aoa_object_search_area_release_m5E20196AA888729A50CA06A4DCB2CD78DB637135 (void);
// 0x00000063 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
extern void NativeLibrary_aoa_set_projected_object_cleanup_m510BB558E0A00C19CEA56F936DEDEF9AB62F7E5E (void);
// 0x00000064 System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetCount()
// 0x00000065 T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetItem(System.Int32)
// 0x00000066 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalSetItem(System.Int32,T)
// 0x00000067 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalRemoveItem(System.Int32)
// 0x00000068 System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Count()
// 0x00000069 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_IsReadOnly()
// 0x0000006A T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Item(System.Int32)
// 0x0000006B System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::set_Item(System.Int32,T)
// 0x0000006C System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::IndexOf(T)
// 0x0000006D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Insert(System.Int32,T)
// 0x0000006E System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::RemoveAt(System.Int32)
// 0x0000006F System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Add(T)
// 0x00000070 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Clear()
// 0x00000071 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Contains(T)
// 0x00000072 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::CopyTo(T[],System.Int32)
// 0x00000073 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Remove(T)
// 0x00000074 System.Collections.Generic.IEnumerator`1<T> Microsoft.Azure.ObjectAnchors.BasePrivateList`1::GetEnumerator()
// 0x00000075 System.Collections.IEnumerator Microsoft.Azure.ObjectAnchors.BasePrivateList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000076 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::.ctor()
// 0x00000077 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::.ctor(System.Int32)
// 0x00000078 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.IDisposable.Dispose()
// 0x00000079 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::MoveNext()
// 0x0000007A T Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.Generic.IEnumerator<T>.get_Current()
// 0x0000007B System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::.ctor(System.Int32)
// 0x0000007E System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.IDisposable.Dispose()
// 0x0000007F System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::MoveNext()
// 0x00000080 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x00000081 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.Reset()
// 0x00000082 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::.ctor(System.IntPtr,System.Boolean)
extern void IList_ObjectSearchArea__ctor_m6BEF3923CFE917857B7BE97D2636E79255DD747B (void);
// 0x00000084 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::Finalize()
extern void IList_ObjectSearchArea_Finalize_mC01A4380EA731F7784843FB208FBBE93BCE8CE1B (void);
// 0x00000085 System.Int32 Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::InternalGetCount()
extern void IList_ObjectSearchArea_InternalGetCount_mBC23DAA290FE861A2C5E55EFB77B1A228D2FEE15 (void);
// 0x00000086 Microsoft.Azure.ObjectAnchors.ObjectSearchArea Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::InternalGetItem(System.Int32)
extern void IList_ObjectSearchArea_InternalGetItem_m1F4AE5C63548635D98DAD8E3E99A8F3D3CEFFA47 (void);
// 0x00000087 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::InternalSetItem(System.Int32,Microsoft.Azure.ObjectAnchors.ObjectSearchArea)
extern void IList_ObjectSearchArea_InternalSetItem_mA1F1ADDA981181FA9584EB5BC23D8E4DD5D951CD (void);
// 0x00000088 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectSearchArea::InternalRemoveItem(System.Int32)
extern void IList_ObjectSearchArea_InternalRemoveItem_mFE3808543666474388D5D4AEEFDF3E5D165950B7 (void);
// 0x00000089 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandler__ctor_m8EBAEC3E4B36DF22DD1EABE4819657D45C7D89D6 (void);
// 0x0000008A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
extern void ObjectInstanceChangedHandler_Invoke_m9FDB00DA8AA7506344F80139298AF72D98026301 (void);
// 0x0000008B System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::BeginInvoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandler_BeginInvoke_m1207AC5F822D4ED46F76CB15A9D59A86446931C1 (void);
// 0x0000008C System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandler_EndInvoke_m16E6483B15C3161D6741A76B7859A36357A5A13D (void);
// 0x0000008D System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE179AC8BCB8479F49A6F89D6A6E26117F67734E6 (void);
// 0x0000008E System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
extern void AccountInformation__ctor_m4FBBE51E4B7F629224B23A696993288744F541D4 (void);
// 0x0000008F System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
extern void AccountInformation_Finalize_m228E5210CB2FCB6AD8D40F4C326755B076826B66 (void);
// 0x00000090 System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mCDAAE377FA539C4AB4988448D1F4D07BDAF9DE01 (void);
// 0x00000091 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::.ctor(System.IntPtr,System.Boolean)
extern void EnvironmentObservation__ctor_m9878F21B21397538A760043701F04084AA12F556 (void);
// 0x00000092 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void EnvironmentObservation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m4F3F283ABA69089AADBE660BBCC20BDA1A6EA824 (void);
// 0x00000093 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::Finalize()
extern void EnvironmentObservation_Finalize_mF2460CC50BCD8DAF5A9238D038ADA736E6F6F815 (void);
// 0x00000094 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.EnvironmentObservation::get_Origin()
extern void EnvironmentObservation_get_Origin_mB5A490D4AB952D9D1E938DFD3F4AD71839E07B01 (void);
// 0x00000095 System.UInt32 Microsoft.Azure.ObjectAnchors.EnvironmentObservation::get_VertexCount()
extern void EnvironmentObservation_get_VertexCount_m55A59380D9732EA27125D4C3790507C0860B646F (void);
// 0x00000096 System.UInt32 Microsoft.Azure.ObjectAnchors.EnvironmentObservation::get_TriangleIndexCount()
extern void EnvironmentObservation_get_TriangleIndexCount_m90E72533027AE1DBFFDC48910E41911D851134E1 (void);
// 0x00000097 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::GetVertexPositions(System.Numerics.Vector3[])
extern void EnvironmentObservation_GetVertexPositions_mBDE93D73A2FA521B94267943D651819EC8485D30 (void);
// 0x00000098 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::GetVertexNormals(System.Numerics.Vector3[])
extern void EnvironmentObservation_GetVertexNormals_mEA9608DAFF9E4C21AEA040CF19931A77F4702F4E (void);
// 0x00000099 System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation::GetTriangleIndices(System.UInt32[])
extern void EnvironmentObservation_GetTriangleIndices_mB0A612452D723786C27DD63147ABA4E41A2A9E90 (void);
// 0x0000009A System.UInt64 Microsoft.Azure.ObjectAnchors.EnvironmentObservation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void EnvironmentObservation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m33F32350E01EA011EF2081BE056DA927694E2C3A (void);
// 0x0000009B Microsoft.Azure.ObjectAnchors.EnvironmentObservation Microsoft.Azure.ObjectAnchors.EnvironmentObservation::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void EnvironmentObservation_GetOrCreateInstance_mF863D94623D43E1A965C61FB9D2C86E13AFADA4B (void);
// 0x0000009C Microsoft.Azure.ObjectAnchors.EnvironmentObservation Microsoft.Azure.ObjectAnchors.EnvironmentObservation::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void EnvironmentObservation_GetOrCreateInstance_m7150658BF8E3D5730E4150C57A38950D6A4BC04D (void);
// 0x0000009D System.Void Microsoft.Azure.ObjectAnchors.EnvironmentObservation/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_m8F777D7C9AD90787A94001DB37092554F09E5B40 (void);
// 0x0000009E Microsoft.Azure.ObjectAnchors.EnvironmentObservation Microsoft.Azure.ObjectAnchors.EnvironmentObservation/<>c__DisplayClass19_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_mF66096D6E02AAA40058A856E369CAC5E12D4A211 (void);
// 0x0000009F System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m7D89A0C95E1E8DEAAF36173B9F2354EAD557DBEE (void);
// 0x000000A0 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
extern void ObjectAnchorsSession__ctor_m4F5E21C6123E9F24A54C137020BB792175658084 (void);
// 0x000000A1 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
extern void ObjectAnchorsSession_Finalize_m0BEF0F0D4A340BDB6575D920B3C852AD1A6311CA (void);
// 0x000000A2 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
extern void ObjectAnchorsSession_CreateObjectObserver_mE240A006194328B8D2D0609E6AD59B621198A42A (void);
// 0x000000A3 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mF29C0B5A6B6C04EF62B0C9FBCB937779EBF7B5CF (void);
// 0x000000A4 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs__ctor_m53A38792EDBDFA532FB0B834D562F4CA58D1220A (void);
// 0x000000A5 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m0D9105836970556973930E0B9E836AFCA5AACB45 (void);
// 0x000000A6 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
extern void ObjectInstanceChangedEventArgs_Finalize_m5D21BDD860515CD2D507EF79AC2921A18215BF86 (void);
// 0x000000A7 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mEBB37655EBFA70E21F9F023FBFC4E308347280D5 (void);
// 0x000000A8 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_mBC9E09A6D3DA1E17671BA046C9FCB1B51CDCC0D2 (void);
// 0x000000A9 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m2149415DC59374B403FB6CB9658B9DB932DAD154 (void);
// 0x000000AA System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m3721EF429E7FD7518F5B67445D9BF4476D03998F (void);
// 0x000000AB Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m7EF3E59F5B61ABEB813E39C2CD70672525496696 (void);
// 0x000000AC System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstance__ctor_m97F243DFB9A51FA948953CCC84E1D29F506DFF61 (void);
// 0x000000AD System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m5C1D43458FE50771E5F94835F631CA0E9F3CC845 (void);
// 0x000000AE System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
extern void ObjectInstance_Finalize_m702387A13C9D878BD3C0E04D53442A6AE62E232A (void);
// 0x000000AF System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
extern void ObjectInstance_Dispose_m2CDDE48AB6246A8FE9F01B9A98A81BE1A4F4A28B (void);
// 0x000000B0 System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
extern void ObjectInstance_get_ModelId_mEECEAC6A564E533AB9580C380B0B04A1B2129898 (void);
// 0x000000B1 Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
extern void ObjectInstance_get_Mode_mE8F1E58FBE5AB24AB32FCD05ED6FA84DF8C85A38 (void);
// 0x000000B2 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void ObjectInstance_set_Mode_m1EE14002729F919893774B12B4F76DD6428232A7 (void);
// 0x000000B3 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
extern void ObjectInstance_ChangedStaticHandler_m768015677076F1F34E60CB69B989082F360837E8 (void);
// 0x000000B4 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_add_Changed_mF26C5A44EBAB47E27B876DAFCB15CDE598D79704 (void);
// 0x000000B5 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_remove_Changed_m80FFADC0755982687D98620FE23C14AE184D83C8 (void);
// 0x000000B6 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentState()
extern void ObjectInstance_TryGetCurrentState_m557DE4FCC990B65E1BB191F97102623A7AA9F619 (void);
// 0x000000B7 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD38A95319127C03A65E63679CBFAFCE391339DC5 (void);
// 0x000000B8 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_mCDD907F32FDA14CB31AA7C048313066D34489619 (void);
// 0x000000B9 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m78EF14388F086B3108973B813F5E56B1F8EAB0FE (void);
// 0x000000BA System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
extern void ObjectInstance__cctor_m9B0000807115468EEC44080C82FC86D7BB830CAC (void);
// 0x000000BB System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mBE8B61DB89856C22671638BF33CD96C261423E61 (void);
// 0x000000BC Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m8630618D941C446409E57EEC3DAE90C3592B80AC (void);
// 0x000000BD System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceState__ctor_m884F3D80FD6DAF98CA45AB975791977DE7F3CD80 (void);
// 0x000000BE System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE0C78FA634B25A178AA5BE45B60A8B7F84295F9D (void);
// 0x000000BF System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Finalize()
extern void ObjectInstanceState_Finalize_m6C1BF244297CE292B633F515CFB2D8C64861F3E7 (void);
// 0x000000C0 System.DateTimeOffset Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_LastUpdatedTime()
extern void ObjectInstanceState_get_LastUpdatedTime_mEA51DE4B0F5CCCEC0D402286BE4B445AEA44BD67 (void);
// 0x000000C1 System.Single Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_SurfaceCoverage()
extern void ObjectInstanceState_get_SurfaceCoverage_m5B2FE0F03B40FDED5843B6C6E3645FFF37F42B12 (void);
// 0x000000C2 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_Center()
extern void ObjectInstanceState_get_Center_mC5EC038534FA2C6512C766407B9349E27EFDFA8B (void);
// 0x000000C3 System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_ScaleChange()
extern void ObjectInstanceState_get_ScaleChange_m1E3D1561EDDFA878A11DD2BADA51A5D1098A9898 (void);
// 0x000000C4 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.ObjectInstanceState::TryCreatePlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
extern void ObjectInstanceState_TryCreatePlacement_mA900599E948FC7FB8BCC83440064C9BB4A0B43B4 (void);
// 0x000000C5 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDDB66ACC0A814C7C93A4DB6BCCFB8BE50AEF0022 (void);
// 0x000000C6 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_m825552F09882E26DBC3599D56FA59E2C1BABF6C3 (void);
// 0x000000C7 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_mDAC2A4725E2462B69513CB27DDC12964D1845D59 (void);
// 0x000000C8 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_mF332EB725370A360A85C7068EFCE262735873D26 (void);
// 0x000000C9 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_mA36090068CB21F95DEE68F479F62A99FF5EC7CF9 (void);
// 0x000000CA System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
extern void ObjectModel__ctor_m9F873F6EA5C505760A9889BAE47187513A039F10 (void);
// 0x000000CB System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBA9EC665AC32150FAFB304FBBE9529558E91E9EA (void);
// 0x000000CC System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
extern void ObjectModel_Finalize_m10438EADBE22DF8C34E7E5B56C344D63BBC78018 (void);
// 0x000000CD System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
extern void ObjectModel_Dispose_m7D47D489F5ABD5219F889C17ED1584BDD42E1FB6 (void);
// 0x000000CE System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
extern void ObjectModel_get_Id_m4EAA9035F283D9F8AF2C5CF170E78F30FE0F37E4 (void);
// 0x000000CF Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
extern void ObjectModel_get_BoundingBox_m6632F31CD140B8CDDBADF9DB01F2550B17D8C10D (void);
// 0x000000D0 System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
extern void ObjectModel_get_OriginToCenterTransform_m5DA4BBAA8434A9E48BF69D67E8307D493EA483CD (void);
// 0x000000D1 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
extern void ObjectModel_get_VertexCount_mE455D5D3E5DA9864D54E6E47A629AA7FB5F653C7 (void);
// 0x000000D2 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
extern void ObjectModel_get_TriangleIndexCount_m4E91CBBD4825B626150DD11600AFA903CF1725F8 (void);
// 0x000000D3 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexPositions_mB64FD03898D333F621C4FB7D72A6091758720B4D (void);
// 0x000000D4 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexNormals_mC35316E47854F17ECCE23C0325475CA88668D30D (void);
// 0x000000D5 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
extern void ObjectModel_GetTriangleIndices_m4A598DBAD5EBEFB0FE526FA06BC2DAC1CADE7246 (void);
// 0x000000D6 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8C39ACF81309184925C69F45A298F6767C86C2AC (void);
// 0x000000D7 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m85664428BEBAFE9F357C660C96891C12931284F9 (void);
// 0x000000D8 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m9148B70377E0A226AA1184B6100EA25CAB47E7C1 (void);
// 0x000000D9 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.cctor()
extern void ObjectModel__cctor_m472225B61B25E70EA911CB73789E59723C43430D (void);
// 0x000000DA System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_m951D149F0FDA6AB2AE268C5DE7EEAC5DA89A697F (void);
// 0x000000DB Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_m7EAC15B262C2BF34A1DA91F893E39A079DAC88A1 (void);
// 0x000000DC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
extern void ObjectObserver__ctor_m1D39DC88DE382B95E43CA68ACAA026FD370A1BBC (void);
// 0x000000DD System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC81CA1D1AB19D60CA0338584EABC222552BEB8C3 (void);
// 0x000000DE System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
extern void ObjectObserver_Finalize_m70FA9D31331302068206152CA6F3DC08FEC031C4 (void);
// 0x000000DF System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
extern void ObjectObserver_Dispose_m8BAAC872049605C6AE6EF6E4D04C807A072F0F34 (void);
// 0x000000E0 System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
extern void ObjectObserver_IsSupported_mCF1B926893A6365687ABA2217CC9EBD0C9771ACE (void);
// 0x000000E1 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
extern void ObjectObserver_RequestAccessAsync_mAEC48DB70F07B1632F6CE041A0165AC4049D374B (void);
// 0x000000E2 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
extern void ObjectObserver_LoadObjectModelAsync_mAF0A95810A146C8F8C94E14390223A75625DE517 (void);
// 0x000000E3 System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
extern void ObjectObserver_DetectAsync_mFADD149106FFC19AA31697DF87B9B62A6B5E5B26 (void);
// 0x000000E4 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::GetAppDomainUnloadEvents(System.IntPtr&,System.IntPtr&)
extern void ObjectObserver_GetAppDomainUnloadEvents_m4DDCEF2AAFF68EEE8C4959AC6847DB615A4D8359 (void);
// 0x000000E5 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m478695841111927D8BD9AD8AB74708B343B10591 (void);
// 0x000000E6 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mEBBCDE11C9CCCD1949A2125609D0CD69E7819092 (void);
// 0x000000E7 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mB6EF6FFE7A60E4972EFD523AE5A383DFA890895C (void);
// 0x000000E8 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::EnsureAppDomainUnloadHandlingInitialized()
extern void ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_mB70B4244B766B5EFA13F111709B44916D1AE5274 (void);
// 0x000000E9 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.cctor()
extern void ObjectObserver__cctor_mC6FAE7DA7C499602510DA53671707F2771493376 (void);
// 0x000000EA System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::OnAppDomainUnload(System.Object,System.EventArgs)
extern void ObjectObserver_OnAppDomainUnload_m2BC9E18FA1FA06C9DC5C656C5B1DD1E21A4F1C32 (void);
// 0x000000EB System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
extern void U3CU3Ec__cctor_m1509735D45CC9320EA86D2B30722AC7B723D7C6D (void);
// 0x000000EC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
extern void U3CU3Ec__ctor_m59B1D51845C31E4DC220DFD5958F36A3461885EC (void);
// 0x000000ED Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__7_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m288B2FB2643954985C4A8C0A0CD0EBBF25840D9A (void);
// 0x000000EE Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<LoadObjectModelAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m2FA757DA194E773926667BB9072E86F59ADC537C (void);
// 0x000000EF System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m071AC3CC39BEBB040FDC75C5E087F1D5DDC3CB6C (void);
// 0x000000F0 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_1(System.IntPtr)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_1_m1357D2A84AA1AE7E308A6EB7D5D17D0479289EE9 (void);
// 0x000000F1 System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_2(Microsoft.Azure.ObjectAnchors.ObjectQuery)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m93674304C4B6B10310151EA69915CD565D401CB4 (void);
// 0x000000F2 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::MoveNext()
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_mE49E2A8C498AB1F1734842E8660A74A75ADD07F9 (void);
// 0x000000F3 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m64305CAF773555ADC633FAA3E4A00B4425FD3AF7 (void);
// 0x000000F4 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::MoveNext()
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFB4E3F53A2ECFC8B71689A2A2E9786FD72D95AC1 (void);
// 0x000000F5 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m6EF59420DF1DA3F513170C3A3B04204235C6EAF7 (void);
// 0x000000F6 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::MoveNext()
extern void U3CDetectAsyncU3Ed__10_MoveNext_m5471342B17F656F9C368F6987C25CAC34A018152 (void);
// 0x000000F7 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_mC20E18C156C1135AE271FCE0352AEECEBFD78911 (void);
// 0x000000F8 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m1A5092FF8FE552C5BEF4E93903404840A1E87B7E (void);
// 0x000000F9 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m46DB3539A466FBD06B0660CB83BDD7F2D9333D1F (void);
// 0x000000FA System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mB040466CCC1C418C8BBF9F63EE412C0C69726A3F (void);
// 0x000000FB System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
extern void ObjectQuery__ctor_m90FBF4D93B4B3B1E5056B3754D55703B6E6DC792 (void);
// 0x000000FC System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
extern void ObjectQuery__ctor_mB258311D83E5B996EB1BC92500EFDF6A122154A1 (void);
// 0x000000FD System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
extern void ObjectQuery_Finalize_mD55E7C913B2FBE955EA4F3B256B21A940A9912B8 (void);
// 0x000000FE System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
extern void ObjectQuery_Dispose_m0C172BF52A4032F164EA5D8CA89818B0DD035C9F (void);
// 0x000000FF System.Single Microsoft.Azure.ObjectAnchors.ObjectQuery::get_MinSurfaceCoverage()
extern void ObjectQuery_get_MinSurfaceCoverage_mFEC7FC7F38F14A7DEEEBF7601D6F09F680245893 (void);
// 0x00000100 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::set_MinSurfaceCoverage(System.Single)
extern void ObjectQuery_set_MinSurfaceCoverage_mE2FDBDA373EF86D5E2781351D115CF14A861E886 (void);
// 0x00000101 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::set_IsExpectedToBeStandingOnGroundPlane(System.Boolean)
extern void ObjectQuery_set_IsExpectedToBeStandingOnGroundPlane_m6429AE24BA5149C0C91B2171708E36C796C27314 (void);
// 0x00000102 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::set_ExpectedMaxVerticalOrientationInDegrees(System.Single)
extern void ObjectQuery_set_ExpectedMaxVerticalOrientationInDegrees_m68DDC22B4FE3A94AFBED26D2131CF7BA1286B7D0 (void);
// 0x00000103 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::set_MaxScaleChange(System.Single)
extern void ObjectQuery_set_MaxScaleChange_m2736562D43BEE6329E1CE6B7C94848C3AD43546C (void);
// 0x00000104 System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectSearchArea> Microsoft.Azure.ObjectAnchors.ObjectQuery::get_SearchAreas()
extern void ObjectQuery_get_SearchAreas_mFC8875424E5DF292463E72E50EE8CA94BC64BD9A (void);
// 0x00000105 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.EnvironmentObservation> Microsoft.Azure.ObjectAnchors.ObjectQuery::ComputeLatestEnvironmentObservationAsync(Microsoft.Azure.ObjectAnchors.EnvironmentObservationTopology)
extern void ObjectQuery_ComputeLatestEnvironmentObservationAsync_mAFBA3C652631463408ABE71482A2A958F2A3C6F5 (void);
// 0x00000106 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC7D859DF5CCEFF6AD6B5BB0ED8F03511BD712DB3 (void);
// 0x00000107 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.cctor()
extern void ObjectQuery__cctor_m073D4E5B49A85FBC8C38C2AD0DE19DA38BDB16D7 (void);
// 0x00000108 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery/<>c::.cctor()
extern void U3CU3Ec__cctor_m1181BFDCACE659A0F0187E07E36D037152866EDE (void);
// 0x00000109 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery/<>c::.ctor()
extern void U3CU3Ec__ctor_m765CA6216D1A9B77A38883CC81727AF7E731775E (void);
// 0x0000010A Microsoft.Azure.ObjectAnchors.EnvironmentObservation Microsoft.Azure.ObjectAnchors.ObjectQuery/<>c::<ComputeLatestEnvironmentObservationAsync>b__23_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CComputeLatestEnvironmentObservationAsyncU3Eb__23_0_m8ED272DA721A5E81056C7CD8135D544F5209C73C (void);
// 0x0000010B System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery/<ComputeLatestEnvironmentObservationAsync>d__23::MoveNext()
extern void U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_MoveNext_mCC470B999702F034AC27D60C9C10994EC6C8ACBB (void);
// 0x0000010C System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery/<ComputeLatestEnvironmentObservationAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_SetStateMachine_m9621CDBFAA28A5F5BE42CB090C81252FB4512F22 (void);
// 0x0000010D System.Void Microsoft.Azure.ObjectAnchors.ObjectSearchArea::.ctor(System.IntPtr,System.Boolean)
extern void ObjectSearchArea__ctor_m0495968FA87F13126A8215D8C4092DEE3D42048E (void);
// 0x0000010E System.Void Microsoft.Azure.ObjectAnchors.ObjectSearchArea::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectSearchArea_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC3B37E465B8ACCC2654A0A434A5B362B50A3952A (void);
// 0x0000010F System.Void Microsoft.Azure.ObjectAnchors.ObjectSearchArea::Finalize()
extern void ObjectSearchArea_Finalize_mA13667C34E7A83B6D54371ECDDCC9E4AF7C66E79 (void);
// 0x00000110 Microsoft.Azure.ObjectAnchors.ObjectSearchArea Microsoft.Azure.ObjectAnchors.ObjectSearchArea::FromOrientedBox(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox)
extern void ObjectSearchArea_FromOrientedBox_mC719BD0B3732C45B5ABB56EBCB75361A4A2559C9 (void);
// 0x00000111 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectSearchArea::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectSearchArea_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDD6413214693CA5DDDEA3AC613E18F12EF3E4338 (void);
// 0x00000112 Microsoft.Azure.ObjectAnchors.ObjectSearchArea Microsoft.Azure.ObjectAnchors.ObjectSearchArea::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectSearchArea_GetOrCreateInstance_m6D09A156D92920B9F0287E48247185BF06BBB91A (void);
// 0x00000113 Microsoft.Azure.ObjectAnchors.ObjectSearchArea Microsoft.Azure.ObjectAnchors.ObjectSearchArea::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectSearchArea_GetOrCreateInstance_mFE77B8C6FBFEF93BA1EC1BCB1D3CCC6439497F32 (void);
// 0x00000114 System.Void Microsoft.Azure.ObjectAnchors.ObjectSearchArea/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m86B47D6314A0BC7A7D0087DB4350C38AB9E2E217 (void);
// 0x00000115 Microsoft.Azure.ObjectAnchors.ObjectSearchArea Microsoft.Azure.ObjectAnchors.ObjectSearchArea/<>c__DisplayClass12_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_m8B421E3AD90D2FB63DC88C490823D0DDC501BFC2 (void);
// 0x00000116 System.Collections.Generic.List`1<T> Microsoft.Azure.ObjectAnchors.PackedValue::UnpackPtrs(Microsoft.Azure.ObjectAnchors.PackedValue,System.Func`2<System.IntPtr,T>,System.Boolean)
// 0x00000117 System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::op_Implicit(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void PackedValue_op_Implicit_m750DEA68D57A3071791C1EC103CE6E43838D145A (void);
// 0x00000118 System.Void Microsoft.Azure.ObjectAnchors.PackedValue::.cctor()
extern void PackedValue__cctor_m4A0F3B3CD8D5F8738803D267270FCF63424B444D (void);
// 0x00000119 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void PromiseBase__ctor_m583ED4AD3A9EE01E66CE2035725C550D6BBE5927 (void);
// 0x0000011A System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Finalize()
extern void PromiseBase_Finalize_m63E4AF99DBCCC1B02C5ACD5077E79B5287A4C6F5 (void);
// 0x0000011B System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose()
extern void PromiseBase_Dispose_m723FD9261967C2EDB135ECFEFF937534CD3FA2A7 (void);
// 0x0000011C System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean)
extern void PromiseBase_Dispose_mC6E64F24501C2DFDC0AD3388051A081931264893 (void);
// 0x0000011D System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressHandler(System.Single)
extern void PromiseBase_OnProgressHandler_mB538008FB78822414B0B23A98B6D161286A9ED98 (void);
// 0x0000011E System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorHandler(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorHandler_m463F26EBBFB1CD275B81261AF1225854F4A79741 (void);
// 0x0000011F System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCanceledHandler()
// 0x00000120 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnExceptionHandler(System.Exception)
// 0x00000121 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x00000122 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteThunk(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void PromiseBase_OnCompleteThunk_mCF6245E58C658DC816AC7D4E72DB100EFFBDDC76 (void);
// 0x00000123 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorThunk(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorThunk_m05A83FEACEE22FCB7369E76279D31BB1B8F5B33E (void);
// 0x00000124 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressThunk(System.IntPtr,System.Single)
extern void PromiseBase_OnProgressThunk_m206F1885BD06E15F0B0B530C501329CB24FACF47 (void);
// 0x00000125 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.cctor()
extern void PromiseBase__cctor_m604B5E4367FB4B79CF0FE6F6BDBF2BFCECDD9B46 (void);
// 0x00000126 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::<.ctor>b__7_0()
extern void PromiseBase_U3C_ctorU3Eb__7_0_m348CA9B622F2FD77AEF9D7DFE5348AEB371C0ADE (void);
// 0x00000127 System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::get_Task()
// 0x00000128 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::.ctor(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T>,System.Action`1<System.Single>,System.Threading.CancellationToken)
// 0x00000129 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnExceptionHandler(System.Exception)
// 0x0000012A System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCanceledHandler()
// 0x0000012B System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x0000012C System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::.ctor()
// 0x0000012D System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::<OnCompleteHandler>b__0(System.Object)
// 0x0000012E System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Promise::get_Task()
extern void Promise_get_Task_m952BE01F65418A352FFE59F36B43ED1D78D55F50 (void);
// 0x0000012F System.Void Microsoft.Azure.ObjectAnchors.Promise::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void Promise__ctor_mF0D7EA17AE3A858D3320BA578546106FC7D73037 (void);
// 0x00000130 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnExceptionHandler(System.Exception)
extern void Promise_OnExceptionHandler_mD206C4BE6165EDB5362F28BBA3A2A35D6BC210C0 (void);
// 0x00000131 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCanceledHandler()
extern void Promise_OnCanceledHandler_m1297D6E79B5A4EF5BE94232D75460AB854CCC664 (void);
// 0x00000132 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void Promise_OnCompleteHandler_mC32CA6F7B34BA74EBE2D3831690ECECD77F59A3E (void);
// 0x00000133 Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Promise::Create(System.Threading.CancellationToken)
extern void Promise_Create_m4BFE93A14719CFE1ECD60F6BF6ED42A28F02D8B5 (void);
// 0x00000134 Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
// 0x00000135 System.Void Microsoft.Azure.ObjectAnchors.Promise::<OnCompleteHandler>b__6_0(System.Object)
extern void Promise_U3COnCompleteHandlerU3Eb__6_0_m0641579A39EA93603AB658CDBF31A7B47DD0D76E (void);
// 0x00000136 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_complete__ctor_m311FDCAC93C0BB2746D37D31D5CDD2316A38BF60 (void);
// 0x00000137 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::Invoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void aoa_promise_on_complete_Invoke_m3751C7F3A0B7BCB365F9F84EAAA262F8BD1F2F4E (void);
// 0x00000138 System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::BeginInvoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&,System.AsyncCallback,System.Object)
extern void aoa_promise_on_complete_BeginInvoke_m1BDCBF04D4F2E25813B28720A83D1EC5D0F4B5D6 (void);
// 0x00000139 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::EndInvoke(Microsoft.Azure.ObjectAnchors.PackedValue&,System.IAsyncResult)
extern void aoa_promise_on_complete_EndInvoke_mCA08A4F491E9833F752D5A4B08B9061F76303868 (void);
// 0x0000013A System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_error__ctor_m14D8013DBB5EE7877A9ECA972BE328E86ED4023C (void);
// 0x0000013B System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::Invoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void aoa_promise_on_error_Invoke_m5BE810F1C47E8A818EAA722B4F068ADB50276974 (void);
// 0x0000013C System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::BeginInvoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status,System.AsyncCallback,System.Object)
extern void aoa_promise_on_error_BeginInvoke_m4AE63E77A3DE4215409665C55B272293471B6329 (void);
// 0x0000013D System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::EndInvoke(System.IAsyncResult)
extern void aoa_promise_on_error_EndInvoke_m7B0DA7D9F8E624D6D22D0CF16A04E15A164757B3 (void);
// 0x0000013E System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_progress__ctor_m8BBA6667C3781B1D8641804443DF2B06B70D3933 (void);
// 0x0000013F System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::Invoke(System.IntPtr,System.Single)
extern void aoa_promise_on_progress_Invoke_m66686EE4B32F18D0042E57A664C87EFF07476041 (void);
// 0x00000140 System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::BeginInvoke(System.IntPtr,System.Single,System.AsyncCallback,System.Object)
extern void aoa_promise_on_progress_BeginInvoke_mB7BBFD9F67CDE5B2B60CADD04D9EE8BDDD856C36 (void);
// 0x00000141 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::EndInvoke(System.IAsyncResult)
extern void aoa_promise_on_progress_EndInvoke_mF88AC09B25629B2671B0E78439EAE76806DA857B (void);
// 0x00000142 System.Void Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::.ctor()
extern void PromiseSafeHandle__ctor_m3AC12A8F0B4ADF88C3F2AD1E94C69FC6770A40F5 (void);
// 0x00000143 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::get_IsInvalid()
extern void PromiseSafeHandle_get_IsInvalid_mB0898C9E03D9C9D94EEBDE45D516169BFA695A6B (void);
// 0x00000144 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::ReleaseHandle()
extern void PromiseSafeHandle_ReleaseHandle_m7B29B223D88C68334AC59498BE1CD1EE719021E8 (void);
// 0x00000145 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_close_async_mFAF5CD22E931CB809F735D9F88DB375115328005 (void);
// 0x00000146 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
extern void NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m573ED6CE97E9FFDC79BEAE9EED61EBBB149E61A4 (void);
// 0x00000147 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_diagnostics_session_release_mC758686D57A92AF3C750CAAAD6B4790DFB5AC247 (void);
// 0x00000148 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_mB54DCFDEE5F2F6D23FC011D0B105B2D4C7D16D2E (void);
// 0x00000149 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m334BCEF5601434DEB2D2690D2827F0640423BBE4 (void);
// 0x0000014A System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
extern void ObjectDiagnosticsSession__ctor_mA468F33F07EEE169668DE786D0BB52C63C06EBA2 (void);
// 0x0000014B System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
extern void ObjectDiagnosticsSession_Finalize_m791C058A6074B0B7823106B79926B76FC2DEBAC9 (void);
// 0x0000014C System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
extern void ObjectDiagnosticsSession_CloseAsync_m73A78F1F776D3EC173370CB36359A732EF19792C (void);
// 0x0000014D System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
extern void ObjectDiagnosticsSession_UploadDiagnosticsAsync_m0E743AF20FFAC9E58A3950037F059C6DE0FF36E7 (void);
// 0x0000014E System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m75FBC2C61652B43293ADCD214CC9BA4CF58D89CE (void);
// 0x0000014F System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.cctor()
extern void ObjectDiagnosticsSession__cctor_m51882F612C9ADE4ED55646A4864D5F130AA1560E (void);
// 0x00000150 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::MoveNext()
extern void U3CCloseAsyncU3Ed__8_MoveNext_mEA91EF3266CB17EF81D3D374B70515CDB07AF48B (void);
// 0x00000151 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_m2F353814F9845536F258EB42C2D505559300F086 (void);
// 0x00000152 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.cctor()
extern void U3CU3Ec__cctor_mAA2C3624C1FEAAB9EC7A84C6461DE9AFA898091E (void);
// 0x00000153 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.ctor()
extern void U3CU3Ec__ctor_m2195E17656F2F63445864741F5E391310B25FB31 (void);
// 0x00000154 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<UploadDiagnosticsAsync>b__9_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_mFF22516054EA997186E14F667804DDEBA00A1868 (void);
// 0x00000155 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::MoveNext()
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_m54E793B6787866C5B7510A586EC1B035E05C1827 (void);
// 0x00000156 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m7A153DD4D5979B2289585844270934649ADA7EA3 (void);
// 0x00000157 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_addref(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_addref_mA68CC1F79916869BCEAD47419F05070ADB93D8DD (void);
// 0x00000158 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_compute_origin_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
extern void NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_m3A30FC6B4B72111C7569F55C6FF0A8E04C997B5C (void);
// 0x00000159 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_get_control_points(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]&,System.Int32&)
extern void NativeLibrary_aoa_spatial_graph_placement_get_control_points_m8901367C82BBA805AFC8B800C3CDF4087C030D36 (void);
// 0x0000015A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_release(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_release_m533A8BC897DE68E2B1925465C7ED8F81DBA73584 (void);
// 0x0000015B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_create(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_spatial_graph_placement_try_create_mE886EA3E66739BB82635B1D839922A33106F4EE4 (void);
// 0x0000015C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_persist_static_nodes_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m2732022EE9CCC038D7713A5FCAB315EAEEEC0A73 (void);
// 0x0000015D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_unpersist_static_nodes_async(System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m53766107CBFB00459D1FF3506A5C6693B9EB8C58 (void);
// 0x0000015E System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.ctor(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement__ctor_m310A41FA8A0163188DAE8AD1777FD523670942E0 (void);
// 0x0000015F System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mB037A18437D4023E85FB6B774312F1E3EE2D1DD2 (void);
// 0x00000160 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Finalize()
extern void SpatialGraphPlacement_Finalize_m8B7FDEA6C1C22B3919F4F0869ADFCBDF38BE80E6 (void);
// 0x00000161 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::ComputeOriginForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
extern void SpatialGraphPlacement_ComputeOriginForView_m22B22CA53322CC566B9985BF96BFF2C533B8389A (void);
// 0x00000162 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryCreate(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[])
extern void SpatialGraphPlacement_TryCreate_m8E809239A694D2D1B1A30626CC2B6B267826832F (void);
// 0x00000163 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[] Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetControlPoints()
extern void SpatialGraphPlacement_GetControlPoints_mB56D8BA3B20C1568FABD121FA28E0D09C2D2B6E8 (void);
// 0x00000164 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryPersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_TryPersistStaticNodesAsync_mAA321EB3EF7E342C3F57061607FBF9BA4089A135 (void);
// 0x00000165 System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::UnpersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_UnpersistStaticNodesAsync_mAC87C9B65F03A832608832470048A5B4437DBDC1 (void);
// 0x00000166 System.UInt64 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m15654E86B8F6442380D1969DBBD7500377F2ABDA (void);
// 0x00000167 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_m6239F06BC3A34134A4FBB2D6C6E605A628F5A570 (void);
// 0x00000168 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_m357EB17F1E3CF5BA2BD36502BBD3CD01D8AB4C59 (void);
// 0x00000169 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.cctor()
extern void SpatialGraphPlacement__cctor_m4335E7AA7F71BED9DD49759C2008EB27BD51843A (void);
// 0x0000016A System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.cctor()
extern void U3CU3Ec__cctor_m1B19D8660797C75A5B2ADF02E1A903880F59B870 (void);
// 0x0000016B System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.ctor()
extern void U3CU3Ec__ctor_m4DF8B07279FC6FC9D4037DEF3672BBA3C0878C44 (void);
// 0x0000016C System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<TryPersistStaticNodesAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m6D51A810A143B2CE4905C98704B102FD535855C0 (void);
// 0x0000016D System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::MoveNext()
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_mDBA0AB567FA6C89DF46A1131859146AD87BC195C (void);
// 0x0000016E System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m74E4867C61263D5D61027508325466B44444D04A (void);
// 0x0000016F System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::MoveNext()
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_m53C43E98B350D778998B206753DD54E6203F2374 (void);
// 0x00000170 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m8B2D92224EBFDF6E40B8EF93F664524C60940FFB (void);
// 0x00000171 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m21D77765E3F6371CBDB46F719089F5A0457DE2EE (void);
// 0x00000172 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_m36396C24AE17479F09E82D5A56D2F264802F5A38 (void);
static Il2CppMethodPointer s_methodPointers[370] = 
{
	NativeLibraryHelpers_CheckStatus_m6BA519E7E8EB399177467B8A6640BF2F40466815,
	NativeLibraryHelpers_CheckStatus_m6FCA6DF4B45D2757A3DD8F4347C961983E375504,
	ProjectedObjectHelpers_ConvertHandleToCookie_m23E707E2A6C9B0490800D596ACA769575D0BA861,
	ProjectedObjectHelpers_ConvertCookieToHandle_m89F2E21F13496DEEC105A1FE9971319A8EB4D2D3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ProjectedObjectEventHandlerCache_Clear_mCA4EAC3F1309564F5230D7A5999D04924219E46E,
	ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mDC323D6EDBA1BCC23812EC8BFF10E2FC9C027767,
	ProjectedObjectEventHandlerCache__cctor_mBA8F521624E7274498B6CAE124E583F1111C9340,
	ProjectedObjectCache__cctor_mE47A9146F9F1C97192A5A3524387222501F5CAEC,
	ProjectedObjectCache_Add_m5C88E3E81DF096FE7C2F9679890715CC8682BBD9,
	NULL,
	ProjectedObjectCache_Remove_m69527A7888442795D48F00393B5DBBB9ADAC5A25,
	ProjectedObjectCache_ProjectedObjectCleanupHandler_m0AD929565B8F19CB566C3E4F4E81BEC898D04DA5,
	ObjectInstanceChangedHandlerNative__ctor_mFF70706FC3444110063F974CF8C3B02A10874D5C,
	ObjectInstanceChangedHandlerNative_Invoke_mD92C60CE5C0C388D597B72E80EE513C34839949F,
	ObjectInstanceChangedHandlerNative_BeginInvoke_mB6EE080EA26BD9F081AF870C894668A50B0888EC,
	ObjectInstanceChangedHandlerNative_EndInvoke_mE2077E270E2153DC1F9F5D59D7F9533ECD03C23F,
	ProjectedObjectCleanupNative__ctor_m178026387406C36FD692DC30AEA03E251BE9552E,
	ProjectedObjectCleanupNative_Invoke_mDE545F266A6DA519CB7D1E96FB2329AD8E27D9E7,
	ProjectedObjectCleanupNative_BeginInvoke_m04B492FEE334F5A8A85201676DA27511CFF9E8F1,
	ProjectedObjectCleanupNative_EndInvoke_mC45BEA4D7B490365991507BE187EFA0D1C5E645B,
	NativeLibrary_PromiseCreate_mA950D22BCEAC948FEB70EA2240BB0EB0EC2C7E54,
	NativeLibrary_PromiseCancel_m963DCB56F7B6E7C22F25D20F79B7EC6BE1E8BEF0,
	NativeLibrary_PromiseDestroy_m6E18F817DE19CDA01ED8070D176BDB4CBC6A7B9C,
	NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m1F5D90EC3085BD79D3CE8C439B5683FD04201D55,
	NativeLibrary_aoa_account_information_release_m9599DB65B93CC65D953CA183E5C37DCC10747724,
	NativeLibrary_aoa_environment_observation_addref_mF0C7BCB94AD50C0D3EDC07800A4A4166149A0D33,
	NativeLibrary_aoa_environment_observation_get_origin_m6B23B209F315138B1A1241D279FA5B9035FB949B,
	NativeLibrary_aoa_environment_observation_get_triangle_index_count_m9998BA14071DA070C519F46438F0CD677050DA3B,
	NativeLibrary_aoa_environment_observation_get_triangle_indices_mC0531DADCFF6101CD3CBB81A1FDF543B4D111BCB,
	NativeLibrary_aoa_environment_observation_get_vertex_count_mB50C81BBAB18807161DAA23202763E980B7F8DE7,
	NativeLibrary_aoa_environment_observation_get_vertex_normals_mF3E01FBD66CF0F1E833981F8369A986F9057827C,
	NativeLibrary_aoa_environment_observation_get_vertex_positions_m5EF955472744479756DE2B37CBE37E72D003F3ED,
	NativeLibrary_aoa_environment_observation_release_mC1C1F24D4F047BAFCB498E4746947002B61E8B15,
	NativeLibrary_aoa_get_error_details_m17A7B7119B22FE2E0D1903F6B20B646CFC4D4A69,
	NativeLibrary_aoa_ilist_object_search_area_addref_m0545FC7A947F1FF155ECF752315C396D06EBCCB6,
	NativeLibrary_aoa_ilist_object_search_area_get_count_m4AD59AB5419E63DE963410FDC9C0FEC35D0ED7AB,
	NativeLibrary_aoa_ilist_object_search_area_get_item_m8FDDF10F8EADD22B846238A28A8EF256340ECC07,
	NativeLibrary_aoa_ilist_object_search_area_release_m1CA370C923593E4BDE5E9AFD55A484C84AAE54FB,
	NativeLibrary_aoa_ilist_object_search_area_remove_item_m72983356B7590102BFDF63C65ACD73041AB005A7,
	NativeLibrary_aoa_ilist_object_search_area_set_item_m5B1CE1A499C42F983B0EE7B7A165D4004E641713,
	NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m33670F46744C67231DD007085275FDDBC375DDBD,
	NativeLibrary_aoa_object_anchors_session_create_object_observer_m00018C603424EA9C7224AE886859086C62C945D3,
	NativeLibrary_aoa_object_anchors_session_release_m943270C46989658E11FB92AFF30CDA5D63F91532,
	NativeLibrary_aoa_object_instance_addref_m0BDD112429392C6983BF5EF560440995D194BEBA,
	NativeLibrary_aoa_object_instance_changed_event_args_addref_m49C59CC1D5C72BE293F6B116C669D238D699BFE5,
	NativeLibrary_aoa_object_instance_changed_event_args_release_mE724F717FDDCE89A36B826F6A1CD1250EAC4BA0F,
	NativeLibrary_aoa_object_instance_dispose_m2BCA1FBF81D38BD270BD9FC1E88461BE83B93995,
	NativeLibrary_aoa_object_instance_get_mode_mB1FA97401DC3EF37C2C85C9B76FCF1843E32A9C0,
	NativeLibrary_aoa_object_instance_get_model_id_mF16267852BED55E15C8B0BC05BFC4A305C2EEA7F,
	NativeLibrary_aoa_object_instance_release_m11C505914B94742F125A3151A7A1B6603EB1F3D5,
	NativeLibrary_aoa_object_instance_set_changed_m047D791A5F98D34B1FE13F93FCC6ED5F0D233227,
	NativeLibrary_aoa_object_instance_set_mode_m1198C442214B9CB3E9174B26D6392974BAB62B1E,
	NativeLibrary_aoa_object_instance_state_addref_m6C6A7D1D700A0804C87D4689486E1910D5CAEB52,
	NativeLibrary_aoa_object_instance_state_get_center_mE7D6E04D2EED565533A137CFB73F4014167874CD,
	NativeLibrary_aoa_object_instance_state_get_last_updated_time_m42FD058C4E5B2E032F713D0C99AF6940AF49738A,
	NativeLibrary_aoa_object_instance_state_get_scale_change_m4E455F467979E89FBDE7DC74A3B2298E6F41019A,
	NativeLibrary_aoa_object_instance_state_get_surface_coverage_m1B00A520ECC79760E410B4D72BCF3EBD4FFCE19A,
	NativeLibrary_aoa_object_instance_state_release_mEC80A6103294F46A1E4BCEFCA869459DF48ABBDB,
	NativeLibrary_aoa_object_instance_state_try_create_placement_mA9541DCAAC67713583922B67F1511C15FF03431C,
	NativeLibrary_aoa_object_instance_try_get_current_state_mAF36366BADAB96D95834ED87C061B0A744763385,
	NativeLibrary_aoa_object_model_addref_mD4CCB5261BC6C16E227C29DEDFE5FAB9A29A9125,
	NativeLibrary_aoa_object_model_dispose_m39EC8239BBD436544E58D92728ED22FE70035D1D,
	NativeLibrary_aoa_object_model_get_bounding_box_mBA70795A5EB75A1FFF9E16E91BCB13CD8A126D7F,
	NativeLibrary_aoa_object_model_get_id_m47CC9D56359FD0C786C811805C6F848F740FD025,
	NativeLibrary_aoa_object_model_get_origin_to_center_transform_m0C0235B9D60C79DAD55AB7DCF970D9B16E502286,
	NativeLibrary_aoa_object_model_get_triangle_index_count_m7DB3850A6EC3EF150D76E1C73D289FD8428DC7E2,
	NativeLibrary_aoa_object_model_get_triangle_indices_m163D524CAF734A6C29962C07BB4E7FA5C814FD2E,
	NativeLibrary_aoa_object_model_get_vertex_count_mB5D9611A15438393A555E8C94B720AEDFE4C01F6,
	NativeLibrary_aoa_object_model_get_vertex_normals_mBA3FA03D2E003E8A44337195EDF134D6EA214AC1,
	NativeLibrary_aoa_object_model_get_vertex_positions_m6659ED49033EE67A72C2CBAB9C6E778BEA01A8C0,
	NativeLibrary_aoa_object_model_release_m5F198110CF46F239C44C4C7555F5C5C95A126A3D,
	NativeLibrary_aoa_object_observer_addref_m58627BBAF6A1D60909CBF73056CBFCE30E5AD252,
	NativeLibrary_aoa_object_observer_detect_async_queries_mCAD06940C256DF1F79544BA03E2E42551B57C1E8,
	NativeLibrary_aoa_object_observer_dispose_mBAC7A1F4ECACB65EF621CAB08C6E3545CCE2E646,
	NativeLibrary_aoa_object_observer_get_app_domain_unload_events_m2256B08FD3EBEF6FEFFAB0689F232D5C26EF4D63,
	NativeLibrary_aoa_object_observer_is_supported_m5EA59693F8055CD7D3481DDA2C4ED82C33F17C21,
	NativeLibrary_aoa_object_observer_load_object_model_async_mB413B59038FABC4090E94000AE8AE29D4A0BD253,
	NativeLibrary_aoa_object_observer_release_mB8571CB026DCDD8AF6F43F0C60B62CB7745A4F2D,
	NativeLibrary_aoa_object_observer_request_access_async_mE35AF5CCF1355122ABE7034EC1FC7A963EA6C7A4,
	NativeLibrary_aoa_object_query_compute_latest_environment_observation_async_environment_observation_topology_topology_mA0E7D7D631A62B2ACACE0934FD65D984029E344E,
	NativeLibrary_aoa_object_query_create_object_model_model_m0A5849766AEA65E2190616FCF54C281B10929948,
	NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m9876807D48B7B4FB8663DA2F7E026DDEF420FA17,
	NativeLibrary_aoa_object_query_dispose_mF106EC47BC9E2BA0A2C122998C163D74B5767FD6,
	NativeLibrary_aoa_object_query_get_min_surface_coverage_m1AEBC20B8C2140B1AE9F9A9810F491C061EEBD43,
	NativeLibrary_aoa_object_query_get_search_areas_mE2606EDAAA03BA40F416640DF0E564F319406E98,
	NativeLibrary_aoa_object_query_release_m7CA33FB7F9851C7DDC0CE4D0AAB42BDF3EB18287,
	NativeLibrary_aoa_object_query_set_expected_max_vertical_orientation_in_degrees_mA0C3C17047F2146C4E0C7F6D81D3A236974DA026,
	NativeLibrary_aoa_object_query_set_is_expected_to_be_standing_on_ground_plane_m2715C346BDB0352497B4DAAE3287D638CAC1DA9A,
	NativeLibrary_aoa_object_query_set_max_scale_change_m8D294E5283A7392C8784B1291A2EB4894516903D,
	NativeLibrary_aoa_object_query_set_min_surface_coverage_m31C17C496BAB2B490DCF239D3D81CC9ABD5DCAE8,
	NativeLibrary_aoa_object_search_area_addref_m721A43BC3AB9C789886F22961F0339C48B8DEBB4,
	NativeLibrary_aoa_object_search_area_from_oriented_box_mEC3A59EE08CE1F0C4A9F68D1D3E84EDCCA9CB724,
	NativeLibrary_aoa_object_search_area_release_m5E20196AA888729A50CA06A4DCB2CD78DB637135,
	NativeLibrary_aoa_set_projected_object_cleanup_m510BB558E0A00C19CEA56F936DEDEF9AB62F7E5E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IList_ObjectSearchArea__ctor_m6BEF3923CFE917857B7BE97D2636E79255DD747B,
	IList_ObjectSearchArea_Finalize_mC01A4380EA731F7784843FB208FBBE93BCE8CE1B,
	IList_ObjectSearchArea_InternalGetCount_mBC23DAA290FE861A2C5E55EFB77B1A228D2FEE15,
	IList_ObjectSearchArea_InternalGetItem_m1F4AE5C63548635D98DAD8E3E99A8F3D3CEFFA47,
	IList_ObjectSearchArea_InternalSetItem_mA1F1ADDA981181FA9584EB5BC23D8E4DD5D951CD,
	IList_ObjectSearchArea_InternalRemoveItem_mFE3808543666474388D5D4AEEFDF3E5D165950B7,
	ObjectInstanceChangedHandler__ctor_m8EBAEC3E4B36DF22DD1EABE4819657D45C7D89D6,
	ObjectInstanceChangedHandler_Invoke_m9FDB00DA8AA7506344F80139298AF72D98026301,
	ObjectInstanceChangedHandler_BeginInvoke_m1207AC5F822D4ED46F76CB15A9D59A86446931C1,
	ObjectInstanceChangedHandler_EndInvoke_m16E6483B15C3161D6741A76B7859A36357A5A13D,
	AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE179AC8BCB8479F49A6F89D6A6E26117F67734E6,
	AccountInformation__ctor_m4FBBE51E4B7F629224B23A696993288744F541D4,
	AccountInformation_Finalize_m228E5210CB2FCB6AD8D40F4C326755B076826B66,
	AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mCDAAE377FA539C4AB4988448D1F4D07BDAF9DE01,
	EnvironmentObservation__ctor_m9878F21B21397538A760043701F04084AA12F556,
	EnvironmentObservation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m4F3F283ABA69089AADBE660BBCC20BDA1A6EA824,
	EnvironmentObservation_Finalize_mF2460CC50BCD8DAF5A9238D038ADA736E6F6F815,
	EnvironmentObservation_get_Origin_mB5A490D4AB952D9D1E938DFD3F4AD71839E07B01,
	EnvironmentObservation_get_VertexCount_m55A59380D9732EA27125D4C3790507C0860B646F,
	EnvironmentObservation_get_TriangleIndexCount_m90E72533027AE1DBFFDC48910E41911D851134E1,
	EnvironmentObservation_GetVertexPositions_mBDE93D73A2FA521B94267943D651819EC8485D30,
	EnvironmentObservation_GetVertexNormals_mEA9608DAFF9E4C21AEA040CF19931A77F4702F4E,
	EnvironmentObservation_GetTriangleIndices_mB0A612452D723786C27DD63147ABA4E41A2A9E90,
	EnvironmentObservation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m33F32350E01EA011EF2081BE056DA927694E2C3A,
	EnvironmentObservation_GetOrCreateInstance_mF863D94623D43E1A965C61FB9D2C86E13AFADA4B,
	EnvironmentObservation_GetOrCreateInstance_m7150658BF8E3D5730E4150C57A38950D6A4BC04D,
	U3CU3Ec__DisplayClass19_0__ctor_m8F777D7C9AD90787A94001DB37092554F09E5B40,
	U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_mF66096D6E02AAA40058A856E369CAC5E12D4A211,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m7D89A0C95E1E8DEAAF36173B9F2354EAD557DBEE,
	ObjectAnchorsSession__ctor_m4F5E21C6123E9F24A54C137020BB792175658084,
	ObjectAnchorsSession_Finalize_m0BEF0F0D4A340BDB6575D920B3C852AD1A6311CA,
	ObjectAnchorsSession_CreateObjectObserver_mE240A006194328B8D2D0609E6AD59B621198A42A,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mF29C0B5A6B6C04EF62B0C9FBCB937779EBF7B5CF,
	ObjectInstanceChangedEventArgs__ctor_m53A38792EDBDFA532FB0B834D562F4CA58D1220A,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m0D9105836970556973930E0B9E836AFCA5AACB45,
	ObjectInstanceChangedEventArgs_Finalize_m5D21BDD860515CD2D507EF79AC2921A18215BF86,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mEBB37655EBFA70E21F9F023FBFC4E308347280D5,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_mBC9E09A6D3DA1E17671BA046C9FCB1B51CDCC0D2,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m2149415DC59374B403FB6CB9658B9DB932DAD154,
	U3CU3Ec__DisplayClass8_0__ctor_m3721EF429E7FD7518F5B67445D9BF4476D03998F,
	U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m7EF3E59F5B61ABEB813E39C2CD70672525496696,
	ObjectInstance__ctor_m97F243DFB9A51FA948953CCC84E1D29F506DFF61,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m5C1D43458FE50771E5F94835F631CA0E9F3CC845,
	ObjectInstance_Finalize_m702387A13C9D878BD3C0E04D53442A6AE62E232A,
	ObjectInstance_Dispose_m2CDDE48AB6246A8FE9F01B9A98A81BE1A4F4A28B,
	ObjectInstance_get_ModelId_mEECEAC6A564E533AB9580C380B0B04A1B2129898,
	ObjectInstance_get_Mode_mE8F1E58FBE5AB24AB32FCD05ED6FA84DF8C85A38,
	ObjectInstance_set_Mode_m1EE14002729F919893774B12B4F76DD6428232A7,
	ObjectInstance_ChangedStaticHandler_m768015677076F1F34E60CB69B989082F360837E8,
	ObjectInstance_add_Changed_mF26C5A44EBAB47E27B876DAFCB15CDE598D79704,
	ObjectInstance_remove_Changed_m80FFADC0755982687D98620FE23C14AE184D83C8,
	ObjectInstance_TryGetCurrentState_m557DE4FCC990B65E1BB191F97102623A7AA9F619,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD38A95319127C03A65E63679CBFAFCE391339DC5,
	ObjectInstance_GetOrCreateInstance_mCDD907F32FDA14CB31AA7C048313066D34489619,
	ObjectInstance_GetOrCreateInstance_m78EF14388F086B3108973B813F5E56B1F8EAB0FE,
	ObjectInstance__cctor_m9B0000807115468EEC44080C82FC86D7BB830CAC,
	U3CU3Ec__DisplayClass20_0__ctor_mBE8B61DB89856C22671638BF33CD96C261423E61,
	U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m8630618D941C446409E57EEC3DAE90C3592B80AC,
	ObjectInstanceState__ctor_m884F3D80FD6DAF98CA45AB975791977DE7F3CD80,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE0C78FA634B25A178AA5BE45B60A8B7F84295F9D,
	ObjectInstanceState_Finalize_m6C1BF244297CE292B633F515CFB2D8C64861F3E7,
	ObjectInstanceState_get_LastUpdatedTime_mEA51DE4B0F5CCCEC0D402286BE4B445AEA44BD67,
	ObjectInstanceState_get_SurfaceCoverage_m5B2FE0F03B40FDED5843B6C6E3645FFF37F42B12,
	ObjectInstanceState_get_Center_mC5EC038534FA2C6512C766407B9349E27EFDFA8B,
	ObjectInstanceState_get_ScaleChange_m1E3D1561EDDFA878A11DD2BADA51A5D1098A9898,
	ObjectInstanceState_TryCreatePlacement_mA900599E948FC7FB8BCC83440064C9BB4A0B43B4,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDDB66ACC0A814C7C93A4DB6BCCFB8BE50AEF0022,
	ObjectInstanceState_GetOrCreateInstance_m825552F09882E26DBC3599D56FA59E2C1BABF6C3,
	ObjectInstanceState_GetOrCreateInstance_mDAC2A4725E2462B69513CB27DDC12964D1845D59,
	U3CU3Ec__DisplayClass17_0__ctor_mF332EB725370A360A85C7068EFCE262735873D26,
	U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_mA36090068CB21F95DEE68F479F62A99FF5EC7CF9,
	ObjectModel__ctor_m9F873F6EA5C505760A9889BAE47187513A039F10,
	ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBA9EC665AC32150FAFB304FBBE9529558E91E9EA,
	ObjectModel_Finalize_m10438EADBE22DF8C34E7E5B56C344D63BBC78018,
	ObjectModel_Dispose_m7D47D489F5ABD5219F889C17ED1584BDD42E1FB6,
	ObjectModel_get_Id_m4EAA9035F283D9F8AF2C5CF170E78F30FE0F37E4,
	ObjectModel_get_BoundingBox_m6632F31CD140B8CDDBADF9DB01F2550B17D8C10D,
	ObjectModel_get_OriginToCenterTransform_m5DA4BBAA8434A9E48BF69D67E8307D493EA483CD,
	ObjectModel_get_VertexCount_mE455D5D3E5DA9864D54E6E47A629AA7FB5F653C7,
	ObjectModel_get_TriangleIndexCount_m4E91CBBD4825B626150DD11600AFA903CF1725F8,
	ObjectModel_GetVertexPositions_mB64FD03898D333F621C4FB7D72A6091758720B4D,
	ObjectModel_GetVertexNormals_mC35316E47854F17ECCE23C0325475CA88668D30D,
	ObjectModel_GetTriangleIndices_m4A598DBAD5EBEFB0FE526FA06BC2DAC1CADE7246,
	ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8C39ACF81309184925C69F45A298F6767C86C2AC,
	ObjectModel_GetOrCreateInstance_m85664428BEBAFE9F357C660C96891C12931284F9,
	ObjectModel_GetOrCreateInstance_m9148B70377E0A226AA1184B6100EA25CAB47E7C1,
	ObjectModel__cctor_m472225B61B25E70EA911CB73789E59723C43430D,
	U3CU3Ec__DisplayClass23_0__ctor_m951D149F0FDA6AB2AE268C5DE7EEAC5DA89A697F,
	U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_m7EAC15B262C2BF34A1DA91F893E39A079DAC88A1,
	ObjectObserver__ctor_m1D39DC88DE382B95E43CA68ACAA026FD370A1BBC,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC81CA1D1AB19D60CA0338584EABC222552BEB8C3,
	ObjectObserver_Finalize_m70FA9D31331302068206152CA6F3DC08FEC031C4,
	ObjectObserver_Dispose_m8BAAC872049605C6AE6EF6E4D04C807A072F0F34,
	ObjectObserver_IsSupported_mCF1B926893A6365687ABA2217CC9EBD0C9771ACE,
	ObjectObserver_RequestAccessAsync_mAEC48DB70F07B1632F6CE041A0165AC4049D374B,
	ObjectObserver_LoadObjectModelAsync_mAF0A95810A146C8F8C94E14390223A75625DE517,
	ObjectObserver_DetectAsync_mFADD149106FFC19AA31697DF87B9B62A6B5E5B26,
	ObjectObserver_GetAppDomainUnloadEvents_m4DDCEF2AAFF68EEE8C4959AC6847DB615A4D8359,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m478695841111927D8BD9AD8AB74708B343B10591,
	ObjectObserver_GetOrCreateInstance_mEBBCDE11C9CCCD1949A2125609D0CD69E7819092,
	ObjectObserver_GetOrCreateInstance_mB6EF6FFE7A60E4972EFD523AE5A383DFA890895C,
	ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_mB70B4244B766B5EFA13F111709B44916D1AE5274,
	ObjectObserver__cctor_mC6FAE7DA7C499602510DA53671707F2771493376,
	ObjectObserver_OnAppDomainUnload_m2BC9E18FA1FA06C9DC5C656C5B1DD1E21A4F1C32,
	U3CU3Ec__cctor_m1509735D45CC9320EA86D2B30722AC7B723D7C6D,
	U3CU3Ec__ctor_m59B1D51845C31E4DC220DFD5958F36A3461885EC,
	U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m288B2FB2643954985C4A8C0A0CD0EBBF25840D9A,
	U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m2FA757DA194E773926667BB9072E86F59ADC537C,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m071AC3CC39BEBB040FDC75C5E087F1D5DDC3CB6C,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_1_m1357D2A84AA1AE7E308A6EB7D5D17D0479289EE9,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m93674304C4B6B10310151EA69915CD565D401CB4,
	U3CRequestAccessAsyncU3Ed__7_MoveNext_mE49E2A8C498AB1F1734842E8660A74A75ADD07F9,
	U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m64305CAF773555ADC633FAA3E4A00B4425FD3AF7,
	U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFB4E3F53A2ECFC8B71689A2A2E9786FD72D95AC1,
	U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m6EF59420DF1DA3F513170C3A3B04204235C6EAF7,
	U3CDetectAsyncU3Ed__10_MoveNext_m5471342B17F656F9C368F6987C25CAC34A018152,
	U3CDetectAsyncU3Ed__10_SetStateMachine_mC20E18C156C1135AE271FCE0352AEECEBFD78911,
	U3CU3Ec__DisplayClass15_0__ctor_m1A5092FF8FE552C5BEF4E93903404840A1E87B7E,
	U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m46DB3539A466FBD06B0660CB83BDD7F2D9333D1F,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mB040466CCC1C418C8BBF9F63EE412C0C69726A3F,
	ObjectQuery__ctor_m90FBF4D93B4B3B1E5056B3754D55703B6E6DC792,
	ObjectQuery__ctor_mB258311D83E5B996EB1BC92500EFDF6A122154A1,
	ObjectQuery_Finalize_mD55E7C913B2FBE955EA4F3B256B21A940A9912B8,
	ObjectQuery_Dispose_m0C172BF52A4032F164EA5D8CA89818B0DD035C9F,
	ObjectQuery_get_MinSurfaceCoverage_mFEC7FC7F38F14A7DEEEBF7601D6F09F680245893,
	ObjectQuery_set_MinSurfaceCoverage_mE2FDBDA373EF86D5E2781351D115CF14A861E886,
	ObjectQuery_set_IsExpectedToBeStandingOnGroundPlane_m6429AE24BA5149C0C91B2171708E36C796C27314,
	ObjectQuery_set_ExpectedMaxVerticalOrientationInDegrees_m68DDC22B4FE3A94AFBED26D2131CF7BA1286B7D0,
	ObjectQuery_set_MaxScaleChange_m2736562D43BEE6329E1CE6B7C94848C3AD43546C,
	ObjectQuery_get_SearchAreas_mFC8875424E5DF292463E72E50EE8CA94BC64BD9A,
	ObjectQuery_ComputeLatestEnvironmentObservationAsync_mAFBA3C652631463408ABE71482A2A958F2A3C6F5,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC7D859DF5CCEFF6AD6B5BB0ED8F03511BD712DB3,
	ObjectQuery__cctor_m073D4E5B49A85FBC8C38C2AD0DE19DA38BDB16D7,
	U3CU3Ec__cctor_m1181BFDCACE659A0F0187E07E36D037152866EDE,
	U3CU3Ec__ctor_m765CA6216D1A9B77A38883CC81727AF7E731775E,
	U3CU3Ec_U3CComputeLatestEnvironmentObservationAsyncU3Eb__23_0_m8ED272DA721A5E81056C7CD8135D544F5209C73C,
	U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_MoveNext_mCC470B999702F034AC27D60C9C10994EC6C8ACBB,
	U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_SetStateMachine_m9621CDBFAA28A5F5BE42CB090C81252FB4512F22,
	ObjectSearchArea__ctor_m0495968FA87F13126A8215D8C4092DEE3D42048E,
	ObjectSearchArea_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC3B37E465B8ACCC2654A0A434A5B362B50A3952A,
	ObjectSearchArea_Finalize_mA13667C34E7A83B6D54371ECDDCC9E4AF7C66E79,
	ObjectSearchArea_FromOrientedBox_mC719BD0B3732C45B5ABB56EBCB75361A4A2559C9,
	ObjectSearchArea_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDD6413214693CA5DDDEA3AC613E18F12EF3E4338,
	ObjectSearchArea_GetOrCreateInstance_m6D09A156D92920B9F0287E48247185BF06BBB91A,
	ObjectSearchArea_GetOrCreateInstance_mFE77B8C6FBFEF93BA1EC1BCB1D3CCC6439497F32,
	U3CU3Ec__DisplayClass12_0__ctor_m86B47D6314A0BC7A7D0087DB4350C38AB9E2E217,
	U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_m8B421E3AD90D2FB63DC88C490823D0DDC501BFC2,
	NULL,
	PackedValue_op_Implicit_m750DEA68D57A3071791C1EC103CE6E43838D145A,
	PackedValue__cctor_m4A0F3B3CD8D5F8738803D267270FCF63424B444D,
	PromiseBase__ctor_m583ED4AD3A9EE01E66CE2035725C550D6BBE5927,
	PromiseBase_Finalize_m63E4AF99DBCCC1B02C5ACD5077E79B5287A4C6F5,
	PromiseBase_Dispose_m723FD9261967C2EDB135ECFEFF937534CD3FA2A7,
	PromiseBase_Dispose_mC6E64F24501C2DFDC0AD3388051A081931264893,
	PromiseBase_OnProgressHandler_mB538008FB78822414B0B23A98B6D161286A9ED98,
	PromiseBase_OnErrorHandler_m463F26EBBFB1CD275B81261AF1225854F4A79741,
	NULL,
	NULL,
	NULL,
	PromiseBase_OnCompleteThunk_mCF6245E58C658DC816AC7D4E72DB100EFFBDDC76,
	PromiseBase_OnErrorThunk_m05A83FEACEE22FCB7369E76279D31BB1B8F5B33E,
	PromiseBase_OnProgressThunk_m206F1885BD06E15F0B0B530C501329CB24FACF47,
	PromiseBase__cctor_m604B5E4367FB4B79CF0FE6F6BDBF2BFCECDD9B46,
	PromiseBase_U3C_ctorU3Eb__7_0_m348CA9B622F2FD77AEF9D7DFE5348AEB371C0ADE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Promise_get_Task_m952BE01F65418A352FFE59F36B43ED1D78D55F50,
	Promise__ctor_mF0D7EA17AE3A858D3320BA578546106FC7D73037,
	Promise_OnExceptionHandler_mD206C4BE6165EDB5362F28BBA3A2A35D6BC210C0,
	Promise_OnCanceledHandler_m1297D6E79B5A4EF5BE94232D75460AB854CCC664,
	Promise_OnCompleteHandler_mC32CA6F7B34BA74EBE2D3831690ECECD77F59A3E,
	Promise_Create_m4BFE93A14719CFE1ECD60F6BF6ED42A28F02D8B5,
	NULL,
	Promise_U3COnCompleteHandlerU3Eb__6_0_m0641579A39EA93603AB658CDBF31A7B47DD0D76E,
	aoa_promise_on_complete__ctor_m311FDCAC93C0BB2746D37D31D5CDD2316A38BF60,
	aoa_promise_on_complete_Invoke_m3751C7F3A0B7BCB365F9F84EAAA262F8BD1F2F4E,
	aoa_promise_on_complete_BeginInvoke_m1BDCBF04D4F2E25813B28720A83D1EC5D0F4B5D6,
	aoa_promise_on_complete_EndInvoke_mCA08A4F491E9833F752D5A4B08B9061F76303868,
	aoa_promise_on_error__ctor_m14D8013DBB5EE7877A9ECA972BE328E86ED4023C,
	aoa_promise_on_error_Invoke_m5BE810F1C47E8A818EAA722B4F068ADB50276974,
	aoa_promise_on_error_BeginInvoke_m4AE63E77A3DE4215409665C55B272293471B6329,
	aoa_promise_on_error_EndInvoke_m7B0DA7D9F8E624D6D22D0CF16A04E15A164757B3,
	aoa_promise_on_progress__ctor_m8BBA6667C3781B1D8641804443DF2B06B70D3933,
	aoa_promise_on_progress_Invoke_m66686EE4B32F18D0042E57A664C87EFF07476041,
	aoa_promise_on_progress_BeginInvoke_mB7BBFD9F67CDE5B2B60CADD04D9EE8BDDD856C36,
	aoa_promise_on_progress_EndInvoke_mF88AC09B25629B2671B0E78439EAE76806DA857B,
	PromiseSafeHandle__ctor_m3AC12A8F0B4ADF88C3F2AD1E94C69FC6770A40F5,
	PromiseSafeHandle_get_IsInvalid_mB0898C9E03D9C9D94EEBDE45D516169BFA695A6B,
	PromiseSafeHandle_ReleaseHandle_m7B29B223D88C68334AC59498BE1CD1EE719021E8,
	NativeLibrary_aoa_object_diagnostics_session_close_async_mFAF5CD22E931CB809F735D9F88DB375115328005,
	NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m573ED6CE97E9FFDC79BEAE9EED61EBBB149E61A4,
	NativeLibrary_aoa_object_diagnostics_session_release_mC758686D57A92AF3C750CAAAD6B4790DFB5AC247,
	NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_mB54DCFDEE5F2F6D23FC011D0B105B2D4C7D16D2E,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m334BCEF5601434DEB2D2690D2827F0640423BBE4,
	ObjectDiagnosticsSession__ctor_mA468F33F07EEE169668DE786D0BB52C63C06EBA2,
	ObjectDiagnosticsSession_Finalize_m791C058A6074B0B7823106B79926B76FC2DEBAC9,
	ObjectDiagnosticsSession_CloseAsync_m73A78F1F776D3EC173370CB36359A732EF19792C,
	ObjectDiagnosticsSession_UploadDiagnosticsAsync_m0E743AF20FFAC9E58A3950037F059C6DE0FF36E7,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m75FBC2C61652B43293ADCD214CC9BA4CF58D89CE,
	ObjectDiagnosticsSession__cctor_m51882F612C9ADE4ED55646A4864D5F130AA1560E,
	U3CCloseAsyncU3Ed__8_MoveNext_mEA91EF3266CB17EF81D3D374B70515CDB07AF48B,
	U3CCloseAsyncU3Ed__8_SetStateMachine_m2F353814F9845536F258EB42C2D505559300F086,
	U3CU3Ec__cctor_mAA2C3624C1FEAAB9EC7A84C6461DE9AFA898091E,
	U3CU3Ec__ctor_m2195E17656F2F63445864741F5E391310B25FB31,
	U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_mFF22516054EA997186E14F667804DDEBA00A1868,
	U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_m54E793B6787866C5B7510A586EC1B035E05C1827,
	U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m7A153DD4D5979B2289585844270934649ADA7EA3,
	NativeLibrary_aoa_spatial_graph_placement_addref_mA68CC1F79916869BCEAD47419F05070ADB93D8DD,
	NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_m3A30FC6B4B72111C7569F55C6FF0A8E04C997B5C,
	NativeLibrary_aoa_spatial_graph_placement_get_control_points_m8901367C82BBA805AFC8B800C3CDF4087C030D36,
	NativeLibrary_aoa_spatial_graph_placement_release_m533A8BC897DE68E2B1925465C7ED8F81DBA73584,
	NativeLibrary_aoa_spatial_graph_placement_try_create_mE886EA3E66739BB82635B1D839922A33106F4EE4,
	NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m2732022EE9CCC038D7713A5FCAB315EAEEEC0A73,
	NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m53766107CBFB00459D1FF3506A5C6693B9EB8C58,
	SpatialGraphPlacement__ctor_m310A41FA8A0163188DAE8AD1777FD523670942E0,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mB037A18437D4023E85FB6B774312F1E3EE2D1DD2,
	SpatialGraphPlacement_Finalize_m8B7FDEA6C1C22B3919F4F0869ADFCBDF38BE80E6,
	SpatialGraphPlacement_ComputeOriginForView_m22B22CA53322CC566B9985BF96BFF2C533B8389A,
	SpatialGraphPlacement_TryCreate_m8E809239A694D2D1B1A30626CC2B6B267826832F,
	SpatialGraphPlacement_GetControlPoints_mB56D8BA3B20C1568FABD121FA28E0D09C2D2B6E8,
	SpatialGraphPlacement_TryPersistStaticNodesAsync_mAA321EB3EF7E342C3F57061607FBF9BA4089A135,
	SpatialGraphPlacement_UnpersistStaticNodesAsync_mAC87C9B65F03A832608832470048A5B4437DBDC1,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m15654E86B8F6442380D1969DBBD7500377F2ABDA,
	SpatialGraphPlacement_GetOrCreateInstance_m6239F06BC3A34134A4FBB2D6C6E605A628F5A570,
	SpatialGraphPlacement_GetOrCreateInstance_m357EB17F1E3CF5BA2BD36502BBD3CD01D8AB4C59,
	SpatialGraphPlacement__cctor_m4335E7AA7F71BED9DD49759C2008EB27BD51843A,
	U3CU3Ec__cctor_m1B19D8660797C75A5B2ADF02E1A903880F59B870,
	U3CU3Ec__ctor_m4DF8B07279FC6FC9D4037DEF3672BBA3C0878C44,
	U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m6D51A810A143B2CE4905C98704B102FD535855C0,
	U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_mDBA0AB567FA6C89DF46A1131859146AD87BC195C,
	U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m74E4867C61263D5D61027508325466B44444D04A,
	U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_m53C43E98B350D778998B206753DD54E6203F2374,
	U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m8B2D92224EBFDF6E40B8EF93F664524C60940FFB,
	U3CU3Ec__DisplayClass13_0__ctor_m21D77765E3F6371CBDB46F719089F5A0457DE2EE,
	U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_m36396C24AE17479F09E82D5A56D2F264802F5A38,
};
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_mE49E2A8C498AB1F1734842E8660A74A75ADD07F9_AdjustorThunk (void);
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m64305CAF773555ADC633FAA3E4A00B4425FD3AF7_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFB4E3F53A2ECFC8B71689A2A2E9786FD72D95AC1_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m6EF59420DF1DA3F513170C3A3B04204235C6EAF7_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_MoveNext_m5471342B17F656F9C368F6987C25CAC34A018152_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_mC20E18C156C1135AE271FCE0352AEECEBFD78911_AdjustorThunk (void);
extern void U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_MoveNext_mCC470B999702F034AC27D60C9C10994EC6C8ACBB_AdjustorThunk (void);
extern void U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_SetStateMachine_m9621CDBFAA28A5F5BE42CB090C81252FB4512F22_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_MoveNext_mEA91EF3266CB17EF81D3D374B70515CDB07AF48B_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_m2F353814F9845536F258EB42C2D505559300F086_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_m54E793B6787866C5B7510A586EC1B035E05C1827_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m7A153DD4D5979B2289585844270934649ADA7EA3_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_mDBA0AB567FA6C89DF46A1131859146AD87BC195C_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m74E4867C61263D5D61027508325466B44444D04A_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_m53C43E98B350D778998B206753DD54E6203F2374_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m8B2D92224EBFDF6E40B8EF93F664524C60940FFB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[16] = 
{
	{ 0x060000F2, U3CRequestAccessAsyncU3Ed__7_MoveNext_mE49E2A8C498AB1F1734842E8660A74A75ADD07F9_AdjustorThunk },
	{ 0x060000F3, U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m64305CAF773555ADC633FAA3E4A00B4425FD3AF7_AdjustorThunk },
	{ 0x060000F4, U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFB4E3F53A2ECFC8B71689A2A2E9786FD72D95AC1_AdjustorThunk },
	{ 0x060000F5, U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m6EF59420DF1DA3F513170C3A3B04204235C6EAF7_AdjustorThunk },
	{ 0x060000F6, U3CDetectAsyncU3Ed__10_MoveNext_m5471342B17F656F9C368F6987C25CAC34A018152_AdjustorThunk },
	{ 0x060000F7, U3CDetectAsyncU3Ed__10_SetStateMachine_mC20E18C156C1135AE271FCE0352AEECEBFD78911_AdjustorThunk },
	{ 0x0600010B, U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_MoveNext_mCC470B999702F034AC27D60C9C10994EC6C8ACBB_AdjustorThunk },
	{ 0x0600010C, U3CComputeLatestEnvironmentObservationAsyncU3Ed__23_SetStateMachine_m9621CDBFAA28A5F5BE42CB090C81252FB4512F22_AdjustorThunk },
	{ 0x06000150, U3CCloseAsyncU3Ed__8_MoveNext_mEA91EF3266CB17EF81D3D374B70515CDB07AF48B_AdjustorThunk },
	{ 0x06000151, U3CCloseAsyncU3Ed__8_SetStateMachine_m2F353814F9845536F258EB42C2D505559300F086_AdjustorThunk },
	{ 0x06000155, U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_m54E793B6787866C5B7510A586EC1B035E05C1827_AdjustorThunk },
	{ 0x06000156, U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m7A153DD4D5979B2289585844270934649ADA7EA3_AdjustorThunk },
	{ 0x0600016D, U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_mDBA0AB567FA6C89DF46A1131859146AD87BC195C_AdjustorThunk },
	{ 0x0600016E, U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m74E4867C61263D5D61027508325466B44444D04A_AdjustorThunk },
	{ 0x0600016F, U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_m53C43E98B350D778998B206753DD54E6203F2374_AdjustorThunk },
	{ 0x06000170, U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m8B2D92224EBFDF6E40B8EF93F664524C60940FFB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[370] = 
{
	140,
	2187,
	562,
	561,
	149,
	23,
	-1,
	-1,
	-1,
	334,
	875,
	3,
	3,
	129,
	-1,
	334,
	25,
	111,
	2188,
	2189,
	26,
	111,
	7,
	804,
	26,
	305,
	102,
	130,
	2190,
	130,
	130,
	20,
	20,
	2191,
	20,
	2191,
	2191,
	130,
	2192,
	130,
	20,
	2193,
	130,
	2194,
	2195,
	20,
	20,
	130,
	130,
	130,
	130,
	130,
	20,
	20,
	130,
	2196,
	2194,
	130,
	20,
	20,
	20,
	20,
	130,
	2197,
	20,
	130,
	130,
	20,
	20,
	20,
	20,
	2191,
	20,
	2191,
	2191,
	130,
	130,
	2198,
	130,
	305,
	456,
	2198,
	130,
	102,
	2199,
	20,
	2193,
	130,
	20,
	20,
	130,
	2200,
	2201,
	2200,
	2200,
	130,
	2202,
	130,
	102,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	139,
	23,
	10,
	34,
	62,
	32,
	111,
	27,
	217,
	26,
	23,
	1000,
	23,
	149,
	139,
	23,
	23,
	2203,
	10,
	10,
	26,
	26,
	26,
	149,
	2204,
	2205,
	23,
	151,
	23,
	26,
	23,
	14,
	149,
	139,
	23,
	23,
	149,
	2204,
	2205,
	23,
	151,
	139,
	23,
	23,
	23,
	682,
	10,
	32,
	2206,
	26,
	26,
	14,
	149,
	2204,
	2205,
	3,
	23,
	151,
	139,
	23,
	23,
	1822,
	693,
	2203,
	1835,
	2207,
	149,
	2204,
	2205,
	23,
	151,
	139,
	23,
	23,
	23,
	682,
	2208,
	1838,
	10,
	10,
	26,
	26,
	26,
	149,
	2204,
	2205,
	3,
	23,
	151,
	139,
	23,
	23,
	23,
	49,
	4,
	28,
	28,
	311,
	149,
	2204,
	2205,
	3,
	3,
	141,
	3,
	23,
	2209,
	2210,
	2210,
	955,
	117,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	151,
	23,
	26,
	143,
	23,
	23,
	693,
	299,
	31,
	299,
	299,
	14,
	34,
	149,
	3,
	3,
	23,
	2210,
	23,
	26,
	139,
	23,
	23,
	2211,
	149,
	2204,
	2205,
	23,
	151,
	-1,
	2212,
	3,
	416,
	23,
	23,
	31,
	299,
	2213,
	23,
	26,
	2214,
	685,
	2215,
	1407,
	3,
	23,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	14,
	416,
	26,
	23,
	2214,
	866,
	-1,
	26,
	111,
	2216,
	2217,
	114,
	111,
	2218,
	2219,
	26,
	111,
	2220,
	2221,
	26,
	23,
	95,
	95,
	2222,
	2193,
	130,
	2223,
	23,
	143,
	23,
	28,
	1,
	149,
	3,
	23,
	26,
	3,
	23,
	2209,
	23,
	26,
	130,
	2224,
	2225,
	130,
	2226,
	2222,
	145,
	139,
	23,
	23,
	2227,
	2228,
	14,
	28,
	0,
	149,
	2204,
	2205,
	3,
	3,
	23,
	2229,
	23,
	26,
	23,
	26,
	23,
	151,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[5] = 
{
	{ 0x06000011, 3,  (void**)&ProjectedObjectCache_ProjectedObjectCleanupHandler_m0AD929565B8F19CB566C3E4F4E81BEC898D04DA5_RuntimeMethod_var, 0 },
	{ 0x060000B3, 2,  (void**)&ObjectInstance_ChangedStaticHandler_m768015677076F1F34E60CB69B989082F360837E8_RuntimeMethod_var, 0 },
	{ 0x06000122, 4,  (void**)&PromiseBase_OnCompleteThunk_mCF6245E58C658DC816AC7D4E72DB100EFFBDDC76_RuntimeMethod_var, 0 },
	{ 0x06000123, 5,  (void**)&PromiseBase_OnErrorThunk_m05A83FEACEE22FCB7369E76279D31BB1B8F5B33E_RuntimeMethod_var, 0 },
	{ 0x06000124, 6,  (void**)&PromiseBase_OnProgressThunk_m206F1885BD06E15F0B0B530C501329CB24FACF47_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[11] = 
{
	{ 0x0200000C, { 5, 14 } },
	{ 0x0200000D, { 19, 3 } },
	{ 0x0200000E, { 22, 3 } },
	{ 0x0200002F, { 29, 10 } },
	{ 0x02000030, { 39, 1 } },
	{ 0x06000007, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
	{ 0x0600000F, { 3, 2 } },
	{ 0x06000116, { 25, 4 } },
	{ 0x06000134, { 40, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[42] = 
{
	{ (Il2CppRGCTXDataType)2, 45461 },
	{ (Il2CppRGCTXDataType)2, 45462 },
	{ (Il2CppRGCTXDataType)2, 45463 },
	{ (Il2CppRGCTXDataType)3, 50791 },
	{ (Il2CppRGCTXDataType)2, 45468 },
	{ (Il2CppRGCTXDataType)3, 50792 },
	{ (Il2CppRGCTXDataType)3, 50793 },
	{ (Il2CppRGCTXDataType)3, 50794 },
	{ (Il2CppRGCTXDataType)3, 50795 },
	{ (Il2CppRGCTXDataType)2, 50197 },
	{ (Il2CppRGCTXDataType)3, 50796 },
	{ (Il2CppRGCTXDataType)3, 50797 },
	{ (Il2CppRGCTXDataType)3, 50798 },
	{ (Il2CppRGCTXDataType)3, 50799 },
	{ (Il2CppRGCTXDataType)3, 50800 },
	{ (Il2CppRGCTXDataType)2, 50198 },
	{ (Il2CppRGCTXDataType)3, 50801 },
	{ (Il2CppRGCTXDataType)2, 50199 },
	{ (Il2CppRGCTXDataType)3, 50802 },
	{ (Il2CppRGCTXDataType)3, 50803 },
	{ (Il2CppRGCTXDataType)3, 50804 },
	{ (Il2CppRGCTXDataType)2, 45502 },
	{ (Il2CppRGCTXDataType)3, 50805 },
	{ (Il2CppRGCTXDataType)2, 45509 },
	{ (Il2CppRGCTXDataType)3, 50806 },
	{ (Il2CppRGCTXDataType)2, 45592 },
	{ (Il2CppRGCTXDataType)3, 50807 },
	{ (Il2CppRGCTXDataType)3, 50808 },
	{ (Il2CppRGCTXDataType)3, 50809 },
	{ (Il2CppRGCTXDataType)3, 50810 },
	{ (Il2CppRGCTXDataType)2, 50200 },
	{ (Il2CppRGCTXDataType)3, 50811 },
	{ (Il2CppRGCTXDataType)3, 50812 },
	{ (Il2CppRGCTXDataType)3, 50813 },
	{ (Il2CppRGCTXDataType)2, 50201 },
	{ (Il2CppRGCTXDataType)3, 50814 },
	{ (Il2CppRGCTXDataType)3, 50815 },
	{ (Il2CppRGCTXDataType)3, 50816 },
	{ (Il2CppRGCTXDataType)3, 50817 },
	{ (Il2CppRGCTXDataType)3, 50818 },
	{ (Il2CppRGCTXDataType)2, 45623 },
	{ (Il2CppRGCTXDataType)3, 50819 },
};
extern const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_ApiCodeGenModule;
const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_ApiCodeGenModule = 
{
	"Microsoft.ObjectAnchors.Runtime.Api.dll",
	370,
	s_methodPointers,
	16,
	s_adjustorThunks,
	s_InvokerIndices,
	5,
	s_reversePInvokeIndices,
	11,
	s_rgctxIndices,
	42,
	s_rgctxValues,
	NULL,
};
