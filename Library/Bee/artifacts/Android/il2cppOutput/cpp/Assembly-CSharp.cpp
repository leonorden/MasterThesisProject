#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform>
struct Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform>
struct LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer>
struct List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
struct ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E;
// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AudioAndHapticOnTrigger
struct AudioAndHapticOnTrigger_tBDB666CBD8A47A6D47093F95FAEE9003224B7816;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// FadeScreen
struct FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Haptic
struct Haptic_tC8A67D343F25A7234E81452F710387326151AEDB;
// HapticInteractable
struct HapticInteractable_tC26BC16825BD0EF0A59FB04C0DCDAC19BEA2B906;
// HapticOnTrigger
struct HapticOnTrigger_tD652E6364166344E48874F071EE12D0D976EF534;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.Mutex
struct Mutex_t20344F093646D8679E9E11939981AE14DD8B3148;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// SceneTransitionManager
struct SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
struct TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TextureScale
struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772;
// XRGrabInteractableToAttach
struct XRGrabInteractableToAttach_t72E0C4BAE68D9AE1F00F3D772217C0CE15A0DEA1;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// FadeScreen/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39;
// SceneTransitionManager/<GoToSceneRoutine>d__2
struct U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2;
// TextureScale/ThreadData
struct ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27106F942A54634C382B8844354021F5250B0327;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD3CB78FDCF42B418FDF2A7150ABF6EB4D64927;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_m2B25E996CEA087FC833B6E1BDC04B7BD3F52EDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC72E614DF7F5C49A01663F772789DAD6AAECA1DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Haptic
struct Haptic_tC8A67D343F25A7234E81452F710387326151AEDB  : public RuntimeObject
{
	// System.Single Haptic::intensity
	float ___intensity_0;
	// System.Single Haptic::duration
	float ___duration_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// TextureScale
struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// FadeScreen/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39  : public RuntimeObject
{
	// System.Int32 FadeScreen/<FadeRoutine>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeScreen/<FadeRoutine>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeScreen FadeScreen/<FadeRoutine>d__8::<>4__this
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* ___U3CU3E4__this_2;
	// System.Single FadeScreen/<FadeRoutine>d__8::alphaIn
	float ___alphaIn_3;
	// System.Single FadeScreen/<FadeRoutine>d__8::alphaOut
	float ___alphaOut_4;
	// System.Single FadeScreen/<FadeRoutine>d__8::<timer>5__2
	float ___U3CtimerU3E5__2_5;
};

// SceneTransitionManager/<GoToSceneRoutine>d__2
struct U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2  : public RuntimeObject
{
	// System.Int32 SceneTransitionManager/<GoToSceneRoutine>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneTransitionManager/<GoToSceneRoutine>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SceneTransitionManager SceneTransitionManager/<GoToSceneRoutine>d__2::<>4__this
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* ___U3CU3E4__this_2;
	// System.Int32 SceneTransitionManager/<GoToSceneRoutine>d__2::sceneIndex
	int32_t ___sceneIndex_3;
};

// TextureScale/ThreadData
struct ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD  : public RuntimeObject
{
	// System.Int32 TextureScale/ThreadData::start
	int32_t ___start_0;
	// System.Int32 TextureScale/ThreadData::end
	int32_t ___end_1;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43  : public UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Threading.Mutex
struct Mutex_t20344F093646D8679E9E11939981AE14DD8B3148  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::pinchAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___pinchAnimationAction_4;
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::gripAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___gripAnimationAction_5;
	// UnityEngine.Animator AnimateHandOnInput::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_6;
};

// AudioAndHapticOnTrigger
struct AudioAndHapticOnTrigger_tBDB666CBD8A47A6D47093F95FAEE9003224B7816  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AudioAndHapticOnTrigger::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_4;
	// UnityEngine.AudioClip AudioAndHapticOnTrigger::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_5;
	// System.String AudioAndHapticOnTrigger::rightHandTargetTag
	String_t* ___rightHandTargetTag_6;
	// System.String AudioAndHapticOnTrigger::leftHandTargetTag
	String_t* ___leftHandTargetTag_7;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable AudioAndHapticOnTrigger::drumstick1
	XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* ___drumstick1_8;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable AudioAndHapticOnTrigger::drumstick2
	XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* ___drumstick2_9;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController AudioAndHapticOnTrigger::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController AudioAndHapticOnTrigger::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_11;
	// System.String AudioAndHapticOnTrigger::drumstickTargetTag
	String_t* ___drumstickTargetTag_12;
	// System.Single AudioAndHapticOnTrigger::intensity
	float ___intensity_13;
	// System.Single AudioAndHapticOnTrigger::duration
	float ___duration_14;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// FadeScreen
struct FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FadeScreen::fadeOnStart
	bool ___fadeOnStart_4;
	// System.Single FadeScreen::fadeDuration
	float ___fadeDuration_5;
	// UnityEngine.Color FadeScreen::fadeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fadeColor_6;
	// UnityEngine.Renderer FadeScreen::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_7;
};

// HapticInteractable
struct HapticInteractable_tC26BC16825BD0EF0A59FB04C0DCDAC19BEA2B906  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Haptic HapticInteractable::hapticOnActivated
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___hapticOnActivated_4;
	// Haptic HapticInteractable::hapticHoverEntered
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___hapticHoverEntered_5;
	// Haptic HapticInteractable::hapticHoverExited
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___hapticHoverExited_6;
	// Haptic HapticInteractable::hapticSelectEntered
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___hapticSelectEntered_7;
	// Haptic HapticInteractable::hapticSelectExited
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___hapticSelectExited_8;
};

// HapticOnTrigger
struct HapticOnTrigger_tD652E6364166344E48874F071EE12D0D976EF534  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String HapticOnTrigger::rightHandTargetTag
	String_t* ___rightHandTargetTag_4;
	// System.String HapticOnTrigger::leftHandTargetTag
	String_t* ___leftHandTargetTag_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController HapticOnTrigger::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_6;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController HapticOnTrigger::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_7;
	// System.Single HapticOnTrigger::intensity
	float ___intensity_8;
	// System.Single HapticOnTrigger::duration
	float ___duration_9;
};

