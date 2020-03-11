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

#include "il2cpp-class-internals.h"
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Atom
struct Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08;
// HoloToolkit.MRDL.PeriodicTable.Element
struct Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35;
// HoloToolkit.MRDL.PeriodicTable.Element/<UpdateActive>d__27
struct U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90;
// HoloToolkit.MRDL.PeriodicTable.ElementData
struct ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E;
// HoloToolkit.MRDL.PeriodicTable.ElementData[]
struct ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7;
// HoloToolkit.MRDL.PeriodicTable.ElementsData
struct ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52;
// HoloToolkit.MRDL.PeriodicTable.OptimizeSceneforDeviceType
struct OptimizeSceneforDeviceType_tA50CFB233395199ECFC32B94C588AFF69EF7214E;
// HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader
struct PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F;
// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer
struct PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978;
// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer/<PresentOverTime>d__17
struct U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE;
// LayoutStyleChanger
struct LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76;
// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_t5A5929B50B6E43CC54ECBA0A016AF9E553558C3F;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Material>[]
struct EntryU5BU5D_t29989F28ABBCCA46A72BBB677315C05714FC1529;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Material>
struct KeyCollection_tF825BB4F566491154EA2DBA357D9F5DE0C8AF6BE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Material>
struct ValueCollection_t53121702D790BD2D35E0B8DCCFEB7E5FEB6A88D9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<HoloToolkit.MRDL.PeriodicTable.ElementData>
struct List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t1EA610D31DB1EACACD3FFFE38F28FD8D45DED6FE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3;
// UnityEngine.Mesh[]
struct MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextAsset
struct TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC_il2cpp_TypeInfo_var;
extern RuntimeClass* Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral06C33E88C0D354A574B6FB279B87AB1E00BBA572;
extern String_t* _stringLiteral1657C397F8AD32EE40B942B459022A2D663474FC;
extern String_t* _stringLiteral3647EE990F94749332600BA1B1B34FAD6BFDBE51;
extern String_t* _stringLiteral4FB4C5F44EB9AF9205850E6C024965B6B85C3FBE;
extern String_t* _stringLiteral68782301B81884605B93B1B7F36EEEF9FF830877;
extern String_t* _stringLiteral6E507967A8E2F2CDFDD140FDF0D920FF8BF0EC26;
extern String_t* _stringLiteral7262E54296952B1914FB7240EA7DE24933808179;
extern String_t* _stringLiteral7C8239763DEFA7808F1E6B5EA816504B0CAE4798;
extern String_t* _stringLiteral9535BAF86EBA82548B48E567D69A64EFC42D1372;
extern String_t* _stringLiteralADB55BDC0D8D0BD216EC2EDFA2D4D7995719E401;
extern String_t* _stringLiteralC4F1F5B1D49F90D5437402166829D6B471BF1593;
extern String_t* _stringLiteralC6FA85DD6023A4CDDBC5F211CD98A82A8D063BF1;
extern String_t* _stringLiteralE11BFBBCA70558A13820FA9BD38D2C20F17EE8AC;
extern String_t* _stringLiteralE50E5BADBA4715519C3DF4A319285B119BEED4F0;
extern String_t* _stringLiteralED7F09E8C3B482B54C6715DE97BCAC67EBDF67F9;
extern const RuntimeMethod* Component_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_mDF8FA97D113CD3DFEA06F17F00F2F45EA939BAD3_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisPresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978_mF5B3772BDD1DF564EB5AE3265DFF68FFF70BCB00_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m7D446EDFB993721998FE67D593EC46486C3471D3_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m5C6DD0B88AEAF52B2BA2CC050B9A4046AB8F43FE_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m84A63102A89E6342355DFCA5B9BBC8B389278B31_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2FEA5F5583C9DDC8BD875673F2CAAA89D9982566_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m7C9E55F245ADBD26C6992115DAE3A270C1FD2D00_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m6D26CA83B05924D15567080C902A5FADBDD021F2_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52_m0D6956DC193FCB30E002E018A2448AFDAE238923_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m6907AED51371D3B2C7006EEA0BCE1B96EFE3450E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisTextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_m5684DE13E921E2A7AA35CD9C7C00958F6B921F8F_RuntimeMethod_var;
extern const RuntimeMethod* U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_Reset_mDF550AF2BC435EBCA9D5D605AFCBEB7006CDEF97_RuntimeMethod_var;
extern const RuntimeMethod* U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_Reset_m5DF8AADE7A03BB1360BB56A1B302F1AC7065ABA5_RuntimeMethod_var;
extern const uint32_t Atom_OnEnable_m8496DE586070E38801A60BA64B0EB51621810880_MetadataUsageId;
extern const uint32_t Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6_MetadataUsageId;
extern const uint32_t Atom_Update_mFEA40AB88F8B397B94EF0365B214C87C9D59E1D8_MetadataUsageId;
extern const uint32_t Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF_MetadataUsageId;
extern const uint32_t Element_Highlight_mCE00AED95A8F7765111859BF78DB0AE48CBE7BC7_MetadataUsageId;
extern const uint32_t Element_ResetActiveElement_m8E8925E0006AA0F4E19C9937D7B9605299F505C7_MetadataUsageId;
extern const uint32_t Element_SetActiveElement_m18276B5BE2D96BB4CF3B9E7B7F67C78256A687CC_MetadataUsageId;
extern const uint32_t Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF_MetadataUsageId;
extern const uint32_t Element_Start_mBC735F94C8A5A3F0180AA831B5D94C3AE12DB43F_MetadataUsageId;
extern const uint32_t Element_UpdateActive_mE941941E9243FE32E35F5BA1996C76E723A9DEBA_MetadataUsageId;
extern const uint32_t ElementsData_FromJSON_mBB8F518887C68C366CA5C6F8F819C11AFE037F9D_MetadataUsageId;
extern const uint32_t LayoutStyleChanger_ChangeLayoutStyleCylinder_m407CF2D89DA382C0BD4B65F7F577DC5B0741CF27_MetadataUsageId;
extern const uint32_t LayoutStyleChanger_ChangeLayoutStylePlane_mE0A512BEBDF6FE708CED5E60D92463AD85DD9777_MetadataUsageId;
extern const uint32_t LayoutStyleChanger_ChangeLayoutStyleRadial_mF40A2653A6A8CADDD68DFEFBA74956E45EC7D43A_MetadataUsageId;
extern const uint32_t LayoutStyleChanger_ChangeLayoutStyleSphere_mE5437BB32FF92574111CCDBD252BD99C178A68A4_MetadataUsageId;
extern const uint32_t PeriodicTableLoader_InitializeData_mA718D98E7B007C01F13CC6C84C8582A087F42D98_MetadataUsageId;
extern const uint32_t PresentToPlayer_PresentOverTime_mA71855BB66ABB87A8F951D028FF290821BFA0F7A_MetadataUsageId;
extern const uint32_t U3CPresentOverTimeU3Ed__17_MoveNext_m3E4D4726A4BF00055D66F0DB2EC2F2EC2919D0AC_MetadataUsageId;
extern const uint32_t U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_Reset_mDF550AF2BC435EBCA9D5D605AFCBEB7006CDEF97_MetadataUsageId;
extern const uint32_t U3CUpdateActiveU3Ed__27_MoveNext_m06DBEEF87E03004816D633398AD693F4BEE9190A_MetadataUsageId;
extern const uint32_t U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_Reset_m5DF8AADE7A03BB1360BB56A1B302F1AC7065ABA5_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CUPDATEACTIVEU3ED__27_T49C5C32C2D421AA9D21862A9CE98CB6903DB5A90_H
#define U3CUPDATEACTIVEU3ED__27_T49C5C32C2D421AA9D21862A9CE98CB6903DB5A90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27
struct  U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HoloToolkit.MRDL.PeriodicTable.Element HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::<>4__this
	Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * ___U3CU3E4__this_2;
	// UnityEngine.Animator HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::<animator>5__2
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___U3CanimatorU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90, ___U3CU3E4__this_2)); }
	inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CanimatorU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90, ___U3CanimatorU3E5__2_3)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_U3CanimatorU3E5__2_3() const { return ___U3CanimatorU3E5__2_3; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_U3CanimatorU3E5__2_3() { return &___U3CanimatorU3E5__2_3; }
	inline void set_U3CanimatorU3E5__2_3(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___U3CanimatorU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CanimatorU3E5__2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPDATEACTIVEU3ED__27_T49C5C32C2D421AA9D21862A9CE98CB6903DB5A90_H
#ifndef ELEMENTDATA_T577070E795AA226A9ECD1F6222E6FDF52DFEB08E_H
#define ELEMENTDATA_T577070E795AA226A9ECD1F6222E6FDF52DFEB08E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.ElementData
struct  ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E  : public RuntimeObject
{
public:
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::name
	String_t* ___name_0;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::category
	String_t* ___category_1;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::spectral_img
	String_t* ___spectral_img_2;
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.ElementData::xpos
	int32_t ___xpos_3;
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.ElementData::ypos
	int32_t ___ypos_4;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::named_by
	String_t* ___named_by_5;
	// System.Single HoloToolkit.MRDL.PeriodicTable.ElementData::density
	float ___density_6;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::color
	String_t* ___color_7;
	// System.Single HoloToolkit.MRDL.PeriodicTable.ElementData::molar_heat
	float ___molar_heat_8;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::symbol
	String_t* ___symbol_9;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::discovered_by
	String_t* ___discovered_by_10;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::appearance
	String_t* ___appearance_11;
	// System.Single HoloToolkit.MRDL.PeriodicTable.ElementData::atomic_mass
	float ___atomic_mass_12;
	// System.Single HoloToolkit.MRDL.PeriodicTable.ElementData::melt
	float ___melt_13;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::number
	String_t* ___number_14;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::source
	String_t* ___source_15;
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.ElementData::period
	int32_t ___period_16;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::phase
	String_t* ___phase_17;
	// System.String HoloToolkit.MRDL.PeriodicTable.ElementData::summary
	String_t* ___summary_18;
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.ElementData::boil
	int32_t ___boil_19;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_category_1() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___category_1)); }
	inline String_t* get_category_1() const { return ___category_1; }
	inline String_t** get_address_of_category_1() { return &___category_1; }
	inline void set_category_1(String_t* value)
	{
		___category_1 = value;
		Il2CppCodeGenWriteBarrier((&___category_1), value);
	}

	inline static int32_t get_offset_of_spectral_img_2() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___spectral_img_2)); }
	inline String_t* get_spectral_img_2() const { return ___spectral_img_2; }
	inline String_t** get_address_of_spectral_img_2() { return &___spectral_img_2; }
	inline void set_spectral_img_2(String_t* value)
	{
		___spectral_img_2 = value;
		Il2CppCodeGenWriteBarrier((&___spectral_img_2), value);
	}

	inline static int32_t get_offset_of_xpos_3() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___xpos_3)); }
	inline int32_t get_xpos_3() const { return ___xpos_3; }
	inline int32_t* get_address_of_xpos_3() { return &___xpos_3; }
	inline void set_xpos_3(int32_t value)
	{
		___xpos_3 = value;
	}

	inline static int32_t get_offset_of_ypos_4() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___ypos_4)); }
	inline int32_t get_ypos_4() const { return ___ypos_4; }
	inline int32_t* get_address_of_ypos_4() { return &___ypos_4; }
	inline void set_ypos_4(int32_t value)
	{
		___ypos_4 = value;
	}

	inline static int32_t get_offset_of_named_by_5() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___named_by_5)); }
	inline String_t* get_named_by_5() const { return ___named_by_5; }
	inline String_t** get_address_of_named_by_5() { return &___named_by_5; }
	inline void set_named_by_5(String_t* value)
	{
		___named_by_5 = value;
		Il2CppCodeGenWriteBarrier((&___named_by_5), value);
	}

	inline static int32_t get_offset_of_density_6() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___density_6)); }
	inline float get_density_6() const { return ___density_6; }
	inline float* get_address_of_density_6() { return &___density_6; }
	inline void set_density_6(float value)
	{
		___density_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___color_7)); }
	inline String_t* get_color_7() const { return ___color_7; }
	inline String_t** get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(String_t* value)
	{
		___color_7 = value;
		Il2CppCodeGenWriteBarrier((&___color_7), value);
	}

	inline static int32_t get_offset_of_molar_heat_8() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___molar_heat_8)); }
	inline float get_molar_heat_8() const { return ___molar_heat_8; }
	inline float* get_address_of_molar_heat_8() { return &___molar_heat_8; }
	inline void set_molar_heat_8(float value)
	{
		___molar_heat_8 = value;
	}

	inline static int32_t get_offset_of_symbol_9() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___symbol_9)); }
	inline String_t* get_symbol_9() const { return ___symbol_9; }
	inline String_t** get_address_of_symbol_9() { return &___symbol_9; }
	inline void set_symbol_9(String_t* value)
	{
		___symbol_9 = value;
		Il2CppCodeGenWriteBarrier((&___symbol_9), value);
	}

	inline static int32_t get_offset_of_discovered_by_10() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___discovered_by_10)); }
	inline String_t* get_discovered_by_10() const { return ___discovered_by_10; }
	inline String_t** get_address_of_discovered_by_10() { return &___discovered_by_10; }
	inline void set_discovered_by_10(String_t* value)
	{
		___discovered_by_10 = value;
		Il2CppCodeGenWriteBarrier((&___discovered_by_10), value);
	}

	inline static int32_t get_offset_of_appearance_11() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___appearance_11)); }
	inline String_t* get_appearance_11() const { return ___appearance_11; }
	inline String_t** get_address_of_appearance_11() { return &___appearance_11; }
	inline void set_appearance_11(String_t* value)
	{
		___appearance_11 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_11), value);
	}

	inline static int32_t get_offset_of_atomic_mass_12() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___atomic_mass_12)); }
	inline float get_atomic_mass_12() const { return ___atomic_mass_12; }
	inline float* get_address_of_atomic_mass_12() { return &___atomic_mass_12; }
	inline void set_atomic_mass_12(float value)
	{
		___atomic_mass_12 = value;
	}

	inline static int32_t get_offset_of_melt_13() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___melt_13)); }
	inline float get_melt_13() const { return ___melt_13; }
	inline float* get_address_of_melt_13() { return &___melt_13; }
	inline void set_melt_13(float value)
	{
		___melt_13 = value;
	}

	inline static int32_t get_offset_of_number_14() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___number_14)); }
	inline String_t* get_number_14() const { return ___number_14; }
	inline String_t** get_address_of_number_14() { return &___number_14; }
	inline void set_number_14(String_t* value)
	{
		___number_14 = value;
		Il2CppCodeGenWriteBarrier((&___number_14), value);
	}

	inline static int32_t get_offset_of_source_15() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___source_15)); }
	inline String_t* get_source_15() const { return ___source_15; }
	inline String_t** get_address_of_source_15() { return &___source_15; }
	inline void set_source_15(String_t* value)
	{
		___source_15 = value;
		Il2CppCodeGenWriteBarrier((&___source_15), value);
	}

	inline static int32_t get_offset_of_period_16() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___period_16)); }
	inline int32_t get_period_16() const { return ___period_16; }
	inline int32_t* get_address_of_period_16() { return &___period_16; }
	inline void set_period_16(int32_t value)
	{
		___period_16 = value;
	}

	inline static int32_t get_offset_of_phase_17() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___phase_17)); }
	inline String_t* get_phase_17() const { return ___phase_17; }
	inline String_t** get_address_of_phase_17() { return &___phase_17; }
	inline void set_phase_17(String_t* value)
	{
		___phase_17 = value;
		Il2CppCodeGenWriteBarrier((&___phase_17), value);
	}

	inline static int32_t get_offset_of_summary_18() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___summary_18)); }
	inline String_t* get_summary_18() const { return ___summary_18; }
	inline String_t** get_address_of_summary_18() { return &___summary_18; }
	inline void set_summary_18(String_t* value)
	{
		___summary_18 = value;
		Il2CppCodeGenWriteBarrier((&___summary_18), value);
	}

	inline static int32_t get_offset_of_boil_19() { return static_cast<int32_t>(offsetof(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E, ___boil_19)); }
	inline int32_t get_boil_19() const { return ___boil_19; }
	inline int32_t* get_address_of_boil_19() { return &___boil_19; }
	inline void set_boil_19(int32_t value)
	{
		___boil_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTDATA_T577070E795AA226A9ECD1F6222E6FDF52DFEB08E_H
#ifndef ELEMENTSDATA_T39A616E5DFD10E8BF59BDA91523652E81D951B52_H
#define ELEMENTSDATA_T39A616E5DFD10E8BF59BDA91523652E81D951B52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.ElementsData
struct  ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<HoloToolkit.MRDL.PeriodicTable.ElementData> HoloToolkit.MRDL.PeriodicTable.ElementsData::elements
	List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * ___elements_0;

public:
	inline static int32_t get_offset_of_elements_0() { return static_cast<int32_t>(offsetof(ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52, ___elements_0)); }
	inline List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * get_elements_0() const { return ___elements_0; }
	inline List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C ** get_address_of_elements_0() { return &___elements_0; }
	inline void set_elements_0(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * value)
	{
		___elements_0 = value;
		Il2CppCodeGenWriteBarrier((&___elements_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTSDATA_T39A616E5DFD10E8BF59BDA91523652E81D951B52_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_TAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC_H
#define DICTIONARY_2_TAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct  Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t29989F28ABBCCA46A72BBB677315C05714FC1529* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF825BB4F566491154EA2DBA357D9F5DE0C8AF6BE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t53121702D790BD2D35E0B8DCCFEB7E5FEB6A88D9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___entries_1)); }
	inline EntryU5BU5D_t29989F28ABBCCA46A72BBB677315C05714FC1529* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t29989F28ABBCCA46A72BBB677315C05714FC1529** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t29989F28ABBCCA46A72BBB677315C05714FC1529* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___keys_7)); }
	inline KeyCollection_tF825BB4F566491154EA2DBA357D9F5DE0C8AF6BE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF825BB4F566491154EA2DBA357D9F5DE0C8AF6BE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF825BB4F566491154EA2DBA357D9F5DE0C8AF6BE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ___values_8)); }
	inline ValueCollection_t53121702D790BD2D35E0B8DCCFEB7E5FEB6A88D9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t53121702D790BD2D35E0B8DCCFEB7E5FEB6A88D9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t53121702D790BD2D35E0B8DCCFEB7E5FEB6A88D9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC_H
