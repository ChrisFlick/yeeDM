#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>
struct ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs>
struct ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>
struct ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA;
// System.Collections.Generic.Dictionary`2<System.Guid,Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor>
struct Dictionary_2_t7DC2AD3DACF3294A65F6353494E4B87287E9B757;
// System.Func`2<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,System.String>
struct Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerable`1<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor>
struct IEnumerable_1_tAE9ED530FEFBD9AA6578AAF7ED2D1CDF4BC38ED4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IList`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct IList_1_t056A32CE1B83338E94A9281AB0A0FF506E311C94;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor[]
struct IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload[]
struct WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803;
// AudioReactive
struct AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B;
// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// FaceCamera
struct FaceCamera_t5E0D0372A661907D73AB467595A9E72F58D5668A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Niantic.ARDK.AR.HitTest.IARHitTestResult
struct IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215;
// Niantic.ARDK.AR.IARSession
struct IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Niantic.ARDK.LocationService.ILocationService
struct ILocationService_t2D698EC8C7EE4F64E9A56D7A4B3AE49FA262CB76;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor
struct IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchorsConfiguration
struct IWayspotAnchorsConfiguration_tE98D38CC7CAE245E674F62E7C883CA6650FDC3A0;
// Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs
struct LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlacementMesh
struct PlacementMesh_t72BA1B9F0D8B98C1CF58FDD9B07133AFB27E76CA;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RoomController
struct RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324;
// SceneManager
struct SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorController
struct WayspotAnchorController_tA65F9C6ED3AEB4F61BBD7D703CA4B4D4AD5B0ADF;
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload
struct WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221;
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService
struct WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7;
// Niantic.ARDK.Extensions.WayspotAnchorTracker
struct WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D;
// WorkshopWayspotAnchorController
struct WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// WorkshopWayspotAnchorController/<>c
struct U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F;
// WorkshopWayspotAnchorController/MyStoredAnchorsData
struct MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D;

IL2CPP_EXTERN_C RuntimeClass* ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocationService_t2D698EC8C7EE4F64E9A56D7A4B3AE49FA262CB76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationFailureReason_t9504575D19B10701794B822E8CE40FB8DBDC5850_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationState_t9D43BBC114566C7EBDAAD625BED09C055A032AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral301C7B7655C93E8A26032778F6310B5611BC77A5;
IL2CPP_EXTERN_C String_t* _stringLiteral3654133A8F88F3313CABB14D70234A6F0595A733;
IL2CPP_EXTERN_C String_t* _stringLiteral5216D70780C5EA230AE6E334D1B13870055482BD;
IL2CPP_EXTERN_C String_t* _stringLiteral99B566E8C1FAA3DCEFF21D7736AE71DB6678412D;
IL2CPP_EXTERN_C String_t* _stringLiteralA68940EF1FEE410315E4FD04806A4126DCA50F2C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8144A6ACE4424B4D23CB8371990597D0AFE199A;
IL2CPP_EXTERN_C String_t* _stringLiteralADDC1D74FAA0E02AB180E00408060B73BA97A031;
IL2CPP_EXTERN_C String_t* _stringLiteralC18F6CB97B360B663C832721AFE00F1ACC556171;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F0C680FA20BE452F040CC7A18C3179AB1E2CE3;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324_mEBAE904D251B9376A179B830DB011C7832BF192F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_m8F02C71C5FBA788C722C74096A0C6738C7D0CDCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_TisString_t_mC326A3F8429B2CAEB06F4CF61FAEB2E6B0335338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m025E423B92108F531A9CEA267F0FA35E6CB74890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m11362EC16E5B82F19DB0AF9007BF41DE3B5AB867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisMyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_m996ABE805CE2021E24C172B4AD27D8914656595D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveLocalWayspotAnchorsU3Eb__17_0_mD29DA4D1EDB9C2AD65EE922EA0065E08BD4C9E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkshopWayspotAnchorController_OnLocalizationStateUpdated_m239831A893B2AD65E98763A600283800DE2682F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE;

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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>
struct ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs
struct LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6  : public RuntimeObject
{
	// Niantic.ARDK.AR.WayspotAnchors.LocalizationState Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// Niantic.ARDK.AR.WayspotAnchors.LocalizationFailureReason Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs::<FailureReason>k__BackingField
	int32_t ___U3CFailureReasonU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload
struct WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221  : public RuntimeObject
{
	// System.Byte[] Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload::<_Blob>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3C_BlobU3Ek__BackingField_0;
};

// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService
struct WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7  : public RuntimeObject
{
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs> Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::LocalizationStateUpdated
	ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA* ___LocalizationStateUpdated_0;
	// Niantic.ARDK.AR.WayspotAnchors.LocalizationState Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::<LocalizationState>k__BackingField
	int32_t ___U3CLocalizationStateU3Ek__BackingField_1;
	// Niantic.ARDK.AR.WayspotAnchors.LocalizationFailureReason Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::<LocalizationFailureReason>k__BackingField
	int32_t ___U3CLocalizationFailureReasonU3Ek__BackingField_2;
	// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorController Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::_wayspotAnchorController
	WayspotAnchorController_tA65F9C6ED3AEB4F61BBD7D703CA4B4D4AD5B0ADF* ____wayspotAnchorController_3;
	// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::_arSession
	RuntimeObject* ____arSession_4;
	// Niantic.ARDK.LocationService.ILocationService Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::_locationService
	RuntimeObject* ____locationService_5;
	// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchorsConfiguration Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::_wayspotAnchorsConfiguration
	RuntimeObject* ____wayspotAnchorsConfiguration_6;
	// System.Collections.Generic.Dictionary`2<System.Guid,Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor> Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::_wayspotAnchors
	Dictionary_2_t7DC2AD3DACF3294A65F6353494E4B87287E9B757* ____wayspotAnchors_7;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// WorkshopWayspotAnchorController/<>c
struct U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F  : public RuntimeObject
{
};

struct U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields
{
	// WorkshopWayspotAnchorController/<>c WorkshopWayspotAnchorController/<>c::<>9
	U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* ___U3CU3E9_0;
	// System.Func`2<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,System.String> WorkshopWayspotAnchorController/<>c::<>9__17_0
	Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* ___U3CU3E9__17_0_1;
};

// WorkshopWayspotAnchorController/MyStoredAnchorsData
struct MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D  : public RuntimeObject
{
	// System.String[] WorkshopWayspotAnchorController/MyStoredAnchorsData::Payloads
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Payloads_0;
};

// Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs
struct ARSessionRanArgs_t45F3718446AFEB664945BA3F1589091A5918F8EB 
{
	union
	{
		struct
		{
		};
		uint8_t ARSessionRanArgs_t45F3718446AFEB664945BA3F1589091A5918F8EB__padding[1];
	};
};

// Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E 
{
	// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	// System.Boolean Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::<_IsLocal>k__BackingField
	bool ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_pinvoke
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs
struct AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E_marshaled_com
{
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	int32_t ___U3C_IsLocalU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>
struct ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>
struct ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs>
struct ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,System.String>
struct Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE  : public MulticastDelegate_t
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

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip AudioPlayer::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_4;
	// UnityEngine.GameObject AudioPlayer::activeScene
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeScene_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AudioPlayer::scenes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___scenes_6;
	// UnityEngine.GameObject AudioPlayer::placementMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementMesh_7;
};

// AudioReactive
struct AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AudioReactive::loudness
	float ___loudness_4;
	// System.Single AudioReactive::multiplier
	float ___multiplier_5;
	// System.Int32 AudioReactive::sampleWindow
	int32_t ___sampleWindow_6;
	// System.Boolean AudioReactive::useMic
	bool ___useMic_7;
	// UnityEngine.AudioClip AudioReactive::microphoneClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___microphoneClip_8;
};

// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FaceCamera
struct FaceCamera_t5E0D0372A661907D73AB467595A9E72F58D5668A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlacementMesh
struct PlacementMesh_t72BA1B9F0D8B98C1CF58FDD9B07133AFB27E76CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RoomController
struct RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip RoomController::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_4;
	// UnityEngine.GameObject RoomController::scene
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scene_5;
};

// SceneManager
struct SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera SceneManager::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_4;
	// Niantic.ARDK.AR.IARSession SceneManager::_ARsession
	RuntimeObject* ____ARsession_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Niantic.ARDK.Extensions.WayspotAnchorTracker
struct WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor Niantic.ARDK.Extensions.WayspotAnchorTracker::<WayspotAnchor>k__BackingField
	RuntimeObject* ___U3CWayspotAnchorU3Ek__BackingField_4;
};