// SceneTransitionManager
struct SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FadeScreen SceneTransitionManager::fadeScreen
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* ___fadeScreen_4;
};

// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SpinFree::spin
	bool ___spin_4;
	// System.Boolean SpinFree::spinParent
	bool ___spinParent_5;
	// System.Single SpinFree::speed
	float ___speed_6;
	// System.Boolean SpinFree::clockwise
	bool ___clockwise_7;
	// System.Single SpinFree::direction
	float ___direction_8;
	// System.Single SpinFree::directionChangeSpeed
	float ___directionChangeSpeed_9;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_12;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_18;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_20;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_22;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_26;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_30;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_31;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_32;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE* ___m_InteractorsHovering_33;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B* ___m_InteractorsSelecting_34;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_36;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_37;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_38;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_39;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_40;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_41;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_42;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_43;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_44;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_45;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5* ___m_VariableSelectInteractors_46;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61* ___m_InteractionStrengths_47;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_48;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_51;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_52;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_60;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CattachPointVelocityU3Ek__BackingField_43;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CattachPointAngularVelocityU3Ek__BackingField_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_46;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_47;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_49;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_50;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_51;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_52;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_57;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_58;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_61;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_63;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_75;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_76;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_78;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_83;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_86;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_89;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_95;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_96;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_97;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_101;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_102;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_103;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_104;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_73;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SecondaryAttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SecondaryAttachTransform_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UseDynamicAttach
	bool ___m_UseDynamicAttach_75;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachPosition
	bool ___m_MatchAttachPosition_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachRotation
	bool ___m_MatchAttachRotation_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SnapToColliderVolume
	bool ___m_SnapToColliderVolume_78;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ReinitializeDynamicAttachEverySingleGrab
	bool ___m_ReinitializeDynamicAttachEverySingleGrab_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_80;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_83;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_85;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_95;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_99;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_100;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_101;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingSingleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingSingleGrabTransformers_102;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingMultipleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingMultipleGrabTransformers_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AddDefaultGrabTransformers
	bool ___m_AddDefaultGrabTransformers_104;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SingleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_SingleGrabTransformers_105;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MultipleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_MultipleGrabTransformers_106;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabTransformersAddedWhenGrabbed
	List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75* ___m_GrabTransformersAddedWhenGrabbed_107;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountChanged
	bool ___m_GrabCountChanged_108;
	// System.ValueTuple`2<System.Int32,System.Int32> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountBeforeAndAfterChange
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_GrabCountBeforeAndAfterChange_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_IsProcessingGrabTransformers
	bool ___m_IsProcessingGrabTransformers_110;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_TargetPose_111;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetLocalScale_112;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_113;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_115;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachVelocity_116;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_117;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_118;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_119;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingVelocityFrames_120;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_121;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFirstUpdate
	bool ___m_ThrowSmoothingFirstUpdate_122;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastThrowReferencePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LastThrowReferencePose_123;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_125;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_126;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_127;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_128;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_129;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationMonitor
	TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6* ___m_TeleportationMonitor_130;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DynamicAttachTransforms
	Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C* ___m_DynamicAttachTransforms_131;
};

// XRGrabInteractableToAttach
struct XRGrabInteractableToAttach_t72E0C4BAE68D9AE1F00F3D772217C0CE15A0DEA1  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// UnityEngine.Transform XRGrabInteractableToAttach::leftAttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftAttachTransform_134;
	// UnityEngine.Transform XRGrabInteractableToAttach::rightAttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightAttachTransform_135;
};

// <Module>

// <Module>

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs

// Haptic

// Haptic

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TextureScale
struct TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields
{
	// UnityEngine.Color[] TextureScale::texColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___texColors_0;
	// UnityEngine.Color[] TextureScale::newColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___newColors_1;
	// System.Int32 TextureScale::w
	int32_t ___w_2;
	// System.Single TextureScale::ratioX
	float ___ratioX_3;
	// System.Single TextureScale::ratioY
	float ___ratioY_4;
	// System.Int32 TextureScale::w2
	int32_t ___w2_5;
	// System.Int32 TextureScale::finishCount
	int32_t ___finishCount_6;
	// System.Threading.Mutex TextureScale::mutex
	Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* ___mutex_7;
};

// TextureScale

// FadeScreen/<FadeRoutine>d__8

// FadeScreen/<FadeRoutine>d__8

// SceneTransitionManager/<GoToSceneRoutine>d__2

// SceneTransitionManager/<GoToSceneRoutine>d__2

// TextureScale/ThreadData

// TextureScale/ThreadData

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputActionProperty

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// System.Single

// System.Single

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.XR.Interaction.Toolkit.ActivateEvent

// UnityEngine.XR.Interaction.Toolkit.ActivateEvent

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.Material

// UnityEngine.Material

// System.Threading.Mutex

// System.Threading.Mutex

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.ParameterizedThreadStart

// System.Threading.ParameterizedThreadStart

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AnimateHandOnInput

// AnimateHandOnInput

// AudioAndHapticOnTrigger

// AudioAndHapticOnTrigger

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// FadeScreen

// FadeScreen

// HapticInteractable

// HapticInteractable

// HapticOnTrigger

// HapticOnTrigger

// SceneTransitionManager

// SceneTransitionManager

// SpinFree

// SpinFree

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_49;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_50;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_99;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_DynamicAttachTransformPool
	LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450* ___s_DynamicAttachTransformPool_132;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_ProcessGrabTransformersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessGrabTransformersMarker_133;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable

// XRGrabInteractableToAttach