#ifndef LIST_1_TA48752B24C36E0617A913C4C3879CBDBFC83A73C_H
#define LIST_1_TA48752B24C36E0617A913C4C3879CBDBFC83A73C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<HoloToolkit.MRDL.PeriodicTable.ElementData>
struct  List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C, ____items_1)); }
	inline ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* get__items_1() const { return ____items_1; }
	inline ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C_StaticFields, ____emptyArray_5)); }
	inline ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ElementDataU5BU5D_tEA70F9114FB2CC150D05E4BCC33D982F6D37D2C7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TA48752B24C36E0617A913C4C3879CBDBFC83A73C_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	intptr_t* ___native_trace_ips_15;
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
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_TA2A849E738B3E439AC0056404FDE5D5B73A1A455_H
#define ENUMERATOR_TA2A849E738B3E439AC0056404FDE5D5B73A1A455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<HoloToolkit.MRDL.PeriodicTable.ElementData>
struct  Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455, ___list_0)); }
	inline List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * get_list_0() const { return ___list_0; }
	inline List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455, ___current_3)); }
	inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * get_current_3() const { return ___current_3; }
	inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TA2A849E738B3E439AC0056404FDE5D5B73A1A455_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
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
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#define MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((&___fontAsset_1), value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteAsset_2), value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((&___material_3), value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackMaterial_6), value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
#endif // MATERIALREFERENCE_TFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_H
#ifndef TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#define TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_FONTSTYLESTACK_TC7146DA5AD4540B2C8733862D785AD50AD229E84_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T629E00E06021AA51A5AD8607BAFC61DB099F2D7F_H
#define TMP_RICHTEXTTAGSTACK_1_T629E00E06021AA51A5AD8607BAFC61DB099F2D7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T629E00E06021AA51A5AD8607BAFC61DB099F2D7F_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T221674BAE112F99AB4BDB4D127F20A021FF50CA3_H
#define TMP_RICHTEXTTAGSTACK_1_T221674BAE112F99AB4BDB4D127F20A021FF50CA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T221674BAE112F99AB4BDB4D127F20A021FF50CA3_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#define TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultItem_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef U3CPRESENTOVERTIMEU3ED__17_T56FC0CB1332EE6B0D32AD4792D0E19689F9048DE_H
#define U3CPRESENTOVERTIMEU3ED__17_T56FC0CB1332EE6B0D32AD4792D0E19689F9048DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17
struct  U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<>4__this
	PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * ___U3CU3E4__this_2;
	// UnityEngine.Quaternion HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<targetRotation>5__2
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CtargetRotationU3E5__2_3;
	// UnityEngine.Vector3 HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<targetPosition>5__3
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CtargetPositionU3E5__3_4;
	// System.Single HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<normalizedProgress>5__4
	float ___U3CnormalizedProgressU3E5__4_5;
	// System.Single HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::<startTime>5__5
	float ___U3CstartTimeU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CU3E4__this_2)); }
	inline PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CtargetRotationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CtargetRotationU3E5__2_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CtargetRotationU3E5__2_3() const { return ___U3CtargetRotationU3E5__2_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CtargetRotationU3E5__2_3() { return &___U3CtargetRotationU3E5__2_3; }
	inline void set_U3CtargetRotationU3E5__2_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CtargetRotationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CtargetPositionU3E5__3_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CtargetPositionU3E5__3_4() const { return ___U3CtargetPositionU3E5__3_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CtargetPositionU3E5__3_4() { return &___U3CtargetPositionU3E5__3_4; }
	inline void set_U3CtargetPositionU3E5__3_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CtargetPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CnormalizedProgressU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CnormalizedProgressU3E5__4_5)); }
	inline float get_U3CnormalizedProgressU3E5__4_5() const { return ___U3CnormalizedProgressU3E5__4_5; }
	inline float* get_address_of_U3CnormalizedProgressU3E5__4_5() { return &___U3CnormalizedProgressU3E5__4_5; }
	inline void set_U3CnormalizedProgressU3E5__4_5(float value)
	{
		___U3CnormalizedProgressU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE, ___U3CstartTimeU3E5__5_6)); }
	inline float get_U3CstartTimeU3E5__5_6() const { return ___U3CstartTimeU3E5__5_6; }
	inline float* get_address_of_U3CstartTimeU3E5__5_6() { return &___U3CstartTimeU3E5__5_6; }
	inline void set_U3CstartTimeU3E5__5_6(float value)
	{
		___U3CstartTimeU3E5__5_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRESENTOVERTIMEU3ED__17_T56FC0CB1332EE6B0D32AD4792D0E19689F9048DE_H
#ifndef COLLATIONORDER_T31424FBB09A9C0CE89625F81530C6914172CBC28_H
#define COLLATIONORDER_T31424FBB09A9C0CE89625F81530C6914172CBC28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder
struct  CollationOrder_t31424FBB09A9C0CE89625F81530C6914172CBC28 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.CollationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollationOrder_t31424FBB09A9C0CE89625F81530C6914172CBC28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLATIONORDER_T31424FBB09A9C0CE89625F81530C6914172CBC28_H
#ifndef LAYOUTANCHOR_T5D4491B6E97916197EEAC8D201384A9480276D65_H
#define LAYOUTANCHOR_T5D4491B6E97916197EEAC8D201384A9480276D65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor
struct  LayoutAnchor_t5D4491B6E97916197EEAC8D201384A9480276D65 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutAnchor_t5D4491B6E97916197EEAC8D201384A9480276D65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTANCHOR_T5D4491B6E97916197EEAC8D201384A9480276D65_H
#ifndef LAYOUTORDER_TF32B20C4BF82751AC3E1D5D48E8B23C0267F8860_H
#define LAYOUTORDER_TF32B20C4BF82751AC3E1D5D48E8B23C0267F8860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder
struct  LayoutOrder_tF32B20C4BF82751AC3E1D5D48E8B23C0267F8860 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOrder_tF32B20C4BF82751AC3E1D5D48E8B23C0267F8860, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTORDER_TF32B20C4BF82751AC3E1D5D48E8B23C0267F8860_H
#ifndef OBJECTORIENTATIONSURFACETYPE_T917A52F461EE5C16486ACDB155696C15D7D0EBCF_H
#define OBJECTORIENTATIONSURFACETYPE_T917A52F461EE5C16486ACDB155696C15D7D0EBCF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType
struct  ObjectOrientationSurfaceType_t917A52F461EE5C16486ACDB155696C15D7D0EBCF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectOrientationSurfaceType_t917A52F461EE5C16486ACDB155696C15D7D0EBCF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTORIENTATIONSURFACETYPE_T917A52F461EE5C16486ACDB155696C15D7D0EBCF_H
#ifndef ORIENTATIONTYPE_TA457300D337598887EBA1223DB7BB0100B7E535A_H
#define ORIENTATIONTYPE_TA457300D337598887EBA1223DB7BB0100B7E535A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.OrientationType
struct  OrientationType_tA457300D337598887EBA1223DB7BB0100B7E535A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationType_tA457300D337598887EBA1223DB7BB0100B7E535A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONTYPE_TA457300D337598887EBA1223DB7BB0100B7E535A_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#define COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORMODE_TA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3_H
#ifndef EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#define EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENTS_TB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_H
#ifndef FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#define FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLES_T31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893_H
#ifndef FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#define FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTWEIGHT_TE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#define TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T9742B1BC2B58D513502935F599F4AF09FFC379A9_H
#ifndef TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#define TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_TDAE1C182F153530A3E6A3ADC1803919A380BCDF0_H
#ifndef TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#define TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINPUTSOURCES_T08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4_H
#ifndef TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#define TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTELEMENTTYPE_TBF2553FA730CC21CF99473E591C33DC52360D509_H
#ifndef TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#define TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTALIGNMENTOPTIONS_T4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337_H
#ifndef TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#define TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTOVERFLOWMODES_TC4F820014333ECAF4D52B02F75171FD9E52B9D76_H
#ifndef TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#define TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTRENDERFLAGS_T29165355D5674BAEF40359B740631503FA9C0B56_H
#ifndef TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#define TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMAPPINGOPTIONS_TAC77A218D6DF5F386DA38AEAF3D9C943F084BD10_H
#ifndef VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#define VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXGRADIENT_TDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A_H
#ifndef VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#define VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXSORTINGORDER_T2571FF911BB69CC1CC229DF12DE68568E3F850E5_H
#ifndef ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#define ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#define MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALPROPERTYBLOCK_T72A481768111C6F11DCDCD44F0C7F99F1CA79E13_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#define SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWCASTINGMODE_T699023357D66025632B533A17D0FB1E4548141FF_H
#ifndef TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#define TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_LINEINFO_TE89A82D872E55C3DDF29C4C8D862358633D0B442_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#define TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T9B6C6D23490A525AEA83F4301C7523574055098B_H
#ifndef TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#define TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemStack_0), value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_RICHTEXTTAGSTACK_1_T435AA844A7DBDA7E54BCDA3C53622D4B28952115_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef TEXTASSET_TEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_H
#define TEXTASSET_TEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_TEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_H
#ifndef WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#define WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_27), value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___sizeStack_39 = value;
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___indentStack_40 = value;
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___styleStack_42 = value;
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___baselineStack_43 = value;
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___actionStack_44 = value;
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((&___currentFontAsset_48), value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((&___currentSpriteAsset_49), value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((&___currentMaterial_50), value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
#endif // WORDWRAPSTATE_T415B8622774DD094A9CD7447D298B33B7365A557_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#define TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#define ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ATOM_T12C86E0E3839C7D0E691AAEEEA6F934F9D880C08_H
#define ATOM_T12C86E0E3839C7D0E691AAEEEA6F934F9D880C08_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Atom
struct  Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Atom::Radius
	float ___Radius_5;
	// System.Single Atom::NucleusFlowSpeed
	float ___NucleusFlowSpeed_6;
	// System.Single Atom::NucleusJitter
	float ___NucleusJitter_7;
	// System.Single Atom::NucleusHoldShape
	float ___NucleusHoldShape_8;
	// System.Single Atom::NucleusChangeSpeedOdds
	float ___NucleusChangeSpeedOdds_9;
	// UnityEngine.Transform Atom::ScaleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ScaleTransform_10;
	// System.Boolean Atom::Collapse
	bool ___Collapse_11;
	// System.Int32 Atom::NumProtons
	int32_t ___NumProtons_12;
	// System.Int32 Atom::NumNeutrons
	int32_t ___NumNeutrons_13;
	// System.Int32 Atom::NumElectrons
	int32_t ___NumElectrons_14;
	// System.Int32 Atom::Frame
	int32_t ___Frame_15;
	// System.Boolean Atom::Instanced
	bool ___Instanced_16;
	// System.Int32[] Atom::ActiveElectronShells
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___ActiveElectronShells_17;
	// UnityEngine.Mesh Atom::Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___Mesh_18;
	// UnityEngine.Mesh[] Atom::ElectronShellMeshes
	MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* ___ElectronShellMeshes_19;
	// UnityEngine.Material Atom::ProtonMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___ProtonMat_20;
	// UnityEngine.Material Atom::NeutronMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___NeutronMat_21;
	// UnityEngine.Vector3[] Atom::nucleusTargetPositions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___nucleusTargetPositions_22;
	// UnityEngine.Vector3[] Atom::nucleusCurrentPositions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___nucleusCurrentPositions_23;
	// UnityEngine.Matrix4x4[] Atom::protonMatrixes
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___protonMatrixes_24;
	// UnityEngine.Matrix4x4[] Atom::neutronMatrixes
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___neutronMatrixes_25;
	// UnityEngine.Quaternion[] Atom::randomRotations
	QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___randomRotations_26;
	// UnityEngine.Transform Atom::transformHelper
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformHelper_27;
	// UnityEngine.MaterialPropertyBlock Atom::propertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___propertyBlock_28;
	// UnityEngine.Vector3 Atom::atomScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___atomScale_29;
	// UnityEngine.Vector3 Atom::finalScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___finalScale_30;

public:
	inline static int32_t get_offset_of_Radius_5() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___Radius_5)); }
	inline float get_Radius_5() const { return ___Radius_5; }
	inline float* get_address_of_Radius_5() { return &___Radius_5; }
	inline void set_Radius_5(float value)
	{
		___Radius_5 = value;
	}

	inline static int32_t get_offset_of_NucleusFlowSpeed_6() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NucleusFlowSpeed_6)); }
	inline float get_NucleusFlowSpeed_6() const { return ___NucleusFlowSpeed_6; }
	inline float* get_address_of_NucleusFlowSpeed_6() { return &___NucleusFlowSpeed_6; }
	inline void set_NucleusFlowSpeed_6(float value)
	{
		___NucleusFlowSpeed_6 = value;
	}

	inline static int32_t get_offset_of_NucleusJitter_7() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NucleusJitter_7)); }
	inline float get_NucleusJitter_7() const { return ___NucleusJitter_7; }
	inline float* get_address_of_NucleusJitter_7() { return &___NucleusJitter_7; }
	inline void set_NucleusJitter_7(float value)
	{
		___NucleusJitter_7 = value;
	}

	inline static int32_t get_offset_of_NucleusHoldShape_8() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NucleusHoldShape_8)); }
	inline float get_NucleusHoldShape_8() const { return ___NucleusHoldShape_8; }
	inline float* get_address_of_NucleusHoldShape_8() { return &___NucleusHoldShape_8; }
	inline void set_NucleusHoldShape_8(float value)
	{
		___NucleusHoldShape_8 = value;
	}

	inline static int32_t get_offset_of_NucleusChangeSpeedOdds_9() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NucleusChangeSpeedOdds_9)); }
	inline float get_NucleusChangeSpeedOdds_9() const { return ___NucleusChangeSpeedOdds_9; }
	inline float* get_address_of_NucleusChangeSpeedOdds_9() { return &___NucleusChangeSpeedOdds_9; }
	inline void set_NucleusChangeSpeedOdds_9(float value)
	{
		___NucleusChangeSpeedOdds_9 = value;
	}

	inline static int32_t get_offset_of_ScaleTransform_10() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___ScaleTransform_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ScaleTransform_10() const { return ___ScaleTransform_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ScaleTransform_10() { return &___ScaleTransform_10; }
	inline void set_ScaleTransform_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ScaleTransform_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScaleTransform_10), value);
	}

	inline static int32_t get_offset_of_Collapse_11() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___Collapse_11)); }
	inline bool get_Collapse_11() const { return ___Collapse_11; }
	inline bool* get_address_of_Collapse_11() { return &___Collapse_11; }
	inline void set_Collapse_11(bool value)
	{
		___Collapse_11 = value;
	}

	inline static int32_t get_offset_of_NumProtons_12() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NumProtons_12)); }
	inline int32_t get_NumProtons_12() const { return ___NumProtons_12; }
	inline int32_t* get_address_of_NumProtons_12() { return &___NumProtons_12; }
	inline void set_NumProtons_12(int32_t value)
	{
		___NumProtons_12 = value;
	}

	inline static int32_t get_offset_of_NumNeutrons_13() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NumNeutrons_13)); }
	inline int32_t get_NumNeutrons_13() const { return ___NumNeutrons_13; }
	inline int32_t* get_address_of_NumNeutrons_13() { return &___NumNeutrons_13; }
	inline void set_NumNeutrons_13(int32_t value)
	{
		___NumNeutrons_13 = value;
	}

	inline static int32_t get_offset_of_NumElectrons_14() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NumElectrons_14)); }
	inline int32_t get_NumElectrons_14() const { return ___NumElectrons_14; }
	inline int32_t* get_address_of_NumElectrons_14() { return &___NumElectrons_14; }
	inline void set_NumElectrons_14(int32_t value)
	{
		___NumElectrons_14 = value;
	}

	inline static int32_t get_offset_of_Frame_15() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___Frame_15)); }
	inline int32_t get_Frame_15() const { return ___Frame_15; }
	inline int32_t* get_address_of_Frame_15() { return &___Frame_15; }
	inline void set_Frame_15(int32_t value)
	{
		___Frame_15 = value;
	}

	inline static int32_t get_offset_of_Instanced_16() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___Instanced_16)); }
	inline bool get_Instanced_16() const { return ___Instanced_16; }
	inline bool* get_address_of_Instanced_16() { return &___Instanced_16; }
	inline void set_Instanced_16(bool value)
	{
		___Instanced_16 = value;
	}

	inline static int32_t get_offset_of_ActiveElectronShells_17() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___ActiveElectronShells_17)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_ActiveElectronShells_17() const { return ___ActiveElectronShells_17; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_ActiveElectronShells_17() { return &___ActiveElectronShells_17; }
	inline void set_ActiveElectronShells_17(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___ActiveElectronShells_17 = value;
		Il2CppCodeGenWriteBarrier((&___ActiveElectronShells_17), value);
	}

	inline static int32_t get_offset_of_Mesh_18() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___Mesh_18)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_Mesh_18() const { return ___Mesh_18; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_Mesh_18() { return &___Mesh_18; }
	inline void set_Mesh_18(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___Mesh_18 = value;
		Il2CppCodeGenWriteBarrier((&___Mesh_18), value);
	}

	inline static int32_t get_offset_of_ElectronShellMeshes_19() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___ElectronShellMeshes_19)); }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* get_ElectronShellMeshes_19() const { return ___ElectronShellMeshes_19; }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89** get_address_of_ElectronShellMeshes_19() { return &___ElectronShellMeshes_19; }
	inline void set_ElectronShellMeshes_19(MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* value)
	{
		___ElectronShellMeshes_19 = value;
		Il2CppCodeGenWriteBarrier((&___ElectronShellMeshes_19), value);
	}

	inline static int32_t get_offset_of_ProtonMat_20() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___ProtonMat_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_ProtonMat_20() const { return ___ProtonMat_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_ProtonMat_20() { return &___ProtonMat_20; }
	inline void set_ProtonMat_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___ProtonMat_20 = value;
		Il2CppCodeGenWriteBarrier((&___ProtonMat_20), value);
	}

	inline static int32_t get_offset_of_NeutronMat_21() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___NeutronMat_21)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_NeutronMat_21() const { return ___NeutronMat_21; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_NeutronMat_21() { return &___NeutronMat_21; }
	inline void set_NeutronMat_21(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___NeutronMat_21 = value;
		Il2CppCodeGenWriteBarrier((&___NeutronMat_21), value);
	}

	inline static int32_t get_offset_of_nucleusTargetPositions_22() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___nucleusTargetPositions_22)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_nucleusTargetPositions_22() const { return ___nucleusTargetPositions_22; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_nucleusTargetPositions_22() { return &___nucleusTargetPositions_22; }
	inline void set_nucleusTargetPositions_22(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___nucleusTargetPositions_22 = value;
		Il2CppCodeGenWriteBarrier((&___nucleusTargetPositions_22), value);
	}

	inline static int32_t get_offset_of_nucleusCurrentPositions_23() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___nucleusCurrentPositions_23)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_nucleusCurrentPositions_23() const { return ___nucleusCurrentPositions_23; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_nucleusCurrentPositions_23() { return &___nucleusCurrentPositions_23; }
	inline void set_nucleusCurrentPositions_23(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___nucleusCurrentPositions_23 = value;
		Il2CppCodeGenWriteBarrier((&___nucleusCurrentPositions_23), value);
	}

	inline static int32_t get_offset_of_protonMatrixes_24() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___protonMatrixes_24)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_protonMatrixes_24() const { return ___protonMatrixes_24; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_protonMatrixes_24() { return &___protonMatrixes_24; }
	inline void set_protonMatrixes_24(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___protonMatrixes_24 = value;
		Il2CppCodeGenWriteBarrier((&___protonMatrixes_24), value);
	}

	inline static int32_t get_offset_of_neutronMatrixes_25() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___neutronMatrixes_25)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_neutronMatrixes_25() const { return ___neutronMatrixes_25; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_neutronMatrixes_25() { return &___neutronMatrixes_25; }
	inline void set_neutronMatrixes_25(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___neutronMatrixes_25 = value;
		Il2CppCodeGenWriteBarrier((&___neutronMatrixes_25), value);
	}

	inline static int32_t get_offset_of_randomRotations_26() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___randomRotations_26)); }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* get_randomRotations_26() const { return ___randomRotations_26; }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3** get_address_of_randomRotations_26() { return &___randomRotations_26; }
	inline void set_randomRotations_26(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* value)
	{
		___randomRotations_26 = value;
		Il2CppCodeGenWriteBarrier((&___randomRotations_26), value);
	}

	inline static int32_t get_offset_of_transformHelper_27() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___transformHelper_27)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformHelper_27() const { return ___transformHelper_27; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformHelper_27() { return &___transformHelper_27; }
	inline void set_transformHelper_27(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformHelper_27 = value;
		Il2CppCodeGenWriteBarrier((&___transformHelper_27), value);
	}

	inline static int32_t get_offset_of_propertyBlock_28() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___propertyBlock_28)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_propertyBlock_28() const { return ___propertyBlock_28; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_propertyBlock_28() { return &___propertyBlock_28; }
	inline void set_propertyBlock_28(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___propertyBlock_28 = value;
		Il2CppCodeGenWriteBarrier((&___propertyBlock_28), value);
	}

	inline static int32_t get_offset_of_atomScale_29() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___atomScale_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_atomScale_29() const { return ___atomScale_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_atomScale_29() { return &___atomScale_29; }
	inline void set_atomScale_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___atomScale_29 = value;
	}

	inline static int32_t get_offset_of_finalScale_30() { return static_cast<int32_t>(offsetof(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08, ___finalScale_30)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_finalScale_30() const { return ___finalScale_30; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_finalScale_30() { return &___finalScale_30; }
	inline void set_finalScale_30(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___finalScale_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATOM_T12C86E0E3839C7D0E691AAEEEA6F934F9D880C08_H
#ifndef ELEMENT_TCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_H
#define ELEMENT_TCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.Element
struct  Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh HoloToolkit.MRDL.PeriodicTable.Element::ElementNumber
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___ElementNumber_5;
	// UnityEngine.TextMesh HoloToolkit.MRDL.PeriodicTable.Element::ElementName
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___ElementName_6;
	// UnityEngine.TextMesh HoloToolkit.MRDL.PeriodicTable.Element::ElementNameDetail
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___ElementNameDetail_7;
	// TMPro.TextMeshProUGUI HoloToolkit.MRDL.PeriodicTable.Element::ElementDescription
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___ElementDescription_8;
	// UnityEngine.UI.Text HoloToolkit.MRDL.PeriodicTable.Element::DataAtomicNumber
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___DataAtomicNumber_9;
	// UnityEngine.UI.Text HoloToolkit.MRDL.PeriodicTable.Element::DataAtomicWeight
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___DataAtomicWeight_10;
	// UnityEngine.UI.Text HoloToolkit.MRDL.PeriodicTable.Element::DataMeltingPoint
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___DataMeltingPoint_11;
	// UnityEngine.UI.Text HoloToolkit.MRDL.PeriodicTable.Element::DataBoilingPoint
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___DataBoilingPoint_12;
	// UnityEngine.Renderer HoloToolkit.MRDL.PeriodicTable.Element::BoxRenderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___BoxRenderer_13;
	// UnityEngine.MeshRenderer[] HoloToolkit.MRDL.PeriodicTable.Element::PanelSides
	MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* ___PanelSides_14;
	// UnityEngine.MeshRenderer HoloToolkit.MRDL.PeriodicTable.Element::PanelFront
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___PanelFront_15;
	// UnityEngine.MeshRenderer HoloToolkit.MRDL.PeriodicTable.Element::PanelBack
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___PanelBack_16;
	// UnityEngine.MeshRenderer[] HoloToolkit.MRDL.PeriodicTable.Element::InfoPanels
	MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* ___InfoPanels_17;
	// Atom HoloToolkit.MRDL.PeriodicTable.Element::Atom
	Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * ___Atom_18;
	// HoloToolkit.MRDL.PeriodicTable.ElementData HoloToolkit.MRDL.PeriodicTable.Element::data
	ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * ___data_19;
	// UnityEngine.BoxCollider HoloToolkit.MRDL.PeriodicTable.Element::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_20;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.Element::highlightMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___highlightMaterial_21;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.Element::dimMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___dimMaterial_22;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.Element::clearMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___clearMaterial_23;
	// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer HoloToolkit.MRDL.PeriodicTable.Element::present
	PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * ___present_24;

public:
	inline static int32_t get_offset_of_ElementNumber_5() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___ElementNumber_5)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_ElementNumber_5() const { return ___ElementNumber_5; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_ElementNumber_5() { return &___ElementNumber_5; }
	inline void set_ElementNumber_5(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___ElementNumber_5 = value;
		Il2CppCodeGenWriteBarrier((&___ElementNumber_5), value);
	}

	inline static int32_t get_offset_of_ElementName_6() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___ElementName_6)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_ElementName_6() const { return ___ElementName_6; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_ElementName_6() { return &___ElementName_6; }
	inline void set_ElementName_6(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___ElementName_6 = value;
		Il2CppCodeGenWriteBarrier((&___ElementName_6), value);
	}

	inline static int32_t get_offset_of_ElementNameDetail_7() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___ElementNameDetail_7)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_ElementNameDetail_7() const { return ___ElementNameDetail_7; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_ElementNameDetail_7() { return &___ElementNameDetail_7; }
	inline void set_ElementNameDetail_7(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___ElementNameDetail_7 = value;
		Il2CppCodeGenWriteBarrier((&___ElementNameDetail_7), value);
	}

	inline static int32_t get_offset_of_ElementDescription_8() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___ElementDescription_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_ElementDescription_8() const { return ___ElementDescription_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_ElementDescription_8() { return &___ElementDescription_8; }
	inline void set_ElementDescription_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___ElementDescription_8 = value;
		Il2CppCodeGenWriteBarrier((&___ElementDescription_8), value);
	}

	inline static int32_t get_offset_of_DataAtomicNumber_9() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___DataAtomicNumber_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_DataAtomicNumber_9() const { return ___DataAtomicNumber_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_DataAtomicNumber_9() { return &___DataAtomicNumber_9; }
	inline void set_DataAtomicNumber_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___DataAtomicNumber_9 = value;
		Il2CppCodeGenWriteBarrier((&___DataAtomicNumber_9), value);
	}

	inline static int32_t get_offset_of_DataAtomicWeight_10() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___DataAtomicWeight_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_DataAtomicWeight_10() const { return ___DataAtomicWeight_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_DataAtomicWeight_10() { return &___DataAtomicWeight_10; }
	inline void set_DataAtomicWeight_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___DataAtomicWeight_10 = value;
		Il2CppCodeGenWriteBarrier((&___DataAtomicWeight_10), value);
	}

	inline static int32_t get_offset_of_DataMeltingPoint_11() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___DataMeltingPoint_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_DataMeltingPoint_11() const { return ___DataMeltingPoint_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_DataMeltingPoint_11() { return &___DataMeltingPoint_11; }
	inline void set_DataMeltingPoint_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___DataMeltingPoint_11 = value;
		Il2CppCodeGenWriteBarrier((&___DataMeltingPoint_11), value);
	}

	inline static int32_t get_offset_of_DataBoilingPoint_12() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___DataBoilingPoint_12)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_DataBoilingPoint_12() const { return ___DataBoilingPoint_12; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_DataBoilingPoint_12() { return &___DataBoilingPoint_12; }
	inline void set_DataBoilingPoint_12(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___DataBoilingPoint_12 = value;
		Il2CppCodeGenWriteBarrier((&___DataBoilingPoint_12), value);
	}

	inline static int32_t get_offset_of_BoxRenderer_13() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___BoxRenderer_13)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_BoxRenderer_13() const { return ___BoxRenderer_13; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_BoxRenderer_13() { return &___BoxRenderer_13; }
	inline void set_BoxRenderer_13(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___BoxRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((&___BoxRenderer_13), value);
	}

	inline static int32_t get_offset_of_PanelSides_14() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___PanelSides_14)); }
	inline MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* get_PanelSides_14() const { return ___PanelSides_14; }
	inline MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3** get_address_of_PanelSides_14() { return &___PanelSides_14; }
	inline void set_PanelSides_14(MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* value)
	{
		___PanelSides_14 = value;
		Il2CppCodeGenWriteBarrier((&___PanelSides_14), value);
	}

	inline static int32_t get_offset_of_PanelFront_15() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___PanelFront_15)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_PanelFront_15() const { return ___PanelFront_15; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_PanelFront_15() { return &___PanelFront_15; }
	inline void set_PanelFront_15(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___PanelFront_15 = value;
		Il2CppCodeGenWriteBarrier((&___PanelFront_15), value);
	}

	inline static int32_t get_offset_of_PanelBack_16() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___PanelBack_16)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_PanelBack_16() const { return ___PanelBack_16; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_PanelBack_16() { return &___PanelBack_16; }
	inline void set_PanelBack_16(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___PanelBack_16 = value;
		Il2CppCodeGenWriteBarrier((&___PanelBack_16), value);
	}

	inline static int32_t get_offset_of_InfoPanels_17() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___InfoPanels_17)); }
	inline MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* get_InfoPanels_17() const { return ___InfoPanels_17; }
	inline MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3** get_address_of_InfoPanels_17() { return &___InfoPanels_17; }
	inline void set_InfoPanels_17(MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* value)
	{
		___InfoPanels_17 = value;
		Il2CppCodeGenWriteBarrier((&___InfoPanels_17), value);
	}

	inline static int32_t get_offset_of_Atom_18() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___Atom_18)); }
	inline Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * get_Atom_18() const { return ___Atom_18; }
	inline Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 ** get_address_of_Atom_18() { return &___Atom_18; }
	inline void set_Atom_18(Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * value)
	{
		___Atom_18 = value;
		Il2CppCodeGenWriteBarrier((&___Atom_18), value);
	}

	inline static int32_t get_offset_of_data_19() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___data_19)); }
	inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * get_data_19() const { return ___data_19; }
	inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E ** get_address_of_data_19() { return &___data_19; }
	inline void set_data_19(ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * value)
	{
		___data_19 = value;
		Il2CppCodeGenWriteBarrier((&___data_19), value);
	}

	inline static int32_t get_offset_of_boxCollider_20() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___boxCollider_20)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_20() const { return ___boxCollider_20; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_20() { return &___boxCollider_20; }
	inline void set_boxCollider_20(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_20 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider_20), value);
	}

	inline static int32_t get_offset_of_highlightMaterial_21() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___highlightMaterial_21)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_highlightMaterial_21() const { return ___highlightMaterial_21; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_highlightMaterial_21() { return &___highlightMaterial_21; }
	inline void set_highlightMaterial_21(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___highlightMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((&___highlightMaterial_21), value);
	}

	inline static int32_t get_offset_of_dimMaterial_22() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___dimMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_dimMaterial_22() const { return ___dimMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_dimMaterial_22() { return &___dimMaterial_22; }
	inline void set_dimMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___dimMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___dimMaterial_22), value);
	}

	inline static int32_t get_offset_of_clearMaterial_23() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___clearMaterial_23)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_clearMaterial_23() const { return ___clearMaterial_23; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_clearMaterial_23() { return &___clearMaterial_23; }
	inline void set_clearMaterial_23(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___clearMaterial_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearMaterial_23), value);
	}

	inline static int32_t get_offset_of_present_24() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35, ___present_24)); }
	inline PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * get_present_24() const { return ___present_24; }
	inline PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 ** get_address_of_present_24() { return &___present_24; }
	inline void set_present_24(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * value)
	{
		___present_24 = value;
		Il2CppCodeGenWriteBarrier((&___present_24), value);
	}
};

struct Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields
{
public:
	// HoloToolkit.MRDL.PeriodicTable.Element HoloToolkit.MRDL.PeriodicTable.Element::ActiveElement
	Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * ___ActiveElement_4;

public:
	inline static int32_t get_offset_of_ActiveElement_4() { return static_cast<int32_t>(offsetof(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields, ___ActiveElement_4)); }
	inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * get_ActiveElement_4() const { return ___ActiveElement_4; }
	inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 ** get_address_of_ActiveElement_4() { return &___ActiveElement_4; }
	inline void set_ActiveElement_4(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * value)
	{
		___ActiveElement_4 = value;
		Il2CppCodeGenWriteBarrier((&___ActiveElement_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENT_TCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_H
#ifndef OPTIMIZESCENEFORDEVICETYPE_TA50CFB233395199ECFC32B94C588AFF69EF7214E_H
#define OPTIMIZESCENEFORDEVICETYPE_TA50CFB233395199ECFC32B94C588AFF69EF7214E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.OptimizeSceneforDeviceType
struct  OptimizeSceneforDeviceType_tA50CFB233395199ECFC32B94C588AFF69EF7214E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject HoloToolkit.MRDL.PeriodicTable.OptimizeSceneforDeviceType::containerObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___containerObject_4;

public:
	inline static int32_t get_offset_of_containerObject_4() { return static_cast<int32_t>(offsetof(OptimizeSceneforDeviceType_tA50CFB233395199ECFC32B94C588AFF69EF7214E, ___containerObject_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_containerObject_4() const { return ___containerObject_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_containerObject_4() { return &___containerObject_4; }
	inline void set_containerObject_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___containerObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___containerObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIMIZESCENEFORDEVICETYPE_TA50CFB233395199ECFC32B94C588AFF69EF7214E_H
#ifndef PERIODICTABLELOADER_TD294F0F31D55A8947D34F9834EADBC0C857B988F_H
#define PERIODICTABLELOADER_TD294F0F31D55A8947D34F9834EADBC0C857B988F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader
struct  PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::Parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Parent_4;
	// UnityEngine.GameObject HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::ElementPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ElementPrefab_5;
	// System.Single HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::ElementSeperationDistance
	float ___ElementSeperationDistance_6;
	// UnityEngine.Transform HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::LegendTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___LegendTransform_7;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::Collection
	GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * ___Collection_8;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatAlkaliMetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatAlkaliMetal_9;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatAlkalineEarthMetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatAlkalineEarthMetal_10;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatTransitionMetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatTransitionMetal_11;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatMetalloid
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatMetalloid_12;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatDiatomicNonmetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatDiatomicNonmetal_13;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatPolyatomicNonmetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatPolyatomicNonmetal_14;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatPostTransitionMetal
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatPostTransitionMetal_15;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatNobleGas
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatNobleGas_16;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatActinide
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatActinide_17;
	// UnityEngine.Material HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::MatLanthanide
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___MatLanthanide_18;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::isFirstRun
	bool ___isFirstRun_19;

public:
	inline static int32_t get_offset_of_Parent_4() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___Parent_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Parent_4() const { return ___Parent_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Parent_4() { return &___Parent_4; }
	inline void set_Parent_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Parent_4 = value;
		Il2CppCodeGenWriteBarrier((&___Parent_4), value);
	}

	inline static int32_t get_offset_of_ElementPrefab_5() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___ElementPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ElementPrefab_5() const { return ___ElementPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ElementPrefab_5() { return &___ElementPrefab_5; }
	inline void set_ElementPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ElementPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___ElementPrefab_5), value);
	}

	inline static int32_t get_offset_of_ElementSeperationDistance_6() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___ElementSeperationDistance_6)); }
	inline float get_ElementSeperationDistance_6() const { return ___ElementSeperationDistance_6; }
	inline float* get_address_of_ElementSeperationDistance_6() { return &___ElementSeperationDistance_6; }
	inline void set_ElementSeperationDistance_6(float value)
	{
		___ElementSeperationDistance_6 = value;
	}

	inline static int32_t get_offset_of_LegendTransform_7() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___LegendTransform_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_LegendTransform_7() const { return ___LegendTransform_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_LegendTransform_7() { return &___LegendTransform_7; }
	inline void set_LegendTransform_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___LegendTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___LegendTransform_7), value);
	}