// WorkshopWayspotAnchorController
struct WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WorkshopWayspotAnchorController::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// UnityEngine.GameObject WorkshopWayspotAnchorController::_objectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____objectPrefab_5;
	// UnityEngine.UI.Text WorkshopWayspotAnchorController::_statusLog
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____statusLog_6;
	// UnityEngine.UI.Text WorkshopWayspotAnchorController::_localizationStatus
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____localizationStatus_7;
	// System.String WorkshopWayspotAnchorController::LocalSaveKey
	String_t* ___LocalSaveKey_8;
	// Niantic.ARDK.AR.IARSession WorkshopWayspotAnchorController::_arSession
	RuntimeObject* ____arSession_9;
	// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService WorkshopWayspotAnchorController::_wayspotAnchorService
	WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* ____wayspotAnchorService_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor[]
struct IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload[]
struct WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE  : public RuntimeArray
{
	ALIGN_FIELD (8) WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* m_Items[1];

	inline WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m4168DD9DD1A0C034B09ACF82B09C2FACBEA95AFF_gshared (ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared (ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AudioPlayer>()
inline AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<RoomController>()
inline RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* Component_GetComponent_TisRoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324_mEBAE904D251B9376A179B830DB011C7832BF192F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void AudioPlayer::SwitchScene(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_SwitchScene_mF5703CF7ED689DAFBA0842DC89C918DB6A30EF46 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scene0, const RuntimeMethod* method) ;
// System.Void AudioPlayer::TurnOffScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_TurnOffScenes_mDFA002BD274CC73B00B32C2D31CDF001DEC9B588 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void AudioReactive::MicToAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReactive_MicToAudioClip_m4A9D1EE4241BD108F85A4654FFD46486339E4708 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.AR.ARSessionFactory::add_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.ARSessionFactory::remove_SessionInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740 (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* ___value0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs::get_Session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.LocalizationState Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::get_LocalizationState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WayspotAnchorService_get_LocalizationState_m609EB52CCB8D68FD6E00A35946646A9B5BA46946_inline (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, const RuntimeMethod* method) ;
// System.Int32 Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F (int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::IsTouchOverUIObject(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformAgnosticInput_IsTouchOverUIObject_m0F00A1432BD208D1C5B804FD1070309ADE635500 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void WorkshopWayspotAnchorController::OnTouchScreen(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnTouchScreen_m690ABFE38629BB3988D7907009C5CA1AA1DA8D7E (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor[] Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::CreateWayspotAnchors(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* WayspotAnchorService_CreateWayspotAnchors_m3A9ED8E6AD67E2F549140673E58E346CD39BF188 (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___localPoses0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Niantic.ARDK.Utilities.MatrixUtils::ToPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Niantic.ARDK.Utilities.MatrixUtils::ToRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MatrixUtils_ToRotation_m5FBB81927C6D824ADCE1F44E5C26A058B00FBAE6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Void WorkshopWayspotAnchorController::CreateWayspotAnchorGameObject(Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_CreateWayspotAnchorGameObject_mE5CC48F948F69D11E784F79CA7CD78323A020C64 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, RuntimeObject* ___anchor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<Niantic.ARDK.Extensions.WayspotAnchorTracker>()
inline WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* GameObject_GetComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m11362EC16E5B82F19DB0AF9007BF41DE3B5AB867 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Niantic.ARDK.Extensions.WayspotAnchorTracker>()
inline WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* GameObject_AddComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m025E423B92108F531A9CEA267F0FA35E6CB74890 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Niantic.ARDK.Extensions.WayspotAnchorTracker::AttachAnchor(Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayspotAnchorTracker_AttachAnchor_m2B0C9AEBAA710D7D1EC979CBD22319F44FC0C000 (WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* __this, RuntimeObject* ___anchor0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m4168DD9DD1A0C034B09ACF82B09C2FACBEA95AFF (ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m4168DD9DD1A0C034B09ACF82B09C2FACBEA95AFF_gshared)(__this, ___object0, ___method1, method);
}
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchorsConfiguration Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorsConfigurationFactory::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WayspotAnchorsConfigurationFactory_Create_mC88E8AB39E64B4F07950211E71192E2E61FF63D1 (const RuntimeMethod* method) ;
// Niantic.ARDK.LocationService.ILocationService Niantic.ARDK.LocationService.LocationServiceFactory::Create(Niantic.ARDK.RuntimeEnvironment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocationServiceFactory_Create_m87C63129850C9E3067EAB3C60434395B24D8BAA2 (int32_t ___env0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::.ctor(Niantic.ARDK.AR.IARSession,Niantic.ARDK.LocationService.ILocationService,Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchorsConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WayspotAnchorService__ctor_m96B7A185DB0A9D977E2522B6FE5D6E683A83B018 (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, RuntimeObject* ___arSession0, RuntimeObject* ___locationService1, RuntimeObject* ___wayspotAnchorsConfiguration2, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mEDBB762015405425EFF27F887F337D2D6BC5EB15 (ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult>::get_Item(System.Int32)
inline RuntimeObject* ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32 (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void WorkshopWayspotAnchorController::PlaceAnchor(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_PlaceAnchor_m33A740D0C68401822F10255261030F61015F93EB (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___poseData0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.LocalizationState Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationStateUpdatedArgs_get_State_m46C8E8FC04338D0B1318D54B8203FC2E4229EE75_inline (LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.LocalizationFailureReason Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs::get_FailureReason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationStateUpdatedArgs_get_FailureReason_m9E3EF8800A64E7DDA8F6AA0D355C8EC367EF0680_inline (LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor[] Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::GetAllWayspotAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* WayspotAnchorService_GetAllWayspotAnchors_mD3B119AC84F2A89A9B04A3F4D767E85D0ED94C67 (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, const RuntimeMethod* method) ;
// System.Void WorkshopWayspotAnchorController/MyStoredAnchorsData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyStoredAnchorsData__ctor_m752D63DDADA8F2984E641B966FC1A5ABFA51CC7E (MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m54C6533C896DBED0E3E43D8FC63D366A18463A8A (Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_TisString_t_mC326A3F8429B2CAEB06F4CF61FAEB2E6B0335338 (RuntimeObject* ___source0, Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_m8F02C71C5FBA788C722C74096A0C6738C7D0CDCA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<WorkshopWayspotAnchorController/MyStoredAnchorsData>(System.String)
inline MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* JsonUtility_FromJson_TisMyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_m996ABE805CE2021E24C172B4AD27D8914656595D (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* WayspotAnchorPayload_Deserialize_mF0B3E2F1D9DA9948643959143F6D8A43F88E647E (String_t* ___data0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor[] Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorService::RestoreWayspotAnchors(Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* WayspotAnchorService_RestoreWayspotAnchors_m63B968D28BE039035BB060385BF78052DC11934D (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE* ___wayspotAnchorPayloads0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void WorkshopWayspotAnchorController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9192D6AEA9D9161E349521F76D59E263E01F8DE4 (U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* __this, const RuntimeMethod* method) ;
// System.String Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WayspotAnchorPayload_Serialize_mC0A826D3ECDF220D11FF8C35F422909A90A384F0 (WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void PlacementMesh::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementMesh_Start_m63E3C243E9C6D22858AA1940C30F4C288B7B2F0C (PlacementMesh_t72BA1B9F0D8B98C1CF58FDD9B07133AFB27E76CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3654133A8F88F3313CABB14D70234A6F0595A733);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("AudioPlayer").GetComponent<AudioPlayer>().placementMesh = this.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3654133A8F88F3313CABB14D70234A6F0595A733, NULL);
		NullCheck(L_0);
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_1;
		L_1 = GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00(L_0, GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		L_1->___placementMesh_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___placementMesh_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlacementMesh::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementMesh_Update_mF23C20E0C879EEA9EA6C08BBB9E5A1413B1A8073 (PlacementMesh_t72BA1B9F0D8B98C1CF58FDD9B07133AFB27E76CA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlacementMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementMesh__ctor_mA282C6D7A316B494626BF1469CF968718E0E855C (PlacementMesh_t72BA1B9F0D8B98C1CF58FDD9B07133AFB27E76CA* __this, const RuntimeMethod* method) 
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
// System.Void AudioPlayer::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_OnTriggerEnter_m261843935A5A5A5109F226CCA9FAD0E3E8E505D5 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324_mEBAE904D251B9376A179B830DB011C7832BF192F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral301C7B7655C93E8A26032778F6310B5611BC77A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("AudioZone"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral301C7B7655C93E8A26032778F6310B5611BC77A5, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// SwitchScene(other.GetComponent<RoomController>().scene.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* L_3;
		L_3 = Component_GetComponent_TisRoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324_mEBAE904D251B9376A179B830DB011C7832BF192F(L_2, Component_GetComponent_TisRoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324_mEBAE904D251B9376A179B830DB011C7832BF192F_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___scene_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		AudioPlayer_SwitchScene_mF5703CF7ED689DAFBA0842DC89C918DB6A30EF46(__this, L_5, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AudioPlayer::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_OnTriggerExit_mC22D0C4AB865491332523E6B7F68EB0C2D58D17F (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral301C7B7655C93E8A26032778F6310B5611BC77A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("AudioZone") )
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral301C7B7655C93E8A26032778F6310B5611BC77A5, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// TurnOffScenes();
		AudioPlayer_TurnOffScenes_mDFA002BD274CC73B00B32C2D31CDF001DEC9B588(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AudioPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_Start_m1CD4C540B92CF134746EF50084C5729768B93CD8 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	{
		// TurnOffScenes();
		AudioPlayer_TurnOffScenes_mDFA002BD274CC73B00B32C2D31CDF001DEC9B588(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::TurnOffScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_TurnOffScenes_mDFA002BD274CC73B00B32C2D31CDF001DEC9B588 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scenes.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// scenes[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___scenes_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// for (int i = 0; i < scenes.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < scenes.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___scenes_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioPlayer::SwitchScene(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_SwitchScene_mF5703CF7ED689DAFBA0842DC89C918DB6A30EF46 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scenes.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// scenes[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___scenes_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// for (int i = 0; i < scenes.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < scenes.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___scenes_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// scene.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___scene0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::TurnOffMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_TurnOffMesh_m2CD20C6094B2B2ECD334BA29094DD872B6A288CE (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placementMesh)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___placementMesh_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// placementMesh.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placementMesh_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void AudioPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer__ctor_m3F81E1F07C97F2ECE2A837B3FB918ECBBCA14B17 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
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
// System.Void AudioReactive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReactive_Start_mC55447E8A629AB023106493DC71D8AD5F5BF96C8 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, const RuntimeMethod* method) 
{
	{
		// if (useMic)
		bool L_0 = __this->___useMic_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// MicToAudioClip();
		AudioReactive_MicToAudioClip_m4A9D1EE4241BD108F85A4654FFD46486339E4708(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AudioReactive::MicToAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReactive_MicToAudioClip_m4A9D1EE4241BD108F85A4654FFD46486339E4708 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single AudioReactive::GetAudioClipLoudness(System.Int32,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReactive_GetAudioClipLoudness_mCAED4A204D93DB169166BF1E1FE51A3D0DD83CA7 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, int32_t ___clipPosition0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// int startPosition = clipPosition - sampleWindow;
		int32_t L_0 = ___clipPosition0;
		int32_t L_1 = __this->___sampleWindow_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if(startPosition < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0013:
	{
		// float[] waveData = new float[sampleWindow];
		int32_t L_3 = __this->___sampleWindow_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// clip.GetData(waveData, startPosition);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___clip1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		bool L_8;
		L_8 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_5, L_6, L_7, NULL);
		// float totalLoundnesss = 0;
		V_2 = (0.0f);
		// for (int i = 0; i < sampleWindow; i++)
		V_3 = 0;
		goto IL_0041;
	}

IL_0032:
	{
		// totalLoundnesss += Mathf.Abs(waveData[i]);
		float L_9 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		float L_14;
		L_14 = fabsf(L_13);
		V_2 = ((float)il2cpp_codegen_add(L_9, L_14));
		// for (int i = 0; i < sampleWindow; i++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < sampleWindow; i++)
		int32_t L_16 = V_3;
		int32_t L_17 = __this->___sampleWindow_6;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0032;
		}
	}
	{
		// return totalLoundnesss / sampleWindow;
		float L_18 = V_2;
		int32_t L_19 = __this->___sampleWindow_6;
		return ((float)(L_18/((float)L_19)));
	}
}
// System.Void AudioReactive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReactive_Update_mE08C00362322D82C5DAF3171F3981CAA9F8FE709 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudioReactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReactive__ctor_mEB405A8ED60BD21E6B891A8860B87D7559F524A8 (AudioReactive_t3C583D9541F21ECB7037D561472EEA30C8E8BE1B* __this, const RuntimeMethod* method) 
{
	{
		// public float multiplier = 2.0f;
		__this->___multiplier_5 = (2.0f);
		// public int sampleWindow = 64;
		__this->___sampleWindow_6 = ((int32_t)64);
		// public bool useMic = true;
		__this->___useMic_7 = (bool)1;
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
// System.Void Ball::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Start_m6E8CBDA3753768BAFE8CE82AD74B01E8355C50D3 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Ball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Update_mE1E2A0FEFCA0034896BB36FD9C75718E4D14E3B2 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this, 5.0f);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(__this, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_mDFF93D8FA13BD70DF4F2FA2B9B402E3B10BD6EDC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
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
// System.Void FaceCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceCamera_Start_m36C189451F380B7FA03494B1466276854CF49FBD (FaceCamera_t5E0D0372A661907D73AB467595A9E72F58D5668A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FaceCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceCamera_Update_m295E828F20DC5F8CADC64934C989C94F27592CA3 (FaceCamera_t5E0D0372A661907D73AB467595A9E72F58D5668A* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(Camera.main.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void FaceCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceCamera__ctor_mC5D44A53DFAE40B1103AEBB2A513D3CE453AE25A (FaceCamera_t5E0D0372A661907D73AB467595A9E72F58D5668A* __this, const RuntimeMethod* method) 
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
// System.Void RoomController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomController_OnEnable_m63730A7CB1A9CD0018091B937885D2F3D08EB18A (RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3654133A8F88F3313CABB14D70234A6F0595A733);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("AudioPlayer").GetComponent<AudioPlayer>().scenes.Add(scene);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3654133A8F88F3313CABB14D70234A6F0595A733, NULL);
		NullCheck(L_0);
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_1;
		L_1 = GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00(L_0, GameObject_GetComponent_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m080DA1C2B9C8C9CC325ADED8C86C92A9F3C53F00_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = L_1->___scenes_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___scene_5;
		NullCheck(L_2);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_2, L_3, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RoomController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomController_Start_m9CDC7C5C58EED461081E6294ED38C854B79B1CBF (RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RoomController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomController_Update_m188ECB37E82788494D22D0E1D6876A55DC8859C9 (RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RoomController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomController__ctor_mEB87810ACA1CD175DB05E5F11053F0F8F41F8A94 (RoomController_tA7F3B0732B0328190C1E6F94EFB79BA70C4FC324* __this, const RuntimeMethod* method) 
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
// System.Void SceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Start_mA38706E4402D600ECDE8A1FF3C45DDEF3948DB0F (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized += OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneManager::OnSessionInitialized(Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized -= OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)SceneManager_OnSessionInitialized_mADAD9CA29B700A529CD0692FF24C1069D88258B5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740(L_0, NULL);
		// _ARsession = args.Session;
		RuntimeObject* L_1;
		L_1 = AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline((&___args0), NULL);
		__this->____ARsession_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ARsession_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void SceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager__ctor_m61FBFE598A99CDD806C72972FD6466E89648A5B1 (SceneManager_tC7A8B738D971E14D9BB35AC9A41E754C7B61F821* __this, const RuntimeMethod* method) 
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
// System.Void WorkshopWayspotAnchorController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnEnable_m720DE7F1A316064C8E9875B221CE6FC975B4AA8B (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized += OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_add_SessionInitialized_m718A16A7689C0CA6B674979A1419F6456A3C016D(L_0, NULL);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_Update_m0D5596B03596BF545EE4182153975281A406EB7D (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_wayspotAnchorService == null ||
		//    _wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_0 = __this->____wayspotAnchorService_10;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_1 = __this->____wayspotAnchorService_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WayspotAnchorService_get_LocalizationState_m609EB52CCB8D68FD6E00A35946646A9B5BA46946_inline(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// _wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;
		return;
	}

IL_0017:
	{
		// if (PlatformAgnosticInput.touchCount <= 0) return;
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// if (PlatformAgnosticInput.touchCount <= 0) return;
		return;
	}

IL_0020:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F(0, NULL);
		V_0 = L_4;
		// if (touch.IsTouchOverUIObject()) return;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = V_0;
		bool L_6;
		L_6 = PlatformAgnosticInput_IsTouchOverUIObject_m0F00A1432BD208D1C5B804FD1070309ADE635500(L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// if (touch.IsTouchOverUIObject()) return;
		return;
	}

IL_0030:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_7;
		L_7 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		// OnTouchScreen(touch);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_8 = V_0;
		WorkshopWayspotAnchorController_OnTouchScreen_m690ABFE38629BB3988D7907009C5CA1AA1DA8D7E(__this, L_8, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnDisable_mBA96D88192B97FD4292FAC4D47DAA4215D9610F4 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSessionFactory.SessionInitialized -= OnSessionInitialized;
		ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F* L_0 = (ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F*)il2cpp_codegen_object_new(ArdkEventHandler_1_tCCB27F02245F70E3BB65CE37AA8EB9D8CEE40A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m1F32FB5A87DFB0A2A116C1A3C0B6E2520236A507(L_0, __this, (intptr_t)((void*)WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		ARSessionFactory_remove_SessionInitialized_m9EAA2283AA72DBD23DA9ED4B7DD7C4325ED42740(L_0, NULL);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::DeleteAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_DeleteAnchor_m71443717DF363B8B6272E7CEB6B824626E5AFC29 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::PlaceAnchor(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_PlaceAnchor_m33A740D0C68401822F10255261030F61015F93EB (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___poseData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5216D70780C5EA230AE6E334D1B13870055482BD);
		s_Il2CppMethodInitialized = true;
	}
	IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var anchors = _wayspotAnchorService.CreateWayspotAnchors(poseData);
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_0 = __this->____wayspotAnchorService_10;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)1);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = L_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___poseData0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_3);
		NullCheck(L_0);
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_4;
		L_4 = WayspotAnchorService_CreateWayspotAnchors_m3A9ED8E6AD67E2F549140673E58E346CD39BF188(L_0, L_2, NULL);
		V_0 = L_4;
		// if (anchors.Length == 0) return;
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_001f;
		}
	}
	{
		// if (anchors.Length == 0) return;
		return;
	}

IL_001f:
	{
		// var position = poseData.ToPosition();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___poseData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_6, NULL);
		V_1 = L_7;
		// var rotation = poseData.ToRotation();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___poseData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = MatrixUtils_ToRotation_m5FBB81927C6D824ADCE1F44E5C26A058B00FBAE6(L_8, NULL);
		V_2 = L_9;
		// CreateWayspotAnchorGameObject(anchors[0], position, rotation);
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_2;
		WorkshopWayspotAnchorController_CreateWayspotAnchorGameObject_mE5CC48F948F69D11E784F79CA7CD78323A020C64(__this, L_12, L_13, L_14, NULL);
		// _statusLog.text = "Anchor placed.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->____statusLog_6;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral5216D70780C5EA230AE6E334D1B13870055482BD);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::CreateWayspotAnchorGameObject(Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_CreateWayspotAnchorGameObject_mE5CC48F948F69D11E784F79CA7CD78323A020C64 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, RuntimeObject* ___anchor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m025E423B92108F531A9CEA267F0FA35E6CB74890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m11362EC16E5B82F19DB0AF9007BF41DE3B5AB867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var go = Instantiate(_objectPrefab, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____objectPrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_3;
		// var tracker = go.GetComponent<WayspotAnchorTracker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* L_5;
		L_5 = GameObject_GetComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m11362EC16E5B82F19DB0AF9007BF41DE3B5AB867(L_4, GameObject_GetComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m11362EC16E5B82F19DB0AF9007BF41DE3B5AB867_RuntimeMethod_var);
		// if (tracker == null)
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// tracker = go.AddComponent<WayspotAnchorTracker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		WayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D* L_8;
		L_8 = GameObject_AddComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m025E423B92108F531A9CEA267F0FA35E6CB74890(L_7, GameObject_AddComponent_TisWayspotAnchorTracker_tE711C0C087ADD2732CC99743D5760EB1A188528D_m025E423B92108F531A9CEA267F0FA35E6CB74890_RuntimeMethod_var);
		// tracker.AttachAnchor(anchor);
		RuntimeObject* L_9 = ___anchor0;
		NullCheck(L_8);
		WayspotAnchorTracker_AttachAnchor_m2B0C9AEBAA710D7D1EC979CBD22319F44FC0C000(L_8, L_9, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::OnSessionInitialized(Niantic.ARDK.AR.ARSessionEventArgs.AnyARSessionInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnSessionInitialized_mC0EFBE331ACC424FCFE8684BA4A6EB4118FEF616 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADDC1D74FAA0E02AB180E00408060B73BA97A031);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _statusLog.text = "Session initialized";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____statusLog_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralADDC1D74FAA0E02AB180E00408060B73BA97A031);
		// if (_arSession != null) return;
		RuntimeObject* L_1 = __this->____arSession_9;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (_arSession != null) return;
		return;
	}

IL_0019:
	{
		// _arSession = args.Session;
		RuntimeObject* L_2;
		L_2 = AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline((&___args0), NULL);
		__this->____arSession_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arSession_9), (void*)L_2);
		// _arSession.Ran += OnSessionRan;
		RuntimeObject* L_3 = __this->____arSession_9;
		ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* L_4 = (ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E*)il2cpp_codegen_object_new(ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m4168DD9DD1A0C034B09ACF82B09C2FACBEA95AFF(L_4, __this, (intptr_t)((void*)WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* >::Invoke(19 /* System.Void Niantic.ARDK.AR.IARSession::add_Ran(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::OnSessionRan(Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, ARSessionRanArgs_t45F3718446AFEB664945BA3F1589091A5918F8EB ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocationService_t2D698EC8C7EE4F64E9A56D7A4B3AE49FA262CB76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkshopWayspotAnchorController_OnLocalizationStateUpdated_m239831A893B2AD65E98763A600283800DE2682F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B566E8C1FAA3DCEFF21D7736AE71DB6678412D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// _arSession.Ran -= OnSessionRan;
		RuntimeObject* L_0 = __this->____arSession_9;
		ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* L_1 = (ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E*)il2cpp_codegen_object_new(ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m4168DD9DD1A0C034B09ACF82B09C2FACBEA95AFF(L_1, __this, (intptr_t)((void*)WorkshopWayspotAnchorController_OnSessionRan_m6999C40740715EFA81E0247693C17DD7E6DD8C51_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< ArdkEventHandler_1_tDE6B66D5598E4FA843B1798F9820C9DD025ECE4E* >::Invoke(20 /* System.Void Niantic.ARDK.AR.IARSession::remove_Ran(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.ARSessionEventArgs.ARSessionRanArgs>) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_0, L_1);
		// var wayspotAnchorsConfiguration = WayspotAnchorsConfigurationFactory.Create();
		RuntimeObject* L_2;
		L_2 = WayspotAnchorsConfigurationFactory_Create_mC88E8AB39E64B4F07950211E71192E2E61FF63D1(NULL);
		V_0 = L_2;
		// var locationService = LocationServiceFactory.Create(_arSession.RuntimeEnvironment);
		RuntimeObject* L_3 = __this->____arSession_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Niantic.ARDK.RuntimeEnvironment Niantic.ARDK.AR.IARSession::get_RuntimeEnvironment() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5;
		L_5 = LocationServiceFactory_Create_m87C63129850C9E3067EAB3C60434395B24D8BAA2(L_4, NULL);
		V_1 = L_5;
		// locationService.Start();
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Niantic.ARDK.LocationService.ILocationService::Start() */, ILocationService_t2D698EC8C7EE4F64E9A56D7A4B3AE49FA262CB76_il2cpp_TypeInfo_var, L_6);
		// _wayspotAnchorService = new WayspotAnchorService(_arSession, locationService, wayspotAnchorsConfiguration);
		RuntimeObject* L_7 = __this->____arSession_9;
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = V_0;
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_10 = (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7*)il2cpp_codegen_object_new(WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WayspotAnchorService__ctor_m96B7A185DB0A9D977E2522B6FE5D6E683A83B018(L_10, L_7, L_8, L_9, NULL);
		__this->____wayspotAnchorService_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____wayspotAnchorService_10), (void*)L_10);
		// _wayspotAnchorService.LocalizationStateUpdated += OnLocalizationStateUpdated;
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_11 = __this->____wayspotAnchorService_10;
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_12 = L_11;
		NullCheck(L_12);
		ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA* L_13 = L_12->___LocalizationStateUpdated_0;
		ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA* L_14 = (ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA*)il2cpp_codegen_object_new(ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ArdkEventHandler_1__ctor_mEDBB762015405425EFF27F887F337D2D6BC5EB15(L_14, __this, (intptr_t)((void*)WorkshopWayspotAnchorController_OnLocalizationStateUpdated_m239831A893B2AD65E98763A600283800DE2682F2_RuntimeMethod_var), NULL);
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		NullCheck(L_12);
		L_12->___LocalizationStateUpdated_0 = ((ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA*)Castclass((RuntimeObject*)L_15, ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___LocalizationStateUpdated_0), (void*)((ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA*)Castclass((RuntimeObject*)L_15, ArdkEventHandler_1_t3C576CD62E7B6E40DA483B527FF554667A1FADBA_il2cpp_TypeInfo_var)));
		// _statusLog.text = "Session running";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->____statusLog_6;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral99B566E8C1FAA3DCEFF21D7736AE71DB6678412D);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::OnTouchScreen(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnTouchScreen_m690ABFE38629BB3988D7907009C5CA1AA1DA8D7E (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var currentFrame = _arSession.CurrentFrame;
		RuntimeObject* L_0 = __this->____arSession_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Niantic.ARDK.AR.IARFrame Niantic.ARDK.AR.IARSession::get_CurrentFrame() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (currentFrame == null) return;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (currentFrame == null) return;
		return;
	}

IL_0010:
	{
		// var hitTestResults = currentFrame.HitTest(_camera.pixelWidth, _camera.pixelHeight, touch.position,
		//     ARHitTestResultType.EstimatedHorizontalPlane);
		RuntimeObject* L_3 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____camera_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->____camera_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___touch0), NULL);
		NullCheck(L_3);
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_9;
		L_9 = InterfaceFuncInvoker4< ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1*, int32_t, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(14 /* System.Collections.ObjectModel.ReadOnlyCollection`1<Niantic.ARDK.AR.HitTest.IARHitTestResult> Niantic.ARDK.AR.IARFrame::HitTest(System.Int32,System.Int32,UnityEngine.Vector2,Niantic.ARDK.AR.HitTest.ARHitTestResultType) */, IARFrame_tCF4C31DB7FD454D960AF22DF95E39666B398A58B_il2cpp_TypeInfo_var, L_3, L_5, L_7, L_8, 4);
		V_1 = L_9;
		// if (hitTestResults.Count <= 0) return;
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA(L_10, ReadOnlyCollection_1_get_Count_m8ABD0A6BE4C934A36C53F339BCBCBCD9DC1342CA_RuntimeMethod_var);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// if (hitTestResults.Count <= 0) return;
		return;
	}

IL_003f:
	{
		// var position = hitTestResults[0].WorldTransform.ToPosition();
		ReadOnlyCollection_1_t1B0F424E67E50D7340EB7B60B14083C6E9E65EF1* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32(L_12, 0, ReadOnlyCollection_1_get_Item_m20C616049291A20F11CA9F5A26D79209D79DCF32_RuntimeMethod_var);
		NullCheck(L_13);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14;
		L_14 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(4 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.HitTest.IARHitTestResult::get_WorldTransform() */, IARHitTestResult_t7C42BBC455DA5446916EED4B480FD4356DCC7215_il2cpp_TypeInfo_var, L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = MatrixUtils_ToPosition_mD2843F95E2F6F40B53CED436EE9C3517F6D910E5(L_14, NULL);
		// var rotation = Quaternion.Euler(new Vector3(0, UnityEngine.Random.Range(0, 360)));
		int32_t L_16;
		L_16 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_17), (0.0f), ((float)L_16), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_17, NULL);
		V_2 = L_18;
		// Matrix4x4 poseData = Matrix4x4.TRS(position, rotation, _objectPrefab.transform.localScale);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____objectPrefab_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_21, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_15, L_19, L_22, NULL);
		V_3 = L_23;
		// PlaceAnchor(poseData);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = V_3;
		WorkshopWayspotAnchorController_PlaceAnchor_m33A740D0C68401822F10255261030F61015F93EB(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::OnLocalizationStateUpdated(Niantic.ARDK.AR.WayspotAnchors.LocalizationStateUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_OnLocalizationStateUpdated_m239831A893B2AD65E98763A600283800DE2682F2 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationFailureReason_t9504575D19B10701794B822E8CE40FB8DBDC5850_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationState_t9D43BBC114566C7EBDAAD625BED09C055A032AF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _localizationStatus.text = args.State.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____localizationStatus_7;
		LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* L_1 = ___args0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LocalizationStateUpdatedArgs_get_State_m46C8E8FC04338D0B1318D54B8203FC2E4229EE75_inline(L_1, NULL);
		V_0 = L_2;
		Il2CppFakeBox<int32_t> L_3(LocalizationState_t9D43BBC114566C7EBDAAD625BED09C055A032AF9_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// if (args.State == LocalizationState.Failed)
		LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LocalizationStateUpdatedArgs_get_State_m46C8E8FC04338D0B1318D54B8203FC2E4229EE75_inline(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}
	{
		// _statusLog.text = args.FailureReason.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->____statusLog_6;
		LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LocalizationStateUpdatedArgs_get_FailureReason_m9E3EF8800A64E7DDA8F6AA0D355C8EC367EF0680_inline(L_8, NULL);
		V_1 = L_9;
		Il2CppFakeBox<int32_t> L_10(LocalizationFailureReason_t9504575D19B10701794B822E8CE40FB8DBDC5850_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::SaveLocalWayspotAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_SaveLocalWayspotAnchors_m2384E4AE919CD29ABA64A76F45859B2158E7FA76 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_m8F02C71C5FBA788C722C74096A0C6738C7D0CDCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_TisString_t_mC326A3F8429B2CAEB06F4CF61FAEB2E6B0335338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveLocalWayspotAnchorsU3Eb__17_0_mD29DA4D1EDB9C2AD65EE922EA0065E08BD4C9E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18F6CB97B360B663C832721AFE00F1ACC556171);
		s_Il2CppMethodInitialized = true;
	}
	IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* V_0 = NULL;
	String_t* V_1 = NULL;
	Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* G_B2_0 = NULL;
	IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* G_B2_1 = NULL;
	MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* G_B2_2 = NULL;
	MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* G_B2_3 = NULL;
	Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* G_B1_0 = NULL;
	IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* G_B1_1 = NULL;
	MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* G_B1_2 = NULL;
	MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* G_B1_3 = NULL;
	{
		// IWayspotAnchor[] wayspotAnchors = _wayspotAnchorService.GetAllWayspotAnchors();
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_0 = __this->____wayspotAnchorService_10;
		NullCheck(L_0);
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_1;
		L_1 = WayspotAnchorService_GetAllWayspotAnchors_mD3B119AC84F2A89A9B04A3F4D767E85D0ED94C67(L_0, NULL);
		V_0 = L_1;
		// MyStoredAnchorsData storedAnchorData = new MyStoredAnchorsData();
		MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* L_2 = (MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D*)il2cpp_codegen_object_new(MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MyStoredAnchorsData__ctor_m752D63DDADA8F2984E641B966FC1A5ABFA51CC7E(L_2, NULL);
		// storedAnchorData.Payloads = wayspotAnchors.Select(a => a.Payload.Serialize()).ToArray(); // lookup => notation
		MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* L_3 = L_2;
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var);
		Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* L_5 = ((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		G_B1_2 = L_3;
		G_B1_3 = L_3;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			G_B2_2 = L_3;
			G_B2_3 = L_3;
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* L_7 = ((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* L_8 = (Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE*)il2cpp_codegen_object_new(Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m54C6533C896DBED0E3E43D8FC63D366A18463A8A(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CSaveLocalWayspotAnchorsU3Eb__17_0_mD29DA4D1EDB9C2AD65EE922EA0065E08BD4C9E87_RuntimeMethod_var), NULL);
		Func_2_t6720BD5A97A878C7841BA99AC00935807869BDFE* L_9 = L_8;
		((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0032:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_TisString_t_mC326A3F8429B2CAEB06F4CF61FAEB2E6B0335338((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_TisString_t_mC326A3F8429B2CAEB06F4CF61FAEB2E6B0335338_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_10, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___Payloads_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___Payloads_0), (void*)L_11);
		// string jsonData = JsonUtility.ToJson(storedAnchorData);
		String_t* L_12;
		L_12 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(G_B2_3, NULL);
		V_1 = L_12;
		// PlayerPrefs.SetString(LocalSaveKey, jsonData);
		String_t* L_13 = __this->___LocalSaveKey_8;
		String_t* L_14 = V_1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_13, L_14, NULL);
		// _statusLog.text = $"Saved {wayspotAnchors.Count()} anchors";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->____statusLog_6;
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_16 = V_0;
		int32_t L_17;
		L_17 = Enumerable_Count_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_m8F02C71C5FBA788C722C74096A0C6738C7D0CDCA((RuntimeObject*)L_16, Enumerable_Count_TisIWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_m8F02C71C5FBA788C722C74096A0C6738C7D0CDCA_RuntimeMethod_var);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC18F6CB97B360B663C832721AFE00F1ACC556171, L_19, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_20);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::LoadLocalWayspotAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController_LoadLocalWayspotAnchors_m603D8BDBD0B38FA41026F627C14F5081ADA8B69B (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisMyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_m996ABE805CE2021E24C172B4AD27D8914656595D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68940EF1FEE410315E4FD04806A4126DCA50F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5F0C680FA20BE452F040CC7A18C3179AB1E2CE3);
		s_Il2CppMethodInitialized = true;
	}
	MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* V_3 = NULL;
	IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (PlayerPrefs.HasKey(LocalSaveKey))
		String_t* L_0 = __this->___LocalSaveKey_8;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
		if (!L_1)
		{
			goto IL_00a6;
		}
	}
	{
		// string json = PlayerPrefs.GetString(LocalSaveKey);
		String_t* L_2 = __this->___LocalSaveKey_8;
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		// MyStoredAnchorsData storedAnchorsData = JsonUtility.FromJson<MyStoredAnchorsData>(json);
		MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* L_4;
		L_4 = JsonUtility_FromJson_TisMyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_m996ABE805CE2021E24C172B4AD27D8914656595D(L_3, JsonUtility_FromJson_TisMyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D_m996ABE805CE2021E24C172B4AD27D8914656595D_RuntimeMethod_var);
		V_0 = L_4;
		// foreach (var wayspotAnchorPayload in storedAnchorsData.Payloads)
		MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* L_5 = V_0;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5->___Payloads_0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_007a;
	}

IL_002c:
	{
		// foreach (var wayspotAnchorPayload in storedAnchorsData.Payloads)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// var payload = WayspotAnchorPayload.Deserialize(wayspotAnchorPayload);
		WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* L_11;
		L_11 = WayspotAnchorPayload_Deserialize_mF0B3E2F1D9DA9948643959143F6D8A43F88E647E(L_10, NULL);
		V_3 = L_11;
		// var anchors = _wayspotAnchorService.RestoreWayspotAnchors(payload);
		WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* L_12 = __this->____wayspotAnchorService_10;
		WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE* L_13 = (WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE*)(WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE*)SZArrayNew(WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE_il2cpp_TypeInfo_var, (uint32_t)1);
		WayspotAnchorPayloadU5BU5D_t37BA579A6CC7828409295691F3A9C2E5EAD1CAEE* L_14 = L_13;
		WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* L_15 = V_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221*)L_15);
		NullCheck(L_12);
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_16;
		L_16 = WayspotAnchorService_RestoreWayspotAnchors_m63B968D28BE039035BB060385BF78052DC11934D(L_12, L_14, NULL);
		V_4 = L_16;
		// if (anchors.Length == 0)
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_17 = V_4;
		NullCheck(L_17);
		if ((((RuntimeArray*)L_17)->max_length))
		{
			goto IL_0052;
		}
	}
	{
		// return;
		return;
	}

IL_0052:
	{
		// var position = anchors[0].LastKnownPosition;
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19 = 0;
		RuntimeObject* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* UnityEngine.Vector3 Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor::get_LastKnownPosition() */, IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var, L_20);
		V_5 = L_21;
		// var rotation = anchors[0].LastKnownRotation;
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23 = 0;
		RuntimeObject* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(11 /* UnityEngine.Quaternion Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor::get_LastKnownRotation() */, IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var, L_24);
		V_6 = L_25;
		// CreateWayspotAnchorGameObject(anchors[0], position, rotation);
		IWayspotAnchorU5BU5D_tB0B43BA80455D08D819DEA5B39EA32FE1F1A4E7B* L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = 0;
		RuntimeObject* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_6;
		WorkshopWayspotAnchorController_CreateWayspotAnchorGameObject_mE5CC48F948F69D11E784F79CA7CD78323A020C64(__this, L_28, L_29, L_30, NULL);
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_007a:
	{
		// foreach (var wayspotAnchorPayload in storedAnchorsData.Payloads)
		int32_t L_32 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// _statusLog.text = $"Restored {storedAnchorsData.Payloads.Count()} anchors";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->____statusLog_6;
		MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* L_35 = V_0;
		NullCheck(L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35->___Payloads_0;
		int32_t L_37;
		L_37 = Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0((RuntimeObject*)L_36, Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralA68940EF1FEE410315E4FD04806A4126DCA50F2C, L_39, NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_40);
		return;
	}

IL_00a6:
	{
		// _statusLog.text = "No key found";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->____statusLog_6;
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, _stringLiteralF5F0C680FA20BE452F040CC7A18C3179AB1E2CE3);
		// }
		return;
	}
}
// System.Void WorkshopWayspotAnchorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkshopWayspotAnchorController__ctor_mEBB8C7ED353E90342C11BFBF1F50F772B159FBB6 (WorkshopWayspotAnchorController_t4C0828E6C8BAF4F43A2A63484581D4F138E21CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8144A6ACE4424B4D23CB8371990597D0AFE199A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string LocalSaveKey = "my_wayspots"; // key used to store anchors locally
		__this->___LocalSaveKey_8 = _stringLiteralA8144A6ACE4424B4D23CB8371990597D0AFE199A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LocalSaveKey_8), (void*)_stringLiteralA8144A6ACE4424B4D23CB8371990597D0AFE199A);
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
// System.Void WorkshopWayspotAnchorController/MyStoredAnchorsData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyStoredAnchorsData__ctor_m752D63DDADA8F2984E641B966FC1A5ABFA51CC7E (MyStoredAnchorsData_t349CD3A9B25D5D36C7D5473C22F30E5B7964276D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string[] Payloads = Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		__this->___Payloads_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Payloads_0), (void*)L_0);
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
// System.Void WorkshopWayspotAnchorController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA6108352930D5D1175F337541092A9991C745DCE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* L_0 = (U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F*)il2cpp_codegen_object_new(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9192D6AEA9D9161E349521F76D59E263E01F8DE4(L_0, NULL);
		((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WorkshopWayspotAnchorController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9192D6AEA9D9161E349521F76D59E263E01F8DE4 (U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String WorkshopWayspotAnchorController/<>c::<SaveLocalWayspotAnchors>b__17_0(Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSaveLocalWayspotAnchorsU3Eb__17_0_mD29DA4D1EDB9C2AD65EE922EA0065E08BD4C9E87 (U3CU3Ec_tDDB8A6A18B0F929F99CF561E78B98391AEBEA84F* __this, RuntimeObject* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storedAnchorData.Payloads = wayspotAnchors.Select(a => a.Payload.Serialize()).ToArray(); // lookup => notation
		RuntimeObject* L_0 = ___a0;
		NullCheck(L_0);
		WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* L_1;
		L_1 = InterfaceFuncInvoker0< WayspotAnchorPayload_t03219D6AC979D2A45443B0AB03A5CD1CF42F9221* >::Invoke(7 /* Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorPayload Niantic.ARDK.AR.WayspotAnchors.IWayspotAnchor::get_Payload() */, IWayspotAnchor_tEDF9143CBB8A73EECCE9470DE1B7BBF7EFFF5309_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = WayspotAnchorPayload_Serialize_mC0A826D3ECDF220D11FF8C35F422909A90A384F0(L_1, NULL);
		return L_2;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnyARSessionInitializedArgs_get_Session_mE6A718E2634C4094FC47FEA581B0C40F19E19487_inline (AnyARSessionInitializedArgs_tE9AE7DDB243BC243078CD789176855EBE941497E* __this, const RuntimeMethod* method) 
{
	{
		// public IARSession Session { get; }
		RuntimeObject* L_0 = __this->___U3CSessionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WayspotAnchorService_get_LocalizationState_m609EB52CCB8D68FD6E00A35946646A9B5BA46946_inline (WayspotAnchorService_t4BFA062631629FD6E0E8E82BCB306601282003B7* __this, const RuntimeMethod* method) 
{
	{
		// public LocalizationState LocalizationState { get; private set; }
		int32_t L_0 = __this->___U3CLocalizationStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationStateUpdatedArgs_get_State_m46C8E8FC04338D0B1318D54B8203FC2E4229EE75_inline (LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* __this, const RuntimeMethod* method) 
{
	{
		// public LocalizationState State { get; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationStateUpdatedArgs_get_FailureReason_m9E3EF8800A64E7DDA8F6AA0D355C8EC367EF0680_inline (LocalizationStateUpdatedArgs_t90A342F41A4D62C089C4C52FEA098BF76795C5A6* __this, const RuntimeMethod* method) 
{
	{
		// public LocalizationFailureReason FailureReason { get; }
		int32_t L_0 = __this->___U3CFailureReasonU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