// XRGrabInteractableToAttach
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FadeScreen::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) ;
// System.Void FadeScreen::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeScreen::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void FadeScreen/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::get_interactorObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseInteractionEventArgs_get_interactorObject_mDC483F1AAA1267A774B677E14189A3EDD1040864_inline (BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::get_xrController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) ;
// System.Void Haptic::TriggerHaptic(UnityEngine.XR.Interaction.Toolkit.XRBaseController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_TriggerHaptic_mB910C49E2375C9F0BFE92E510769EA60F963838B (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___0_controller, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>()
inline XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* Component_GetComponent_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_m2B25E996CEA087FC833B6E1BDC04B7BD3F52EDA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_activated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1 (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1 (UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8* __this, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEC38375A3667634400B758463CD6936646CE1ED8*, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::set_attachTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRGrabInteractable_set_attachTransform_mB9E32067852B3E793C78488AFF113E217D8DA148_inline (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectEntered_m548EC86DEEF771E952DFC75BAE8EA5C27E441C5C (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneRoutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneRoutine_m3EFF6201B39C3498B404507370B0A6C7B299BA3E (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) ;
// System.Void SceneTransitionManager/<GoToSceneRoutine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2__ctor_mD5A8B587906C0B17F61D7DA150C1773D23C1CEAA (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FadeScreen::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_mCAFF7C32104EB62501C535FC53DAE5C9C3A11BB1 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_newWidth, int32_t ___2_newHeight, bool ___3_useBilinear, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void System.Threading.Mutex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex__ctor_m5B66DF00F3580EB657EE520E65D2929B243863C9 (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* __this, bool ___0_initiallyOwned, const RuntimeMethod* method) ;
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2 (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* __this, int32_t ___0_s, int32_t ___1_e, const RuntimeMethod* method) ;
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Texture2D::Reinitialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextureScale_ColorLerpUnclamped_m1E513C5098D6689AC1C66818609B160416F01512 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_c2, float ___2_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Mutex::ReleaseMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void FadeScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Start_m88434E048DDF7C1FE7E87A9E62AFF24FB0A3B460 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_7), (void*)L_0);
		// if (fadeOnStart)
		bool L_1 = __this->___fadeOnStart_4;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// FadeIn();
		FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void FadeScreen::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeIn_m4C05560F72A6DDDC6DE0BDD32E0D3EB5A52D0FE7 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// Fade(1,0);
		FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53(__this, (1.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void FadeScreen::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// Fade(0,1);
		FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53(__this, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void FadeScreen::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen_Fade_m52E487D3D67BAEB212F07E12E40EF512D1081A53 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeRoutine(alphaIn, alphaOut));
		float L_0 = ___0_alphaIn;
		float L_1 = ___1_alphaOut;
		RuntimeObject* L_2;
		L_2 = FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48(__this, L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeScreen::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeScreen_FadeRoutine_mDF441C2ABEC9BF0DF8268CAB7F2E2FC806593B48 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, float ___0_alphaIn, float ___1_alphaOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_0 = (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39*)il2cpp_codegen_object_new(U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185(L_0, 0, NULL);
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_2 = L_1;
		float L_3 = ___0_alphaIn;
		NullCheck(L_2);
		L_2->___alphaIn_3 = L_3;
		U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* L_4 = L_2;
		float L_5 = ___1_alphaOut;
		NullCheck(L_4);
		L_4->___alphaOut_4 = L_5;
		return L_4;
	}
}
// System.Void FadeScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeScreen__ctor_m28EB8D0FD9EEE180295812ECB98BC7AB15B47772 (FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* __this, const RuntimeMethod* method) 
{
	{
		// public bool fadeOnStart = true;
		__this->___fadeOnStart_4 = (bool)1;
		// public float fadeDuration = 2;
		__this->___fadeDuration_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FadeScreen/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_m5494C7D1B1C94635FCE0382EC7C97641C1B12185 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeScreen/<FadeRoutine>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_IDisposable_Dispose_mC790BA8544738CB9A3834251A079D38473BDCCF4 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeScreen/<FadeRoutine>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeRoutineU3Ed__8_MoveNext_m1E136E26563F51185235B02DED3BDCAB0F6CFE58 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0;
		__this->___U3CtimerU3E5__2_5 = (0.0f);
		goto IL_0096;
	}

IL_002b:
	{
		// Color newColor = fadeColor;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_4 = V_1;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___fadeColor_6;
		V_3 = L_5;
		// newColor.a = Mathf.Lerp(alphaIn, alphaOut, timer/ fadeDuration);
		float L_6 = __this->___alphaIn_3;
		float L_7 = __this->___alphaOut_4;
		float L_8 = __this->___U3CtimerU3E5__2_5;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___fadeDuration_5;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, ((float)(L_8/L_10)), NULL);
		(&V_3)->___a_3 = L_11;
		// rend.material.SetColor("_Color", newColor);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_12 = V_1;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = L_12->___rend_7;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_3;
		NullCheck(L_14);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_14, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_15, NULL);
		// timer += Time.deltaTime;
		float L_16 = __this->___U3CtimerU3E5__2_5;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_5 = ((float)il2cpp_codegen_add(L_16, L_17));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0096:
	{
		// while (timer <= fadeDuration)
		float L_18 = __this->___U3CtimerU3E5__2_5;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->___fadeDuration_5;
		if ((((float)L_18) <= ((float)L_20)))
		{
			goto IL_002b;
		}
	}
	{
		// Color newColor2 = fadeColor;
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_21 = V_1;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = L_21->___fadeColor_6;
		V_2 = L_22;
		// newColor2.a = alphaOut;
		float L_23 = __this->___alphaOut_4;
		(&V_2)->___a_3 = L_23;
		// rend.material.SetColor("_Color", newColor2);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_24 = V_1;
		NullCheck(L_24);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25 = L_24->___rend_7;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_2;
		NullCheck(L_26);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_26, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeScreen/<FadeRoutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m630BB1A0AFF35FEDF5237718D92BCFD6AD9A1FB9 (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeScreen/<FadeRoutine>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_m76FC45217A0DFA438D090EBFAEB2BD8F12A989AB_RuntimeMethod_var)));
	}
}
// System.Object FadeScreen/<FadeRoutine>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_get_Current_m3EA901320E300AFAB49F25F6C9A406E92EB087EC (U3CFadeRoutineU3Ed__8_tFCA3DBBF4F76A8D591389A04539641CED2BB6B39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AnimateHandOnInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Start_mDFB567101BCB7DCE653AE7E320015E93D3609592 (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Update_mC03CF4BE3804324BBC246D79B71F83B1A8848CDD (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float triggerValue = pinchAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD*)(&__this->___pinchAnimationAction_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// handAnimator.SetFloat("Trigger", triggerValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___handAnimator_6;
		float L_4 = V_0;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_4, NULL);
		// float gripValue = gripAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_5 = (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD*)(&__this->___gripAnimationAction_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_1 = L_7;
		// handAnimator.SetFloat("Grip", gripValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___handAnimator_6;
		float L_9 = V_1;
		NullCheck(L_8);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_9, NULL);
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput__ctor_mEA43A853FB1CB874A55072BFBF7A8B78BEF60F1C (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioAndHapticOnTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAndHapticOnTrigger_Start_m762F0C62BA4B65F20BA221FCE5F50CD779F0E1D1 (AudioAndHapticOnTrigger_tBDB666CBD8A47A6D47093F95FAEE9003224B7816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___source_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AudioAndHapticOnTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAndHapticOnTrigger_OnTriggerEnter_mDAA14FB819D0FEBC7DEA7151AB4F782DF4CFCEA4 (AudioAndHapticOnTrigger_tBDB666CBD8A47A6D47093F95FAEE9003224B7816* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// if (other.CompareTag(drumstickTargetTag))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		String_t* L_1 = __this->___drumstickTargetTag_12;
		NullCheck(L_0);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// source.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___source_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___clip_5;
		NullCheck(L_3);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
	}

IL_001f:
	{
		// if (drumstick1.isSelected && other.gameObject.CompareTag(rightHandTargetTag))
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_5 = __this->___drumstick1_8;
		NullCheck(L_5);
		bool L_6;
		L_6 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(L_5, NULL);
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		String_t* L_9 = __this->___rightHandTargetTag_6;
		NullCheck(L_8);
		bool L_10;
		L_10 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// rightController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_11 = __this->___rightController_11;
		float L_12 = __this->___intensity_13;
		float L_13 = __this->___duration_14;
		NullCheck(L_11);
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_11, L_12, L_13);
		goto IL_0091;
	}

IL_0059:
	{
		// else if (drumstick1.isSelected && other.gameObject.CompareTag(leftHandTargetTag))
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_15 = __this->___drumstick1_8;
		NullCheck(L_15);
		bool L_16;
		L_16 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(L_15, NULL);
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = ___0_other;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		String_t* L_19 = __this->___leftHandTargetTag_7;
		NullCheck(L_18);
		bool L_20;
		L_20 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		// leftController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_21 = __this->___leftController_10;
		float L_22 = __this->___intensity_13;
		float L_23 = __this->___duration_14;
		NullCheck(L_21);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_21, L_22, L_23);
	}