	inline static int32_t get_offset_of_Collection_8() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___Collection_8)); }
	inline GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * get_Collection_8() const { return ___Collection_8; }
	inline GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 ** get_address_of_Collection_8() { return &___Collection_8; }
	inline void set_Collection_8(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * value)
	{
		___Collection_8 = value;
		Il2CppCodeGenWriteBarrier((&___Collection_8), value);
	}

	inline static int32_t get_offset_of_MatAlkaliMetal_9() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatAlkaliMetal_9)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatAlkaliMetal_9() const { return ___MatAlkaliMetal_9; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatAlkaliMetal_9() { return &___MatAlkaliMetal_9; }
	inline void set_MatAlkaliMetal_9(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatAlkaliMetal_9 = value;
		Il2CppCodeGenWriteBarrier((&___MatAlkaliMetal_9), value);
	}

	inline static int32_t get_offset_of_MatAlkalineEarthMetal_10() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatAlkalineEarthMetal_10)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatAlkalineEarthMetal_10() const { return ___MatAlkalineEarthMetal_10; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatAlkalineEarthMetal_10() { return &___MatAlkalineEarthMetal_10; }
	inline void set_MatAlkalineEarthMetal_10(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatAlkalineEarthMetal_10 = value;
		Il2CppCodeGenWriteBarrier((&___MatAlkalineEarthMetal_10), value);
	}

	inline static int32_t get_offset_of_MatTransitionMetal_11() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatTransitionMetal_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatTransitionMetal_11() const { return ___MatTransitionMetal_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatTransitionMetal_11() { return &___MatTransitionMetal_11; }
	inline void set_MatTransitionMetal_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatTransitionMetal_11 = value;
		Il2CppCodeGenWriteBarrier((&___MatTransitionMetal_11), value);
	}

	inline static int32_t get_offset_of_MatMetalloid_12() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatMetalloid_12)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatMetalloid_12() const { return ___MatMetalloid_12; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatMetalloid_12() { return &___MatMetalloid_12; }
	inline void set_MatMetalloid_12(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatMetalloid_12 = value;
		Il2CppCodeGenWriteBarrier((&___MatMetalloid_12), value);
	}

	inline static int32_t get_offset_of_MatDiatomicNonmetal_13() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatDiatomicNonmetal_13)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatDiatomicNonmetal_13() const { return ___MatDiatomicNonmetal_13; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatDiatomicNonmetal_13() { return &___MatDiatomicNonmetal_13; }
	inline void set_MatDiatomicNonmetal_13(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatDiatomicNonmetal_13 = value;
		Il2CppCodeGenWriteBarrier((&___MatDiatomicNonmetal_13), value);
	}

	inline static int32_t get_offset_of_MatPolyatomicNonmetal_14() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatPolyatomicNonmetal_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatPolyatomicNonmetal_14() const { return ___MatPolyatomicNonmetal_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatPolyatomicNonmetal_14() { return &___MatPolyatomicNonmetal_14; }
	inline void set_MatPolyatomicNonmetal_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatPolyatomicNonmetal_14 = value;
		Il2CppCodeGenWriteBarrier((&___MatPolyatomicNonmetal_14), value);
	}

	inline static int32_t get_offset_of_MatPostTransitionMetal_15() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatPostTransitionMetal_15)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatPostTransitionMetal_15() const { return ___MatPostTransitionMetal_15; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatPostTransitionMetal_15() { return &___MatPostTransitionMetal_15; }
	inline void set_MatPostTransitionMetal_15(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatPostTransitionMetal_15 = value;
		Il2CppCodeGenWriteBarrier((&___MatPostTransitionMetal_15), value);
	}

	inline static int32_t get_offset_of_MatNobleGas_16() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatNobleGas_16)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatNobleGas_16() const { return ___MatNobleGas_16; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatNobleGas_16() { return &___MatNobleGas_16; }
	inline void set_MatNobleGas_16(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatNobleGas_16 = value;
		Il2CppCodeGenWriteBarrier((&___MatNobleGas_16), value);
	}

	inline static int32_t get_offset_of_MatActinide_17() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatActinide_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatActinide_17() const { return ___MatActinide_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatActinide_17() { return &___MatActinide_17; }
	inline void set_MatActinide_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatActinide_17 = value;
		Il2CppCodeGenWriteBarrier((&___MatActinide_17), value);
	}

	inline static int32_t get_offset_of_MatLanthanide_18() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___MatLanthanide_18)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_MatLanthanide_18() const { return ___MatLanthanide_18; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_MatLanthanide_18() { return &___MatLanthanide_18; }
	inline void set_MatLanthanide_18(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___MatLanthanide_18 = value;
		Il2CppCodeGenWriteBarrier((&___MatLanthanide_18), value);
	}

	inline static int32_t get_offset_of_isFirstRun_19() { return static_cast<int32_t>(offsetof(PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F, ___isFirstRun_19)); }
	inline bool get_isFirstRun_19() const { return ___isFirstRun_19; }
	inline bool* get_address_of_isFirstRun_19() { return &___isFirstRun_19; }
	inline void set_isFirstRun_19(bool value)
	{
		___isFirstRun_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERIODICTABLELOADER_TD294F0F31D55A8947D34F9834EADBC0C857B988F_H
#ifndef PRESENTTOPLAYER_TDA027C173475F4F52171E895C993C100E59DC978_H
#define PRESENTTOPLAYER_TDA027C173475F4F52171E895C993C100E59DC978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.MRDL.PeriodicTable.PresentToPlayer
struct  PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::PresentationDistance
	float ___PresentationDistance_4;
	// System.Single HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::TravelTime
	float ___TravelTime_5;
	// UnityEngine.AnimationCurve HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::SmoothPosition
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___SmoothPosition_6;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::OrientToCamera
	bool ___OrientToCamera_7;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::OrientYAxisOnly
	bool ___OrientYAxisOnly_8;
	// UnityEngine.Transform HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::TargetTranfsorm
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___TargetTranfsorm_9;
	// UnityEngine.Vector3 HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::initialPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___initialPosition_10;
	// UnityEngine.Quaternion HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::initialRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___initialRotation_11;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::presenting
	bool ___presenting_12;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::returning
	bool ___returning_13;
	// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::inPosition
	bool ___inPosition_14;

public:
	inline static int32_t get_offset_of_PresentationDistance_4() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___PresentationDistance_4)); }
	inline float get_PresentationDistance_4() const { return ___PresentationDistance_4; }
	inline float* get_address_of_PresentationDistance_4() { return &___PresentationDistance_4; }
	inline void set_PresentationDistance_4(float value)
	{
		___PresentationDistance_4 = value;
	}

	inline static int32_t get_offset_of_TravelTime_5() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___TravelTime_5)); }
	inline float get_TravelTime_5() const { return ___TravelTime_5; }
	inline float* get_address_of_TravelTime_5() { return &___TravelTime_5; }
	inline void set_TravelTime_5(float value)
	{
		___TravelTime_5 = value;
	}

	inline static int32_t get_offset_of_SmoothPosition_6() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___SmoothPosition_6)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_SmoothPosition_6() const { return ___SmoothPosition_6; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_SmoothPosition_6() { return &___SmoothPosition_6; }
	inline void set_SmoothPosition_6(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___SmoothPosition_6 = value;
		Il2CppCodeGenWriteBarrier((&___SmoothPosition_6), value);
	}

	inline static int32_t get_offset_of_OrientToCamera_7() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___OrientToCamera_7)); }
	inline bool get_OrientToCamera_7() const { return ___OrientToCamera_7; }
	inline bool* get_address_of_OrientToCamera_7() { return &___OrientToCamera_7; }
	inline void set_OrientToCamera_7(bool value)
	{
		___OrientToCamera_7 = value;
	}

	inline static int32_t get_offset_of_OrientYAxisOnly_8() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___OrientYAxisOnly_8)); }
	inline bool get_OrientYAxisOnly_8() const { return ___OrientYAxisOnly_8; }
	inline bool* get_address_of_OrientYAxisOnly_8() { return &___OrientYAxisOnly_8; }
	inline void set_OrientYAxisOnly_8(bool value)
	{
		___OrientYAxisOnly_8 = value;
	}

	inline static int32_t get_offset_of_TargetTranfsorm_9() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___TargetTranfsorm_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_TargetTranfsorm_9() const { return ___TargetTranfsorm_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_TargetTranfsorm_9() { return &___TargetTranfsorm_9; }
	inline void set_TargetTranfsorm_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___TargetTranfsorm_9 = value;
		Il2CppCodeGenWriteBarrier((&___TargetTranfsorm_9), value);
	}

	inline static int32_t get_offset_of_initialPosition_10() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___initialPosition_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_initialPosition_10() const { return ___initialPosition_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_initialPosition_10() { return &___initialPosition_10; }
	inline void set_initialPosition_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___initialPosition_10 = value;
	}

	inline static int32_t get_offset_of_initialRotation_11() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___initialRotation_11)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_initialRotation_11() const { return ___initialRotation_11; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_initialRotation_11() { return &___initialRotation_11; }
	inline void set_initialRotation_11(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___initialRotation_11 = value;
	}

	inline static int32_t get_offset_of_presenting_12() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___presenting_12)); }
	inline bool get_presenting_12() const { return ___presenting_12; }
	inline bool* get_address_of_presenting_12() { return &___presenting_12; }
	inline void set_presenting_12(bool value)
	{
		___presenting_12 = value;
	}

	inline static int32_t get_offset_of_returning_13() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___returning_13)); }
	inline bool get_returning_13() const { return ___returning_13; }
	inline bool* get_address_of_returning_13() { return &___returning_13; }
	inline void set_returning_13(bool value)
	{
		___returning_13 = value;
	}

	inline static int32_t get_offset_of_inPosition_14() { return static_cast<int32_t>(offsetof(PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978, ___inPosition_14)); }
	inline bool get_inPosition_14() const { return ___inPosition_14; }
	inline bool* get_address_of_inPosition_14() { return &___inPosition_14; }
	inline void set_inPosition_14(bool value)
	{
		___inPosition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTTOPLAYER_TDA027C173475F4F52171E895C993C100E59DC978_H
#ifndef LAYOUTSTYLECHANGER_T763553B2EA20972FC994D9615133B4C057AC8F40_H
#define LAYOUTSTYLECHANGER_T763553B2EA20972FC994D9615133B4C057AC8F40_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LayoutStyleChanger
struct  LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection LayoutStyleChanger::objectCollection
	GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * ___objectCollection_4;
	// UnityEngine.Transform LayoutStyleChanger::tableParentTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___tableParentTransform_5;
	// UnityEngine.Transform LayoutStyleChanger::legendTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___legendTransform_6;

public:
	inline static int32_t get_offset_of_objectCollection_4() { return static_cast<int32_t>(offsetof(LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40, ___objectCollection_4)); }
	inline GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * get_objectCollection_4() const { return ___objectCollection_4; }
	inline GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 ** get_address_of_objectCollection_4() { return &___objectCollection_4; }
	inline void set_objectCollection_4(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * value)
	{
		___objectCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___objectCollection_4), value);
	}

	inline static int32_t get_offset_of_tableParentTransform_5() { return static_cast<int32_t>(offsetof(LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40, ___tableParentTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_tableParentTransform_5() const { return ___tableParentTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_tableParentTransform_5() { return &___tableParentTransform_5; }
	inline void set_tableParentTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___tableParentTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___tableParentTransform_5), value);
	}

	inline static int32_t get_offset_of_legendTransform_6() { return static_cast<int32_t>(offsetof(LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40, ___legendTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_legendTransform_6() const { return ___legendTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_legendTransform_6() { return &___legendTransform_6; }
	inline void set_legendTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___legendTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___legendTransform_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTSTYLECHANGER_T763553B2EA20972FC994D9615133B4C057AC8F40_H
#ifndef BASEOBJECTCOLLECTION_T37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52_H
#define BASEOBJECTCOLLECTION_T37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct  BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_t5A5929B50B6E43CC54ECBA0A016AF9E553558C3F * ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_t1EA610D31DB1EACACD3FFFE38F28FD8D45DED6FE * ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;

public:
	inline static int32_t get_offset_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52, ___U3COnCollectionUpdatedU3Ek__BackingField_4)); }
	inline Action_1_t5A5929B50B6E43CC54ECBA0A016AF9E553558C3F * get_U3COnCollectionUpdatedU3Ek__BackingField_4() const { return ___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline Action_1_t5A5929B50B6E43CC54ECBA0A016AF9E553558C3F ** get_address_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return &___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline void set_U3COnCollectionUpdatedU3Ek__BackingField_4(Action_1_t5A5929B50B6E43CC54ECBA0A016AF9E553558C3F * value)
	{
		___U3COnCollectionUpdatedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnCollectionUpdatedU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_nodeList_5() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52, ___nodeList_5)); }
	inline List_1_t1EA610D31DB1EACACD3FFFE38F28FD8D45DED6FE * get_nodeList_5() const { return ___nodeList_5; }
	inline List_1_t1EA610D31DB1EACACD3FFFE38F28FD8D45DED6FE ** get_address_of_nodeList_5() { return &___nodeList_5; }
	inline void set_nodeList_5(List_1_t1EA610D31DB1EACACD3FFFE38F28FD8D45DED6FE * value)
	{
		___nodeList_5 = value;
		Il2CppCodeGenWriteBarrier((&___nodeList_5), value);
	}

	inline static int32_t get_offset_of_ignoreInactiveTransforms_6() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52, ___ignoreInactiveTransforms_6)); }
	inline bool get_ignoreInactiveTransforms_6() const { return ___ignoreInactiveTransforms_6; }
	inline bool* get_address_of_ignoreInactiveTransforms_6() { return &___ignoreInactiveTransforms_6; }
	inline void set_ignoreInactiveTransforms_6(bool value)
	{
		___ignoreInactiveTransforms_6 = value;
	}

	inline static int32_t get_offset_of_sortType_7() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52, ___sortType_7)); }
	inline int32_t get_sortType_7() const { return ___sortType_7; }
	inline int32_t* get_address_of_sortType_7() { return &___sortType_7; }
	inline void set_sortType_7(int32_t value)
	{
		___sortType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEOBJECTCOLLECTION_T37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef GRIDOBJECTCOLLECTION_T779E244CA04DF5210B747A0E6F1BDA48BC75BA76_H
#define GRIDOBJECTCOLLECTION_T779E244CA04DF5210B747A0E6F1BDA48BC75BA76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct  GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76  : public BaseObjectCollection_t37A9E97B5ED2C13D6AF29B77B2A6033BBB23DA52
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_12;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_18;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_19;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CSphereMeshU3Ek__BackingField_20;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CCylinderMeshU3Ek__BackingField_21;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___HalfCell_22;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_24;

public:
	inline static int32_t get_offset_of_surfaceType_8() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___surfaceType_8)); }
	inline int32_t get_surfaceType_8() const { return ___surfaceType_8; }
	inline int32_t* get_address_of_surfaceType_8() { return &___surfaceType_8; }
	inline void set_surfaceType_8(int32_t value)
	{
		___surfaceType_8 = value;
	}

	inline static int32_t get_offset_of_orientType_9() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___orientType_9)); }
	inline int32_t get_orientType_9() const { return ___orientType_9; }
	inline int32_t* get_address_of_orientType_9() { return &___orientType_9; }
	inline void set_orientType_9(int32_t value)
	{
		___orientType_9 = value;
	}

	inline static int32_t get_offset_of_layout_10() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___layout_10)); }
	inline int32_t get_layout_10() const { return ___layout_10; }
	inline int32_t* get_address_of_layout_10() { return &___layout_10; }
	inline void set_layout_10(int32_t value)
	{
		___layout_10 = value;
	}

	inline static int32_t get_offset_of_anchor_11() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___anchor_11)); }
	inline int32_t get_anchor_11() const { return ___anchor_11; }
	inline int32_t* get_address_of_anchor_11() { return &___anchor_11; }
	inline void set_anchor_11(int32_t value)
	{
		___anchor_11 = value;
	}

	inline static int32_t get_offset_of_radius_12() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___radius_12)); }
	inline float get_radius_12() const { return ___radius_12; }
	inline float* get_address_of_radius_12() { return &___radius_12; }
	inline void set_radius_12(float value)
	{
		___radius_12 = value;
	}

	inline static int32_t get_offset_of_radialRange_13() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___radialRange_13)); }
	inline float get_radialRange_13() const { return ___radialRange_13; }
	inline float* get_address_of_radialRange_13() { return &___radialRange_13; }
	inline void set_radialRange_13(float value)
	{
		___radialRange_13 = value;
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___distance_14)); }
	inline float get_distance_14() const { return ___distance_14; }
	inline float* get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(float value)
	{
		___distance_14 = value;
	}

	inline static int32_t get_offset_of_rows_16() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___rows_16)); }
	inline int32_t get_rows_16() const { return ___rows_16; }
	inline int32_t* get_address_of_rows_16() { return &___rows_16; }
	inline void set_rows_16(int32_t value)
	{
		___rows_16 = value;
	}

	inline static int32_t get_offset_of_columns_17() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___columns_17)); }
	inline int32_t get_columns_17() const { return ___columns_17; }
	inline int32_t* get_address_of_columns_17() { return &___columns_17; }
	inline void set_columns_17(int32_t value)
	{
		___columns_17 = value;
	}

	inline static int32_t get_offset_of_cellWidth_18() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___cellWidth_18)); }
	inline float get_cellWidth_18() const { return ___cellWidth_18; }
	inline float* get_address_of_cellWidth_18() { return &___cellWidth_18; }
	inline void set_cellWidth_18(float value)
	{
		___cellWidth_18 = value;
	}

	inline static int32_t get_offset_of_cellHeight_19() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___cellHeight_19)); }
	inline float get_cellHeight_19() const { return ___cellHeight_19; }
	inline float* get_address_of_cellHeight_19() { return &___cellHeight_19; }
	inline void set_cellHeight_19(float value)
	{
		___cellHeight_19 = value;
	}

	inline static int32_t get_offset_of_U3CSphereMeshU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___U3CSphereMeshU3Ek__BackingField_20)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CSphereMeshU3Ek__BackingField_20() const { return ___U3CSphereMeshU3Ek__BackingField_20; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CSphereMeshU3Ek__BackingField_20() { return &___U3CSphereMeshU3Ek__BackingField_20; }
	inline void set_U3CSphereMeshU3Ek__BackingField_20(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CSphereMeshU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSphereMeshU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3CCylinderMeshU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___U3CCylinderMeshU3Ek__BackingField_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CCylinderMeshU3Ek__BackingField_21() const { return ___U3CCylinderMeshU3Ek__BackingField_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CCylinderMeshU3Ek__BackingField_21() { return &___U3CCylinderMeshU3Ek__BackingField_21; }
	inline void set_U3CCylinderMeshU3Ek__BackingField_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CCylinderMeshU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCylinderMeshU3Ek__BackingField_21), value);
	}

	inline static int32_t get_offset_of_HalfCell_22() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___HalfCell_22)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_HalfCell_22() const { return ___HalfCell_22; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_HalfCell_22() { return &___HalfCell_22; }
	inline void set_HalfCell_22(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___HalfCell_22 = value;
	}

	inline static int32_t get_offset_of_assetVersion_24() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76, ___assetVersion_24)); }
	inline int32_t get_assetVersion_24() const { return ___assetVersion_24; }
	inline int32_t* get_address_of_assetVersion_24() { return &___assetVersion_24; }
	inline void set_assetVersion_24(int32_t value)
	{
		___assetVersion_24 = value;
	}
};

struct GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::defaultValueRowsCols
	int32_t ___defaultValueRowsCols_15;