IL_0091:
	{
		// if (drumstick2.isSelected && other.gameObject.CompareTag(rightHandTargetTag))
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_25 = __this->___drumstick2_9;
		NullCheck(L_25);
		bool L_26;
		L_26 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(L_25, NULL);
		if (!L_26)
		{
			goto IL_00c9;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27 = ___0_other;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		String_t* L_29 = __this->___rightHandTargetTag_6;
		NullCheck(L_28);
		bool L_30;
		L_30 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_00c9;
		}
	}
	{
		// rightController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_31 = __this->___rightController_11;
		float L_32 = __this->___intensity_13;
		float L_33 = __this->___duration_14;
		NullCheck(L_31);
		bool L_34;
		L_34 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_31, L_32, L_33);
	}

IL_00c9:
	{
		// if (drumstick2.isSelected && other.gameObject.CompareTag(leftHandTargetTag))
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_35 = __this->___drumstick2_9;
		NullCheck(L_35);
		bool L_36;
		L_36 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(L_35, NULL);
		if (!L_36)
		{
			goto IL_0101;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_37 = ___0_other;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		String_t* L_39 = __this->___leftHandTargetTag_7;
		NullCheck(L_38);
		bool L_40;
		L_40 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0101;
		}
	}
	{
		// leftController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_41 = __this->___leftController_10;
		float L_42 = __this->___intensity_13;
		float L_43 = __this->___duration_14;
		NullCheck(L_41);
		bool L_44;
		L_44 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_41, L_42, L_43);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void AudioAndHapticOnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioAndHapticOnTrigger__ctor_m45FF06D41CE9B442210E79731B42D62E0D429EC7 (AudioAndHapticOnTrigger_tBDB666CBD8A47A6D47093F95FAEE9003224B7816* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Haptic::TriggerHaptic(UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* V_0 = NULL;
	{
		// if (eventArgs.interactorObject is XRBaseControllerInteractor controllerInteractor)
		BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BaseInteractionEventArgs_get_interactorObject_mDC483F1AAA1267A774B677E14189A3EDD1040864_inline(L_0, NULL);
		V_0 = ((XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E*)IsInstClass((RuntimeObject*)L_1, XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var));
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// TriggerHaptic(controllerInteractor.xrController);
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_3 = V_0;
		NullCheck(L_3);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4;
		L_4 = XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline(L_3, NULL);
		Haptic_TriggerHaptic_mB910C49E2375C9F0BFE92E510769EA60F963838B(__this, L_4, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Haptic::TriggerHaptic(UnityEngine.XR.Interaction.Toolkit.XRBaseController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_TriggerHaptic_mB910C49E2375C9F0BFE92E510769EA60F963838B (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___0_controller, const RuntimeMethod* method) 
{
	{
		// if (intensity > 0)
		float L_0 = __this->___intensity_0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// controller.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_1 = ___0_controller;
		float L_2 = __this->___intensity_0;
		float L_3 = __this->___duration_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_1, L_2, L_3);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Haptic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic__ctor_m2F0C7BDCD2320E80E9F7ACED8E51A5E84CEC216E (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void HapticInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticInteractable_Start_mD1279E6D8E7E5A0C923C1A1E07C08AB590339E46 (HapticInteractable_tC26BC16825BD0EF0A59FB04C0DCDAC19BEA2B906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_m2B25E996CEA087FC833B6E1BDC04B7BD3F52EDA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRBaseInteractable interactable = GetComponent<XRBaseInteractable>();
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0;
		L_0 = Component_GetComponent_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_m2B25E996CEA087FC833B6E1BDC04B7BD3F52EDA4(__this, Component_GetComponent_TisXRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_m2B25E996CEA087FC833B6E1BDC04B7BD3F52EDA4_RuntimeMethod_var);
		// interactable.activated.AddListener(hapticOnActivated.TriggerHaptic);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_1 = L_0;
		NullCheck(L_1);
		ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* L_2;
		L_2 = XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline(L_1, NULL);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_3 = __this->___hapticOnActivated_4;
		UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* L_4 = (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*)il2cpp_codegen_object_new(UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1(L_4, L_3, (intptr_t)((void*)Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1(L_2, L_4, UnityEvent_1_AddListener_mEF66295E608214778EDCF6A989C6645463CAF0E1_RuntimeMethod_var);
		// interactable.hoverEntered.AddListener(hapticHoverEntered.TriggerHaptic);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_5 = L_1;
		NullCheck(L_5);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_6;
		L_6 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(L_5, NULL);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_7 = __this->___hapticHoverEntered_5;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_8 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_8, L_7, (intptr_t)((void*)Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_6, L_8, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// interactable.hoverExited.AddListener(hapticHoverExited.TriggerHaptic);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_9 = L_5;
		NullCheck(L_9);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_10;
		L_10 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(L_9, NULL);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_11 = __this->___hapticHoverExited_6;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_12 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_12, L_11, (intptr_t)((void*)Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_10, L_12, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// interactable.selectEntered.AddListener(hapticSelectEntered.TriggerHaptic);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_13 = L_9;
		NullCheck(L_13);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_14;
		L_14 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(L_13, NULL);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_15 = __this->___hapticSelectEntered_7;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_16 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_16, L_15, (intptr_t)((void*)Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_14, L_16, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// interactable.selectExited.AddListener(hapticSelectExited.TriggerHaptic);
		NullCheck(L_13);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_17;
		L_17 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(L_13, NULL);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_18 = __this->___hapticSelectExited_8;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_19 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_19, L_18, (intptr_t)((void*)Haptic_TriggerHaptic_mB8311675BC1A4643456F06A11CF849E46585C614_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_17, L_19, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HapticInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticInteractable__ctor_m8C941BED75ED126732FABDFA701EE2CA3286D0D0 (HapticInteractable_tC26BC16825BD0EF0A59FB04C0DCDAC19BEA2B906* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HapticOnTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticOnTrigger_OnTriggerEnter_mF3F6F152FA5FFE972C6A93863A5BDB5F93F35E01 (HapticOnTrigger_tD652E6364166344E48874F071EE12D0D976EF534* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.CompareTag(rightHandTargetTag))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2 = __this->___rightHandTargetTag_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// rightController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4 = __this->___rightController_7;
		float L_5 = __this->___intensity_8;
		float L_6 = __this->___duration_9;
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_4, L_5, L_6);
	}

IL_002b:
	{
		// if (other.gameObject.CompareTag(leftHandTargetTag))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___0_other;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		String_t* L_10 = __this->___leftHandTargetTag_5;
		NullCheck(L_9);
		bool L_11;
		L_11 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// leftController.SendHapticImpulse(intensity, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_12 = __this->___leftController_6;
		float L_13 = __this->___intensity_8;
		float L_14 = __this->___duration_9;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_12, L_13, L_14);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void HapticOnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticOnTrigger__ctor_mE02EC3F418E7DBA1298D0E6EA744954A6212E48F (HapticOnTrigger_tD652E6364166344E48874F071EE12D0D976EF534* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void XRGrabInteractableToAttach::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractableToAttach_OnSelectEntered_mDBE2959974659C6CD480F243D4F69F36EA0737A3 (XRGrabInteractableToAttach_t72E0C4BAE68D9AE1F00F3D772217C0CE15A0DEA1* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27106F942A54634C382B8844354021F5250B0327);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD3CB78FDCF42B418FDF2A7150ABF6EB4D64927);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.interactorObject.transform.CompareTag("Left Hand"))
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteral5BD3CB78FDCF42B418FDF2A7150ABF6EB4D64927, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// attachTransform = leftAttachTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___leftAttachTransform_134;
		XRGrabInteractable_set_attachTransform_mB9E32067852B3E793C78488AFF113E217D8DA148_inline(__this, L_4, NULL);
		goto IL_0048;
	}

IL_0025:
	{
		// else if(args.interactorObject.transform.CompareTag("Right Hand"))
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_5 = ___0_args;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		bool L_8;
		L_8 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_7, _stringLiteral27106F942A54634C382B8844354021F5250B0327, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// attachTransform = rightAttachTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___rightAttachTransform_135;
		XRGrabInteractable_set_attachTransform_mB9E32067852B3E793C78488AFF113E217D8DA148_inline(__this, L_9, NULL);
	}

IL_0048:
	{
		// base.OnSelectEntered(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_10 = ___0_args;
		XRBaseInteractable_OnSelectEntered_m548EC86DEEF771E952DFC75BAE8EA5C27E441C5C(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void XRGrabInteractableToAttach::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractableToAttach__ctor_m56370F7CEDEE64B512887A2658BF73CF48A06E3D (XRGrabInteractableToAttach_t72E0C4BAE68D9AE1F00F3D772217C0CE15A0DEA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
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
// System.Void SpinFree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree_Update_m3301EFBD1B7DC6F06D34CCA773AFE993A7848A65 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// if (direction < 1f) {
		float L_0 = __this->___direction_8;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// direction += Time.deltaTime / (directionChangeSpeed / 2);
		float L_1 = __this->___direction_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___directionChangeSpeed_9;
		__this->___direction_8 = ((float)il2cpp_codegen_add(L_1, ((float)(L_2/((float)(L_3/(2.0f)))))));
	}

IL_002c:
	{
		// if (spin) {
		bool L_4 = __this->___spin_4;
		if (!L_4)
		{
			goto IL_00fc;
		}
	}
	{
		// if (clockwise) {
		bool L_5 = __this->___clockwise_7;
		if (!L_5)
		{
			goto IL_0099;
		}
	}
	{
		// if (spinParent)
		bool L_6 = __this->___spinParent_5;
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		// transform.parent.transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_11 = __this->___speed_6;
		float L_12 = __this->___direction_8;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_9);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_9, L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), NULL);
		return;
	}

IL_0075:
	{
		// transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_16 = __this->___speed_6;
		float L_17 = __this->___direction_8;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_14);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_14, L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), NULL);
		return;
	}

IL_0099:
	{
		// if (spinParent)
		bool L_19 = __this->___spinParent_5;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// transform.parent.transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		float L_25 = __this->___speed_6;
		float L_26 = __this->___direction_8;
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_22);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_22, L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_25, L_26)), L_27)), NULL);
		return;
	}

IL_00d4:
	{
		// transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_29, NULL);
		float L_31 = __this->___speed_6;
		float L_32 = __this->___direction_8;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_28);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_28, L_30, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, L_32)), L_33)), NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void SpinFree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree__ctor_m2D12C8C18B2F2680D0C70305FD030A1A68E0CBA5 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_6 = (10.0f);
		// public bool clockwise = true;
		__this->___clockwise_7 = (bool)1;
		// public float direction = 1f;
		__this->___direction_8 = (1.0f);
		// public float directionChangeSpeed = 2f;
		__this->___directionChangeSpeed_9 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneTransitionManager::GoToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionManager_GoToScene_mBA834D088A593F841694A381EE3ABDA75DD70367 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GoToSceneRoutine(sceneIndex));
		int32_t L_0 = ___0_sceneIndex;
		RuntimeObject* L_1;
		L_1 = SceneTransitionManager_GoToSceneRoutine_m3EFF6201B39C3498B404507370B0A6C7B299BA3E(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneTransitionManager::GoToSceneRoutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransitionManager_GoToSceneRoutine_m3EFF6201B39C3498B404507370B0A6C7B299BA3E (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* L_0 = (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2*)il2cpp_codegen_object_new(U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGoToSceneRoutineU3Ed__2__ctor_mD5A8B587906C0B17F61D7DA150C1773D23C1CEAA(L_0, 0, NULL);
		U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_3 = L_3;
		return L_2;
	}
}
// System.Void SceneTransitionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionManager__ctor_mC1CE6821C2F16276186084D740072667E81DDD46 (SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneTransitionManager/<GoToSceneRoutine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2__ctor_mD5A8B587906C0B17F61D7DA150C1773D23C1CEAA (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneTransitionManager/<GoToSceneRoutine>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2_System_IDisposable_Dispose_m22B87A079DF12B6DFA13D82ABF56224AE0BABF40 (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneTransitionManager/<GoToSceneRoutine>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGoToSceneRoutineU3Ed__2_MoveNext_mCE8A26ED3493D254E0458742ED96394AAC2ACA9B (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fadeScreen.FadeOut();
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_4 = V_1;
		NullCheck(L_4);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_5 = L_4->___fadeScreen_4;
		NullCheck(L_5);
		FadeScreen_FadeOut_m510215CB60D51C092E6957FFD6288046274D3310(L_5, NULL);
		// yield return new WaitForSeconds(fadeScreen.fadeDuration);
		SceneTransitionManager_tD01F6613CD559F2FDC031F89912659FB201F5011* L_6 = V_1;
		NullCheck(L_6);
		FadeScreen_tC8A4EBDDB57B0BD4D2AF72FCE4EB2A680D5A02D6* L_7 = L_6->___fadeScreen_4;
		NullCheck(L_7);
		float L_8 = L_7->___fadeDuration_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_10 = __this->___sceneIndex_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneTransitionManager/<GoToSceneRoutine>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRoutineU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m40B09FAD5B62B95F09ED159565DB3DCCCD01C27E (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneTransitionManager/<GoToSceneRoutine>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC72E614DF7F5C49A01663F772789DAD6AAECA1DE (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC72E614DF7F5C49A01663F772789DAD6AAECA1DE_RuntimeMethod_var)));
	}
}
// System.Object SceneTransitionManager/<GoToSceneRoutine>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_get_Current_m014B33C4FF8F084242D6497AAB6AA46902F52BDC (U3CGoToSceneRoutineU3Ed__2_t2013BA6FD9B519BD543ABC53010B925FFEA797E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Point_m2AE3872E9E41EDA1C80F3621DB02CDDDC37A16E9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_newWidth, int32_t ___2_newHeight, const RuntimeMethod* method) 
{
	{
		// ThreadedScale(tex, newWidth, newHeight, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_tex;
		int32_t L_1 = ___1_newWidth;
		int32_t L_2 = ___2_newHeight;
		TextureScale_ThreadedScale_mCAFF7C32104EB62501C535FC53DAE5C9C3A11BB1(L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Bilinear_m46D3FAF17B036C221322852995D13D65B93AD9A7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_newWidth, int32_t ___2_newHeight, const RuntimeMethod* method) 
{
	{
		// ThreadedScale(tex, newWidth, newHeight, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_tex;
		int32_t L_1 = ___1_newWidth;
		int32_t L_2 = ___2_newHeight;
		TextureScale_ThreadedScale_mCAFF7C32104EB62501C535FC53DAE5C9C3A11BB1(L_0, L_1, L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_mCAFF7C32104EB62501C535FC53DAE5C9C3A11BB1 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_newWidth, int32_t ___2_newHeight, bool ___3_useBilinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_3 = NULL;
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_4 = NULL;
	ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* G_B10_0 = NULL;
	{
		// texColors = tex.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_tex;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_0, NULL);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0), (void*)L_1);
		// newColors = new Color[newWidth * newHeight];
		int32_t L_2 = ___1_newWidth;
		int32_t L_3 = ___2_newHeight;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)));
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1), (void*)L_4);
		// if (useBilinear)
		bool L_5 = ___3_useBilinear;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// ratioX = 1.0f / ((float)newWidth / (tex.width - 1));
		int32_t L_6 = ___1_newWidth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___0_tex;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3 = ((float)((1.0f)/((float)(((float)L_6)/((float)((int32_t)il2cpp_codegen_subtract(L_8, 1)))))));
		// ratioY = 1.0f / ((float)newHeight / (tex.height - 1));
		int32_t L_9 = ___2_newHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___0_tex;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4 = ((float)((1.0f)/((float)(((float)L_9)/((float)((int32_t)il2cpp_codegen_subtract(L_11, 1)))))));
		goto IL_0069;
	}

IL_004b:
	{
		// ratioX = ((float)tex.width) / newWidth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___0_tex;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = ___1_newWidth;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3 = ((float)(((float)L_13)/((float)L_14)));
		// ratioY = ((float)tex.height) / newHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_tex;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = ___2_newHeight;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4 = ((float)(((float)L_16)/((float)L_17)));
	}

IL_0069:
	{
		// w = tex.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_tex;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2 = L_19;
		// w2 = newWidth;
		int32_t L_20 = ___1_newWidth;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5 = L_20;
		// var cores = Mathf.Min(SystemInfo.processorCount, newHeight);
		int32_t L_21;
		L_21 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		int32_t L_22 = ___2_newHeight;
		int32_t L_23;
		L_23 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_21, L_22, NULL);
		V_0 = L_23;
		// var slice = newHeight / cores;
		int32_t L_24 = ___2_newHeight;
		int32_t L_25 = V_0;
		V_1 = ((int32_t)(L_24/L_25));
		// finishCount = 0;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = 0;
		// if (mutex == null)
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		if (L_26)
		{
			goto IL_00a2;
		}
	}
	{
		// mutex = new Mutex(false);
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_27 = (Mutex_t20344F093646D8679E9E11939981AE14DD8B3148*)il2cpp_codegen_object_new(Mutex_t20344F093646D8679E9E11939981AE14DD8B3148_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Mutex__ctor_m5B66DF00F3580EB657EE520E65D2929B243863C9(L_27, (bool)0, NULL);
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7), (void*)L_27);
	}