public:
	inline static int32_t get_offset_of_defaultValueRowsCols_15() { return static_cast<int32_t>(offsetof(GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76_StaticFields, ___defaultValueRowsCols_15)); }
	inline int32_t get_defaultValueRowsCols_15() const { return ___defaultValueRowsCols_15; }
	inline int32_t* get_address_of_defaultValueRowsCols_15() { return &___defaultValueRowsCols_15; }
	inline void set_defaultValueRowsCols_15(int32_t value)
	{
		___defaultValueRowsCols_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDOBJECTCOLLECTION_T779E244CA04DF5210B747A0E6F1BDA48BC75BA76_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#define TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_30;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_31;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_32;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_33;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_34;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_35;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_36;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_37;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_38;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_39;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_40;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_41;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_42;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_43;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_44;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_45;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_46;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_49;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_50;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_51;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_52;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_53;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_54;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_55;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_56;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_57;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_58;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_59;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_60;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_61;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_62;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_63;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_64;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_65;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_66;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_sizeStack_67;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_68;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_69;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_70;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_71;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_72;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_74;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_75;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_76;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_77;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_78;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_79;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_80;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_81;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_82;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_83;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_84;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_85;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_86;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_87;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_88;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_89;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_90;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_91;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_92;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_93;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_94;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_95;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_96;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_97;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_98;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_99;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_100;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_101;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_102;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_103;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_104;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_105;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_106;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_107;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_108;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_109;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_110;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_111;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_113;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_114;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_115;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_116;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_117;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_118;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_119;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_120;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_121;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_122;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_123;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_124;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_125;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_126;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_127;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_128;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_129;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_130;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_131;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_132;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_133;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_134;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_135;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_136;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_137;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_138;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_139;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_140;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_141;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_142;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_143;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_144;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_145;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_146;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_147;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_148;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_149;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_150;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_151;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_152;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_153;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_154;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_155;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_156;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_157;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_158;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_159;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_160;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_161;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_162;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_163;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_164;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_165;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_166;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_167;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_168;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_169;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_170;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_171;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_172;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_173;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_174;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_175;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_indentStack_176;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_177;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_178;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_179;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_180;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_181;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_182;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_183;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_184;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_185;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_186;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_187;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_188;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_189;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_190;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_191;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_192;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_193;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_194;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_195;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_196;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_197;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_198;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_199;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_200;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_201;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_202;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_203;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_204;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_205;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_206;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_207;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_208;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_209;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_210;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_211;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_212;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_styleStack_213;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_actionStack_214;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_215;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_216;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_baselineOffsetStack_217;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_218;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_219;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_220;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_221;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_222;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_223;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_224;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_225;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_226;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_227;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_228;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_229;

public:
	inline static int32_t get_offset_of_m_text_30() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_30)); }
	inline String_t* get_m_text_30() const { return ___m_text_30; }
	inline String_t** get_address_of_m_text_30() { return &___m_text_30; }
	inline void set_m_text_30(String_t* value)
	{
		___m_text_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_30), value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_31() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_31)); }
	inline bool get_m_isRightToLeft_31() const { return ___m_isRightToLeft_31; }
	inline bool* get_address_of_m_isRightToLeft_31() { return &___m_isRightToLeft_31; }
	inline void set_m_isRightToLeft_31(bool value)
	{
		___m_isRightToLeft_31 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_32() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_32)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_32() const { return ___m_fontAsset_32; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_32() { return &___m_fontAsset_32; }
	inline void set_m_fontAsset_32(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontAsset_32), value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_33() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_33)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_33() const { return ___m_currentFontAsset_33; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_33() { return &___m_currentFontAsset_33; }
	inline void set_m_currentFontAsset_33(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentFontAsset_33), value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_34)); }
	inline bool get_m_isSDFShader_34() const { return ___m_isSDFShader_34; }
	inline bool* get_address_of_m_isSDFShader_34() { return &___m_isSDFShader_34; }
	inline void set_m_isSDFShader_34(bool value)
	{
		___m_isSDFShader_34 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_35() const { return ___m_sharedMaterial_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_35() { return &___m_sharedMaterial_35; }
	inline void set_m_sharedMaterial_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_sharedMaterial_35), value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_36)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_36() const { return ___m_currentMaterial_36; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_36() { return &___m_currentMaterial_36; }
	inline void set_m_currentMaterial_36(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentMaterial_36), value);
	}

	inline static int32_t get_offset_of_m_materialReferences_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_37)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_37() const { return ___m_materialReferences_37; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_37() { return &___m_materialReferences_37; }
	inline void set_m_materialReferences_37(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferences_37), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_38)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_38() const { return ___m_materialReferenceIndexLookup_38; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_38() { return &___m_materialReferenceIndexLookup_38; }
	inline void set_m_materialReferenceIndexLookup_38(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_38 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferenceIndexLookup_38), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_39)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_39() const { return ___m_materialReferenceStack_39; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_39() { return &___m_materialReferenceStack_39; }
	inline void set_m_materialReferenceStack_39(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_39 = value;
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_40)); }
	inline int32_t get_m_currentMaterialIndex_40() const { return ___m_currentMaterialIndex_40; }
	inline int32_t* get_address_of_m_currentMaterialIndex_40() { return &___m_currentMaterialIndex_40; }
	inline void set_m_currentMaterialIndex_40(int32_t value)
	{
		___m_currentMaterialIndex_40 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_41)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_41() const { return ___m_fontSharedMaterials_41; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_41() { return &___m_fontSharedMaterials_41; }
	inline void set_m_fontSharedMaterials_41(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontSharedMaterials_41), value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_42() const { return ___m_fontMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_42() { return &___m_fontMaterial_42; }
	inline void set_m_fontMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterial_42), value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_43)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_43() const { return ___m_fontMaterials_43; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_43() { return &___m_fontMaterials_43; }
	inline void set_m_fontMaterials_43(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterials_43), value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_44)); }
	inline bool get_m_isMaterialDirty_44() const { return ___m_isMaterialDirty_44; }
	inline bool* get_address_of_m_isMaterialDirty_44() { return &___m_isMaterialDirty_44; }
	inline void set_m_isMaterialDirty_44(bool value)
	{
		___m_isMaterialDirty_44 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_45)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_45() const { return ___m_fontColor32_45; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_45() { return &___m_fontColor32_45; }
	inline void set_m_fontColor32_45(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_45 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_46)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_46() const { return ___m_fontColor_46; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_46() { return &___m_fontColor_46; }
	inline void set_m_fontColor_46(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_46 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_48)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_48() const { return ___m_underlineColor_48; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_48() { return &___m_underlineColor_48; }
	inline void set_m_underlineColor_48(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_48 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_49() const { return ___m_strikethroughColor_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_49() { return &___m_strikethroughColor_49; }
	inline void set_m_strikethroughColor_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_49 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_50)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_50() const { return ___m_highlightColor_50; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_50() { return &___m_highlightColor_50; }
	inline void set_m_highlightColor_50(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_50 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_51)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_51() const { return ___m_highlightPadding_51; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_51() { return &___m_highlightPadding_51; }
	inline void set_m_highlightPadding_51(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_51 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_52)); }
	inline bool get_m_enableVertexGradient_52() const { return ___m_enableVertexGradient_52; }
	inline bool* get_address_of_m_enableVertexGradient_52() { return &___m_enableVertexGradient_52; }
	inline void set_m_enableVertexGradient_52(bool value)
	{
		___m_enableVertexGradient_52 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_53)); }
	inline int32_t get_m_colorMode_53() const { return ___m_colorMode_53; }
	inline int32_t* get_address_of_m_colorMode_53() { return &___m_colorMode_53; }
	inline void set_m_colorMode_53(int32_t value)
	{
		___m_colorMode_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_54)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_54() const { return ___m_fontColorGradient_54; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_54() { return &___m_fontColorGradient_54; }
	inline void set_m_fontColorGradient_54(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_54 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_55)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_55() const { return ___m_fontColorGradientPreset_55; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_55() { return &___m_fontColorGradientPreset_55; }
	inline void set_m_fontColorGradientPreset_55(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontColorGradientPreset_55), value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_56)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_56() const { return ___m_spriteAsset_56; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_56() { return &___m_spriteAsset_56; }
	inline void set_m_spriteAsset_56(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAsset_56), value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_57)); }
	inline bool get_m_tintAllSprites_57() const { return ___m_tintAllSprites_57; }
	inline bool* get_address_of_m_tintAllSprites_57() { return &___m_tintAllSprites_57; }
	inline void set_m_tintAllSprites_57(bool value)
	{
		___m_tintAllSprites_57 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_58)); }
	inline bool get_m_tintSprite_58() const { return ___m_tintSprite_58; }
	inline bool* get_address_of_m_tintSprite_58() { return &___m_tintSprite_58; }
	inline void set_m_tintSprite_58(bool value)
	{
		___m_tintSprite_58 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_59)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_59() const { return ___m_spriteColor_59; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_59() { return &___m_spriteColor_59; }
	inline void set_m_spriteColor_59(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_59 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_60)); }
	inline bool get_m_overrideHtmlColors_60() const { return ___m_overrideHtmlColors_60; }
	inline bool* get_address_of_m_overrideHtmlColors_60() { return &___m_overrideHtmlColors_60; }
	inline void set_m_overrideHtmlColors_60(bool value)
	{
		___m_overrideHtmlColors_60 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_61)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_61() const { return ___m_faceColor_61; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_61() { return &___m_faceColor_61; }
	inline void set_m_faceColor_61(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_61 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_62)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_62() const { return ___m_outlineColor_62; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_62() { return &___m_outlineColor_62; }
	inline void set_m_outlineColor_62(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_62 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_63)); }
	inline float get_m_outlineWidth_63() const { return ___m_outlineWidth_63; }
	inline float* get_address_of_m_outlineWidth_63() { return &___m_outlineWidth_63; }
	inline void set_m_outlineWidth_63(float value)
	{
		___m_outlineWidth_63 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_64)); }
	inline float get_m_fontSize_64() const { return ___m_fontSize_64; }
	inline float* get_address_of_m_fontSize_64() { return &___m_fontSize_64; }
	inline void set_m_fontSize_64(float value)
	{
		___m_fontSize_64 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_65)); }
	inline float get_m_currentFontSize_65() const { return ___m_currentFontSize_65; }
	inline float* get_address_of_m_currentFontSize_65() { return &___m_currentFontSize_65; }
	inline void set_m_currentFontSize_65(float value)
	{
		___m_currentFontSize_65 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_66)); }
	inline float get_m_fontSizeBase_66() const { return ___m_fontSizeBase_66; }
	inline float* get_address_of_m_fontSizeBase_66() { return &___m_fontSizeBase_66; }
	inline void set_m_fontSizeBase_66(float value)
	{
		___m_fontSizeBase_66 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_67)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_sizeStack_67() const { return ___m_sizeStack_67; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_sizeStack_67() { return &___m_sizeStack_67; }
	inline void set_m_sizeStack_67(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_sizeStack_67 = value;
	}

	inline static int32_t get_offset_of_m_fontWeight_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_68)); }
	inline int32_t get_m_fontWeight_68() const { return ___m_fontWeight_68; }
	inline int32_t* get_address_of_m_fontWeight_68() { return &___m_fontWeight_68; }
	inline void set_m_fontWeight_68(int32_t value)
	{
		___m_fontWeight_68 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_69)); }
	inline int32_t get_m_FontWeightInternal_69() const { return ___m_FontWeightInternal_69; }
	inline int32_t* get_address_of_m_FontWeightInternal_69() { return &___m_FontWeightInternal_69; }
	inline void set_m_FontWeightInternal_69(int32_t value)
	{
		___m_FontWeightInternal_69 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_70)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_70() const { return ___m_FontWeightStack_70; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_70() { return &___m_FontWeightStack_70; }
	inline void set_m_FontWeightStack_70(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_70 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_71)); }
	inline bool get_m_enableAutoSizing_71() const { return ___m_enableAutoSizing_71; }
	inline bool* get_address_of_m_enableAutoSizing_71() { return &___m_enableAutoSizing_71; }
	inline void set_m_enableAutoSizing_71(bool value)
	{
		___m_enableAutoSizing_71 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_72)); }
	inline float get_m_maxFontSize_72() const { return ___m_maxFontSize_72; }
	inline float* get_address_of_m_maxFontSize_72() { return &___m_maxFontSize_72; }
	inline void set_m_maxFontSize_72(float value)
	{
		___m_maxFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_73)); }
	inline float get_m_minFontSize_73() const { return ___m_minFontSize_73; }
	inline float* get_address_of_m_minFontSize_73() { return &___m_minFontSize_73; }
	inline void set_m_minFontSize_73(float value)
	{
		___m_minFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_74)); }
	inline float get_m_fontSizeMin_74() const { return ___m_fontSizeMin_74; }
	inline float* get_address_of_m_fontSizeMin_74() { return &___m_fontSizeMin_74; }
	inline void set_m_fontSizeMin_74(float value)
	{
		___m_fontSizeMin_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_75)); }
	inline float get_m_fontSizeMax_75() const { return ___m_fontSizeMax_75; }
	inline float* get_address_of_m_fontSizeMax_75() { return &___m_fontSizeMax_75; }
	inline void set_m_fontSizeMax_75(float value)
	{
		___m_fontSizeMax_75 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_76)); }
	inline int32_t get_m_fontStyle_76() const { return ___m_fontStyle_76; }
	inline int32_t* get_address_of_m_fontStyle_76() { return &___m_fontStyle_76; }
	inline void set_m_fontStyle_76(int32_t value)
	{
		___m_fontStyle_76 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_77)); }
	inline int32_t get_m_FontStyleInternal_77() const { return ___m_FontStyleInternal_77; }
	inline int32_t* get_address_of_m_FontStyleInternal_77() { return &___m_FontStyleInternal_77; }
	inline void set_m_FontStyleInternal_77(int32_t value)
	{
		___m_FontStyleInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_78)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_78() const { return ___m_fontStyleStack_78; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_78() { return &___m_fontStyleStack_78; }
	inline void set_m_fontStyleStack_78(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_78 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_79)); }
	inline bool get_m_isUsingBold_79() const { return ___m_isUsingBold_79; }
	inline bool* get_address_of_m_isUsingBold_79() { return &___m_isUsingBold_79; }
	inline void set_m_isUsingBold_79(bool value)
	{
		___m_isUsingBold_79 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_80)); }
	inline int32_t get_m_textAlignment_80() const { return ___m_textAlignment_80; }
	inline int32_t* get_address_of_m_textAlignment_80() { return &___m_textAlignment_80; }
	inline void set_m_textAlignment_80(int32_t value)
	{
		___m_textAlignment_80 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_81)); }
	inline int32_t get_m_lineJustification_81() const { return ___m_lineJustification_81; }
	inline int32_t* get_address_of_m_lineJustification_81() { return &___m_lineJustification_81; }
	inline void set_m_lineJustification_81(int32_t value)
	{
		___m_lineJustification_81 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_82)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_82() const { return ___m_lineJustificationStack_82; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_82() { return &___m_lineJustificationStack_82; }
	inline void set_m_lineJustificationStack_82(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_82 = value;
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_83)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_83() const { return ___m_textContainerLocalCorners_83; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_83() { return &___m_textContainerLocalCorners_83; }
	inline void set_m_textContainerLocalCorners_83(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_83 = value;
		Il2CppCodeGenWriteBarrier((&___m_textContainerLocalCorners_83), value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_84)); }
	inline float get_m_characterSpacing_84() const { return ___m_characterSpacing_84; }
	inline float* get_address_of_m_characterSpacing_84() { return &___m_characterSpacing_84; }
	inline void set_m_characterSpacing_84(float value)
	{
		___m_characterSpacing_84 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_85)); }
	inline float get_m_cSpacing_85() const { return ___m_cSpacing_85; }
	inline float* get_address_of_m_cSpacing_85() { return &___m_cSpacing_85; }
	inline void set_m_cSpacing_85(float value)
	{
		___m_cSpacing_85 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_86)); }
	inline float get_m_monoSpacing_86() const { return ___m_monoSpacing_86; }
	inline float* get_address_of_m_monoSpacing_86() { return &___m_monoSpacing_86; }
	inline void set_m_monoSpacing_86(float value)
	{
		___m_monoSpacing_86 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_87)); }
	inline float get_m_wordSpacing_87() const { return ___m_wordSpacing_87; }
	inline float* get_address_of_m_wordSpacing_87() { return &___m_wordSpacing_87; }
	inline void set_m_wordSpacing_87(float value)
	{
		___m_wordSpacing_87 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_88)); }
	inline float get_m_lineSpacing_88() const { return ___m_lineSpacing_88; }
	inline float* get_address_of_m_lineSpacing_88() { return &___m_lineSpacing_88; }
	inline void set_m_lineSpacing_88(float value)
	{
		___m_lineSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_89)); }
	inline float get_m_lineSpacingDelta_89() const { return ___m_lineSpacingDelta_89; }
	inline float* get_address_of_m_lineSpacingDelta_89() { return &___m_lineSpacingDelta_89; }
	inline void set_m_lineSpacingDelta_89(float value)
	{
		___m_lineSpacingDelta_89 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_90)); }
	inline float get_m_lineHeight_90() const { return ___m_lineHeight_90; }
	inline float* get_address_of_m_lineHeight_90() { return &___m_lineHeight_90; }
	inline void set_m_lineHeight_90(float value)
	{
		___m_lineHeight_90 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_91)); }
	inline float get_m_lineSpacingMax_91() const { return ___m_lineSpacingMax_91; }
	inline float* get_address_of_m_lineSpacingMax_91() { return &___m_lineSpacingMax_91; }
	inline void set_m_lineSpacingMax_91(float value)
	{
		___m_lineSpacingMax_91 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_92)); }
	inline float get_m_paragraphSpacing_92() const { return ___m_paragraphSpacing_92; }
	inline float* get_address_of_m_paragraphSpacing_92() { return &___m_paragraphSpacing_92; }
	inline void set_m_paragraphSpacing_92(float value)
	{
		___m_paragraphSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_93)); }
	inline float get_m_charWidthMaxAdj_93() const { return ___m_charWidthMaxAdj_93; }
	inline float* get_address_of_m_charWidthMaxAdj_93() { return &___m_charWidthMaxAdj_93; }
	inline void set_m_charWidthMaxAdj_93(float value)
	{
		___m_charWidthMaxAdj_93 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_94)); }
	inline float get_m_charWidthAdjDelta_94() const { return ___m_charWidthAdjDelta_94; }
	inline float* get_address_of_m_charWidthAdjDelta_94() { return &___m_charWidthAdjDelta_94; }
	inline void set_m_charWidthAdjDelta_94(float value)
	{
		___m_charWidthAdjDelta_94 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_95)); }
	inline bool get_m_enableWordWrapping_95() const { return ___m_enableWordWrapping_95; }
	inline bool* get_address_of_m_enableWordWrapping_95() { return &___m_enableWordWrapping_95; }
	inline void set_m_enableWordWrapping_95(bool value)
	{
		___m_enableWordWrapping_95 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_96)); }
	inline bool get_m_isCharacterWrappingEnabled_96() const { return ___m_isCharacterWrappingEnabled_96; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_96() { return &___m_isCharacterWrappingEnabled_96; }
	inline void set_m_isCharacterWrappingEnabled_96(bool value)
	{
		___m_isCharacterWrappingEnabled_96 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_97)); }
	inline bool get_m_isNonBreakingSpace_97() const { return ___m_isNonBreakingSpace_97; }
	inline bool* get_address_of_m_isNonBreakingSpace_97() { return &___m_isNonBreakingSpace_97; }
	inline void set_m_isNonBreakingSpace_97(bool value)
	{
		___m_isNonBreakingSpace_97 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_98)); }
	inline bool get_m_isIgnoringAlignment_98() const { return ___m_isIgnoringAlignment_98; }
	inline bool* get_address_of_m_isIgnoringAlignment_98() { return &___m_isIgnoringAlignment_98; }
	inline void set_m_isIgnoringAlignment_98(bool value)
	{
		___m_isIgnoringAlignment_98 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_99)); }
	inline float get_m_wordWrappingRatios_99() const { return ___m_wordWrappingRatios_99; }
	inline float* get_address_of_m_wordWrappingRatios_99() { return &___m_wordWrappingRatios_99; }
	inline void set_m_wordWrappingRatios_99(float value)
	{
		___m_wordWrappingRatios_99 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_100)); }
	inline int32_t get_m_overflowMode_100() const { return ___m_overflowMode_100; }
	inline int32_t* get_address_of_m_overflowMode_100() { return &___m_overflowMode_100; }
	inline void set_m_overflowMode_100(int32_t value)
	{
		___m_overflowMode_100 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_101)); }
	inline int32_t get_m_firstOverflowCharacterIndex_101() const { return ___m_firstOverflowCharacterIndex_101; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_101() { return &___m_firstOverflowCharacterIndex_101; }
	inline void set_m_firstOverflowCharacterIndex_101(int32_t value)
	{
		___m_firstOverflowCharacterIndex_101 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_102)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_102() const { return ___m_linkedTextComponent_102; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_102() { return &___m_linkedTextComponent_102; }
	inline void set_m_linkedTextComponent_102(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_102 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkedTextComponent_102), value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_103)); }
	inline bool get_m_isLinkedTextComponent_103() const { return ___m_isLinkedTextComponent_103; }
	inline bool* get_address_of_m_isLinkedTextComponent_103() { return &___m_isLinkedTextComponent_103; }
	inline void set_m_isLinkedTextComponent_103(bool value)
	{
		___m_isLinkedTextComponent_103 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_104)); }
	inline bool get_m_isTextTruncated_104() const { return ___m_isTextTruncated_104; }
	inline bool* get_address_of_m_isTextTruncated_104() { return &___m_isTextTruncated_104; }
	inline void set_m_isTextTruncated_104(bool value)
	{
		___m_isTextTruncated_104 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_105)); }
	inline bool get_m_enableKerning_105() const { return ___m_enableKerning_105; }
	inline bool* get_address_of_m_enableKerning_105() { return &___m_enableKerning_105; }
	inline void set_m_enableKerning_105(bool value)
	{
		___m_enableKerning_105 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_106)); }
	inline bool get_m_enableExtraPadding_106() const { return ___m_enableExtraPadding_106; }
	inline bool* get_address_of_m_enableExtraPadding_106() { return &___m_enableExtraPadding_106; }
	inline void set_m_enableExtraPadding_106(bool value)
	{
		___m_enableExtraPadding_106 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_107)); }
	inline bool get_checkPaddingRequired_107() const { return ___checkPaddingRequired_107; }
	inline bool* get_address_of_checkPaddingRequired_107() { return &___checkPaddingRequired_107; }
	inline void set_checkPaddingRequired_107(bool value)
	{
		___checkPaddingRequired_107 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_108)); }
	inline bool get_m_isRichText_108() const { return ___m_isRichText_108; }
	inline bool* get_address_of_m_isRichText_108() { return &___m_isRichText_108; }
	inline void set_m_isRichText_108(bool value)
	{
		___m_isRichText_108 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_109)); }
	inline bool get_m_parseCtrlCharacters_109() const { return ___m_parseCtrlCharacters_109; }
	inline bool* get_address_of_m_parseCtrlCharacters_109() { return &___m_parseCtrlCharacters_109; }
	inline void set_m_parseCtrlCharacters_109(bool value)
	{
		___m_parseCtrlCharacters_109 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_110)); }
	inline bool get_m_isOverlay_110() const { return ___m_isOverlay_110; }
	inline bool* get_address_of_m_isOverlay_110() { return &___m_isOverlay_110; }
	inline void set_m_isOverlay_110(bool value)
	{
		___m_isOverlay_110 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_111)); }
	inline bool get_m_isOrthographic_111() const { return ___m_isOrthographic_111; }
	inline bool* get_address_of_m_isOrthographic_111() { return &___m_isOrthographic_111; }
	inline void set_m_isOrthographic_111(bool value)
	{
		___m_isOrthographic_111 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_112)); }
	inline bool get_m_isCullingEnabled_112() const { return ___m_isCullingEnabled_112; }
	inline bool* get_address_of_m_isCullingEnabled_112() { return &___m_isCullingEnabled_112; }
	inline void set_m_isCullingEnabled_112(bool value)
	{
		___m_isCullingEnabled_112 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_113)); }
	inline bool get_m_ignoreRectMaskCulling_113() const { return ___m_ignoreRectMaskCulling_113; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_113() { return &___m_ignoreRectMaskCulling_113; }
	inline void set_m_ignoreRectMaskCulling_113(bool value)
	{
		___m_ignoreRectMaskCulling_113 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_114)); }
	inline bool get_m_ignoreCulling_114() const { return ___m_ignoreCulling_114; }
	inline bool* get_address_of_m_ignoreCulling_114() { return &___m_ignoreCulling_114; }
	inline void set_m_ignoreCulling_114(bool value)
	{
		___m_ignoreCulling_114 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_115)); }
	inline int32_t get_m_horizontalMapping_115() const { return ___m_horizontalMapping_115; }
	inline int32_t* get_address_of_m_horizontalMapping_115() { return &___m_horizontalMapping_115; }
	inline void set_m_horizontalMapping_115(int32_t value)
	{
		___m_horizontalMapping_115 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_116)); }
	inline int32_t get_m_verticalMapping_116() const { return ___m_verticalMapping_116; }
	inline int32_t* get_address_of_m_verticalMapping_116() { return &___m_verticalMapping_116; }
	inline void set_m_verticalMapping_116(int32_t value)
	{
		___m_verticalMapping_116 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_117)); }
	inline float get_m_uvLineOffset_117() const { return ___m_uvLineOffset_117; }
	inline float* get_address_of_m_uvLineOffset_117() { return &___m_uvLineOffset_117; }
	inline void set_m_uvLineOffset_117(float value)
	{
		___m_uvLineOffset_117 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_118)); }
	inline int32_t get_m_renderMode_118() const { return ___m_renderMode_118; }
	inline int32_t* get_address_of_m_renderMode_118() { return &___m_renderMode_118; }
	inline void set_m_renderMode_118(int32_t value)
	{
		___m_renderMode_118 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_119)); }
	inline int32_t get_m_geometrySortingOrder_119() const { return ___m_geometrySortingOrder_119; }
	inline int32_t* get_address_of_m_geometrySortingOrder_119() { return &___m_geometrySortingOrder_119; }
	inline void set_m_geometrySortingOrder_119(int32_t value)
	{
		___m_geometrySortingOrder_119 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_120)); }
	inline bool get_m_VertexBufferAutoSizeReduction_120() const { return ___m_VertexBufferAutoSizeReduction_120; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_120() { return &___m_VertexBufferAutoSizeReduction_120; }
	inline void set_m_VertexBufferAutoSizeReduction_120(bool value)
	{
		___m_VertexBufferAutoSizeReduction_120 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_121)); }
	inline int32_t get_m_firstVisibleCharacter_121() const { return ___m_firstVisibleCharacter_121; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_121() { return &___m_firstVisibleCharacter_121; }
	inline void set_m_firstVisibleCharacter_121(int32_t value)
	{
		___m_firstVisibleCharacter_121 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_122)); }
	inline int32_t get_m_maxVisibleCharacters_122() const { return ___m_maxVisibleCharacters_122; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_122() { return &___m_maxVisibleCharacters_122; }
	inline void set_m_maxVisibleCharacters_122(int32_t value)
	{
		___m_maxVisibleCharacters_122 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_123)); }
	inline int32_t get_m_maxVisibleWords_123() const { return ___m_maxVisibleWords_123; }
	inline int32_t* get_address_of_m_maxVisibleWords_123() { return &___m_maxVisibleWords_123; }
	inline void set_m_maxVisibleWords_123(int32_t value)
	{
		___m_maxVisibleWords_123 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_124)); }
	inline int32_t get_m_maxVisibleLines_124() const { return ___m_maxVisibleLines_124; }
	inline int32_t* get_address_of_m_maxVisibleLines_124() { return &___m_maxVisibleLines_124; }
	inline void set_m_maxVisibleLines_124(int32_t value)
	{
		___m_maxVisibleLines_124 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_125)); }
	inline bool get_m_useMaxVisibleDescender_125() const { return ___m_useMaxVisibleDescender_125; }
	inline bool* get_address_of_m_useMaxVisibleDescender_125() { return &___m_useMaxVisibleDescender_125; }
	inline void set_m_useMaxVisibleDescender_125(bool value)
	{
		___m_useMaxVisibleDescender_125 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_126)); }
	inline int32_t get_m_pageToDisplay_126() const { return ___m_pageToDisplay_126; }
	inline int32_t* get_address_of_m_pageToDisplay_126() { return &___m_pageToDisplay_126; }
	inline void set_m_pageToDisplay_126(int32_t value)
	{
		___m_pageToDisplay_126 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_127)); }
	inline bool get_m_isNewPage_127() const { return ___m_isNewPage_127; }
	inline bool* get_address_of_m_isNewPage_127() { return &___m_isNewPage_127; }
	inline void set_m_isNewPage_127(bool value)
	{
		___m_isNewPage_127 = value;
	}

	inline static int32_t get_offset_of_m_margin_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_128)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_128() const { return ___m_margin_128; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_128() { return &___m_margin_128; }
	inline void set_m_margin_128(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_128 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_129)); }
	inline float get_m_marginLeft_129() const { return ___m_marginLeft_129; }
	inline float* get_address_of_m_marginLeft_129() { return &___m_marginLeft_129; }
	inline void set_m_marginLeft_129(float value)
	{
		___m_marginLeft_129 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_130)); }
	inline float get_m_marginRight_130() const { return ___m_marginRight_130; }
	inline float* get_address_of_m_marginRight_130() { return &___m_marginRight_130; }
	inline void set_m_marginRight_130(float value)
	{
		___m_marginRight_130 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_131)); }
	inline float get_m_marginWidth_131() const { return ___m_marginWidth_131; }
	inline float* get_address_of_m_marginWidth_131() { return &___m_marginWidth_131; }
	inline void set_m_marginWidth_131(float value)
	{
		___m_marginWidth_131 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_132)); }
	inline float get_m_marginHeight_132() const { return ___m_marginHeight_132; }
	inline float* get_address_of_m_marginHeight_132() { return &___m_marginHeight_132; }
	inline void set_m_marginHeight_132(float value)
	{
		___m_marginHeight_132 = value;
	}

	inline static int32_t get_offset_of_m_width_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_133)); }
	inline float get_m_width_133() const { return ___m_width_133; }
	inline float* get_address_of_m_width_133() { return &___m_width_133; }
	inline void set_m_width_133(float value)
	{
		___m_width_133 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_134)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_134() const { return ___m_textInfo_134; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_134() { return &___m_textInfo_134; }
	inline void set_m_textInfo_134(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_134 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfo_134), value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_135)); }
	inline bool get_m_havePropertiesChanged_135() const { return ___m_havePropertiesChanged_135; }
	inline bool* get_address_of_m_havePropertiesChanged_135() { return &___m_havePropertiesChanged_135; }
	inline void set_m_havePropertiesChanged_135(bool value)
	{
		___m_havePropertiesChanged_135 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_136)); }
	inline bool get_m_isUsingLegacyAnimationComponent_136() const { return ___m_isUsingLegacyAnimationComponent_136; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_136() { return &___m_isUsingLegacyAnimationComponent_136; }
	inline void set_m_isUsingLegacyAnimationComponent_136(bool value)
	{
		___m_isUsingLegacyAnimationComponent_136 = value;
	}

	inline static int32_t get_offset_of_m_transform_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_137)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_137() const { return ___m_transform_137; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_137() { return &___m_transform_137; }
	inline void set_m_transform_137(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_137 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_137), value);
	}

	inline static int32_t get_offset_of_m_rectTransform_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_138)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_138() const { return ___m_rectTransform_138; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_138() { return &___m_rectTransform_138; }
	inline void set_m_rectTransform_138(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_138 = value;
		Il2CppCodeGenWriteBarrier((&___m_rectTransform_138), value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_139)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_139() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_139; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_139() { return &___U3CautoSizeTextContainerU3Ek__BackingField_139; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_139(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_139 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_140)); }
	inline bool get_m_autoSizeTextContainer_140() const { return ___m_autoSizeTextContainer_140; }
	inline bool* get_address_of_m_autoSizeTextContainer_140() { return &___m_autoSizeTextContainer_140; }
	inline void set_m_autoSizeTextContainer_140(bool value)
	{
		___m_autoSizeTextContainer_140 = value;
	}

	inline static int32_t get_offset_of_m_mesh_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_141)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_141() const { return ___m_mesh_141; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_141() { return &___m_mesh_141; }
	inline void set_m_mesh_141(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_141 = value;
		Il2CppCodeGenWriteBarrier((&___m_mesh_141), value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_142)); }
	inline bool get_m_isVolumetricText_142() const { return ___m_isVolumetricText_142; }
	inline bool* get_address_of_m_isVolumetricText_142() { return &___m_isVolumetricText_142; }
	inline void set_m_isVolumetricText_142(bool value)
	{
		___m_isVolumetricText_142 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_143)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_143() const { return ___m_spriteAnimator_143; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_143() { return &___m_spriteAnimator_143; }
	inline void set_m_spriteAnimator_143(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_143 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAnimator_143), value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_144)); }
	inline float get_m_flexibleHeight_144() const { return ___m_flexibleHeight_144; }
	inline float* get_address_of_m_flexibleHeight_144() { return &___m_flexibleHeight_144; }
	inline void set_m_flexibleHeight_144(float value)
	{
		___m_flexibleHeight_144 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_145)); }
	inline float get_m_flexibleWidth_145() const { return ___m_flexibleWidth_145; }
	inline float* get_address_of_m_flexibleWidth_145() { return &___m_flexibleWidth_145; }
	inline void set_m_flexibleWidth_145(float value)
	{
		___m_flexibleWidth_145 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_146)); }
	inline float get_m_minWidth_146() const { return ___m_minWidth_146; }
	inline float* get_address_of_m_minWidth_146() { return &___m_minWidth_146; }
	inline void set_m_minWidth_146(float value)
	{
		___m_minWidth_146 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_147)); }
	inline float get_m_minHeight_147() const { return ___m_minHeight_147; }
	inline float* get_address_of_m_minHeight_147() { return &___m_minHeight_147; }
	inline void set_m_minHeight_147(float value)
	{
		___m_minHeight_147 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_148)); }
	inline float get_m_maxWidth_148() const { return ___m_maxWidth_148; }
	inline float* get_address_of_m_maxWidth_148() { return &___m_maxWidth_148; }
	inline void set_m_maxWidth_148(float value)
	{
		___m_maxWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_149)); }
	inline float get_m_maxHeight_149() const { return ___m_maxHeight_149; }
	inline float* get_address_of_m_maxHeight_149() { return &___m_maxHeight_149; }
	inline void set_m_maxHeight_149(float value)
	{
		___m_maxHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_150)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_150() const { return ___m_LayoutElement_150; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_150() { return &___m_LayoutElement_150; }
	inline void set_m_LayoutElement_150(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_150 = value;
		Il2CppCodeGenWriteBarrier((&___m_LayoutElement_150), value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_151)); }
	inline float get_m_preferredWidth_151() const { return ___m_preferredWidth_151; }
	inline float* get_address_of_m_preferredWidth_151() { return &___m_preferredWidth_151; }
	inline void set_m_preferredWidth_151(float value)
	{
		___m_preferredWidth_151 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_152)); }
	inline float get_m_renderedWidth_152() const { return ___m_renderedWidth_152; }
	inline float* get_address_of_m_renderedWidth_152() { return &___m_renderedWidth_152; }
	inline void set_m_renderedWidth_152(float value)
	{
		___m_renderedWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_153)); }
	inline bool get_m_isPreferredWidthDirty_153() const { return ___m_isPreferredWidthDirty_153; }
	inline bool* get_address_of_m_isPreferredWidthDirty_153() { return &___m_isPreferredWidthDirty_153; }
	inline void set_m_isPreferredWidthDirty_153(bool value)
	{
		___m_isPreferredWidthDirty_153 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_154)); }
	inline float get_m_preferredHeight_154() const { return ___m_preferredHeight_154; }
	inline float* get_address_of_m_preferredHeight_154() { return &___m_preferredHeight_154; }
	inline void set_m_preferredHeight_154(float value)
	{
		___m_preferredHeight_154 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_155)); }
	inline float get_m_renderedHeight_155() const { return ___m_renderedHeight_155; }
	inline float* get_address_of_m_renderedHeight_155() { return &___m_renderedHeight_155; }
	inline void set_m_renderedHeight_155(float value)
	{
		___m_renderedHeight_155 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_156)); }
	inline bool get_m_isPreferredHeightDirty_156() const { return ___m_isPreferredHeightDirty_156; }
	inline bool* get_address_of_m_isPreferredHeightDirty_156() { return &___m_isPreferredHeightDirty_156; }
	inline void set_m_isPreferredHeightDirty_156(bool value)
	{
		___m_isPreferredHeightDirty_156 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_157)); }
	inline bool get_m_isCalculatingPreferredValues_157() const { return ___m_isCalculatingPreferredValues_157; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_157() { return &___m_isCalculatingPreferredValues_157; }
	inline void set_m_isCalculatingPreferredValues_157(bool value)
	{
		___m_isCalculatingPreferredValues_157 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_158)); }
	inline int32_t get_m_recursiveCount_158() const { return ___m_recursiveCount_158; }
	inline int32_t* get_address_of_m_recursiveCount_158() { return &___m_recursiveCount_158; }
	inline void set_m_recursiveCount_158(int32_t value)
	{
		___m_recursiveCount_158 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_159)); }
	inline int32_t get_m_layoutPriority_159() const { return ___m_layoutPriority_159; }
	inline int32_t* get_address_of_m_layoutPriority_159() { return &___m_layoutPriority_159; }
	inline void set_m_layoutPriority_159(int32_t value)
	{
		___m_layoutPriority_159 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_160)); }
	inline bool get_m_isCalculateSizeRequired_160() const { return ___m_isCalculateSizeRequired_160; }
	inline bool* get_address_of_m_isCalculateSizeRequired_160() { return &___m_isCalculateSizeRequired_160; }
	inline void set_m_isCalculateSizeRequired_160(bool value)
	{
		___m_isCalculateSizeRequired_160 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_161)); }
	inline bool get_m_isLayoutDirty_161() const { return ___m_isLayoutDirty_161; }
	inline bool* get_address_of_m_isLayoutDirty_161() { return &___m_isLayoutDirty_161; }
	inline void set_m_isLayoutDirty_161(bool value)
	{
		___m_isLayoutDirty_161 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_162)); }
	inline bool get_m_verticesAlreadyDirty_162() const { return ___m_verticesAlreadyDirty_162; }
	inline bool* get_address_of_m_verticesAlreadyDirty_162() { return &___m_verticesAlreadyDirty_162; }
	inline void set_m_verticesAlreadyDirty_162(bool value)
	{
		___m_verticesAlreadyDirty_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_163)); }
	inline bool get_m_layoutAlreadyDirty_163() const { return ___m_layoutAlreadyDirty_163; }
	inline bool* get_address_of_m_layoutAlreadyDirty_163() { return &___m_layoutAlreadyDirty_163; }
	inline void set_m_layoutAlreadyDirty_163(bool value)
	{
		___m_layoutAlreadyDirty_163 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_164)); }
	inline bool get_m_isAwake_164() const { return ___m_isAwake_164; }
	inline bool* get_address_of_m_isAwake_164() { return &___m_isAwake_164; }
	inline void set_m_isAwake_164(bool value)
	{
		___m_isAwake_164 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_165)); }
	inline bool get_m_isWaitingOnResourceLoad_165() const { return ___m_isWaitingOnResourceLoad_165; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_165() { return &___m_isWaitingOnResourceLoad_165; }
	inline void set_m_isWaitingOnResourceLoad_165(bool value)
	{
		___m_isWaitingOnResourceLoad_165 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_166)); }
	inline bool get_m_isInputParsingRequired_166() const { return ___m_isInputParsingRequired_166; }
	inline bool* get_address_of_m_isInputParsingRequired_166() { return &___m_isInputParsingRequired_166; }
	inline void set_m_isInputParsingRequired_166(bool value)
	{
		___m_isInputParsingRequired_166 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_167)); }
	inline int32_t get_m_inputSource_167() const { return ___m_inputSource_167; }
	inline int32_t* get_address_of_m_inputSource_167() { return &___m_inputSource_167; }
	inline void set_m_inputSource_167(int32_t value)
	{
		___m_inputSource_167 = value;
	}

	inline static int32_t get_offset_of_old_text_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_168)); }
	inline String_t* get_old_text_168() const { return ___old_text_168; }
	inline String_t** get_address_of_old_text_168() { return &___old_text_168; }
	inline void set_old_text_168(String_t* value)
	{
		___old_text_168 = value;
		Il2CppCodeGenWriteBarrier((&___old_text_168), value);
	}

	inline static int32_t get_offset_of_m_fontScale_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_169)); }
	inline float get_m_fontScale_169() const { return ___m_fontScale_169; }
	inline float* get_address_of_m_fontScale_169() { return &___m_fontScale_169; }
	inline void set_m_fontScale_169(float value)
	{
		___m_fontScale_169 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_170)); }
	inline float get_m_fontScaleMultiplier_170() const { return ___m_fontScaleMultiplier_170; }
	inline float* get_address_of_m_fontScaleMultiplier_170() { return &___m_fontScaleMultiplier_170; }
	inline void set_m_fontScaleMultiplier_170(float value)
	{
		___m_fontScaleMultiplier_170 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_171)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_171() const { return ___m_htmlTag_171; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_171() { return &___m_htmlTag_171; }
	inline void set_m_htmlTag_171(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_171 = value;
		Il2CppCodeGenWriteBarrier((&___m_htmlTag_171), value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_172)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_172() const { return ___m_xmlAttribute_172; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_172() { return &___m_xmlAttribute_172; }
	inline void set_m_xmlAttribute_172(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_172 = value;
		Il2CppCodeGenWriteBarrier((&___m_xmlAttribute_172), value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_173)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_173() const { return ___m_attributeParameterValues_173; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_173() { return &___m_attributeParameterValues_173; }
	inline void set_m_attributeParameterValues_173(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_173 = value;
		Il2CppCodeGenWriteBarrier((&___m_attributeParameterValues_173), value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_174)); }
	inline float get_tag_LineIndent_174() const { return ___tag_LineIndent_174; }
	inline float* get_address_of_tag_LineIndent_174() { return &___tag_LineIndent_174; }
	inline void set_tag_LineIndent_174(float value)
	{
		___tag_LineIndent_174 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_175)); }
	inline float get_tag_Indent_175() const { return ___tag_Indent_175; }
	inline float* get_address_of_tag_Indent_175() { return &___tag_Indent_175; }
	inline void set_tag_Indent_175(float value)
	{
		___tag_Indent_175 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_176)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_indentStack_176() const { return ___m_indentStack_176; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_indentStack_176() { return &___m_indentStack_176; }
	inline void set_m_indentStack_176(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_indentStack_176 = value;
	}

	inline static int32_t get_offset_of_tag_NoParsing_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_177)); }
	inline bool get_tag_NoParsing_177() const { return ___tag_NoParsing_177; }
	inline bool* get_address_of_tag_NoParsing_177() { return &___tag_NoParsing_177; }
	inline void set_tag_NoParsing_177(bool value)
	{
		___tag_NoParsing_177 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_178)); }
	inline bool get_m_isParsingText_178() const { return ___m_isParsingText_178; }
	inline bool* get_address_of_m_isParsingText_178() { return &___m_isParsingText_178; }
	inline void set_m_isParsingText_178(bool value)
	{
		___m_isParsingText_178 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_179)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_179() const { return ___m_FXMatrix_179; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_179() { return &___m_FXMatrix_179; }
	inline void set_m_FXMatrix_179(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_179 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_180)); }
	inline bool get_m_isFXMatrixSet_180() const { return ___m_isFXMatrixSet_180; }
	inline bool* get_address_of_m_isFXMatrixSet_180() { return &___m_isFXMatrixSet_180; }
	inline void set_m_isFXMatrixSet_180(bool value)
	{
		___m_isFXMatrixSet_180 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_181)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_181() const { return ___m_TextParsingBuffer_181; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_181() { return &___m_TextParsingBuffer_181; }
	inline void set_m_TextParsingBuffer_181(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_181 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextParsingBuffer_181), value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_182)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_182() const { return ___m_internalCharacterInfo_182; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_182() { return &___m_internalCharacterInfo_182; }
	inline void set_m_internalCharacterInfo_182(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_182 = value;
		Il2CppCodeGenWriteBarrier((&___m_internalCharacterInfo_182), value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_183)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_183() const { return ___m_input_CharArray_183; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_183() { return &___m_input_CharArray_183; }
	inline void set_m_input_CharArray_183(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_183 = value;
		Il2CppCodeGenWriteBarrier((&___m_input_CharArray_183), value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_184)); }
	inline int32_t get_m_charArray_Length_184() const { return ___m_charArray_Length_184; }
	inline int32_t* get_address_of_m_charArray_Length_184() { return &___m_charArray_Length_184; }
	inline void set_m_charArray_Length_184(int32_t value)
	{
		___m_charArray_Length_184 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_185)); }
	inline int32_t get_m_totalCharacterCount_185() const { return ___m_totalCharacterCount_185; }
	inline int32_t* get_address_of_m_totalCharacterCount_185() { return &___m_totalCharacterCount_185; }
	inline void set_m_totalCharacterCount_185(int32_t value)
	{
		___m_totalCharacterCount_185 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_186)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_186() const { return ___m_SavedWordWrapState_186; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_186() { return &___m_SavedWordWrapState_186; }
	inline void set_m_SavedWordWrapState_186(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_186 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_187)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_187() const { return ___m_SavedLineState_187; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_187() { return &___m_SavedLineState_187; }
	inline void set_m_SavedLineState_187(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_187 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_188)); }
	inline int32_t get_m_characterCount_188() const { return ___m_characterCount_188; }
	inline int32_t* get_address_of_m_characterCount_188() { return &___m_characterCount_188; }
	inline void set_m_characterCount_188(int32_t value)
	{
		___m_characterCount_188 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_189)); }
	inline int32_t get_m_firstCharacterOfLine_189() const { return ___m_firstCharacterOfLine_189; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_189() { return &___m_firstCharacterOfLine_189; }
	inline void set_m_firstCharacterOfLine_189(int32_t value)
	{
		___m_firstCharacterOfLine_189 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_190)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_190() const { return ___m_firstVisibleCharacterOfLine_190; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_190() { return &___m_firstVisibleCharacterOfLine_190; }
	inline void set_m_firstVisibleCharacterOfLine_190(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_190 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_191)); }
	inline int32_t get_m_lastCharacterOfLine_191() const { return ___m_lastCharacterOfLine_191; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_191() { return &___m_lastCharacterOfLine_191; }
	inline void set_m_lastCharacterOfLine_191(int32_t value)
	{
		___m_lastCharacterOfLine_191 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_192)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_192() const { return ___m_lastVisibleCharacterOfLine_192; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_192() { return &___m_lastVisibleCharacterOfLine_192; }
	inline void set_m_lastVisibleCharacterOfLine_192(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_192 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_193)); }
	inline int32_t get_m_lineNumber_193() const { return ___m_lineNumber_193; }
	inline int32_t* get_address_of_m_lineNumber_193() { return &___m_lineNumber_193; }
	inline void set_m_lineNumber_193(int32_t value)
	{
		___m_lineNumber_193 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_194)); }
	inline int32_t get_m_lineVisibleCharacterCount_194() const { return ___m_lineVisibleCharacterCount_194; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_194() { return &___m_lineVisibleCharacterCount_194; }
	inline void set_m_lineVisibleCharacterCount_194(int32_t value)
	{
		___m_lineVisibleCharacterCount_194 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_195)); }
	inline int32_t get_m_pageNumber_195() const { return ___m_pageNumber_195; }
	inline int32_t* get_address_of_m_pageNumber_195() { return &___m_pageNumber_195; }
	inline void set_m_pageNumber_195(int32_t value)
	{
		___m_pageNumber_195 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_196)); }
	inline float get_m_maxAscender_196() const { return ___m_maxAscender_196; }
	inline float* get_address_of_m_maxAscender_196() { return &___m_maxAscender_196; }
	inline void set_m_maxAscender_196(float value)
	{
		___m_maxAscender_196 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_197)); }
	inline float get_m_maxCapHeight_197() const { return ___m_maxCapHeight_197; }
	inline float* get_address_of_m_maxCapHeight_197() { return &___m_maxCapHeight_197; }
	inline void set_m_maxCapHeight_197(float value)
	{
		___m_maxCapHeight_197 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_198)); }
	inline float get_m_maxDescender_198() const { return ___m_maxDescender_198; }
	inline float* get_address_of_m_maxDescender_198() { return &___m_maxDescender_198; }
	inline void set_m_maxDescender_198(float value)
	{
		___m_maxDescender_198 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_199)); }
	inline float get_m_maxLineAscender_199() const { return ___m_maxLineAscender_199; }
	inline float* get_address_of_m_maxLineAscender_199() { return &___m_maxLineAscender_199; }
	inline void set_m_maxLineAscender_199(float value)
	{
		___m_maxLineAscender_199 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_200)); }
	inline float get_m_maxLineDescender_200() const { return ___m_maxLineDescender_200; }
	inline float* get_address_of_m_maxLineDescender_200() { return &___m_maxLineDescender_200; }
	inline void set_m_maxLineDescender_200(float value)
	{
		___m_maxLineDescender_200 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_201)); }
	inline float get_m_startOfLineAscender_201() const { return ___m_startOfLineAscender_201; }
	inline float* get_address_of_m_startOfLineAscender_201() { return &___m_startOfLineAscender_201; }
	inline void set_m_startOfLineAscender_201(float value)
	{
		___m_startOfLineAscender_201 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_202)); }
	inline float get_m_lineOffset_202() const { return ___m_lineOffset_202; }
	inline float* get_address_of_m_lineOffset_202() { return &___m_lineOffset_202; }
	inline void set_m_lineOffset_202(float value)
	{
		___m_lineOffset_202 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_203)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_203() const { return ___m_meshExtents_203; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_203() { return &___m_meshExtents_203; }
	inline void set_m_meshExtents_203(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_203 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_204)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_204() const { return ___m_htmlColor_204; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_204() { return &___m_htmlColor_204; }
	inline void set_m_htmlColor_204(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_204 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_205)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_205() const { return ___m_colorStack_205; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_205() { return &___m_colorStack_205; }
	inline void set_m_colorStack_205(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_205 = value;
	}

	inline static int32_t get_offset_of_m_underlineColorStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_206)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_206() const { return ___m_underlineColorStack_206; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_206() { return &___m_underlineColorStack_206; }
	inline void set_m_underlineColorStack_206(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_206 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_207)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_207() const { return ___m_strikethroughColorStack_207; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_207() { return &___m_strikethroughColorStack_207; }
	inline void set_m_strikethroughColorStack_207(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_207 = value;
	}

	inline static int32_t get_offset_of_m_highlightColorStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_208)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_208() const { return ___m_highlightColorStack_208; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_208() { return &___m_highlightColorStack_208; }
	inline void set_m_highlightColorStack_208(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_208 = value;
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_209)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_209() const { return ___m_colorGradientPreset_209; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_209() { return &___m_colorGradientPreset_209; }
	inline void set_m_colorGradientPreset_209(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_209 = value;
		Il2CppCodeGenWriteBarrier((&___m_colorGradientPreset_209), value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_210)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_210() const { return ___m_colorGradientStack_210; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_210() { return &___m_colorGradientStack_210; }
	inline void set_m_colorGradientStack_210(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_210 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_211)); }
	inline float get_m_tabSpacing_211() const { return ___m_tabSpacing_211; }
	inline float* get_address_of_m_tabSpacing_211() { return &___m_tabSpacing_211; }
	inline void set_m_tabSpacing_211(float value)
	{
		___m_tabSpacing_211 = value;
	}

	inline static int32_t get_offset_of_m_spacing_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_212)); }
	inline float get_m_spacing_212() const { return ___m_spacing_212; }
	inline float* get_address_of_m_spacing_212() { return &___m_spacing_212; }
	inline void set_m_spacing_212(float value)
	{
		___m_spacing_212 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_213)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_styleStack_213() const { return ___m_styleStack_213; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_styleStack_213() { return &___m_styleStack_213; }
	inline void set_m_styleStack_213(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_styleStack_213 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_214)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_actionStack_214() const { return ___m_actionStack_214; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_actionStack_214() { return &___m_actionStack_214; }
	inline void set_m_actionStack_214(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_actionStack_214 = value;
	}

	inline static int32_t get_offset_of_m_padding_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_215)); }
	inline float get_m_padding_215() const { return ___m_padding_215; }
	inline float* get_address_of_m_padding_215() { return &___m_padding_215; }
	inline void set_m_padding_215(float value)
	{
		___m_padding_215 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_216)); }
	inline float get_m_baselineOffset_216() const { return ___m_baselineOffset_216; }
	inline float* get_address_of_m_baselineOffset_216() { return &___m_baselineOffset_216; }
	inline void set_m_baselineOffset_216(float value)
	{
		___m_baselineOffset_216 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_217)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_baselineOffsetStack_217() const { return ___m_baselineOffsetStack_217; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_baselineOffsetStack_217() { return &___m_baselineOffsetStack_217; }
	inline void set_m_baselineOffsetStack_217(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_baselineOffsetStack_217 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_218)); }
	inline float get_m_xAdvance_218() const { return ___m_xAdvance_218; }
	inline float* get_address_of_m_xAdvance_218() { return &___m_xAdvance_218; }
	inline void set_m_xAdvance_218(float value)
	{
		___m_xAdvance_218 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_219)); }
	inline int32_t get_m_textElementType_219() const { return ___m_textElementType_219; }
	inline int32_t* get_address_of_m_textElementType_219() { return &___m_textElementType_219; }
	inline void set_m_textElementType_219(int32_t value)
	{
		___m_textElementType_219 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_220)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_220() const { return ___m_cached_TextElement_220; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_220() { return &___m_cached_TextElement_220; }
	inline void set_m_cached_TextElement_220(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_220 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_TextElement_220), value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_221)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_221() const { return ___m_cached_Underline_Character_221; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_221() { return &___m_cached_Underline_Character_221; }
	inline void set_m_cached_Underline_Character_221(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_221 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Underline_Character_221), value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_222)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_222() const { return ___m_cached_Ellipsis_Character_222; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_222() { return &___m_cached_Ellipsis_Character_222; }
	inline void set_m_cached_Ellipsis_Character_222(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_222 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Ellipsis_Character_222), value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_223)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_223() const { return ___m_defaultSpriteAsset_223; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_223() { return &___m_defaultSpriteAsset_223; }
	inline void set_m_defaultSpriteAsset_223(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_223 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultSpriteAsset_223), value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_224)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_224() const { return ___m_currentSpriteAsset_224; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_224() { return &___m_currentSpriteAsset_224; }
	inline void set_m_currentSpriteAsset_224(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_224 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentSpriteAsset_224), value);
	}

	inline static int32_t get_offset_of_m_spriteCount_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_225)); }
	inline int32_t get_m_spriteCount_225() const { return ___m_spriteCount_225; }
	inline int32_t* get_address_of_m_spriteCount_225() { return &___m_spriteCount_225; }
	inline void set_m_spriteCount_225(int32_t value)
	{
		___m_spriteCount_225 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_226)); }
	inline int32_t get_m_spriteIndex_226() const { return ___m_spriteIndex_226; }
	inline int32_t* get_address_of_m_spriteIndex_226() { return &___m_spriteIndex_226; }
	inline void set_m_spriteIndex_226(int32_t value)
	{
		___m_spriteIndex_226 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_227)); }
	inline int32_t get_m_spriteAnimationID_227() const { return ___m_spriteAnimationID_227; }
	inline int32_t* get_address_of_m_spriteAnimationID_227() { return &___m_spriteAnimationID_227; }
	inline void set_m_spriteAnimationID_227(int32_t value)
	{
		___m_spriteAnimationID_227 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_228)); }
	inline bool get_m_ignoreActiveState_228() const { return ___m_ignoreActiveState_228; }
	inline bool* get_address_of_m_ignoreActiveState_228() { return &___m_ignoreActiveState_228; }
	inline void set_m_ignoreActiveState_228(bool value)
	{
		___m_ignoreActiveState_228 = value;
	}

	inline static int32_t get_offset_of_k_Power_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_229)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_229() const { return ___k_Power_229; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_229() { return &___k_Power_229; }
	inline void set_k_Power_229(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_229 = value;
		Il2CppCodeGenWriteBarrier((&___k_Power_229), value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_47;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_230;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_231;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_232;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_233;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_234;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_235;

public:
	inline static int32_t get_offset_of_s_colorWhite_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_47)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_47() const { return ___s_colorWhite_47; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_47() { return &___s_colorWhite_47; }
	inline void set_s_colorWhite_47(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_47 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_230)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_230() const { return ___k_LargePositiveVector2_230; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_230() { return &___k_LargePositiveVector2_230; }
	inline void set_k_LargePositiveVector2_230(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_230 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_231)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_231() const { return ___k_LargeNegativeVector2_231; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_231() { return &___k_LargeNegativeVector2_231; }
	inline void set_k_LargeNegativeVector2_231(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_231 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_232)); }
	inline float get_k_LargePositiveFloat_232() const { return ___k_LargePositiveFloat_232; }
	inline float* get_address_of_k_LargePositiveFloat_232() { return &___k_LargePositiveFloat_232; }
	inline void set_k_LargePositiveFloat_232(float value)
	{
		___k_LargePositiveFloat_232 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_233)); }
	inline float get_k_LargeNegativeFloat_233() const { return ___k_LargeNegativeFloat_233; }
	inline float* get_address_of_k_LargeNegativeFloat_233() { return &___k_LargeNegativeFloat_233; }
	inline void set_k_LargeNegativeFloat_233(float value)
	{
		___k_LargeNegativeFloat_233 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_234)); }
	inline int32_t get_k_LargePositiveInt_234() const { return ___k_LargePositiveInt_234; }
	inline int32_t* get_address_of_k_LargePositiveInt_234() { return &___k_LargePositiveInt_234; }
	inline void set_k_LargePositiveInt_234(int32_t value)
	{
		___k_LargePositiveInt_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_235)); }
	inline int32_t get_k_LargeNegativeInt_235() const { return ___k_LargeNegativeInt_235; }
	inline int32_t* get_address_of_k_LargeNegativeInt_235() { return &___k_LargeNegativeInt_235; }
	inline void set_k_LargeNegativeInt_235(int32_t value)
	{
		___k_LargeNegativeInt_235 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXT_T7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifndef TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
#define TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_236;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_237;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_238;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_239;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_240;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_241;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_242;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_243;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_244;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_245;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_246;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_247;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_248;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_249;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_250;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_251;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_252;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_253;

public:
	inline static int32_t get_offset_of_m_isRebuildingLayout_236() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_236)); }
	inline bool get_m_isRebuildingLayout_236() const { return ___m_isRebuildingLayout_236; }
	inline bool* get_address_of_m_isRebuildingLayout_236() { return &___m_isRebuildingLayout_236; }
	inline void set_m_isRebuildingLayout_236(bool value)
	{
		___m_isRebuildingLayout_236 = value;
	}

	inline static int32_t get_offset_of_m_hasFontAssetChanged_237() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_237)); }
	inline bool get_m_hasFontAssetChanged_237() const { return ___m_hasFontAssetChanged_237; }
	inline bool* get_address_of_m_hasFontAssetChanged_237() { return &___m_hasFontAssetChanged_237; }
	inline void set_m_hasFontAssetChanged_237(bool value)
	{
		___m_hasFontAssetChanged_237 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_238() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_238)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_238() const { return ___m_subTextObjects_238; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_238() { return &___m_subTextObjects_238; }
	inline void set_m_subTextObjects_238(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_238 = value;
		Il2CppCodeGenWriteBarrier((&___m_subTextObjects_238), value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_239() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_239)); }
	inline float get_m_previousLossyScaleY_239() const { return ___m_previousLossyScaleY_239; }
	inline float* get_address_of_m_previousLossyScaleY_239() { return &___m_previousLossyScaleY_239; }
	inline void set_m_previousLossyScaleY_239(float value)
	{
		___m_previousLossyScaleY_239 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_240)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_240() const { return ___m_RectTransformCorners_240; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_240() { return &___m_RectTransformCorners_240; }
	inline void set_m_RectTransformCorners_240(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_240 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransformCorners_240), value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_241)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_241() const { return ___m_canvasRenderer_241; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_241() { return &___m_canvasRenderer_241; }
	inline void set_m_canvasRenderer_241(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_241 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvasRenderer_241), value);
	}

	inline static int32_t get_offset_of_m_canvas_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_242)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_242() const { return ___m_canvas_242; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_242() { return &___m_canvas_242; }
	inline void set_m_canvas_242(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_242 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvas_242), value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_243)); }
	inline bool get_m_isFirstAllocation_243() const { return ___m_isFirstAllocation_243; }
	inline bool* get_address_of_m_isFirstAllocation_243() { return &___m_isFirstAllocation_243; }
	inline void set_m_isFirstAllocation_243(bool value)
	{
		___m_isFirstAllocation_243 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_244)); }
	inline int32_t get_m_max_characters_244() const { return ___m_max_characters_244; }
	inline int32_t* get_address_of_m_max_characters_244() { return &___m_max_characters_244; }
	inline void set_m_max_characters_244(int32_t value)
	{
		___m_max_characters_244 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isMaskingEnabled_245)); }
	inline bool get_m_isMaskingEnabled_245() const { return ___m_isMaskingEnabled_245; }
	inline bool* get_address_of_m_isMaskingEnabled_245() { return &___m_isMaskingEnabled_245; }
	inline void set_m_isMaskingEnabled_245(bool value)
	{
		___m_isMaskingEnabled_245 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_246)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_246() const { return ___m_baseMaterial_246; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_246() { return &___m_baseMaterial_246; }
	inline void set_m_baseMaterial_246(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_246 = value;
		Il2CppCodeGenWriteBarrier((&___m_baseMaterial_246), value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_247)); }
	inline bool get_m_isScrollRegionSet_247() const { return ___m_isScrollRegionSet_247; }
	inline bool* get_address_of_m_isScrollRegionSet_247() { return &___m_isScrollRegionSet_247; }
	inline void set_m_isScrollRegionSet_247(bool value)
	{
		___m_isScrollRegionSet_247 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_stencilID_248)); }
	inline int32_t get_m_stencilID_248() const { return ___m_stencilID_248; }
	inline int32_t* get_address_of_m_stencilID_248() { return &___m_stencilID_248; }
	inline void set_m_stencilID_248(int32_t value)
	{
		___m_stencilID_248 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_249)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_249() const { return ___m_maskOffset_249; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_249() { return &___m_maskOffset_249; }
	inline void set_m_maskOffset_249(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_249 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_250)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_250() const { return ___m_EnvMapMatrix_250; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_250() { return &___m_EnvMapMatrix_250; }
	inline void set_m_EnvMapMatrix_250(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_250 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_251)); }
	inline bool get_m_isRegisteredForEvents_251() const { return ___m_isRegisteredForEvents_251; }
	inline bool* get_address_of_m_isRegisteredForEvents_251() { return &___m_isRegisteredForEvents_251; }
	inline void set_m_isRegisteredForEvents_251(bool value)
	{
		___m_isRegisteredForEvents_251 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_recursiveCountA_252)); }
	inline int32_t get_m_recursiveCountA_252() const { return ___m_recursiveCountA_252; }
	inline int32_t* get_address_of_m_recursiveCountA_252() { return &___m_recursiveCountA_252; }
	inline void set_m_recursiveCountA_252(int32_t value)
	{
		___m_recursiveCountA_252 = value;
	}

	inline static int32_t get_offset_of_loopCountA_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___loopCountA_253)); }
	inline int32_t get_loopCountA_253() const { return ___loopCountA_253; }
	inline int32_t* get_address_of_loopCountA_253() { return &___loopCountA_253; }
	inline void set_loopCountA_253(int32_t value)
	{
		___loopCountA_253 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHPROUGUI_TBA60B913AB6151F8563F7078AD67EB6458129438_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * m_Items[1];

public:
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared (String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m68D3406339E1B2B961D358E52E3C91503568C27E_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);

// System.Void Atom::RefreshProperties()
extern "C" IL2CPP_METHOD_ATTR void Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6 (Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
extern "C" IL2CPP_METHOD_ATTR float Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mF8F68B10745B4809F2901BA6DCAF0CAEABF86089 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, int32_t p1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p2, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* p3, int32_t p4, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * p5, int32_t p6, bool p7, int32_t p8, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Random_get_onUnitSphere_mBF4707ADEABB994E7B5B80305205A621B809E7E6 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HoloToolkit.MRDL.PeriodicTable.Element>()
inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * GameObject_GetComponent_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m6D26CA83B05924D15567080C902A5FADBDD021F2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HoloToolkit.MRDL.PeriodicTable.PresentToPlayer>()
inline PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * Component_GetComponent_TisPresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978_mF5B3772BDD1DF564EB5AE3265DFF68FFF70BCB00 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::get_Presenting()
extern "C" IL2CPP_METHOD_ATTR bool PresentToPlayer_get_Presenting_m304F7311E5A5C4966F32B587EF633DA11065507C (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator HoloToolkit.MRDL.PeriodicTable.Element::UpdateActive()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Element_UpdateActive_mE941941E9243FE32E35F5BA1996C76E723A9DEBA (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void HoloToolkit.MRDL.PeriodicTable.Element/<UpdateActive>d__27::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CUpdateActiveU3Ed__27__ctor_m6CC1F6A7192C3EEA8BD76D88B92B6F9F0213A3C2 (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93 (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * __this, String_t* p0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC *, String_t*, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Multiply_mF36917AD6235221537542FD079817CAB06CB1934 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::Add(!0,!1)
inline void Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * __this, String_t* p0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC *, String_t*, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::Dim()
extern "C" IL2CPP_METHOD_ATTR void Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::Present()
extern "C" IL2CPP_METHOD_ATTR void PresentToPlayer_Present_mBE723E5DECD5B3B5D09D89A7735A704D5DD8CEB6 (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::get_InPosition()
extern "C" IL2CPP_METHOD_ATTR bool PresentToPlayer_get_InPosition_m9D62372CA323810F1ECC100A8563955B9D993F2C (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::Return()
extern "C" IL2CPP_METHOD_ATTR void PresentToPlayer_Return_mA4F50F5537C87B5FB89F09892F64DB91A84A125F (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<HoloToolkit.MRDL.PeriodicTable.ElementsData>(System.String)
inline ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * JsonUtility_FromJson_TisElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52_m0D6956DC193FCB30E002E018A2448AFDAE238923 (String_t* p0, const RuntimeMethod* method)
{
	return ((  ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared)(p0, method);
}
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
extern "C" IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_mBCF2CDEF2213ADD1EC2A736F4AF33587A72C0587 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::InitializeData()
extern "C" IL2CPP_METHOD_ATTR void PeriodicTableLoader_InitializeData_mA718D98E7B007C01F13CC6C84C8582A087F42D98 (PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * Resources_Load_TisTextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_m5684DE13E921E2A7AA35CD9C7C00958F6B921F8F (String_t* p0, const RuntimeMethod* method)
{
	return ((  TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared)(p0, method);
}
// System.String UnityEngine.TextAsset::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_mD3FBCD974CF552C7F7C7CD9A07BACAE51A2C5D42 (TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * __this, const RuntimeMethod* method);
// HoloToolkit.MRDL.PeriodicTable.ElementsData HoloToolkit.MRDL.PeriodicTable.ElementsData::FromJSON(System.String)
extern "C" IL2CPP_METHOD_ATTR ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * ElementsData_FromJSON_mBB8F518887C68C366CA5C6F8F819C11AFE037F9D (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_m7D446EDFB993721998FE67D593EC46486C3471D3 (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<HoloToolkit.MRDL.PeriodicTable.ElementData>::GetEnumerator()
inline Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455  List_1_GetEnumerator_m6907AED51371D3B2C7006EEA0BCE1B96EFE3450E (List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455  (*) (List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<HoloToolkit.MRDL.PeriodicTable.ElementData>::get_Current()
inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * Enumerator_get_Current_m2FEA5F5583C9DDC8BD875673F2CAAA89D9982566 (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 * __this, const RuntimeMethod* method)
{
	return ((  ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * (*) (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(p0, p1, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<HoloToolkit.MRDL.PeriodicTable.Element>()
inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * GameObject_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m7C9E55F245ADBD26C6992115DAE3A270C1FD2D00 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m68D3406339E1B2B961D358E52E3C91503568C27E_gshared)(__this, method);
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::SetFromElementData(HoloToolkit.MRDL.PeriodicTable.ElementData,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * ___data0, Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * ___typeMaterials1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<HoloToolkit.MRDL.PeriodicTable.ElementData>::MoveNext()
inline bool Enumerator_MoveNext_m84A63102A89E6342355DFCA5B9BBC8B389278B31 (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<HoloToolkit.MRDL.PeriodicTable.ElementData>::Dispose()
inline void Enumerator_Dispose_m5C6DD0B88AEAF52B2BA2CC050B9A4046AB8F43FE (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<HoloToolkit.MRDL.PeriodicTable.Element>()
inline Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * Component_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_mDF8FA97D113CD3DFEA06F17F00F2F45EA939BAD3 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<HoloToolkit.MRDL.PeriodicTable.ElementData>::get_Item(System.Int32)
inline ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D (List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * (*) (List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Collections.IEnumerator HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::PresentOverTime()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PresentToPlayer_PresentOverTime_mA71855BB66ABB87A8F951D028FF290821BFA0F7A (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer/<PresentOverTime>d__17::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CPresentOverTimeU3Ed__17__ctor_m626F03D1DF40E1D6BF1CEA8AFF4CFD79495D91A4 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_SurfaceType(Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_SurfaceType_mF8CF03379FBF59841FC8903DDC61D23DA176E3D5 (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_OrientType(Microsoft.MixedReality.Toolkit.Utilities.OrientationType)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_OrientType_m06D65B3FD5631B03645D45450D04E9EA6321A91E (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_Radius_mD59EBD11DF357FC988EDDD3E5D456C5A193183F3 (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_RadialRange(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_RadialRange_m9EDB775C0768454F0E64F80F384DB55A9FD4691B (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Rows(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_Rows_m31727EE17412360E890F8DD5DEE86C45C53B2BFD (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellWidth_m7346EA75245C1F8F8AF3D3B116F221946AC5365B (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellHeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellHeight_m51EE480BE2B740C04FA4AA18D7DCA516EBF9688C (GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * __this, float p0, const RuntimeMethod* method);
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
// System.Void Atom::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Atom_OnEnable_m8496DE586070E38801A60BA64B0EB51621810880 (Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Atom_OnEnable_m8496DE586070E38801A60BA64B0EB51621810880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RefreshProperties();
		Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6(__this, /*hidden argument*/NULL);
		// atomScale = Vector3.one * 0.001f;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, (0.001f), /*hidden argument*/NULL);
		__this->set_atomScale_29(L_1);
		// transform.localScale = Vector3.one * 0.01f;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, (0.01f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_2, L_4, /*hidden argument*/NULL);
		// if (ScaleTransform == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_ScaleTransform_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// ScaleTransform = transform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_7, /*hidden argument*/NULL);
		__this->set_ScaleTransform_10(L_8);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Atom::Update()
extern "C" IL2CPP_METHOD_ATTR void Atom_Update_mFEA40AB88F8B397B94EF0365B214C87C9D59E1D8 (Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Atom_Update_mFEA40AB88F8B397B94EF0365B214C87C9D59E1D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// RefreshProperties();
		Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6(__this, /*hidden argument*/NULL);
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		V_1 = 0;
		goto IL_006d;
	}

IL_0016:
	{
		// if (Random.value < NucleusChangeSpeedOdds)
		float L_2 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		float L_3 = __this->get_NucleusChangeSpeedOdds_9();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0069;
		}
	}
	{
		// Vector3 newPos = nucleusTargetPositions[i] + Random.insideUnitSphere * (1f - NucleusHoldShape);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = __this->get_nucleusTargetPositions_22();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F(/*hidden argument*/NULL);
		float L_9 = __this->get_NucleusHoldShape_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_9)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// newPos = Vector3.MoveTowards(Vector3.zero, newPos, 1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_12, L_13, (1.0f), /*hidden argument*/NULL);
		V_2 = L_14;
		// nucleusTargetPositions[i] = newPos;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_15 = __this->get_nucleusTargetPositions_22();
		int32_t L_16 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_17);
	}

IL_0069:
	{
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006d:
	{
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		int32_t L_19 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = __this->get_nucleusTargetPositions_22();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		// if (Collapse)
		bool L_21 = __this->get_Collapse_11();
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, Vector3.one * 0.01f, Time.deltaTime * 5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_25, (0.01f), /*hidden argument*/NULL);
		float L_27 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_24, L_26, ((float)il2cpp_codegen_multiply((float)L_27, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_22, L_28, /*hidden argument*/NULL);
		// atomScale = Vector3.Lerp(atomScale, Vector3.one * 0.001f, Time.deltaTime * 5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = __this->get_atomScale_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, (0.001f), /*hidden argument*/NULL);
		float L_32 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_29, L_31, ((float)il2cpp_codegen_multiply((float)L_32, (float)(5.0f))), /*hidden argument*/NULL);
		__this->set_atomScale_29(L_33);
		// }
		goto IL_0122;
	}

IL_00e2:
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, Vector3.one, Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		float L_38 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_34, L_39, /*hidden argument*/NULL);
		// atomScale = Vector3.Lerp(atomScale, Vector3.one, Time.deltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = __this->get_atomScale_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		float L_42 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_40, L_41, L_42, /*hidden argument*/NULL);
		__this->set_atomScale_29(L_43);
	}

IL_0122:
	{
		// finalScale = Vector3.Scale(atomScale, ScaleTransform.lossyScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = __this->get_atomScale_29();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = __this->get_ScaleTransform_10();
		NullCheck(L_45);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_44, L_46, /*hidden argument*/NULL);
		__this->set_finalScale_30(L_47);
		// for (int i = 0; i < NumProtons + NumNeutrons; i++)
		V_3 = 0;
		goto IL_026c;
	}

IL_0145:
	{
		// nucleusCurrentPositions[i] = Vector3.Lerp(nucleusCurrentPositions[i], nucleusTargetPositions[i], Time.deltaTime * NucleusFlowSpeed);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_48 = __this->get_nucleusCurrentPositions_23();
		int32_t L_49 = V_3;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_50 = __this->get_nucleusCurrentPositions_23();
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_54 = __this->get_nucleusTargetPositions_22();
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		float L_58 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_59 = __this->get_NucleusFlowSpeed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_53, L_57, ((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_60);
		// if (i < NumProtons)
		int32_t L_61 = V_3;
		int32_t L_62 = __this->get_NumProtons_12();
		if ((((int32_t)L_61) >= ((int32_t)L_62)))
		{
			goto IL_01f3;
		}
	}
	{
		// protonMatrixes[i] = Matrix4x4.TRS(pos + ((nucleusCurrentPositions[i] + (Random.insideUnitSphere * NucleusJitter)) * Radius * finalScale.x), randomRotations[i % randomRotations.Length], finalScale);
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_63 = __this->get_protonMatrixes_24();
		int32_t L_64 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_66 = __this->get_nucleusCurrentPositions_23();
		int32_t L_67 = V_3;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F(/*hidden argument*/NULL);
		float L_71 = __this->get_NucleusJitter_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_70, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_72, /*hidden argument*/NULL);
		float L_74 = __this->get_Radius_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_73, L_74, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_76 = __this->get_address_of_finalScale_30();
		float L_77 = L_76->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_75, L_77, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_65, L_78, /*hidden argument*/NULL);
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_80 = __this->get_randomRotations_26();
		int32_t L_81 = V_3;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_82 = __this->get_randomRotations_26();
		NullCheck(L_82);
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)((int32_t)L_81%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_82)->max_length))))));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = __this->get_finalScale_30();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_86 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_79, L_84, L_85, /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )L_86);
		// }
		goto IL_0268;
	}

IL_01f3:
	{
		// neutronMatrixes[i - NumProtons] = Matrix4x4.TRS(pos + ((nucleusCurrentPositions[i] + (Random.insideUnitSphere * NucleusJitter)) * Radius * finalScale.x), randomRotations[i % randomRotations.Length], finalScale);
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_87 = __this->get_neutronMatrixes_25();
		int32_t L_88 = V_3;
		int32_t L_89 = __this->get_NumProtons_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_91 = __this->get_nucleusCurrentPositions_23();
		int32_t L_92 = V_3;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F(/*hidden argument*/NULL);
		float L_96 = __this->get_NucleusJitter_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_95, L_96, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_94, L_97, /*hidden argument*/NULL);
		float L_99 = __this->get_Radius_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_98, L_99, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_101 = __this->get_address_of_finalScale_30();
		float L_102 = L_101->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_100, L_102, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_90, L_103, /*hidden argument*/NULL);
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_105 = __this->get_randomRotations_26();
		int32_t L_106 = V_3;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_107 = __this->get_randomRotations_26();
		NullCheck(L_107);
		NullCheck(L_105);
		int32_t L_108 = ((int32_t)((int32_t)L_106%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_107)->max_length))))));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_109 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = __this->get_finalScale_30();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_111 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_104, L_109, L_110, /*hidden argument*/NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)L_89))), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )L_111);
	}

IL_0268:
	{
		// for (int i = 0; i < NumProtons + NumNeutrons; i++)
		int32_t L_112 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_026c:
	{
		// for (int i = 0; i < NumProtons + NumNeutrons; i++)
		int32_t L_113 = V_3;
		int32_t L_114 = __this->get_NumProtons_12();
		int32_t L_115 = __this->get_NumNeutrons_13();
		if ((((int32_t)L_113) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115)))))
		{
			goto IL_0145;
		}
	}
	{
		// Graphics.DrawMeshInstanced(Mesh, 0, ProtonMat, protonMatrixes, protonMatrixes.Length, propertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false, AtomLayer);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_116 = __this->get_Mesh_18();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_117 = __this->get_ProtonMat_20();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_118 = __this->get_protonMatrixes_24();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_119 = __this->get_protonMatrixes_24();
		NullCheck(L_119);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_120 = __this->get_propertyBlock_28();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawMeshInstanced_mF8F68B10745B4809F2901BA6DCAF0CAEABF86089(L_116, 0, L_117, L_118, (((int32_t)((int32_t)(((RuntimeArray *)L_119)->max_length)))), L_120, 0, (bool)0, ((int32_t)9), /*hidden argument*/NULL);
		// Graphics.DrawMeshInstanced(Mesh, 0, NeutronMat, neutronMatrixes, neutronMatrixes.Length, propertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false, AtomLayer);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_121 = __this->get_Mesh_18();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_122 = __this->get_NeutronMat_21();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_123 = __this->get_neutronMatrixes_25();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_124 = __this->get_neutronMatrixes_25();
		NullCheck(L_124);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_125 = __this->get_propertyBlock_28();
		Graphics_DrawMeshInstanced_mF8F68B10745B4809F2901BA6DCAF0CAEABF86089(L_121, 0, L_122, L_123, (((int32_t)((int32_t)(((RuntimeArray *)L_124)->max_length)))), L_125, 0, (bool)0, ((int32_t)9), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Atom::RefreshProperties()
extern "C" IL2CPP_METHOD_ATTR void Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6 (Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Atom_RefreshProperties_m805A2ECA8B19900D9E26F94865DA1FDD3A1C84C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (propertyBlock == null)
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_0 = __this->get_propertyBlock_28();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_1 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_1, /*hidden argument*/NULL);
		__this->set_propertyBlock_28(L_1);
		// ProtonMat.enableInstancing = true;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_ProtonMat_20();
		NullCheck(L_2);
		Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E(L_2, (bool)1, /*hidden argument*/NULL);
		// NeutronMat.enableInstancing = true;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_NeutronMat_21();
		NullCheck(L_3);
		Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// if (randomRotations == null)
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_4 = __this->get_randomRotations_26();
		if (L_4)
		{
			goto IL_0085;
		}
	}
	{
		// randomRotations = new Quaternion[10];
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_5 = (QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3*)SZArrayNew(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_randomRotations_26(L_5);
		// for (int i = 0; i < randomRotations.Length; i++)
		V_0 = 0;
		goto IL_007a;
	}

IL_0044:
	{
		// randomRotations[i] = Quaternion.Euler(Random.value * 360, Random.value * 360, Random.value * 360);
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_6 = __this->get_randomRotations_26();
		int32_t L_7 = V_0;
		float L_8 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		float L_9 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		float L_10 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(((float)il2cpp_codegen_multiply((float)L_8, (float)(360.0f))), ((float)il2cpp_codegen_multiply((float)L_9, (float)(360.0f))), ((float)il2cpp_codegen_multiply((float)L_10, (float)(360.0f))), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_11);
		// for (int i = 0; i < randomRotations.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_007a:
	{
		// for (int i = 0; i < randomRotations.Length; i++)
		int32_t L_13 = V_0;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_14 = __this->get_randomRotations_26();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0044;
		}
	}

IL_0085:
	{
		// if (nucleusTargetPositions == null || nucleusTargetPositions.Length < NumProtons + NumNeutrons)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_15 = __this->get_nucleusTargetPositions_22();
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = __this->get_nucleusTargetPositions_22();
		NullCheck(L_16);
		int32_t L_17 = __this->get_NumProtons_12();
		int32_t L_18 = __this->get_NumNeutrons_13();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)))))
		{
			goto IL_013f;
		}
	}

IL_00a7:
	{
		// nucleusTargetPositions = new Vector3[NumProtons + NumNeutrons];
		int32_t L_19 = __this->get_NumProtons_12();
		int32_t L_20 = __this->get_NumNeutrons_13();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		__this->set_nucleusTargetPositions_22(L_21);
		// nucleusCurrentPositions = new Vector3[NumProtons + NumNeutrons];
		int32_t L_22 = __this->get_NumProtons_12();
		int32_t L_23 = __this->get_NumNeutrons_13();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_24 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)));
		__this->set_nucleusCurrentPositions_23(L_24);
		// protonMatrixes = new Matrix4x4[NumProtons];
		int32_t L_25 = __this->get_NumProtons_12();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_26 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->set_protonMatrixes_24(L_26);
		// neutronMatrixes = new Matrix4x4[NumNeutrons];
		int32_t L_27 = __this->get_NumNeutrons_13();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_28 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->set_neutronMatrixes_25(L_28);
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		V_1 = 0;
		goto IL_0134;
	}