IL_00a2:
	{
		// if (cores > 1)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		// int i = 0;
		V_2 = 0;
		// for (i = 0; i < cores - 1; i++)
		V_2 = 0;
		goto IL_00e6;
	}

IL_00ac:
	{
		// threadData = new ThreadData(slice * i, slice * (i + 1));
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_33 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_33, ((int32_t)il2cpp_codegen_multiply(L_29, L_30)), ((int32_t)il2cpp_codegen_multiply(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)))), NULL);
		V_3 = L_33;
		// ParameterizedThreadStart ts = useBilinear ? new ParameterizedThreadStart(BilinearScale) : new ParameterizedThreadStart(PointScale);
		bool L_34 = ___3_useBilinear;
		if (L_34)
		{
			goto IL_00cb;
		}
	}
	{
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_35 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_35, NULL, (intptr_t)((void*)TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1_RuntimeMethod_var), NULL);
		G_B10_0 = L_35;
		goto IL_00d7;
	}

IL_00cb:
	{
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_36 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_36, NULL, (intptr_t)((void*)TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F_RuntimeMethod_var), NULL);
		G_B10_0 = L_36;
	}

IL_00d7:
	{
		// Thread thread = new Thread(ts);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_37 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_37, G_B10_0, NULL);
		// thread.Start(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_38 = V_3;
		NullCheck(L_37);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_37, L_38, NULL);
		// for (i = 0; i < cores - 1; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00e6:
	{
		// for (i = 0; i < cores - 1; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 1)))))
		{
			goto IL_00ac;
		}
	}
	{
		// threadData = new ThreadData(slice * i, newHeight);
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = ___2_newHeight;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_45 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_45, ((int32_t)il2cpp_codegen_multiply(L_42, L_43)), L_44, NULL);
		V_3 = L_45;
		// if (useBilinear)
		bool L_46 = ___3_useBilinear;
		if (!L_46)
		{
			goto IL_0101;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_47 = V_3;
		TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F(L_47, NULL);
		goto IL_010f;
	}