IL_00fd:
	{
		// nucleusTargetPositions[i] = Random.onUnitSphere;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_29 = __this->get_nucleusTargetPositions_22();
		int32_t L_30 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Random_get_onUnitSphere_mBF4707ADEABB994E7B5B80305205A621B809E7E6(/*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_31);
		// nucleusCurrentPositions[i] = nucleusTargetPositions[i] * 5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = __this->get_nucleusCurrentPositions_23();
		int32_t L_33 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_34 = __this->get_nucleusTargetPositions_22();
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_37, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_38);
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_0134:
	{
		// for (int i = 0; i < nucleusTargetPositions.Length; i++)
		int32_t L_40 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_41 = __this->get_nucleusTargetPositions_22();
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_00fd;
		}
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void Atom::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Atom__ctor_mD8D22FB72106C63C74CC47B869D7BB48D5600152 (Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius = 1f;
		__this->set_Radius_5((1.0f));
		// public float NucleusFlowSpeed = 5f;
		__this->set_NucleusFlowSpeed_6((5.0f));
		// public float NucleusJitter = 0.05f;
		__this->set_NucleusJitter_7((0.05f));
		// public float NucleusHoldShape = 0.5f;
		__this->set_NucleusHoldShape_8((0.5f));
		// public float NucleusChangeSpeedOdds = 0.25f;
		__this->set_NucleusChangeSpeedOdds_9((0.25f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::SetActiveElement()
extern "C" IL2CPP_METHOD_ATTR void Element_SetActiveElement_m18276B5BE2D96BB4CF3B9E7B7F67C78256A687CC (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_SetActiveElement_m18276B5BE2D96BB4CF3B9E7B7F67C78256A687CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Element element = gameObject.GetComponent<Element>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_1 = GameObject_GetComponent_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m6D26CA83B05924D15567080C902A5FADBDD021F2(L_0, /*hidden argument*/GameObject_GetComponent_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m6D26CA83B05924D15567080C902A5FADBDD021F2_RuntimeMethod_var);
		// ActiveElement = element;
		((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields*)il2cpp_codegen_static_fields_for(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var))->set_ActiveElement_4(L_1);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::ResetActiveElement()
extern "C" IL2CPP_METHOD_ATTR void Element_ResetActiveElement_m8E8925E0006AA0F4E19C9937D7B9605299F505C7 (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_ResetActiveElement_m8E8925E0006AA0F4E19C9937D7B9605299F505C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActiveElement = null;
		((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields*)il2cpp_codegen_static_fields_for(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var))->set_ActiveElement_4((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 *)NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::Start()
extern "C" IL2CPP_METHOD_ATTR void Element_Start_mBC735F94C8A5A3F0180AA831B5D94C3AE12DB43F (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_Start_mBC735F94C8A5A3F0180AA831B5D94C3AE12DB43F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Animator>().enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA_RuntimeMethod_var);
		NullCheck(L_0);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_0, (bool)0, /*hidden argument*/NULL);
		// BoxRenderer.enabled = true;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_BoxRenderer_13();
		NullCheck(L_1);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_1, (bool)1, /*hidden argument*/NULL);
		// present = GetComponent<PresentToPlayer>();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_2 = Component_GetComponent_TisPresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978_mF5B3772BDD1DF564EB5AE3265DFF68FFF70BCB00(__this, /*hidden argument*/Component_GetComponent_TisPresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978_mF5B3772BDD1DF564EB5AE3265DFF68FFF70BCB00_RuntimeMethod_var);
		__this->set_present_24(L_2);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::Open()
extern "C" IL2CPP_METHOD_ATTR void Element_Open_mBE49419DFED83275B884B98285A4636B61B8F2A8 (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	{
		// if (present.Presenting)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_0 = __this->get_present_24();
		NullCheck(L_0);
		bool L_1 = PresentToPlayer_get_Presenting_m304F7311E5A5C4966F32B587EF633DA11065507C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// StartCoroutine(UpdateActive());
		RuntimeObject* L_2 = Element_UpdateActive_mE941941E9243FE32E35F5BA1996C76E723A9DEBA(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::Highlight()
extern "C" IL2CPP_METHOD_ATTR void Element_Highlight_mCE00AED95A8F7765111859BF78DB0AE48CBE7BC7 (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_Highlight_mCE00AED95A8F7765111859BF78DB0AE48CBE7BC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ActiveElement == this)
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_0 = ((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields*)il2cpp_codegen_static_fields_for(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var))->get_ActiveElement_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// for (int i = 0; i < PanelSides.Length; i++)
		V_0 = 0;
		goto IL_0029;
	}

IL_0012:
	{
		// PanelSides[i].sharedMaterial = highlightMaterial;
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_2 = __this->get_PanelSides_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_highlightMaterial_21();
		NullCheck(L_5);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_5, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < PanelSides.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < PanelSides.Length; i++)
		int32_t L_8 = V_0;
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_9 = __this->get_PanelSides_14();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		// PanelBack.sharedMaterial = highlightMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = __this->get_PanelBack_16();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get_highlightMaterial_21();
		NullCheck(L_10);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_10, L_11, /*hidden argument*/NULL);
		// PanelFront.sharedMaterial = highlightMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_12 = __this->get_PanelFront_15();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = __this->get_highlightMaterial_21();
		NullCheck(L_12);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_12, L_13, /*hidden argument*/NULL);
		// BoxRenderer.sharedMaterial = highlightMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = __this->get_BoxRenderer_13();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_highlightMaterial_21();
		NullCheck(L_14);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::Dim()
extern "C" IL2CPP_METHOD_ATTR void Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ActiveElement == this)
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_0 = ((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields*)il2cpp_codegen_static_fields_for(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var))->get_ActiveElement_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// for (int i = 0; i < PanelSides.Length; i++)
		V_0 = 0;
		goto IL_0029;
	}