IL_0101:
	{
		// PointScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_48 = V_3;
		TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1(L_48, NULL);
		goto IL_010f;
	}

IL_0109:
	{
		// Thread.Sleep(1);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(1, NULL);
	}

IL_010f:
	{
		// while (finishCount < cores)
		int32_t L_49 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0135;
	}

IL_0119:
	{
		// ThreadData threadData = new ThreadData(0, newHeight);
		int32_t L_51 = ___2_newHeight;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_52 = (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)il2cpp_codegen_object_new(ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2(L_52, 0, L_51, NULL);
		V_4 = L_52;
		// if (useBilinear)
		bool L_53 = ___3_useBilinear;
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_54 = V_4;
		TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F(L_54, NULL);
		goto IL_0135;
	}

IL_012e:
	{
		// PointScale(threadData);
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_55 = V_4;
		TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1(L_55, NULL);
	}

IL_0135:
	{
		// tex.Reinitialize(newWidth, newHeight);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = ___0_tex;
		int32_t L_57 = ___1_newWidth;
		int32_t L_58 = ___2_newHeight;
		NullCheck(L_56);
		bool L_59;
		L_59 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_56, L_57, L_58, NULL);
		// tex.SetPixels(newColors);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = ___0_tex;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_61 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		NullCheck(L_60);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_60, L_61, NULL);
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = ___0_tex;
		NullCheck(L_62);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_62, NULL);
		// texColors = null;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0), (void*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL);
		// newColors = null;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1), (void*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL);
		// }
		return;
	}
}
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m22923828DE2338530B8F46A6364FAA89BAB2C92F (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)CastclassClass((RuntimeObject*)L_0, ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___start_0;
		V_1 = L_2;
		goto IL_00e7;
	}

IL_0013:
	{
		// int yFloor = (int)Mathf.Floor(y * ratioY);
		int32_t L_3 = V_1;
		float L_4 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		float L_5;
		L_5 = floorf(((float)il2cpp_codegen_multiply(((float)L_3), L_4)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// var y1 = yFloor * w;
		int32_t L_6 = V_2;
		int32_t L_7 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		// var y2 = (yFloor + 1) * w;
		int32_t L_8 = V_2;
		int32_t L_9 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), L_9));
		// var yw = y * w2;
		int32_t L_10 = V_1;
		int32_t L_11 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_10, L_11));
		// for (var x = 0; x < w2; x++)
		V_6 = 0;
		goto IL_00d7;
	}