IL_0012:
	{
		// PanelSides[i].sharedMaterial = dimMaterial;
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_2 = __this->get_PanelSides_14();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_dimMaterial_22();
		NullCheck(L_5);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_5, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < PanelSides.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < PanelSides.Length; i++)
		int32_t L_8 = V_0;
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_9 = __this->get_PanelSides_14();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		// PanelBack.sharedMaterial = dimMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = __this->get_PanelBack_16();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get_dimMaterial_22();
		NullCheck(L_10);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_10, L_11, /*hidden argument*/NULL);
		// PanelFront.sharedMaterial = dimMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_12 = __this->get_PanelFront_15();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = __this->get_dimMaterial_22();
		NullCheck(L_12);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_12, L_13, /*hidden argument*/NULL);
		// BoxRenderer.sharedMaterial = dimMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = __this->get_BoxRenderer_13();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_dimMaterial_22();
		NullCheck(L_14);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HoloToolkit.MRDL.PeriodicTable.Element::UpdateActive()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Element_UpdateActive_mE941941E9243FE32E35F5BA1996C76E723A9DEBA (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_UpdateActive_mE941941E9243FE32E35F5BA1996C76E723A9DEBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * L_0 = (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 *)il2cpp_codegen_object_new(U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90_il2cpp_TypeInfo_var);
		U3CUpdateActiveU3Ed__27__ctor_m6CC1F6A7192C3EEA8BD76D88B92B6F9F0213A3C2(L_0, 0, /*hidden argument*/NULL);
		U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::SetFromElementData(HoloToolkit.MRDL.PeriodicTable.ElementData,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * ___data0, Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * ___typeMaterials1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// this.data = data;
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_0 = ___data0;
		__this->set_data_19(L_0);
		// ElementNumber.text = data.number;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_1 = __this->get_ElementNumber_5();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_2 = ___data0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_number_14();
		NullCheck(L_1);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_1, L_3, /*hidden argument*/NULL);
		// ElementName.text = data.symbol;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_4 = __this->get_ElementName_6();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_5 = ___data0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_symbol_9();
		NullCheck(L_4);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_4, L_6, /*hidden argument*/NULL);
		// ElementNameDetail.text = data.name;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_7 = __this->get_ElementNameDetail_7();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_8 = ___data0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_name_0();
		NullCheck(L_7);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_7, L_9, /*hidden argument*/NULL);
		// ElementDescription.text = data.summary;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_10 = __this->get_ElementDescription_8();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_11 = ___data0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_summary_18();
		NullCheck(L_10);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_10, L_12, /*hidden argument*/NULL);
		// DataAtomicNumber.text = data.number;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_13 = __this->get_DataAtomicNumber_9();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_14 = ___data0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_number_14();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// DataAtomicWeight.text = data.atomic_mass.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = __this->get_DataAtomicWeight_10();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_17 = ___data0;
		NullCheck(L_17);
		float* L_18 = L_17->get_address_of_atomic_mass_12();
		String_t* L_19 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// DataMeltingPoint.text = data.melt.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_20 = __this->get_DataMeltingPoint_11();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_21 = ___data0;
		NullCheck(L_21);
		float* L_22 = L_21->get_address_of_melt_13();
		String_t* L_23 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// DataBoilingPoint.text = data.boil.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_24 = __this->get_DataBoilingPoint_12();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_25 = ___data0;
		NullCheck(L_25);
		int32_t* L_26 = L_25->get_address_of_boil_19();
		String_t* L_27 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		// if (!typeMaterials.TryGetValue(data.category.Trim(), out dimMaterial))
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_28 = ___typeMaterials1;
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_29 = ___data0;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_category_1();
		NullCheck(L_30);
		String_t* L_31 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_30, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** L_32 = __this->get_address_of_dimMaterial_22();
		NullCheck(L_28);
		bool L_33 = Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93(L_28, L_31, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 **)L_32, /*hidden argument*/Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_00dc;
		}
	}
	{
		// Debug.Log("Couldn't find " + data.category.Trim() + " in element " + data.name);
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_34 = ___data0;
		NullCheck(L_34);
		String_t* L_35 = L_34->get_category_1();
		NullCheck(L_35);
		String_t* L_36 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_35, /*hidden argument*/NULL);
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_37 = ___data0;
		NullCheck(L_37);
		String_t* L_38 = L_37->get_name_0();
		String_t* L_39 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral7262E54296952B1914FB7240EA7DE24933808179, L_36, _stringLiteral9535BAF86EBA82548B48E567D69A64EFC42D1372, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_39, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// string highlightKey = data.category.Trim() + " highlight";
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_40 = ___data0;
		NullCheck(L_40);
		String_t* L_41 = L_40->get_category_1();
		NullCheck(L_41);
		String_t* L_42 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_41, /*hidden argument*/NULL);
		String_t* L_43 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_42, _stringLiteral06C33E88C0D354A574B6FB279B87AB1E00BBA572, /*hidden argument*/NULL);
		V_0 = L_43;
		// if (!typeMaterials.TryGetValue(highlightKey, out highlightMaterial))
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_44 = ___typeMaterials1;
		String_t* L_45 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** L_46 = __this->get_address_of_highlightMaterial_21();
		NullCheck(L_44);
		bool L_47 = Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93(L_44, L_45, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 **)L_46, /*hidden argument*/Dictionary_2_TryGetValue_mADC02A0BA1FA964CBE18B56FB99CD62168D15A93_RuntimeMethod_var);
		if (L_47)
		{
			goto IL_013f;
		}
	}
	{
		// highlightMaterial = new Material(dimMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_48 = __this->get_dimMaterial_22();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_49 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_49, L_48, /*hidden argument*/NULL);
		__this->set_highlightMaterial_21(L_49);
		// highlightMaterial.color = highlightMaterial.color * 1.5f;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_50 = __this->get_highlightMaterial_21();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_51 = __this->get_highlightMaterial_21();
		NullCheck(L_51);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_52 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_51, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_53 = Color_op_Multiply_mF36917AD6235221537542FD079817CAB06CB1934(L_52, (1.5f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_50, L_53, /*hidden argument*/NULL);
		// typeMaterials.Add(highlightKey, highlightMaterial);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_54 = ___typeMaterials1;
		String_t* L_55 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_56 = __this->get_highlightMaterial_21();
		NullCheck(L_54);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_54, L_55, L_56, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
	}

IL_013f:
	{
		// Dim();
		Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF(__this, /*hidden argument*/NULL);
		// Atom.NumElectrons = int.Parse(data.number);
		Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * L_57 = __this->get_Atom_18();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_58 = ___data0;
		NullCheck(L_58);
		String_t* L_59 = L_58->get_number_14();
		int32_t L_60 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_59, /*hidden argument*/NULL);
		NullCheck(L_57);
		L_57->set_NumElectrons_14(L_60);
		// Atom.NumNeutrons = (int)data.atomic_mass / 2;
		Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * L_61 = __this->get_Atom_18();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_62 = ___data0;
		NullCheck(L_62);
		float L_63 = L_62->get_atomic_mass_12();
		NullCheck(L_61);
		L_61->set_NumNeutrons_13(((int32_t)((int32_t)(((int32_t)((int32_t)(int32_t)L_63)))/(int32_t)2)));
		// Atom.NumProtons = (int)data.atomic_mass / 2;
		Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * L_64 = __this->get_Atom_18();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_65 = ___data0;
		NullCheck(L_65);
		float L_66 = L_65->get_atomic_mass_12();
		NullCheck(L_64);
		L_64->set_NumProtons_12(((int32_t)((int32_t)(((int32_t)((int32_t)(int32_t)L_66)))/(int32_t)2)));
		// Atom.Radius = data.atomic_mass / 157 * 0.02f;//TEMP
		Atom_t12C86E0E3839C7D0E691AAEEEA6F934F9D880C08 * L_67 = __this->get_Atom_18();
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_68 = ___data0;
		NullCheck(L_68);
		float L_69 = L_68->get_atomic_mass_12();
		NullCheck(L_67);
		L_67->set_Radius_5(((float)il2cpp_codegen_multiply((float)((float)((float)L_69/(float)(157.0f))), (float)(0.02f))));
		// foreach (Renderer infoPanel in InfoPanels)
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_70 = __this->get_InfoPanels_17();
		V_1 = L_70;
		V_2 = 0;
		goto IL_01c7;
	}

IL_01ab:
	{
		// foreach (Renderer infoPanel in InfoPanels)
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_71 = V_1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		// infoPanel.material.color = dimMaterial.color;
		NullCheck(L_74);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_75 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_74, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_76 = __this->get_dimMaterial_22();
		NullCheck(L_76);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_77 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_75, L_77, /*hidden argument*/NULL);
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01c7:
	{
		// foreach (Renderer infoPanel in InfoPanels)
		int32_t L_79 = V_2;
		MeshRendererU5BU5D_t5FE99DFF4D53B490C79494B8DCAA661F1721E0D3* L_80 = V_1;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_80)->max_length)))))))
		{
			goto IL_01ab;
		}
	}
	{
		// BoxRenderer.enabled = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_81 = __this->get_BoxRenderer_13();
		NullCheck(L_81);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_81, (bool)0, /*hidden argument*/NULL);
		// transform.parent.name = data.name;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_82 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_82, /*hidden argument*/NULL);
		ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_84 = ___data0;
		NullCheck(L_84);
		String_t* L_85 = L_84->get_name_0();
		NullCheck(L_83);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_83, L_85, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Element__ctor_m38B138FAAFCF285F9EE91595B58581D2B6D79126 (Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CUpdateActiveU3Ed__27__ctor_m6CC1F6A7192C3EEA8BD76D88B92B6F9F0213A3C2 (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdateActiveU3Ed__27_System_IDisposable_Dispose_m8C63224DC0A1B456EA1C2A5E6EFD8912DB67083C (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CUpdateActiveU3Ed__27_MoveNext_m06DBEEF87E03004816D633398AD693F4BEE9190A (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUpdateActiveU3Ed__27_MoveNext_m06DBEEF87E03004816D633398AD693F4BEE9190A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_00dc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// present.Present();
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_3 = V_1;
		NullCheck(L_3);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_4 = L_3->get_present_24();
		NullCheck(L_4);
		PresentToPlayer_Present_mBE723E5DECD5B3B5D09D89A7735A704D5DD8CEB6(L_4, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_003a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0051:
	{
		// while (!present.InPosition)
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_5 = V_1;
		NullCheck(L_5);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_6 = L_5->get_present_24();
		NullCheck(L_6);
		bool L_7 = PresentToPlayer_get_InPosition_m9D62372CA323810F1ECC100A8563955B9D993F2C(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// Animator animator = gameObject.GetComponent<Animator>();
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_10 = GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996(L_9, /*hidden argument*/GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var);
		__this->set_U3CanimatorU3E5__2_3(L_10);
		// animator.enabled = true;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_11 = __this->get_U3CanimatorU3E5__2_3();
		NullCheck(L_11);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_11, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("Opened", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_12 = __this->get_U3CanimatorU3E5__2_3();
		NullCheck(L_12);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_12, _stringLiteralC4F1F5B1D49F90D5437402166829D6B471BF1593, (bool)1, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_008e:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a5:
	{
		// while (Element.ActiveElement == this)
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_13 = ((Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_StaticFields*)il2cpp_codegen_static_fields_for(Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_il2cpp_TypeInfo_var))->get_ActiveElement_4();
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008e;
		}
	}
	{
		// animator.SetBool("Opened", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_16 = __this->get_U3CanimatorU3E5__2_3();
		NullCheck(L_16);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_16, _stringLiteralC4F1F5B1D49F90D5437402166829D6B471BF1593, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.66f); // TODO get rid of magic number
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_17 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_17, (0.66f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00dc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// present.Return();
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_18 = V_1;
		NullCheck(L_18);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_19 = L_18->get_present_24();
		NullCheck(L_19);
		PresentToPlayer_Return_mA4F50F5537C87B5FB89F09892F64DB91A84A125F(L_19, /*hidden argument*/NULL);
		// Dim();
		Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_20 = V_1;
		NullCheck(L_20);
		Element_Dim_m6883D5C1060784CB489C69A7CA19F52386BB8FAF(L_20, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateActiveU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m10E8EAD8DF9EC7A605946B6034D438898B0BB095 (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_Reset_m5DF8AADE7A03BB1360BB56A1B302F1AC7065ABA5 (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_Reset_m5DF8AADE7A03BB1360BB56A1B302F1AC7065ABA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_Reset_m5DF8AADE7A03BB1360BB56A1B302F1AC7065ABA5_RuntimeMethod_var);
	}
}
// System.Object HoloToolkit.MRDL.PeriodicTable.Element_<UpdateActive>d__27::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateActiveU3Ed__27_System_Collections_IEnumerator_get_Current_m2F1D9B012691717B9B25FA3CA2D9BE174A50D89F (U3CUpdateActiveU3Ed__27_t49C5C32C2D421AA9D21862A9CE98CB6903DB5A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void HoloToolkit.MRDL.PeriodicTable.ElementData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ElementData__ctor_mC0BCA0BC3DC2A877BBACEB0D9858E852E492F468 (ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * __this, const RuntimeMethod* method)
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
// HoloToolkit.MRDL.PeriodicTable.ElementsData HoloToolkit.MRDL.PeriodicTable.ElementsData::FromJSON(System.String)
extern "C" IL2CPP_METHOD_ATTR ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * ElementsData_FromJSON_mBB8F518887C68C366CA5C6F8F819C11AFE037F9D (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementsData_FromJSON_mBB8F518887C68C366CA5C6F8F819C11AFE037F9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<ElementsData>(json);
		String_t* L_0 = ___json0;
		ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * L_1 = JsonUtility_FromJson_TisElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52_m0D6956DC193FCB30E002E018A2448AFDAE238923(L_0, /*hidden argument*/JsonUtility_FromJson_TisElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52_m0D6956DC193FCB30E002E018A2448AFDAE238923_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.ElementsData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ElementsData__ctor_m0CF3EB1A8C671CBCF7CB274D5142D48756828B82 (ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * __this, const RuntimeMethod* method)
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
// System.Void HoloToolkit.MRDL.PeriodicTable.OptimizeSceneforDeviceType::Start()
extern "C" IL2CPP_METHOD_ATTR void OptimizeSceneforDeviceType_Start_m9FE612733D279CF3B387A29B94F9E74662A96C8B (OptimizeSceneforDeviceType_tA50CFB233395199ECFC32B94C588AFF69EF7214E * __this, const RuntimeMethod* method)
{
	{
		// if (HolographicSettings.IsDisplayOpaque)
		bool L_0 = HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// containerObject.transform.position = new Vector3(0.05f, 1.2f, -1.00f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_containerObject_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), (0.05f), (1.2f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// containerObject.transform.position = new Vector3(0.05f, -0.65f, 0.50f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_containerObject_4();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (0.05f), (-0.65f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
		// RenderSettings.skybox = null;
		RenderSettings_set_skybox_mBCF2CDEF2213ADD1EC2A736F4AF33587A72C0587((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.OptimizeSceneforDeviceType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OptimizeSceneforDeviceType__ctor_m11D0A32EC00A188EB1F4B271D7B406E271CE3B23 (OptimizeSceneforDeviceType_tA50CFB233395199ECFC32B94C588AFF69EF7214E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::Start()
extern "C" IL2CPP_METHOD_ATTR void PeriodicTableLoader_Start_m4D5C1331569E2968AFE797808C6AFCECD5862855 (PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F * __this, const RuntimeMethod* method)
{
	{
		// InitializeData();
		PeriodicTableLoader_InitializeData_mA718D98E7B007C01F13CC6C84C8582A087F42D98(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::InitializeData()
extern "C" IL2CPP_METHOD_ATTR void PeriodicTableLoader_InitializeData_mA718D98E7B007C01F13CC6C84C8582A087F42D98 (PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeriodicTableLoader_InitializeData_mA718D98E7B007C01F13CC6C84C8582A087F42D98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * V_0 = NULL;
	Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * V_1 = NULL;
	Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// TextAsset asset = Resources.Load<TextAsset>("JSON/PeriodicTableJSON");
		TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * L_0 = Resources_Load_TisTextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_m5684DE13E921E2A7AA35CD9C7C00958F6B921F8F(_stringLiteralC6FA85DD6023A4CDDBC5F211CD98A82A8D063BF1, /*hidden argument*/Resources_Load_TisTextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E_m5684DE13E921E2A7AA35CD9C7C00958F6B921F8F_RuntimeMethod_var);
		// List<ElementData> elements = ElementsData.FromJSON(asset.text).elements;
		NullCheck(L_0);
		String_t* L_1 = TextAsset_get_text_mD3FBCD974CF552C7F7C7CD9A07BACAE51A2C5D42(L_0, /*hidden argument*/NULL);
		ElementsData_t39A616E5DFD10E8BF59BDA91523652E81D951B52 * L_2 = ElementsData_FromJSON_mBB8F518887C68C366CA5C6F8F819C11AFE037F9D(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * L_3 = L_2->get_elements_0();
		V_0 = L_3;
		//     Dictionary<string, Material> typeMaterials = new Dictionary<string, Material>()
		// {
		//     { "alkali metal", MatAlkaliMetal },
		//     { "alkaline earth metal", MatAlkalineEarthMetal },
		//     { "transition metal", MatTransitionMetal },
		//     { "metalloid", MatMetalloid },
		//     { "diatomic nonmetal", MatDiatomicNonmetal },
		//     { "polyatomic nonmetal", MatPolyatomicNonmetal },
		//     { "post-transition metal", MatPostTransitionMetal },
		//     { "noble gas", MatNobleGas },
		//     { "actinide", MatActinide },
		//     { "lanthanide", MatLanthanide },
		// };
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_4 = (Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC *)il2cpp_codegen_object_new(Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7D446EDFB993721998FE67D593EC46486C3471D3(L_4, /*hidden argument*/Dictionary_2__ctor_m7D446EDFB993721998FE67D593EC46486C3471D3_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_5 = L_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_MatAlkaliMetal_9();
		NullCheck(L_5);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_5, _stringLiteralE50E5BADBA4715519C3DF4A319285B119BEED4F0, L_6, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_7 = L_5;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = __this->get_MatAlkalineEarthMetal_10();
		NullCheck(L_7);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_7, _stringLiteralADB55BDC0D8D0BD216EC2EDFA2D4D7995719E401, L_8, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_9 = L_7;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = __this->get_MatTransitionMetal_11();
		NullCheck(L_9);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_9, _stringLiteral68782301B81884605B93B1B7F36EEEF9FF830877, L_10, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_11 = L_9;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_12 = __this->get_MatMetalloid_12();
		NullCheck(L_11);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_11, _stringLiteralED7F09E8C3B482B54C6715DE97BCAC67EBDF67F9, L_12, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_13 = L_11;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_MatDiatomicNonmetal_13();
		NullCheck(L_13);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_13, _stringLiteral1657C397F8AD32EE40B942B459022A2D663474FC, L_14, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_15 = L_13;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get_MatPolyatomicNonmetal_14();
		NullCheck(L_15);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_15, _stringLiteralE11BFBBCA70558A13820FA9BD38D2C20F17EE8AC, L_16, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_17 = L_15;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_18 = __this->get_MatPostTransitionMetal_15();
		NullCheck(L_17);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_17, _stringLiteral6E507967A8E2F2CDFDD140FDF0D920FF8BF0EC26, L_18, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_19 = L_17;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = __this->get_MatNobleGas_16();
		NullCheck(L_19);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_19, _stringLiteral7C8239763DEFA7808F1E6B5EA816504B0CAE4798, L_20, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_21 = L_19;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = __this->get_MatActinide_17();
		NullCheck(L_21);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_21, _stringLiteral3647EE990F94749332600BA1B1B34FAD6BFDBE51, L_22, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_23 = L_21;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get_MatLanthanide_18();
		NullCheck(L_23);
		Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A(L_23, _stringLiteral4FB4C5F44EB9AF9205850E6C024965B6B85C3FBE, L_24, /*hidden argument*/Dictionary_2_Add_m0C34A81117D7EE5E966D519D2DEFC352CEBBA80A_RuntimeMethod_var);
		V_1 = L_23;
		// if (isFirstRun == true)
		bool L_25 = __this->get_isFirstRun_19();
		if (!L_25)
		{
			goto IL_018b;
		}
	}
	{
		// foreach (ElementData element in elements)
		List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * L_26 = V_0;
		NullCheck(L_26);
		Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455  L_27 = List_1_GetEnumerator_m6907AED51371D3B2C7006EEA0BCE1B96EFE3450E(L_26, /*hidden argument*/List_1_GetEnumerator_m6907AED51371D3B2C7006EEA0BCE1B96EFE3450E_RuntimeMethod_var);
		V_2 = L_27;
	}

IL_00dc:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0167;
		}

IL_00e1:
		{
			// foreach (ElementData element in elements)
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_28 = Enumerator_get_Current_m2FEA5F5583C9DDC8BD875673F2CAAA89D9982566((Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2FEA5F5583C9DDC8BD875673F2CAAA89D9982566_RuntimeMethod_var);
			V_3 = L_28;
			// GameObject newElement = Instantiate<GameObject>(ElementPrefab, Parent);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_ElementPrefab_5();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = __this->get_Parent_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
			// newElement.GetComponentInChildren<Element>().SetFromElementData(element, typeMaterials);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = L_31;
			NullCheck(L_32);
			Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_33 = GameObject_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m7C9E55F245ADBD26C6992115DAE3A270C1FD2D00(L_32, /*hidden argument*/GameObject_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_m7C9E55F245ADBD26C6992115DAE3A270C1FD2D00_RuntimeMethod_var);
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_34 = V_3;
			Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_35 = V_1;
			NullCheck(L_33);
			Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF(L_33, L_34, L_35, /*hidden argument*/NULL);
			// newElement.transform.localPosition = new Vector3(element.xpos * ElementSeperationDistance - ElementSeperationDistance * 18 / 2, ElementSeperationDistance * 9 - element.ypos * ElementSeperationDistance, 2.0f);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = L_32;
			NullCheck(L_36);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_38 = V_3;
			NullCheck(L_38);
			int32_t L_39 = L_38->get_xpos_3();
			float L_40 = __this->get_ElementSeperationDistance_6();
			float L_41 = __this->get_ElementSeperationDistance_6();
			float L_42 = __this->get_ElementSeperationDistance_6();
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = L_43->get_ypos_4();
			float L_45 = __this->get_ElementSeperationDistance_6();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46;
			memset(&L_46, 0, sizeof(L_46));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_46), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_39))), (float)L_40)), (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_41, (float)(18.0f)))/(float)(2.0f))))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(9.0f))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_44))), (float)L_45)))), (2.0f), /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_37, L_46, /*hidden argument*/NULL);
			// newElement.transform.localRotation = Quaternion.identity;
			NullCheck(L_36);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			NullCheck(L_47);
			Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_47, L_48, /*hidden argument*/NULL);
		}

IL_0167:
		{
			// foreach (ElementData element in elements)
			bool L_49 = Enumerator_MoveNext_m84A63102A89E6342355DFCA5B9BBC8B389278B31((Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m84A63102A89E6342355DFCA5B9BBC8B389278B31_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_00e1;
			}
		}

IL_0173:
		{
			IL2CPP_LEAVE(0x183, FINALLY_0175);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0175;
	}

FINALLY_0175:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5C6DD0B88AEAF52B2BA2CC050B9A4046AB8F43FE((Enumerator_tA2A849E738B3E439AC0056404FDE5D5B73A1A455 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m5C6DD0B88AEAF52B2BA2CC050B9A4046AB8F43FE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(373)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(373)
	{
		IL2CPP_JUMP_TBL(0x183, IL_0183)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0183:
	{
		// isFirstRun = false;
		__this->set_isFirstRun_19((bool)0);
		// }
		return;
	}

IL_018b:
	{
		// int i = 0;
		V_4 = 0;
		// foreach(Transform existingElementObject in Parent)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = __this->get_Parent_4();
		NullCheck(L_50);
		RuntimeObject* L_51 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_50, /*hidden argument*/NULL);
		V_5 = L_51;
	}

IL_019b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_022f;
		}

IL_01a0:
		{
			// foreach(Transform existingElementObject in Parent)
			RuntimeObject* L_52 = V_5;
			NullCheck(L_52);
			RuntimeObject * L_53 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_52);
			// existingElementObject.parent.GetComponentInChildren<Element>().SetFromElementData(elements[i], typeMaterials);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_53, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			NullCheck(L_54);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_54, /*hidden argument*/NULL);
			NullCheck(L_55);
			Element_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35 * L_56 = Component_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_mDF8FA97D113CD3DFEA06F17F00F2F45EA939BAD3(L_55, /*hidden argument*/Component_GetComponentInChildren_TisElement_tCEB3F12E3DE6964F09144ACBA7A4A3222EA70B35_mDF8FA97D113CD3DFEA06F17F00F2F45EA939BAD3_RuntimeMethod_var);
			List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * L_57 = V_0;
			int32_t L_58 = V_4;
			NullCheck(L_57);
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_59 = List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D(L_57, L_58, /*hidden argument*/List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D_RuntimeMethod_var);
			Dictionary_2_tAD2222CCFCF5F2964C6F67732E9C8DAB764FE3AC * L_60 = V_1;
			NullCheck(L_56);
			Element_SetFromElementData_mD119A9FB8207C5F33187ABD9512C3ADBDB6609EF(L_56, L_59, L_60, /*hidden argument*/NULL);
			// existingElementObject.localPosition = new Vector3(elements[i].xpos * ElementSeperationDistance - ElementSeperationDistance * 18 / 2, ElementSeperationDistance * 9 - elements[i].ypos * ElementSeperationDistance, 2.0f);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = L_54;
			List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * L_62 = V_0;
			int32_t L_63 = V_4;
			NullCheck(L_62);
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_64 = List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D(L_62, L_63, /*hidden argument*/List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D_RuntimeMethod_var);
			NullCheck(L_64);
			int32_t L_65 = L_64->get_xpos_3();
			float L_66 = __this->get_ElementSeperationDistance_6();
			float L_67 = __this->get_ElementSeperationDistance_6();
			float L_68 = __this->get_ElementSeperationDistance_6();
			List_1_tA48752B24C36E0617A913C4C3879CBDBFC83A73C * L_69 = V_0;
			int32_t L_70 = V_4;
			NullCheck(L_69);
			ElementData_t577070E795AA226A9ECD1F6222E6FDF52DFEB08E * L_71 = List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D(L_69, L_70, /*hidden argument*/List_1_get_Item_m31D046A90A796E45801E94225FD2BCF18456412D_RuntimeMethod_var);
			NullCheck(L_71);
			int32_t L_72 = L_71->get_ypos_4();
			float L_73 = __this->get_ElementSeperationDistance_6();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74;
			memset(&L_74, 0, sizeof(L_74));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_74), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_65))), (float)L_66)), (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_67, (float)(18.0f)))/(float)(2.0f))))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_68, (float)(9.0f))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_72))), (float)L_73)))), (2.0f), /*hidden argument*/NULL);
			NullCheck(L_61);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_61, L_74, /*hidden argument*/NULL);
			// existingElementObject.localRotation = Quaternion.identity;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_75 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			NullCheck(L_61);
			Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_61, L_75, /*hidden argument*/NULL);
			// i++;
			int32_t L_76 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		}