IL_0046:
	{
		// int xFloor = (int)Mathf.Floor(x * ratioX);
		int32_t L_12 = V_6;
		float L_13 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		float L_14;
		L_14 = floorf(((float)il2cpp_codegen_multiply(((float)L_12), L_13)));
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		// var xLerp = x * ratioX - xFloor;
		int32_t L_15 = V_6;
		float L_16 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		int32_t L_17 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_15), L_16)), ((float)L_17)));
		// newColors[yw + x] = ColorLerpUnclamped(ColorLerpUnclamped(texColors[y1 + xFloor], texColors[y1 + xFloor + 1], xLerp),
		//                                        ColorLerpUnclamped(texColors[y2 + xFloor], texColors[y2 + xFloor + 1], xLerp),
		//                                        y * ratioY - yFloor);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_22 = V_3;
		int32_t L_23 = V_7;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_27 = V_3;
		int32_t L_28 = V_7;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = TextureScale_ColorLerpUnclamped_m1E513C5098D6689AC1C66818609B160416F01512(L_25, L_30, L_31, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_33 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_34 = V_4;
		int32_t L_35 = V_7;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_38 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = TextureScale_ColorLerpUnclamped_m1E513C5098D6689AC1C66818609B160416F01512(L_37, L_42, L_43, NULL);
		int32_t L_45 = V_1;
		float L_46 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		int32_t L_47 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = TextureScale_ColorLerpUnclamped_m1E513C5098D6689AC1C66818609B160416F01512(L_32, L_44, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_45), L_46)), ((float)L_47))), NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_48);
		// for (var x = 0; x < w2; x++)
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00d7:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_50 = V_6;
		int32_t L_51 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0046;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00e7:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_53 = V_1;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___end_1;
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0013;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_56 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_56);
		// finishCount++;
		int32_t L_58 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// mutex.ReleaseMutex();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_59 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_59);
		Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C(L_59, NULL);
		// }
		return;
	}
}
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_mFFA5765213B531DA43626AC5822CA48F72EC07D1 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD*)CastclassClass((RuntimeObject*)L_0, ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___start_0;
		V_1 = L_2;
		goto IL_0065;
	}

IL_0010:
	{
		// var thisY = (int)(ratioY * y) * w;
		float L_3 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioY_4;
		int32_t L_4 = V_1;
		int32_t L_5 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, ((float)L_4)))), L_5));
		// var yw = y * w2;
		int32_t L_6 = V_1;
		int32_t L_7 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		// for (var x = 0; x < w2; x++)
		V_4 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// newColors[yw + x] = texColors[(int)(thisY + ratioX * x)];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___newColors_1;
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___texColors_0;
		int32_t L_12 = V_2;
		float L_13 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___ratioX_3;
		int32_t L_14 = V_4;
		NullCheck(L_11);
		int32_t L_15 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)L_12), ((float)il2cpp_codegen_multiply(L_13, ((float)L_14))))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_16);
		// for (var x = 0; x < w2; x++)
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_18 = V_4;
		int32_t L_19 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___w2_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002d;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0065:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_21 = V_1;
		ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___end_1;
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0010;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_24 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_24);
		// finishCount++;
		int32_t L_26 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6;
		((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___finishCount_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		// mutex.ReleaseMutex();
		Mutex_t20344F093646D8679E9E11939981AE14DD8B3148* L_27 = ((TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952_il2cpp_TypeInfo_var))->___mutex_7;
		NullCheck(L_27);
		Mutex_ReleaseMutex_m72AE23EAAF122BA84AB32006A01D6B2D4A4B167C(L_27, NULL);
		// }
		return;
	}
}
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextureScale_ColorLerpUnclamped_m1E513C5098D6689AC1C66818609B160416F01512 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_c2, float ___2_value, const RuntimeMethod* method) 
{
	{
		// return new Color(c1.r + (c2.r - c1.r) * value,
		//                   c1.g + (c2.g - c1.g) * value,
		//                   c1.b + (c2.b - c1.b) * value,
		//                   c1.a + (c2.a - c1.a) * value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c1;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_c2;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c1;
		float L_5 = L_4.___r_0;
		float L_6 = ___2_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_c1;
		float L_8 = L_7.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___1_c2;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___0_c1;
		float L_12 = L_11.___g_1;
		float L_13 = ___2_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___0_c1;
		float L_15 = L_14.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___1_c2;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___0_c1;
		float L_19 = L_18.___b_2;
		float L_20 = ___2_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___0_c1;
		float L_22 = L_21.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___1_c2;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___0_c1;
		float L_26 = L_25.___a_3;
		float L_27 = ___2_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void TextureScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale__ctor_m58F73B7E18FAEC7656C4EFBBCEFA2D5E06297906 (TextureScale_t4752149BC6A67080B203E066A06A40705BDCE952* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_m871190A9851FF9A4E07BBBAD8F2F6CB87CD185B2 (ThreadData_tAC630649EA28DE7B3DBF8900D3BEE4F3350633CD* __this, int32_t ___0_s, int32_t ___1_e, const RuntimeMethod* method) 
{
	{
		// public ThreadData(int s, int e)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// start = s;
		int32_t L_0 = ___0_s;
		__this->___start_0 = L_0;
		// end = e;
		int32_t L_1 = ___1_e;
		__this->___end_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseInteractionEventArgs_get_interactorObject_mDC483F1AAA1267A774B677E14189A3EDD1040864_inline (BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E* __this, const RuntimeMethod* method) 
{
	{
		// public IXRInteractor interactorObject { get; set; }
		RuntimeObject* L_0 = __this->___U3CinteractorObjectU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Controller;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___m_Controller_96;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* XRBaseInteractable_get_activated_mA303C37F9F4F7C8F5E8830DD0A60735A1FD7A71F_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Activated;
		ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* L_0 = __this->___m_Activated_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRGrabInteractable_set_attachTransform_mB9E32067852B3E793C78488AFF113E217D8DA148_inline (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AttachTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_AttachTransform_73 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AttachTransform_73), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