IL_022f:
		{
			// foreach(Transform existingElementObject in Parent)
			RuntimeObject* L_77 = V_5;
			NullCheck(L_77);
			bool L_78 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_77);
			if (L_78)
			{
				goto IL_01a0;
			}
		}

IL_023b:
		{
			IL2CPP_LEAVE(0x252, FINALLY_023d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_023d;
	}

FINALLY_023d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_79 = V_5;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_79, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_80 = V_6;
			if (!L_80)
			{
				goto IL_0251;
			}
		}

IL_024a:
		{
			RuntimeObject* L_81 = V_6;
			NullCheck(L_81);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_81);
		}

IL_0251:
		{
			IL2CPP_END_FINALLY(573)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(573)
	{
		IL2CPP_JUMP_TBL(0x252, IL_0252)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0252:
	{
		// Parent.localPosition = new Vector3(0.0f, -0.7f, 0.7f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_82 = __this->get_Parent_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83;
		memset(&L_83, 0, sizeof(L_83));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_83), (0.0f), (-0.7f), (0.7f), /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_82, L_83, /*hidden argument*/NULL);
		// LegendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = __this->get_LegendTransform_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85;
		memset(&L_85, 0, sizeof(L_85));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_85), (0.0f), (0.15f), (1.8f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_84, L_85, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PeriodicTableLoader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeriodicTableLoader__ctor_m72485E21B36B147D1DD84402ABC4B82D7C5B9B73 (PeriodicTableLoader_tD294F0F31D55A8947D34F9834EADBC0C857B988F * __this, const RuntimeMethod* method)
{
	{
		// private bool isFirstRun = true;
		__this->set_isFirstRun_19((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::get_InPosition()
extern "C" IL2CPP_METHOD_ATTR bool PresentToPlayer_get_InPosition_m9D62372CA323810F1ECC100A8563955B9D993F2C (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	{
		// return inPosition;
		bool L_0 = __this->get_inPosition_14();
		return L_0;
	}
}
// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::get_Presenting()
extern "C" IL2CPP_METHOD_ATTR bool PresentToPlayer_get_Presenting_m304F7311E5A5C4966F32B587EF633DA11065507C (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	{
		// return presenting;
		bool L_0 = __this->get_presenting_12();
		return L_0;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::Present()
extern "C" IL2CPP_METHOD_ATTR void PresentToPlayer_Present_mBE723E5DECD5B3B5D09D89A7735A704D5DD8CEB6 (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	{
		// if (presenting)
		bool L_0 = __this->get_presenting_12();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// presenting = true;
		__this->set_presenting_12((bool)1);
		// StartCoroutine(PresentOverTime());
		RuntimeObject* L_1 = PresentToPlayer_PresentOverTime_mA71855BB66ABB87A8F951D028FF290821BFA0F7A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::Return()
extern "C" IL2CPP_METHOD_ATTR void PresentToPlayer_Return_mA4F50F5537C87B5FB89F09892F64DB91A84A125F (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	{
		// if (!presenting)
		bool L_0 = __this->get_presenting_12();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// returning = true;
		__this->set_returning_13((bool)1);
		// }
		return;
	}
}
// System.Collections.IEnumerator HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::PresentOverTime()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PresentToPlayer_PresentOverTime_mA71855BB66ABB87A8F951D028FF290821BFA0F7A (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PresentToPlayer_PresentOverTime_mA71855BB66ABB87A8F951D028FF290821BFA0F7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * L_0 = (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE *)il2cpp_codegen_object_new(U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE_il2cpp_TypeInfo_var);
		U3CPresentOverTimeU3Ed__17__ctor_m626F03D1DF40E1D6BF1CEA8AFF4CFD79495D91A4(L_0, 0, /*hidden argument*/NULL);
		U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PresentToPlayer__ctor_mFC7B36607CF19E7835809F735D8E62AFD5FC8105 (PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * __this, const RuntimeMethod* method)
{
	{
		// public float PresentationDistance = 1f;
		__this->set_PresentationDistance_4((1.0f));
		// public float TravelTime = 1f;
		__this->set_TravelTime_5((1.0f));
		// public AnimationCurve SmoothPosition = AnimationCurve.EaseInOut(0, 0, 1, 1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_SmoothPosition_6(L_0);
		// public bool OrientToCamera = true;
		__this->set_OrientToCamera_7((bool)1);
		// public bool OrientYAxisOnly = true;
		__this->set_OrientYAxisOnly_8((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CPresentOverTimeU3Ed__17__ctor_m626F03D1DF40E1D6BF1CEA8AFF4CFD79495D91A4 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPresentOverTimeU3Ed__17_System_IDisposable_Dispose_m3F6A7F31F82B25D72C69D2789D3B61096BA56267 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPresentOverTimeU3Ed__17_MoveNext_m3E4D4726A4BF00055D66F0DB2EC2F2EC2919D0AC (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPresentOverTimeU3Ed__17_MoveNext_m3E4D4726A4BF00055D66F0DB2EC2F2EC2919D0AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * V_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01b5;
			}
			case 2:
			{
				goto IL_01d9;
			}
			case 3:
			{
				goto IL_02b7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (TargetTranfsorm == null)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3->get_TargetTranfsorm_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// TargetTranfsorm = transform;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_6 = V_1;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_TargetTranfsorm_9(L_8);
	}

IL_0047:
	{
		// initialPosition = transform.position;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_9 = V_1;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_initialPosition_10(L_12);
		// initialRotation = transform.rotation;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_13 = V_1;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_initialRotation_11(L_16);
		// Vector3 cameraPosition = Camera.main.transform.position;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// Vector3 cameraForward = Camera.main.transform.forward;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_20 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// if (OrientYAxisOnly)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = L_23->get_OrientYAxisOnly_8();
		if (!L_24)
		{
			goto IL_00a4;
		}
	}
	{
		// cameraForward.y = 0f;
		(&V_3)->set_y_3((0.0f));
		// cameraForward.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// Quaternion targetRotation = Quaternion.LookRotation(cameraForward, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_25, L_26, /*hidden argument*/NULL);
		__this->set_U3CtargetRotationU3E5__2_3(L_27);
		// Vector3 targetPosition = cameraPosition + (cameraForward * PresentationDistance) + new Vector3(0.0f, -0.1f, 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_3;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->get_PresentationDistance_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), (0.0f), (-0.1f), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_33, L_34, /*hidden argument*/NULL);
		__this->set_U3CtargetPositionU3E5__3_4(L_35);
		// inPosition = false;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_36 = V_1;
		NullCheck(L_36);
		L_36->set_inPosition_14((bool)0);
		// float normalizedProgress = 0f;
		__this->set_U3CnormalizedProgressU3E5__4_5((0.0f));
		// float startTime = Time.time;
		float L_37 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__5_6(L_37);
		goto IL_01bc;
	}

IL_0108:
	{
		// normalizedProgress = (Time.time - startTime) / TravelTime;
		float L_38 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_39 = __this->get_U3CstartTimeU3E5__5_6();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->get_TravelTime_5();
		__this->set_U3CnormalizedProgressU3E5__4_5(((float)((float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_39))/(float)L_41)));
		// TargetTranfsorm.position = Vector3.Lerp(initialPosition, targetPosition, SmoothPosition.Evaluate(normalizedProgress));
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_42 = V_1;
		NullCheck(L_42);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = L_42->get_TargetTranfsorm_9();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_44 = V_1;
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = L_44->get_initialPosition_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = __this->get_U3CtargetPositionU3E5__3_4();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_47 = V_1;
		NullCheck(L_47);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_48 = L_47->get_SmoothPosition_6();
		float L_49 = __this->get_U3CnormalizedProgressU3E5__4_5();
		NullCheck(L_48);
		float L_50 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_48, L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_45, L_46, L_50, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_43, L_51, /*hidden argument*/NULL);
		// if (OrientToCamera)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_52 = V_1;
		NullCheck(L_52);
		bool L_53 = L_52->get_OrientToCamera_7();
		if (!L_53)
		{
			goto IL_0182;
		}
	}
	{
		// TargetTranfsorm.rotation = Quaternion.Lerp(TargetTranfsorm.rotation, targetRotation, Time.deltaTime * 10f);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_54 = V_1;
		NullCheck(L_54);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = L_54->get_TargetTranfsorm_9();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_56 = V_1;
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = L_56->get_TargetTranfsorm_9();
		NullCheck(L_57);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_58 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_57, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_59 = __this->get_U3CtargetRotationU3E5__2_3();
		float L_60 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_61 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_58, L_59, ((float)il2cpp_codegen_multiply((float)L_60, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_55, L_61, /*hidden argument*/NULL);
	}

IL_0182:
	{
		// inPosition = Vector3.Distance(TargetTranfsorm.position, targetPosition) < 0.05f;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_62 = V_1;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_63 = V_1;
		NullCheck(L_63);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = L_63->get_TargetTranfsorm_9();
		NullCheck(L_64);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = __this->get_U3CtargetPositionU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_67 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_65, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->set_inPosition_14((bool)((((float)L_67) < ((float)(0.05f)))? 1 : 0));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01b5:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01bc:
	{
		// while (!inPosition)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_68 = V_1;
		NullCheck(L_68);
		bool L_69 = L_68->get_inPosition_14();
		if (!L_69)
		{
			goto IL_0108;
		}
	}
	{
		goto IL_01e0;
	}

IL_01c9:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01d9:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01e0:
	{
		// while (!returning)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_70 = V_1;
		NullCheck(L_70);
		bool L_71 = L_70->get_returning_13();
		if (!L_71)
		{
			goto IL_01c9;
		}
	}
	{
		// inPosition = false;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_72 = V_1;
		NullCheck(L_72);
		L_72->set_inPosition_14((bool)0);
		// normalizedProgress = 0f;
		__this->set_U3CnormalizedProgressU3E5__4_5((0.0f));
		// startTime = Time.time;
		float L_73 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__5_6(L_73);
		goto IL_02be;
	}

IL_020a:
	{
		// normalizedProgress = (Time.time - startTime) / TravelTime;
		float L_74 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_75 = __this->get_U3CstartTimeU3E5__5_6();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_76 = V_1;
		NullCheck(L_76);
		float L_77 = L_76->get_TravelTime_5();
		__this->set_U3CnormalizedProgressU3E5__4_5(((float)((float)((float)il2cpp_codegen_subtract((float)L_74, (float)L_75))/(float)L_77)));
		// TargetTranfsorm.position = Vector3.Lerp(targetPosition, initialPosition, SmoothPosition.Evaluate(normalizedProgress));
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_78 = V_1;
		NullCheck(L_78);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = L_78->get_TargetTranfsorm_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = __this->get_U3CtargetPositionU3E5__3_4();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_81 = V_1;
		NullCheck(L_81);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = L_81->get_initialPosition_10();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_83 = V_1;
		NullCheck(L_83);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_84 = L_83->get_SmoothPosition_6();
		float L_85 = __this->get_U3CnormalizedProgressU3E5__4_5();
		NullCheck(L_84);
		float L_86 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_84, L_85, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_80, L_82, L_86, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_79, L_87, /*hidden argument*/NULL);
		// if (OrientToCamera)
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_88 = V_1;
		NullCheck(L_88);
		bool L_89 = L_88->get_OrientToCamera_7();
		if (!L_89)
		{
			goto IL_0284;
		}
	}
	{
		// TargetTranfsorm.rotation = Quaternion.Lerp(TargetTranfsorm.rotation, initialRotation, Time.deltaTime * 10f);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_90 = V_1;
		NullCheck(L_90);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_91 = L_90->get_TargetTranfsorm_9();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_92 = V_1;
		NullCheck(L_92);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_93 = L_92->get_TargetTranfsorm_9();
		NullCheck(L_93);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_94 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_93, /*hidden argument*/NULL);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_95 = V_1;
		NullCheck(L_95);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_96 = L_95->get_initialRotation_11();
		float L_97 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_98 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_94, L_96, ((float)il2cpp_codegen_multiply((float)L_97, (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_91);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_91, L_98, /*hidden argument*/NULL);
	}

IL_0284:
	{
		// inPosition = Vector3.Distance(TargetTranfsorm.position, initialPosition) < 0.05f;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_99 = V_1;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_100 = V_1;
		NullCheck(L_100);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_101 = L_100->get_TargetTranfsorm_9();
		NullCheck(L_101);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_102 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_101, /*hidden argument*/NULL);
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_103 = V_1;
		NullCheck(L_103);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104 = L_103->get_initialPosition_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_105 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_102, L_104, /*hidden argument*/NULL);
		NullCheck(L_99);
		L_99->set_inPosition_14((bool)((((float)L_105) < ((float)(0.05f)))? 1 : 0));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02b7:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02be:
	{
		// while (normalizedProgress < 1f)
		float L_106 = __this->get_U3CnormalizedProgressU3E5__4_5();
		if ((((float)L_106) < ((float)(1.0f))))
		{
			goto IL_020a;
		}
	}
	{
		// TargetTranfsorm.position = initialPosition;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_107 = V_1;
		NullCheck(L_107);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_108 = L_107->get_TargetTranfsorm_9();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_109 = V_1;
		NullCheck(L_109);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = L_109->get_initialPosition_10();
		NullCheck(L_108);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_108, L_110, /*hidden argument*/NULL);
		// TargetTranfsorm.rotation = initialRotation;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_111 = V_1;
		NullCheck(L_111);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_112 = L_111->get_TargetTranfsorm_9();
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_113 = V_1;
		NullCheck(L_113);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_114 = L_113->get_initialRotation_11();
		NullCheck(L_112);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_112, L_114, /*hidden argument*/NULL);
		// presenting = false;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_115 = V_1;
		NullCheck(L_115);
		L_115->set_presenting_12((bool)0);
		// returning = false;
		PresentToPlayer_tDA027C173475F4F52171E895C993C100E59DC978 * L_116 = V_1;
		NullCheck(L_116);
		L_116->set_returning_13((bool)0);
		// yield break;
		return (bool)0;
	}
}
// System.Object HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPresentOverTimeU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m782572EC5B7AA499829B326A2A57C6F70088FDD7 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_Reset_mDF550AF2BC435EBCA9D5D605AFCBEB7006CDEF97 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_Reset_mDF550AF2BC435EBCA9D5D605AFCBEB7006CDEF97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_Reset_mDF550AF2BC435EBCA9D5D605AFCBEB7006CDEF97_RuntimeMethod_var);
	}
}
// System.Object HoloToolkit.MRDL.PeriodicTable.PresentToPlayer_<PresentOverTime>d__17::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPresentOverTimeU3Ed__17_System_Collections_IEnumerator_get_Current_mF3EAD888F98EFA6B8AC8ABDF5EC98E439CA5E944 (U3CPresentOverTimeU3Ed__17_t56FC0CB1332EE6B0D32AD4792D0E19689F9048DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LayoutStyleChanger::ChangeLayoutStylePlane()
extern "C" IL2CPP_METHOD_ATTR void LayoutStyleChanger_ChangeLayoutStylePlane_mE0A512BEBDF6FE708CED5E60D92463AD85DD9777 (LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutStyleChanger_ChangeLayoutStylePlane_mE0A512BEBDF6FE708CED5E60D92463AD85DD9777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(objectCollection != null)
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_0 = __this->get_objectCollection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// objectCollection.SurfaceType = ObjectOrientationSurfaceType.Plane;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_2 = __this->get_objectCollection_4();
		NullCheck(L_2);
		GridObjectCollection_set_SurfaceType_mF8CF03379FBF59841FC8903DDC61D23DA176E3D5(L_2, 1, /*hidden argument*/NULL);
		// objectCollection.OrientType = OrientationType.FaceParentFoward;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_3 = __this->get_objectCollection_4();
		NullCheck(L_3);
		GridObjectCollection_set_OrientType_m06D65B3FD5631B03645D45450D04E9EA6321A91E(L_3, 3, /*hidden argument*/NULL);
		// objectCollection.Radius = 1.6f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_4 = __this->get_objectCollection_4();
		NullCheck(L_4);
		GridObjectCollection_set_Radius_mD59EBD11DF357FC988EDDD3E5D456C5A193183F3(L_4, (1.6f), /*hidden argument*/NULL);
		// objectCollection.RadialRange = 180.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_5 = __this->get_objectCollection_4();
		NullCheck(L_5);
		GridObjectCollection_set_RadialRange_m9EDB775C0768454F0E64F80F384DB55A9FD4691B(L_5, (180.0f), /*hidden argument*/NULL);
		// objectCollection.Rows = 4;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_6 = __this->get_objectCollection_4();
		NullCheck(L_6);
		GridObjectCollection_set_Rows_m31727EE17412360E890F8DD5DEE86C45C53B2BFD(L_6, 4, /*hidden argument*/NULL);
		// objectCollection.CellWidth = 0.21f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_7 = __this->get_objectCollection_4();
		NullCheck(L_7);
		GridObjectCollection_set_CellWidth_m7346EA75245C1F8F8AF3D3B116F221946AC5365B(L_7, (0.21f), /*hidden argument*/NULL);
		// objectCollection.CellHeight = 0.21f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_8 = __this->get_objectCollection_4();
		NullCheck(L_8);
		GridObjectCollection_set_CellHeight_m51EE480BE2B740C04FA4AA18D7DCA516EBF9688C(L_8, (0.21f), /*hidden argument*/NULL);
		// objectCollection.UpdateCollection();
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_9 = __this->get_objectCollection_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_9);
		// tableParentTransform.localPosition = new Vector3(0.0f, -0.5f, 1.2f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_tableParentTransform_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (-0.5f), (1.2f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// legendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_legendTransform_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (0.15f), (1.8f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_13, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LayoutStyleChanger::ChangeLayoutStyleCylinder()
extern "C" IL2CPP_METHOD_ATTR void LayoutStyleChanger_ChangeLayoutStyleCylinder_m407CF2D89DA382C0BD4B65F7F577DC5B0741CF27 (LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutStyleChanger_ChangeLayoutStyleCylinder_m407CF2D89DA382C0BD4B65F7F577DC5B0741CF27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectCollection != null)
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_0 = __this->get_objectCollection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// objectCollection.SurfaceType = ObjectOrientationSurfaceType.Cylinder;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_2 = __this->get_objectCollection_4();
		NullCheck(L_2);
		GridObjectCollection_set_SurfaceType_mF8CF03379FBF59841FC8903DDC61D23DA176E3D5(L_2, 0, /*hidden argument*/NULL);
		// objectCollection.OrientType = OrientationType.FaceOrigin;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_3 = __this->get_objectCollection_4();
		NullCheck(L_3);
		GridObjectCollection_set_OrientType_m06D65B3FD5631B03645D45450D04E9EA6321A91E(L_3, 1, /*hidden argument*/NULL);
		// objectCollection.Radius = 1.6f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_4 = __this->get_objectCollection_4();
		NullCheck(L_4);
		GridObjectCollection_set_Radius_mD59EBD11DF357FC988EDDD3E5D456C5A193183F3(L_4, (1.6f), /*hidden argument*/NULL);
		// objectCollection.RadialRange = 180.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_5 = __this->get_objectCollection_4();
		NullCheck(L_5);
		GridObjectCollection_set_RadialRange_m9EDB775C0768454F0E64F80F384DB55A9FD4691B(L_5, (180.0f), /*hidden argument*/NULL);
		// objectCollection.Rows = 4;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_6 = __this->get_objectCollection_4();
		NullCheck(L_6);
		GridObjectCollection_set_Rows_m31727EE17412360E890F8DD5DEE86C45C53B2BFD(L_6, 4, /*hidden argument*/NULL);
		// objectCollection.CellWidth = 0.21f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_7 = __this->get_objectCollection_4();
		NullCheck(L_7);
		GridObjectCollection_set_CellWidth_m7346EA75245C1F8F8AF3D3B116F221946AC5365B(L_7, (0.21f), /*hidden argument*/NULL);
		// objectCollection.CellHeight = 0.21f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_8 = __this->get_objectCollection_4();
		NullCheck(L_8);
		GridObjectCollection_set_CellHeight_m51EE480BE2B740C04FA4AA18D7DCA516EBF9688C(L_8, (0.21f), /*hidden argument*/NULL);
		// objectCollection.UpdateCollection();
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_9 = __this->get_objectCollection_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_9);
		// tableParentTransform.localPosition = new Vector3(0.0f, -0.4f, 1.3f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_tableParentTransform_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (-0.4f), (1.3f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// legendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_legendTransform_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (0.15f), (1.8f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_13, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LayoutStyleChanger::ChangeLayoutStyleRadial()
extern "C" IL2CPP_METHOD_ATTR void LayoutStyleChanger_ChangeLayoutStyleRadial_mF40A2653A6A8CADDD68DFEFBA74956E45EC7D43A (LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutStyleChanger_ChangeLayoutStyleRadial_mF40A2653A6A8CADDD68DFEFBA74956E45EC7D43A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectCollection != null)
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_0 = __this->get_objectCollection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00bf;
		}
	}
	{
		// objectCollection.SurfaceType = ObjectOrientationSurfaceType.Radial;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_2 = __this->get_objectCollection_4();
		NullCheck(L_2);
		GridObjectCollection_set_SurfaceType_mF8CF03379FBF59841FC8903DDC61D23DA176E3D5(L_2, 3, /*hidden argument*/NULL);
		// objectCollection.OrientType = OrientationType.FaceCenterAxis;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_3 = __this->get_objectCollection_4();
		NullCheck(L_3);
		GridObjectCollection_set_OrientType_m06D65B3FD5631B03645D45450D04E9EA6321A91E(L_3, 7, /*hidden argument*/NULL);
		// objectCollection.Radius = 12.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_4 = __this->get_objectCollection_4();
		NullCheck(L_4);
		GridObjectCollection_set_Radius_mD59EBD11DF357FC988EDDD3E5D456C5A193183F3(L_4, (12.0f), /*hidden argument*/NULL);
		// objectCollection.RadialRange = 120.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_5 = __this->get_objectCollection_4();
		NullCheck(L_5);
		GridObjectCollection_set_RadialRange_m9EDB775C0768454F0E64F80F384DB55A9FD4691B(L_5, (120.0f), /*hidden argument*/NULL);
		// objectCollection.Rows = 10;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_6 = __this->get_objectCollection_4();
		NullCheck(L_6);
		GridObjectCollection_set_Rows_m31727EE17412360E890F8DD5DEE86C45C53B2BFD(L_6, ((int32_t)10), /*hidden argument*/NULL);
		// objectCollection.CellWidth = 1.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_7 = __this->get_objectCollection_4();
		NullCheck(L_7);
		GridObjectCollection_set_CellWidth_m7346EA75245C1F8F8AF3D3B116F221946AC5365B(L_7, (1.0f), /*hidden argument*/NULL);
		// objectCollection.CellHeight = 1.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_8 = __this->get_objectCollection_4();
		NullCheck(L_8);
		GridObjectCollection_set_CellHeight_m51EE480BE2B740C04FA4AA18D7DCA516EBF9688C(L_8, (1.0f), /*hidden argument*/NULL);
		// objectCollection.UpdateCollection();
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_9 = __this->get_objectCollection_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_9);
		// tableParentTransform.localPosition = new Vector3(0.0f, -1.7f, 2.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_tableParentTransform_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (-1.7f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// legendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_legendTransform_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (0.15f), (1.8f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_13, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void LayoutStyleChanger::ChangeLayoutStyleSphere()
extern "C" IL2CPP_METHOD_ATTR void LayoutStyleChanger_ChangeLayoutStyleSphere_mE5437BB32FF92574111CCDBD252BD99C178A68A4 (LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutStyleChanger_ChangeLayoutStyleSphere_mE5437BB32FF92574111CCDBD252BD99C178A68A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectCollection != null)
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_0 = __this->get_objectCollection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// objectCollection.SurfaceType = ObjectOrientationSurfaceType.Sphere;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_2 = __this->get_objectCollection_4();
		NullCheck(L_2);
		GridObjectCollection_set_SurfaceType_mF8CF03379FBF59841FC8903DDC61D23DA176E3D5(L_2, 2, /*hidden argument*/NULL);
		// objectCollection.OrientType = OrientationType.FaceOrigin;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_3 = __this->get_objectCollection_4();
		NullCheck(L_3);
		GridObjectCollection_set_OrientType_m06D65B3FD5631B03645D45450D04E9EA6321A91E(L_3, 1, /*hidden argument*/NULL);
		// objectCollection.Radius = 1.2f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_4 = __this->get_objectCollection_4();
		NullCheck(L_4);
		GridObjectCollection_set_Radius_mD59EBD11DF357FC988EDDD3E5D456C5A193183F3(L_4, (1.2f), /*hidden argument*/NULL);
		// objectCollection.RadialRange = 180.0f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_5 = __this->get_objectCollection_4();
		NullCheck(L_5);
		GridObjectCollection_set_RadialRange_m9EDB775C0768454F0E64F80F384DB55A9FD4691B(L_5, (180.0f), /*hidden argument*/NULL);
		// objectCollection.Rows = 8;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_6 = __this->get_objectCollection_4();
		NullCheck(L_6);
		GridObjectCollection_set_Rows_m31727EE17412360E890F8DD5DEE86C45C53B2BFD(L_6, 8, /*hidden argument*/NULL);
		// objectCollection.CellWidth = 0.3f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_7 = __this->get_objectCollection_4();
		NullCheck(L_7);
		GridObjectCollection_set_CellWidth_m7346EA75245C1F8F8AF3D3B116F221946AC5365B(L_7, (0.3f), /*hidden argument*/NULL);
		// objectCollection.CellHeight = 0.3f;
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_8 = __this->get_objectCollection_4();
		NullCheck(L_8);
		GridObjectCollection_set_CellHeight_m51EE480BE2B740C04FA4AA18D7DCA516EBF9688C(L_8, (0.3f), /*hidden argument*/NULL);
		// objectCollection.UpdateCollection();
		GridObjectCollection_t779E244CA04DF5210B747A0E6F1BDA48BC75BA76 * L_9 = __this->get_objectCollection_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_9);
		// tableParentTransform.localPosition = new Vector3(0.0f, -0.35f, 1.3f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_tableParentTransform_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (-0.35f), (1.3f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// legendTransform.localPosition = new Vector3(0.24f, 0.6f, 1.8f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_legendTransform_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.24f), (0.6f), (1.8f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_13, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LayoutStyleChanger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LayoutStyleChanger__ctor_m904DA26F4A3CD95458D576BF2D8F375EB6968A3D (LayoutStyleChanger_t763553B2EA20972FC994D9615133B4C057AC8F40 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
