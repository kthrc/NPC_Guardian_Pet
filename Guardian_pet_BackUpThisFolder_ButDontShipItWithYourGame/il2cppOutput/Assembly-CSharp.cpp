#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// ENT1JsonManager/ENT1JsonData[]
struct ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9;
// ENT1JsonManager/sentences[]
struct sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38;
// ENT2JsonManager/ENT2JsonData[]
struct ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C;
// ENT2JsonManager/sentences[]
struct sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0;
// ENT3JsonManager/ENT3JsonData[]
struct ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7;
// ENT3JsonManager/sentences[]
struct sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0;
// OPH1JsonManager/OPH1JsonData[]
struct OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07;
// OPH1JsonManager/sentences[]
struct sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372;
// OPH2JsonManager/OPH2JsonData[]
struct OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411;
// OPH2JsonManager/sentences[]
struct sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F;
// OPH3JsonManager/OPH3JsonData[]
struct OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E;
// OPH3JsonManager/sentences[]
struct sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// dental1JsonManager/dental1JsonData[]
struct dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6;
// dental1JsonManager/sentences[]
struct sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90;
// dental2JsonManager/dental2JsonData[]
struct dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58;
// dental2JsonManager/sentences[]
struct sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6;
// dental3JsonManager/dental3JsonData[]
struct dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7;
// dental3JsonManager/sentences[]
struct sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ClickBookIcon
struct ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Dental
struct Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14;
// DentalMission
struct DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643;
// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455;
// DontDestroyObject
struct DontDestroyObject_t2171253D48744DF1A764B81F3CB8551B8EED78C9;
// ENT
struct ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759;
// ENT1JsonManager
struct ENT1JsonManager_tCB207849924B70634E352F74D0DA3B00D27E7AE5;
// ENT2JsonManager
struct ENT2JsonManager_t85299D6EAADCF4676255B1C0AE6855F8F4871DCF;
// ENT3JsonManager
struct ENT3JsonManager_t3F2E4E581325FAC8940D6D1667EAF46B1252714E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Eye
struct Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8;
// EyeMission
struct EyeMission_t7C392984D95D6D985484DBADBDC541C404050508;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Main_Manager
struct Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
// NextBtn
struct NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OPH1JsonManager
struct OPH1JsonManager_t92C8121AA3E0F4C721E1EE5519036CF6D69949EA;
// OPH2JsonManager
struct OPH2JsonManager_t396A36E03F2A04ABD11AE7E91B13FC74BC984C0E;
// OPH3JsonManager
struct OPH3JsonManager_tA5302E03F6ACF20E07307914CD878FB2BF991E83;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Setting
struct Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// dental1JsonManager
struct dental1JsonManager_t79BE850D8B5AB0ED392A661675282ED1BF775218;
// dental2JsonManager
struct dental2JsonManager_tD7BA11037BD7F7A9A0CB9EC65FE0B78652B4B3A9;
// dental3JsonManager
struct dental3JsonManager_t9084DEA8252E7A7704C2DE509051F319AC4CE855;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Dialogue/<TypeLine>d__7
struct U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF;
// ENT1JsonManager/ENT1JsonData
struct ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0;
// ENT1JsonManager/ENT1JsonDataArray
struct ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887;
// ENT1JsonManager/sentences
struct sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331;
// ENT2JsonManager/ENT2JsonData
struct ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D;
// ENT2JsonManager/ENT2JsonDataArray
struct ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4;
// ENT2JsonManager/sentences
struct sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D;
// ENT3JsonManager/ENT3JsonData
struct ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A;
// ENT3JsonManager/ENT3JsonDataArray
struct ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD;
// ENT3JsonManager/sentences
struct sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OPH1JsonManager/OPH1JsonData
struct OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256;
// OPH1JsonManager/OPH1JsonDataArray
struct OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173;
// OPH1JsonManager/sentences
struct sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820;
// OPH2JsonManager/OPH2JsonData
struct OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC;
// OPH2JsonManager/OPH2JsonDataArray
struct OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883;
// OPH2JsonManager/sentences
struct sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4;
// OPH3JsonManager/OPH3JsonData
struct OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154;
// OPH3JsonManager/OPH3JsonDataArray
struct OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C;
// OPH3JsonManager/sentences
struct sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// dental1JsonManager/dental1JsonData
struct dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989;
// dental1JsonManager/dental1JsonDataArray
struct dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC;
// dental1JsonManager/sentences
struct sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836;
// dental2JsonManager/dental2JsonData
struct dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302;
// dental2JsonManager/dental2JsonDataArray
struct dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714;
// dental2JsonManager/sentences
struct sentences_t95734618D9C6E32AD7324D033BE16C11E376261D;
// dental3JsonManager/dental3JsonData
struct dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449;
// dental3JsonManager/dental3JsonDataArray
struct dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9;
// dental3JsonManager/sentences
struct sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330;

IL2CPP_EXTERN_C RuntimeClass* ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AE3C0E7EC344F9B6E2FF05C0AFAAD678CD3701;
IL2CPP_EXTERN_C String_t* _stringLiteral034E25E228C872009461BAB471AC73EFDE442AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral08276941EEB20A84EEC8201D5517B5BC6614F458;
IL2CPP_EXTERN_C String_t* _stringLiteral1D2387B8CF807E1484C07780CA9D0ADDF04F0DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral1F87AAA9C22BF699A0A8539E3DD8C6CE5208B9A2;
IL2CPP_EXTERN_C String_t* _stringLiteral205C0325E4CEC0670AC4F785084E979CFB71FA20;
IL2CPP_EXTERN_C String_t* _stringLiteral20C7955314CC8AAC4C1D7FA8004714015C0054A8;
IL2CPP_EXTERN_C String_t* _stringLiteral2277A540C7E8A8ADAF8023F1BAC0971CF5546557;
IL2CPP_EXTERN_C String_t* _stringLiteral2947123CF6EF7C9EF9214C23CDB20DA89D35D279;
IL2CPP_EXTERN_C String_t* _stringLiteral2A3F5A2CB6D5179935620160499AEE25B6CD6EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC9A4B841D1C9B60155BE8091BC4A1D6FB4BD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral300E6D786ADB51B4D50AAA026278E74D5AC3DBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral310623D13396388CA076C0AA5F0AFBCF372126A3;
IL2CPP_EXTERN_C String_t* _stringLiteral339BE76147D804A617BE520A41BEA6F7160F3036;
IL2CPP_EXTERN_C String_t* _stringLiteral37CF5012D076690326462A2235B6C0FC450A30F6;
IL2CPP_EXTERN_C String_t* _stringLiteral38B7C868CF4E693FBF9345C98C6DE193FB2926F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral42641586B738DA95A3E25A583E0F650553A68801;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4F83D99741D9B7568D706DA4CFCCC93CDE9A91A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18;
IL2CPP_EXTERN_C String_t* _stringLiteral63B25ABFBC5ADE04C57244427C4A1E9793BB29DC;
IL2CPP_EXTERN_C String_t* _stringLiteral66873A93D663483E4FDDBB18519F66E769B722FA;
IL2CPP_EXTERN_C String_t* _stringLiteral68E31A4A6665153C300B39F380BEB36B0159A4CE;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD7EA7023563285ADB79037AB6F5C23C95F9BB9;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCF9054C99E820132EF02BB458DD3CF5D4B9333;
IL2CPP_EXTERN_C String_t* _stringLiteral715B6AD467FF9B57DBCC4B5426A99ABB2AF29439;
IL2CPP_EXTERN_C String_t* _stringLiteral723346033D743416CEF8FD1542DA301C5B051E8A;
IL2CPP_EXTERN_C String_t* _stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A;
IL2CPP_EXTERN_C String_t* _stringLiteral78CBC85E729FE003E6B1653D4EE502A49CE26BED;
IL2CPP_EXTERN_C String_t* _stringLiteral793350AD031A3527ECBA207958C5863B373244CC;
IL2CPP_EXTERN_C String_t* _stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral9380716FA8CB7F3638BABAC3770ECA354FE3DF85;
IL2CPP_EXTERN_C String_t* _stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1E5828FC00957AB1E7641BE25BE1B1C974E930;
IL2CPP_EXTERN_C String_t* _stringLiteralA10C78AD53D2C15C95B4E4155574E3AAEB36043E;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A9840268950809864A4E413E1C8D8EEA20548A;
IL2CPP_EXTERN_C String_t* _stringLiteralAA3DE5351C4C66906D92094C83122D65DF65413E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA18BB8FCB6667C11D1C2171877A09453249B88;
IL2CPP_EXTERN_C String_t* _stringLiteralB312764C29C08185D9C5E2F56F45C92EBC6EDDA7;
IL2CPP_EXTERN_C String_t* _stringLiteralB44CC5823FECD3EE44D958E8374826A21774F095;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CA200033C45ED493DC91A281FEA6C53CD9A1C7;
IL2CPP_EXTERN_C String_t* _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299;
IL2CPP_EXTERN_C String_t* _stringLiteralC1EF3FEE977B59347F599F160C5A5AE482D31282;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF00C86C796EE193E5589EBF1B89F99A1A788D477;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B6D4558994A310DA19832034E40885AED48412;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF624EDA56BCA9D6EB3CD873E5547D97FF080995D;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887_m07C2D65F5A9C9F13C056146F8E45A4E55CD46B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4_mBDD846C014D56437197167F283739B269A9AE9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD_mC5209C10FF07FDFC05888A0A0CC80936830E146A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173_m0091004D42AFE09708629AF74C6C68D6F246F43E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883_m0FA1548E7A65FA097FF1E3B07D0AEB6205B472E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C_m4DFC4DDA052995A9F48F2F82F7CD8DF2D0BC08CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisdental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC_m6CA9EC97D9EAC6688239E7056D4F4405CB750109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisdental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714_m79B24AD900460D6FA07738ABCFF5AEB2A766353C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisdental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9_mFFD9BAA6D46A629007E10A89A4E5618D319881A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMain_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_mC0D41D3A39A4FCB9AA07CB934AE62C39A9B4E3DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeLineU3Ed__7_System_Collections_IEnumerator_Reset_m323D8250C8D73D47DF8247E1721D04DF8EE02FA9_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9;
struct sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38;
struct ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C;
struct sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0;
struct ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7;
struct sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0;
struct OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07;
struct sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372;
struct OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411;
struct sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F;
struct OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E;
struct sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D;
struct dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6;
struct sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90;
struct dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58;
struct sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6;
struct dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7;
struct sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC;

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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Dialogue/<TypeLine>d__7
struct U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF  : public RuntimeObject
{
	// System.Int32 Dialogue/<TypeLine>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dialogue/<TypeLine>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Dialogue Dialogue/<TypeLine>d__7::<>4__this
	Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* ___U3CU3E4__this_2;
	// System.Char[] Dialogue/<TypeLine>d__7::<>7__wrap1
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3E7__wrap1_3;
	// System.Int32 Dialogue/<TypeLine>d__7::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;
};

// ENT1JsonManager/ENT1JsonData
struct ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0  : public RuntimeObject
{
	// System.String ENT1JsonManager/ENT1JsonData::name
	String_t* ___name_0;
	// System.Int32 ENT1JsonManager/ENT1JsonData::scene
	int32_t ___scene_1;
	// ENT1JsonManager/sentences[] ENT1JsonManager/ENT1JsonData::scripts
	sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38* ___scripts_2;
};

// ENT1JsonManager/ENT1JsonDataArray
struct ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887  : public RuntimeObject
{
	// ENT1JsonManager/ENT1JsonData[] ENT1JsonManager/ENT1JsonDataArray::ENT1
	ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9* ___ENT1_0;
};

// ENT1JsonManager/sentences
struct sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331  : public RuntimeObject
{
	// System.String ENT1JsonManager/sentences::content
	String_t* ___content_0;
};

// ENT2JsonManager/ENT2JsonData
struct ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D  : public RuntimeObject
{
	// System.String ENT2JsonManager/ENT2JsonData::name
	String_t* ___name_0;
	// System.Int32 ENT2JsonManager/ENT2JsonData::scene
	int32_t ___scene_1;
	// ENT2JsonManager/sentences[] ENT2JsonManager/ENT2JsonData::scripts
	sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0* ___scripts_2;
};

// ENT2JsonManager/ENT2JsonDataArray
struct ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4  : public RuntimeObject
{
	// ENT2JsonManager/ENT2JsonData[] ENT2JsonManager/ENT2JsonDataArray::ENT2
	ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C* ___ENT2_0;
};

// ENT2JsonManager/sentences
struct sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D  : public RuntimeObject
{
	// System.String ENT2JsonManager/sentences::content
	String_t* ___content_0;
};

// ENT3JsonManager/ENT3JsonData
struct ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A  : public RuntimeObject
{
	// System.String ENT3JsonManager/ENT3JsonData::name
	String_t* ___name_0;
	// System.Int32 ENT3JsonManager/ENT3JsonData::scene
	int32_t ___scene_1;
	// ENT3JsonManager/sentences[] ENT3JsonManager/ENT3JsonData::scripts
	sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0* ___scripts_2;
};

// ENT3JsonManager/ENT3JsonDataArray
struct ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD  : public RuntimeObject
{
	// ENT3JsonManager/ENT3JsonData[] ENT3JsonManager/ENT3JsonDataArray::ENT3
	ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7* ___ENT3_0;
};

// ENT3JsonManager/sentences
struct sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F  : public RuntimeObject
{
	// System.String ENT3JsonManager/sentences::content
	String_t* ___content_0;
};

// OPH1JsonManager/OPH1JsonData
struct OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256  : public RuntimeObject
{
	// System.String OPH1JsonManager/OPH1JsonData::name
	String_t* ___name_0;
	// System.Int32 OPH1JsonManager/OPH1JsonData::scene
	int32_t ___scene_1;
	// OPH1JsonManager/sentences[] OPH1JsonManager/OPH1JsonData::scripts
	sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372* ___scripts_2;
};

// OPH1JsonManager/OPH1JsonDataArray
struct OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173  : public RuntimeObject
{
	// OPH1JsonManager/OPH1JsonData[] OPH1JsonManager/OPH1JsonDataArray::OPH1
	OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07* ___OPH1_0;
};

// OPH1JsonManager/sentences
struct sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820  : public RuntimeObject
{
	// System.String OPH1JsonManager/sentences::content
	String_t* ___content_0;
};

// OPH2JsonManager/OPH2JsonData
struct OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC  : public RuntimeObject
{
	// System.String OPH2JsonManager/OPH2JsonData::name
	String_t* ___name_0;
	// System.Int32 OPH2JsonManager/OPH2JsonData::scene
	int32_t ___scene_1;
	// OPH2JsonManager/sentences[] OPH2JsonManager/OPH2JsonData::scripts
	sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F* ___scripts_2;
};

// OPH2JsonManager/OPH2JsonDataArray
struct OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883  : public RuntimeObject
{
	// OPH2JsonManager/OPH2JsonData[] OPH2JsonManager/OPH2JsonDataArray::OPH2
	OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411* ___OPH2_0;
};

// OPH2JsonManager/sentences
struct sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4  : public RuntimeObject
{
	// System.String OPH2JsonManager/sentences::content
	String_t* ___content_0;
};

// OPH3JsonManager/OPH3JsonData
struct OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154  : public RuntimeObject
{
	// System.String OPH3JsonManager/OPH3JsonData::name
	String_t* ___name_0;
	// System.Int32 OPH3JsonManager/OPH3JsonData::scene
	int32_t ___scene_1;
	// OPH3JsonManager/sentences[] OPH3JsonManager/OPH3JsonData::scripts
	sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D* ___scripts_2;
};

// OPH3JsonManager/OPH3JsonDataArray
struct OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C  : public RuntimeObject
{
	// OPH3JsonManager/OPH3JsonData[] OPH3JsonManager/OPH3JsonDataArray::OPH3
	OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E* ___OPH3_0;
};

// OPH3JsonManager/sentences
struct sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1  : public RuntimeObject
{
	// System.String OPH3JsonManager/sentences::content
	String_t* ___content_0;
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

// dental1JsonManager/dental1JsonData
struct dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989  : public RuntimeObject
{
	// System.String dental1JsonManager/dental1JsonData::name
	String_t* ___name_0;
	// System.Int32 dental1JsonManager/dental1JsonData::scene
	int32_t ___scene_1;
	// dental1JsonManager/sentences[] dental1JsonManager/dental1JsonData::scripts
	sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90* ___scripts_2;
};

// dental1JsonManager/dental1JsonDataArray
struct dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC  : public RuntimeObject
{
	// dental1JsonManager/dental1JsonData[] dental1JsonManager/dental1JsonDataArray::dental1
	dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6* ___dental1_0;
};

// dental1JsonManager/sentences
struct sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836  : public RuntimeObject
{
	// System.String dental1JsonManager/sentences::content
	String_t* ___content_0;
};

// dental2JsonManager/dental2JsonData
struct dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302  : public RuntimeObject
{
	// System.String dental2JsonManager/dental2JsonData::name
	String_t* ___name_0;
	// System.Int32 dental2JsonManager/dental2JsonData::scene
	int32_t ___scene_1;
	// dental2JsonManager/sentences[] dental2JsonManager/dental2JsonData::scripts
	sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6* ___scripts_2;
};

// dental2JsonManager/dental2JsonDataArray
struct dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714  : public RuntimeObject
{
	// dental2JsonManager/dental2JsonData[] dental2JsonManager/dental2JsonDataArray::dental2
	dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58* ___dental2_0;
};

// dental2JsonManager/sentences
struct sentences_t95734618D9C6E32AD7324D033BE16C11E376261D  : public RuntimeObject
{
	// System.String dental2JsonManager/sentences::content
	String_t* ___content_0;
};

// dental3JsonManager/dental3JsonData
struct dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449  : public RuntimeObject
{
	// System.String dental3JsonManager/dental3JsonData::name
	String_t* ___name_0;
	// System.Int32 dental3JsonManager/dental3JsonData::scene
	int32_t ___scene_1;
	// dental3JsonManager/sentences[] dental3JsonManager/dental3JsonData::scripts
	sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC* ___scripts_2;
};

// dental3JsonManager/dental3JsonDataArray
struct dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9  : public RuntimeObject
{
	// dental3JsonManager/dental3JsonData[] dental3JsonManager/dental3JsonDataArray::dental3
	dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7* ___dental3_0;
};

// dental3JsonManager/sentences
struct sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330  : public RuntimeObject
{
	// System.String dental3JsonManager/sentences::content
	String_t* ___content_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
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
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
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
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ClickBookIcon
struct ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ClickBookIcon::DentalBookIcon1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalBookIcon1_4;
	// UnityEngine.GameObject ClickBookIcon::DentalBookIcon2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalBookIcon2_5;
	// UnityEngine.GameObject ClickBookIcon::DentalBookIcon3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalBookIcon3_6;
	// UnityEngine.GameObject ClickBookIcon::Book
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Book_7;
	// UnityEngine.GameObject[] ClickBookIcon::BookStart
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___BookStart_8;
	// UnityEngine.GameObject ClickBookIcon::Mission1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission1_10;
	// UnityEngine.GameObject ClickBookIcon::Mission2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission2_11;
	// UnityEngine.GameObject ClickBookIcon::Mission3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission3_12;
};

// Dental
struct Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Dental::DentalCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalCard1_4;
	// UnityEngine.GameObject Dental::DentalCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalCard2_5;
	// UnityEngine.GameObject Dental::DentalCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DentalCard3_6;
	// UnityEngine.GameObject Dental::SelectedCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectedCard_7;
	// UnityEngine.GameObject Dental::Book
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Book_8;
	// UnityEngine.GameObject[] Dental::BookStart
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___BookStart_9;
	// UnityEngine.GameObject Dental::Mission1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission1_10;
	// UnityEngine.GameObject Dental::Mission2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission2_11;
	// UnityEngine.GameObject Dental::Mission3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission3_12;
	// UnityEngine.GameObject Dental::Mission4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission4_13;
	// UnityEngine.GameObject Dental::Mission5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission5_14;
	// UnityEngine.GameObject Dental::Mission6
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission6_15;
	// UnityEngine.GameObject Dental::Mission7
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission7_16;
	// UnityEngine.GameObject Dental::Mission8
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission8_17;
	// UnityEngine.GameObject Dental::Mission9
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission9_18;
	// UnityEngine.GameObject Dental::BookEnding1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding1_19;
	// UnityEngine.GameObject Dental::BookEnding2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding2_20;
	// UnityEngine.GameObject Dental::BookEnding3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding3_21;
	// UnityEngine.GameObject Dental::Success1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success1_22;
	// UnityEngine.GameObject Dental::Success2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success2_23;
	// UnityEngine.GameObject Dental::Success3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success3_24;
	// System.Int32 Dental::cnt
	int32_t ___cnt_25;
};

// DentalMission
struct DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DentalMission::M1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_4;
	// UnityEngine.GameObject DentalMission::M2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_5;
	// UnityEngine.GameObject DentalMission::M3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_6;
	// UnityEngine.GameObject DentalMission::M1_Eye
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_Eye_7;
	// UnityEngine.GameObject DentalMission::M1_ENT
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_ENT_8;
	// UnityEngine.GameObject DentalMission::M1_Dental
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_Dental_9;
	// UnityEngine.GameObject DentalMission::M1_OBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_OBtn_10;
	// UnityEngine.GameObject DentalMission::M1_XBtn1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_XBtn1_11;
	// UnityEngine.GameObject DentalMission::M1_XBtn2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_XBtn2_12;
	// UnityEngine.UI.Text DentalMission::GuardianPetText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GuardianPetText_13;
	// UnityEngine.GameObject DentalMission::M2_O
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_O_14;
	// UnityEngine.GameObject DentalMission::M2_X
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_X_15;
	// UnityEngine.GameObject DentalMission::M3_DCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard1_16;
	// UnityEngine.GameObject DentalMission::M3_DCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard2_17;
	// UnityEngine.GameObject DentalMission::M3_DCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard3_18;
	// UnityEngine.GameObject DentalMission::M3_OBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_OBtn_19;
	// UnityEngine.GameObject DentalMission::M3_XBtn1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_XBtn1_20;
	// UnityEngine.GameObject DentalMission::M3_XBtn2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_XBtn2_21;
	// UnityEngine.GameObject DentalMission::Success1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success1_22;
	// UnityEngine.GameObject DentalMission::Success2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success2_23;
	// UnityEngine.GameObject DentalMission::Success3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success3_24;
	// UnityEngine.Vector2 DentalMission::startingPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startingPos_25;
};

// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Dialogue::textComponent
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textComponent_4;
	// System.String[] Dialogue::lines
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lines_5;
	// System.Single Dialogue::textSpeed
	float ___textSpeed_6;
	// System.Int32 Dialogue::index
	int32_t ___index_7;
};

// DontDestroyObject
struct DontDestroyObject_t2171253D48744DF1A764B81F3CB8551B8EED78C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DontDestroyObject::obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj_4;
	// UnityEngine.GameObject DontDestroyObject::mainBg
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainBg_5;
};

// ENT
struct ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ENT::ENTCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ENTCard1_4;
	// UnityEngine.GameObject ENT::ENTCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ENTCard2_5;
	// UnityEngine.GameObject ENT::ENTCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ENTCard3_6;
	// UnityEngine.GameObject ENT::SelectedCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectedCard_7;
	// UnityEngine.GameObject ENT::Book
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Book_8;
	// UnityEngine.GameObject ENT::BookStart1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookStart1_9;
	// UnityEngine.GameObject ENT::BookStart2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookStart2_10;
	// UnityEngine.GameObject ENT::BookStart3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookStart3_11;
	// UnityEngine.GameObject ENT::Mission1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission1_12;
	// UnityEngine.GameObject ENT::Mission2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission2_13;
	// UnityEngine.GameObject ENT::Mission3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission3_14;
	// UnityEngine.GameObject ENT::BookEnding1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding1_15;
	// UnityEngine.GameObject ENT::BookEnding2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding2_16;
	// UnityEngine.GameObject ENT::BookEnding3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding3_17;
	// UnityEngine.GameObject ENT::Success1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success1_18;
	// UnityEngine.GameObject ENT::Success2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success2_19;
	// UnityEngine.GameObject ENT::Success3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success3_20;
	// System.Int32 ENT::cnt
	int32_t ___cnt_21;
};

// ENT1JsonManager
struct ENT1JsonManager_tCB207849924B70634E352F74D0DA3B00D27E7AE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ENT2JsonManager
struct ENT2JsonManager_t85299D6EAADCF4676255B1C0AE6855F8F4871DCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ENT3JsonManager
struct ENT3JsonManager_t3F2E4E581325FAC8940D6D1667EAF46B1252714E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Eye
struct Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Eye::EyeCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EyeCard1_4;
	// UnityEngine.GameObject Eye::EyeCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EyeCard2_5;
	// UnityEngine.GameObject Eye::EyeCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EyeCard3_6;
	// UnityEngine.GameObject Eye::SelectedCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectedCard1_7;
	// UnityEngine.GameObject Eye::SelectedCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectedCard2_8;
	// UnityEngine.GameObject Eye::SelectedCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectedCard3_9;
	// UnityEngine.GameObject Eye::Book
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Book_10;
	// UnityEngine.SpriteRenderer Eye::Renderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___Renderer_11;
	// UnityEngine.Sprite Eye::Card1
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Card1_12;
	// UnityEngine.Sprite Eye::Card2
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Card2_13;
	// UnityEngine.Sprite Eye::Card3
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Card3_14;
	// UnityEngine.GameObject[] Eye::BookStart
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___BookStart_15;
	// UnityEngine.UI.Text Eye::ChapterName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ChapterName_16;
	// UnityEngine.GameObject Eye::Mission1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission1_17;
	// UnityEngine.GameObject Eye::Mission2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission2_18;
	// UnityEngine.GameObject Eye::Mission3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission3_19;
	// UnityEngine.GameObject Eye::Mission4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission4_20;
	// UnityEngine.GameObject Eye::Mission5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission5_21;
	// UnityEngine.GameObject Eye::Mission6
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission6_22;
	// UnityEngine.GameObject Eye::Mission7
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission7_23;
	// UnityEngine.GameObject Eye::Mission8
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission8_24;
	// UnityEngine.GameObject Eye::Mission9
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mission9_25;
	// UnityEngine.GameObject Eye::BookEnding1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding1_26;
	// UnityEngine.GameObject Eye::BookEnding2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding2_27;
	// UnityEngine.GameObject Eye::BookEnding3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BookEnding3_28;
	// UnityEngine.GameObject Eye::Success1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success1_29;
	// UnityEngine.GameObject Eye::Success2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success2_30;
	// UnityEngine.GameObject Eye::Success3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success3_31;
	// System.Int32 Eye::cnt
	int32_t ___cnt_32;
};

// EyeMission
struct EyeMission_t7C392984D95D6D985484DBADBDC541C404050508  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EyeMission::M1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_4;
	// UnityEngine.GameObject EyeMission::M2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_5;
	// UnityEngine.GameObject EyeMission::M3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_6;
	// UnityEngine.GameObject EyeMission::M1_Dental
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_Dental_7;
	// UnityEngine.GameObject EyeMission::M1_ENT
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_ENT_8;
	// UnityEngine.GameObject EyeMission::M1_Eye
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_Eye_9;
	// UnityEngine.GameObject EyeMission::M1_OBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_OBtn_10;
	// UnityEngine.GameObject EyeMission::M1_XBtn1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_XBtn1_11;
	// UnityEngine.GameObject EyeMission::M1_XBtn2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M1_XBtn2_12;
	// UnityEngine.UI.Text EyeMission::GuardianPetText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GuardianPetText_13;
	// UnityEngine.GameObject EyeMission::M2_O
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_O_14;
	// UnityEngine.GameObject EyeMission::M2_X
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M2_X_15;
	// UnityEngine.GameObject EyeMission::M3_DCard1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard1_16;
	// UnityEngine.GameObject EyeMission::M3_DCard2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard2_17;
	// UnityEngine.GameObject EyeMission::M3_DCard3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_DCard3_18;
	// UnityEngine.GameObject EyeMission::M3_OBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_OBtn_19;
	// UnityEngine.GameObject EyeMission::M3_XBtn1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_XBtn1_20;
	// UnityEngine.GameObject EyeMission::M3_XBtn2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___M3_XBtn2_21;
	// UnityEngine.GameObject EyeMission::Success1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success1_22;
	// UnityEngine.GameObject EyeMission::Success2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success2_23;
	// UnityEngine.GameObject EyeMission::Success3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Success3_24;
	// UnityEngine.Vector2 EyeMission::startingPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startingPos_25;
};

// Main_Manager
struct Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Main_Manager::gameIndex
	int32_t ___gameIndex_4;
	// UnityEngine.GameObject[] Main_Manager::DontDestroy_Objects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___DontDestroy_Objects_5;
	// System.Int32 Main_Manager::stageClear
	int32_t ___stageClear_7;
};

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NextBtn
struct NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OPH1JsonManager
struct OPH1JsonManager_t92C8121AA3E0F4C721E1EE5519036CF6D69949EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OPH2JsonManager
struct OPH2JsonManager_t396A36E03F2A04ABD11AE7E91B13FC74BC984C0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OPH3JsonManager
struct OPH3JsonManager_tA5302E03F6ACF20E07307914CD878FB2BF991E83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Setting
struct Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Setting::SettingPop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingPop_4;
	// UnityEngine.GameObject Setting::SoundPop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundPop_5;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip[] SoundManager::audio_clips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audio_clips_5;
	// UnityEngine.AudioSource SoundManager::sfx_player
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfx_player_6;
	// UnityEngine.UI.Slider SoundManager::sfx_slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sfx_slider_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// dental1JsonManager
struct dental1JsonManager_t79BE850D8B5AB0ED392A661675282ED1BF775218  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// dental2JsonManager
struct dental2JsonManager_tD7BA11037BD7F7A9A0CB9EC65FE0B78652B4B3A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// dental3JsonManager
struct dental3JsonManager_t9084DEA8252E7A7704C2DE509051F319AC4CE855  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Dialogue/<TypeLine>d__7

// Dialogue/<TypeLine>d__7

// ENT1JsonManager/ENT1JsonData

// ENT1JsonManager/ENT1JsonData

// ENT1JsonManager/ENT1JsonDataArray

// ENT1JsonManager/ENT1JsonDataArray

// ENT1JsonManager/sentences

// ENT1JsonManager/sentences

// ENT2JsonManager/ENT2JsonData

// ENT2JsonManager/ENT2JsonData

// ENT2JsonManager/ENT2JsonDataArray

// ENT2JsonManager/ENT2JsonDataArray

// ENT2JsonManager/sentences

// ENT2JsonManager/sentences

// ENT3JsonManager/ENT3JsonData

// ENT3JsonManager/ENT3JsonData

// ENT3JsonManager/ENT3JsonDataArray

// ENT3JsonManager/ENT3JsonDataArray

// ENT3JsonManager/sentences

// ENT3JsonManager/sentences

// OPH1JsonManager/OPH1JsonData

// OPH1JsonManager/OPH1JsonData

// OPH1JsonManager/OPH1JsonDataArray

// OPH1JsonManager/OPH1JsonDataArray

// OPH1JsonManager/sentences

// OPH1JsonManager/sentences

// OPH2JsonManager/OPH2JsonData

// OPH2JsonManager/OPH2JsonData

// OPH2JsonManager/OPH2JsonDataArray

// OPH2JsonManager/OPH2JsonDataArray

// OPH2JsonManager/sentences

// OPH2JsonManager/sentences

// OPH3JsonManager/OPH3JsonData

// OPH3JsonManager/OPH3JsonData

// OPH3JsonManager/OPH3JsonDataArray

// OPH3JsonManager/OPH3JsonDataArray

// OPH3JsonManager/sentences

// OPH3JsonManager/sentences

// Readme/Section

// Readme/Section

// dental1JsonManager/dental1JsonData

// dental1JsonManager/dental1JsonData

// dental1JsonManager/dental1JsonDataArray

// dental1JsonManager/dental1JsonDataArray

// dental1JsonManager/sentences

// dental1JsonManager/sentences

// dental2JsonManager/dental2JsonData

// dental2JsonManager/dental2JsonData

// dental2JsonManager/dental2JsonDataArray

// dental2JsonManager/dental2JsonDataArray

// dental2JsonManager/sentences

// dental2JsonManager/sentences

// dental3JsonManager/dental3JsonData

// dental3JsonManager/dental3JsonData

// dental3JsonManager/dental3JsonDataArray

// dental3JsonManager/dental3JsonDataArray

// dental3JsonManager/sentences

// dental3JsonManager/sentences

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

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

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// ClickBookIcon
struct ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields
{
	// System.Int32 ClickBookIcon::idx
	int32_t ___idx_9;
};

// ClickBookIcon

// Dental
struct Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields
{
	// System.Int32 Dental::index
	int32_t ___index_26;
};

// Dental

// DentalMission

// DentalMission

// Dialogue

// Dialogue

// DontDestroyObject

// DontDestroyObject

// ENT

// ENT

// ENT1JsonManager

// ENT1JsonManager

// ENT2JsonManager

// ENT2JsonManager

// ENT3JsonManager

// ENT3JsonManager

// Eye
struct Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields
{
	// System.Int32 Eye::index
	int32_t ___index_33;
};

// Eye

// EyeMission
struct EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields
{
	// System.Int32[] EyeMission::EyeState
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EyeState_26;
};

// EyeMission

// Main_Manager
struct Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields
{
	// Main_Manager Main_Manager::instance
	Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* ___instance_6;
};

// Main_Manager

// NewBehaviourScript

// NewBehaviourScript

// NextBtn

// NextBtn

// OPH1JsonManager

// OPH1JsonManager

// OPH2JsonManager

// OPH2JsonManager

// OPH3JsonManager

// OPH3JsonManager

// Setting

// Setting

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// SoundManager

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// dental1JsonManager

// dental1JsonManager

// dental2JsonManager

// dental2JsonManager

// dental3JsonManager

// dental3JsonManager

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// dental1JsonManager/dental1JsonData[]
struct dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* m_Items[1];

	inline dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// dental1JsonManager/sentences[]
struct sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* m_Items[1];

	inline sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// dental2JsonManager/dental2JsonData[]
struct dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58  : public RuntimeArray
{
	ALIGN_FIELD (8) dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* m_Items[1];

	inline dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// dental2JsonManager/sentences[]
struct sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* m_Items[1];

	inline sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t95734618D9C6E32AD7324D033BE16C11E376261D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t95734618D9C6E32AD7324D033BE16C11E376261D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// dental3JsonManager/dental3JsonData[]
struct dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7  : public RuntimeArray
{
	ALIGN_FIELD (8) dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* m_Items[1];

	inline dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// dental3JsonManager/sentences[]
struct sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* m_Items[1];

	inline sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT1JsonManager/ENT1JsonData[]
struct ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9  : public RuntimeArray
{
	ALIGN_FIELD (8) ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* m_Items[1];

	inline ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT1JsonManager/sentences[]
struct sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* m_Items[1];

	inline sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT2JsonManager/ENT2JsonData[]
struct ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C  : public RuntimeArray
{
	ALIGN_FIELD (8) ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* m_Items[1];

	inline ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT2JsonManager/sentences[]
struct sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* m_Items[1];

	inline sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT3JsonManager/ENT3JsonData[]
struct ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7  : public RuntimeArray
{
	ALIGN_FIELD (8) ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* m_Items[1];

	inline ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ENT3JsonManager/sentences[]
struct sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* m_Items[1];

	inline sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// OPH1JsonManager/OPH1JsonData[]
struct OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07  : public RuntimeArray
{
	ALIGN_FIELD (8) OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* m_Items[1];

	inline OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OPH1JsonManager/sentences[]
struct sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* m_Items[1];

	inline sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OPH2JsonManager/OPH2JsonData[]
struct OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411  : public RuntimeArray
{
	ALIGN_FIELD (8) OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* m_Items[1];

	inline OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OPH2JsonManager/sentences[]
struct sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* m_Items[1];

	inline sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OPH3JsonManager/OPH3JsonData[]
struct OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E  : public RuntimeArray
{
	ALIGN_FIELD (8) OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* m_Items[1];

	inline OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OPH3JsonManager/sentences[]
struct sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D  : public RuntimeArray
{
	ALIGN_FIELD (8) sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* m_Items[1];

	inline sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;

// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<dental1JsonManager/dental1JsonDataArray>(System.String)
inline dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* JsonUtility_FromJson_Tisdental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC_m6CA9EC97D9EAC6688239E7056D4F4405CB750109 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void dental1JsonManager/dental1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonData_printSentences_m0C068006834C473B8A880D43083E6A0F83616F77 (dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<dental2JsonManager/dental2JsonDataArray>(System.String)
inline dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* JsonUtility_FromJson_Tisdental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714_m79B24AD900460D6FA07738ABCFF5AEB2A766353C (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void dental2JsonManager/dental2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonData_printSentences_m1257267B79DEA1AED9FA798150B1A6C74E60F8E7 (dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<dental3JsonManager/dental3JsonDataArray>(System.String)
inline dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* JsonUtility_FromJson_Tisdental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9_mFFD9BAA6D46A629007E10A89A4E5618D319881A6 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void dental3JsonManager/dental3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonData_printSentences_mC392C6833E3DD21E281671118B62567ABE6A1A52 (dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<ENT1JsonManager/ENT1JsonDataArray>(System.String)
inline ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* JsonUtility_FromJson_TisENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887_m07C2D65F5A9C9F13C056146F8E45A4E55CD46B96 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void ENT1JsonManager/ENT1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonData_printSentences_m6E3F8568CC5E9505C119AC4CCE3F97E30AD2630A (ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<ENT2JsonManager/ENT2JsonDataArray>(System.String)
inline ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* JsonUtility_FromJson_TisENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4_mBDD846C014D56437197167F283739B269A9AE9B5 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void ENT2JsonManager/ENT2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonData_printSentences_mFA48F6D88982382C6C7D7CFCBC4B73A05D59E59B (ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<ENT3JsonManager/ENT3JsonDataArray>(System.String)
inline ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* JsonUtility_FromJson_TisENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD_mC5209C10FF07FDFC05888A0A0CC80936830E146A (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void ENT3JsonManager/ENT3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonData_printSentences_m05AB8D9B02471B4C344B66D3E071B42C4F02D228 (ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* __this, const RuntimeMethod* method) ;
// System.Void Dialogue::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_StartDialogue_mB184D799DF0E29FF321F6380E2D121CD1B47EAA3 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Dialogue::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_NextLine_m93993E6C289F51D27EBF0125BF50F5C2BE3D53C9 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Dialogue::TypeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dialogue_TypeLine_m557EBE124E78572895094542B74DCF16693CDDF6 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Dialogue/<TypeLine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__7__ctor_m1E48BDD6BB2D21C76FF27746FC6CFE4585B5947D (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<OPH1JsonManager/OPH1JsonDataArray>(System.String)
inline OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* JsonUtility_FromJson_TisOPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173_m0091004D42AFE09708629AF74C6C68D6F246F43E (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void OPH1JsonManager/OPH1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonData_printSentences_m89A109253124FA91038B06F45A1B3C61E847DBB8 (OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<OPH2JsonManager/OPH2JsonDataArray>(System.String)
inline OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* JsonUtility_FromJson_TisOPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883_m0FA1548E7A65FA097FF1E3B07D0AEB6205B472E5 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void OPH2JsonManager/OPH2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonData_printSentences_m0B75AD69B5C7AE8DC1747CE076296F90E2E69898 (OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<OPH3JsonManager/OPH3JsonDataArray>(System.String)
inline OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* JsonUtility_FromJson_TisOPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C_m4DFC4DDA052995A9F48F2F82F7CD8DF2D0BC08CA (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void OPH3JsonManager/OPH3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonData_printSentences_m0F1A7401E5C0C8627ACFFB7DA1936B9D1D66E831 (OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Dental::OnDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_OnDoubleClick_m4E4A9EA7EE82221FF9F9E560A6DD675317473818 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void ENT::OnDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_OnDoubleClick_mB50A617804DA9A841345EEEC8A3F390A11C71EDF (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Eye>()
inline Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Eye::OnClickContinue1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue1_m88E8CD73A98FCC89E921A284FEC58841C5CF3AB4 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) ;
// System.Void Eye::OnClickContinue2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue2_m782EFB49E73C55E8E5C54019E49BD47681EC04F5 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) ;
// System.Void Eye::OnClickContinue3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue3_m28CD088652430EDBEE5A9D1D78C82153AC733E9F (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Main_Manager>()
inline Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* Object_FindObjectOfType_TisMain_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_mC0D41D3A39A4FCB9AA07CB934AE62C39A9B4E3DE (const RuntimeMethod* method)
{
	return ((  Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Main_Manager::DontDestroyObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_DontDestroyObjects_m13509C0E31DF29DEEBC24DF1A3244078A9C735F5 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SoundManager::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_m05C485B3FA1816CB339B5C81DFA99E1ADA11A7F3 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, String_t* ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
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
// System.Void dental1JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonManager_start_m725E7A9024422E10BB305B63AC0C1F2BACD73A47 (dental1JsonManager_t79BE850D8B5AB0ED392A661675282ED1BF775218* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_Tisdental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC_m6CA9EC97D9EAC6688239E7056D4F4405CB750109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9380716FA8CB7F3638BABAC3770ECA354FE3DF85);
		s_Il2CppMethodInitialized = true;
	}
	dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* V_0 = NULL;
	dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("dental1.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral9380716FA8CB7F3638BABAC3770ECA354FE3DF85, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// dental1JsonDataArray dental1List = JsonUtility.FromJson<dental1JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* L_2;
		L_2 = JsonUtility_FromJson_Tisdental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC_m6CA9EC97D9EAC6688239E7056D4F4405CB750109(L_1, JsonUtility_FromJson_Tisdental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC_m6CA9EC97D9EAC6688239E7056D4F4405CB750109_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (dental1JsonData it in dental1List.dental1)
		dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* L_3 = V_0;
		NullCheck(L_3);
		dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6* L_4 = L_3->___dental1_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (dental1JsonData it in dental1List.dental1)
		dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		dental1JsonData_printSentences_m0C068006834C473B8A880D43083E6A0F83616F77(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (dental1JsonData it in dental1List.dental1)
		int32_t L_10 = V_2;
		dental1JsonDataU5BU5D_t1D5824A2B8343C57D1CB0BAC4F985E730132F7E6* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(dental1List);
		dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void dental1JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonManager__ctor_mCA90ADD076C7FC968A52092B335D1386D649D17F (dental1JsonManager_t79BE850D8B5AB0ED392A661675282ED1BF775218* __this, const RuntimeMethod* method) 
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
// System.Void dental1JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m51847079079461B38989A59A5743C26EDFFD0BE8 (sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* __this, const RuntimeMethod* method) 
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
// System.Void dental1JsonManager/dental1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonData_printSentences_m0C068006834C473B8A880D43083E6A0F83616F77 (dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t6EAAE2B4142CF1FDCF2997ADD2C74E92305E0836* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t0D459144020584DE16DA9C768E907C50C7CDEE90* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void dental1JsonManager/dental1JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonData__ctor_m48FC557A49ADD8742FD71140D574E17A5E1A61A9 (dental1JsonData_t62B27ED795C450BDA956FB304FB98AF4C14BF989* __this, const RuntimeMethod* method) 
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
// System.Void dental1JsonManager/dental1JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental1JsonDataArray__ctor_mB07CBF1C46A787A4FF5E357DF00E2552DCF5C051 (dental1JsonDataArray_tCFB2C4E4B7BC13528DD383AC037192F2F7D785AC* __this, const RuntimeMethod* method) 
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
// System.Void dental2JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonManager_start_m9B3A353E1C37FBE3D93CB31C4BC2F88257C0E2AF (dental2JsonManager_tD7BA11037BD7F7A9A0CB9EC65FE0B78652B4B3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_Tisdental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714_m79B24AD900460D6FA07738ABCFF5AEB2A766353C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C7955314CC8AAC4C1D7FA8004714015C0054A8);
		s_Il2CppMethodInitialized = true;
	}
	dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* V_0 = NULL;
	dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("dental2.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral20C7955314CC8AAC4C1D7FA8004714015C0054A8, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// dental2JsonDataArray dental2List = JsonUtility.FromJson<dental2JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* L_2;
		L_2 = JsonUtility_FromJson_Tisdental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714_m79B24AD900460D6FA07738ABCFF5AEB2A766353C(L_1, JsonUtility_FromJson_Tisdental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714_m79B24AD900460D6FA07738ABCFF5AEB2A766353C_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (dental2JsonData it in dental2List.dental2)
		dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* L_3 = V_0;
		NullCheck(L_3);
		dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58* L_4 = L_3->___dental2_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (dental2JsonData it in dental2List.dental2)
		dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		dental2JsonData_printSentences_m1257267B79DEA1AED9FA798150B1A6C74E60F8E7(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (dental2JsonData it in dental2List.dental2)
		int32_t L_10 = V_2;
		dental2JsonDataU5BU5D_t578CC38D8D2B3A73C49F9628F22632A581E23B58* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(dental2List);
		dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void dental2JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonManager__ctor_m1BE9C8F1016275CE53796F445466BCBCE0D8FF8E (dental2JsonManager_tD7BA11037BD7F7A9A0CB9EC65FE0B78652B4B3A9* __this, const RuntimeMethod* method) 
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
// System.Void dental2JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_mF4B7252A76C1FCC7F2C493E65E3CFB2ABCDC9935 (sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* __this, const RuntimeMethod* method) 
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
// System.Void dental2JsonManager/dental2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonData_printSentences_m1257267B79DEA1AED9FA798150B1A6C74E60F8E7 (dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t95734618D9C6E32AD7324D033BE16C11E376261D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t8236E9A4CBD37E66005F19F0BB20F78AB01555A6* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void dental2JsonManager/dental2JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonData__ctor_m07C7325BFA1CD56FC3DE323A0DDEA4AD2E76F7CE (dental2JsonData_tED4BD3D5631BB93E5AD6DD23FDBC723B90376302* __this, const RuntimeMethod* method) 
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
// System.Void dental2JsonManager/dental2JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental2JsonDataArray__ctor_m88465187C6FAEBED24597E4636A086EC0768FEE3 (dental2JsonDataArray_tBA9F1E5B3FA18CC2A360C33E19A619335B00D714* __this, const RuntimeMethod* method) 
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
// System.Void dental3JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonManager_start_m155612C70769566750B6DD75365A34AB7E64E64D (dental3JsonManager_t9084DEA8252E7A7704C2DE509051F319AC4CE855* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_Tisdental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9_mFFD9BAA6D46A629007E10A89A4E5618D319881A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300E6D786ADB51B4D50AAA026278E74D5AC3DBEC);
		s_Il2CppMethodInitialized = true;
	}
	dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* V_0 = NULL;
	dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("dental3.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral300E6D786ADB51B4D50AAA026278E74D5AC3DBEC, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// dental3JsonDataArray dental3List = JsonUtility.FromJson<dental3JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* L_2;
		L_2 = JsonUtility_FromJson_Tisdental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9_mFFD9BAA6D46A629007E10A89A4E5618D319881A6(L_1, JsonUtility_FromJson_Tisdental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9_mFFD9BAA6D46A629007E10A89A4E5618D319881A6_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (dental3JsonData it in dental3List.dental3)
		dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* L_3 = V_0;
		NullCheck(L_3);
		dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7* L_4 = L_3->___dental3_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (dental3JsonData it in dental3List.dental3)
		dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		dental3JsonData_printSentences_mC392C6833E3DD21E281671118B62567ABE6A1A52(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (dental3JsonData it in dental3List.dental3)
		int32_t L_10 = V_2;
		dental3JsonDataU5BU5D_tF218FF53F1F1FBCB78FF6B22B888785189AB16E7* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(dental3List);
		dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void dental3JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonManager__ctor_m47B7FEC57BBD77F45396033A6DE317CF463381E5 (dental3JsonManager_t9084DEA8252E7A7704C2DE509051F319AC4CE855* __this, const RuntimeMethod* method) 
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
// System.Void dental3JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m61722DB09A3AD355469B5F2998D041EC8356121B (sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* __this, const RuntimeMethod* method) 
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
// System.Void dental3JsonManager/dental3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonData_printSentences_mC392C6833E3DD21E281671118B62567ABE6A1A52 (dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t46FB094CEDF0685F0746C9EDF61C83209285A330* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_tC2CBDD82597D0E0741C48063178FC531618B0CDC* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void dental3JsonManager/dental3JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonData__ctor_m6EA6F9279CDD4E2B7921EEA6BA3768FFB2355AE8 (dental3JsonData_t337D34EF3F6ACAD432B9E5599D75C5C05E6ED449* __this, const RuntimeMethod* method) 
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
// System.Void dental3JsonManager/dental3JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dental3JsonDataArray__ctor_mF855BA8787C597569CAB827082143160AE7E3B2D (dental3JsonDataArray_t6CD4793B245FDF387B448688865BFD1C92C0A6D9* __this, const RuntimeMethod* method) 
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
// System.Void ENT1JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonManager_start_mB43D8F939E2C58081B677EC6FE979EBD75ED7AAE (ENT1JsonManager_tCB207849924B70634E352F74D0DA3B00D27E7AE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887_m07C2D65F5A9C9F13C056146F8E45A4E55CD46B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A3F5A2CB6D5179935620160499AEE25B6CD6EC4);
		s_Il2CppMethodInitialized = true;
	}
	ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* V_0 = NULL;
	ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("ENT1.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral2A3F5A2CB6D5179935620160499AEE25B6CD6EC4, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// ENT1JsonDataArray ENT1List = JsonUtility.FromJson<ENT1JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* L_2;
		L_2 = JsonUtility_FromJson_TisENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887_m07C2D65F5A9C9F13C056146F8E45A4E55CD46B96(L_1, JsonUtility_FromJson_TisENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887_m07C2D65F5A9C9F13C056146F8E45A4E55CD46B96_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (ENT1JsonData it in ENT1List.ENT1)
		ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* L_3 = V_0;
		NullCheck(L_3);
		ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9* L_4 = L_3->___ENT1_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (ENT1JsonData it in ENT1List.ENT1)
		ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		ENT1JsonData_printSentences_m6E3F8568CC5E9505C119AC4CCE3F97E30AD2630A(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (ENT1JsonData it in ENT1List.ENT1)
		int32_t L_10 = V_2;
		ENT1JsonDataU5BU5D_tD2E59B223286ADBD0A1259F0EF926221B920CDD9* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(ENT1List);
		ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void ENT1JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonManager__ctor_m0BE53E8DBBBB6BC2A2D463E02A98B7D8D2437281 (ENT1JsonManager_tCB207849924B70634E352F74D0DA3B00D27E7AE5* __this, const RuntimeMethod* method) 
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
// System.Void ENT1JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m49A1A5572B64B2313FA3A936B58227EFA7913B75 (sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* __this, const RuntimeMethod* method) 
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
// System.Void ENT1JsonManager/ENT1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonData_printSentences_m6E3F8568CC5E9505C119AC4CCE3F97E30AD2630A (ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t03E6B82E1831924F7F6682DC4788C1DA416CE331* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t0EC12668ECDBBED232D43C635279DE80E6824A38* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ENT1JsonManager/ENT1JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonData__ctor_m7B7A65DE2C584C8E37F52EE95963548F19AFC745 (ENT1JsonData_tE4C8F8ACEA3FDF4914FC88DB60E660E0246BCAE0* __this, const RuntimeMethod* method) 
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
// System.Void ENT1JsonManager/ENT1JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT1JsonDataArray__ctor_m74B558699C9817D3887EE0BEFEA7A52563950D52 (ENT1JsonDataArray_t6EEB0432008BA9572E8CF0C5FF37CA94AA6A3887* __this, const RuntimeMethod* method) 
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
// System.Void ENT2JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonManager_start_mB3037FEA4408E17DF7DC1CA51FED93833490CA56 (ENT2JsonManager_t85299D6EAADCF4676255B1C0AE6855F8F4871DCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4_mBDD846C014D56437197167F283739B269A9AE9B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68E31A4A6665153C300B39F380BEB36B0159A4CE);
		s_Il2CppMethodInitialized = true;
	}
	ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* V_0 = NULL;
	ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("ENT2.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral68E31A4A6665153C300B39F380BEB36B0159A4CE, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// ENT2JsonDataArray ENT2List = JsonUtility.FromJson<ENT2JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* L_2;
		L_2 = JsonUtility_FromJson_TisENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4_mBDD846C014D56437197167F283739B269A9AE9B5(L_1, JsonUtility_FromJson_TisENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4_mBDD846C014D56437197167F283739B269A9AE9B5_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (ENT2JsonData it in ENT2List.ENT2)
		ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* L_3 = V_0;
		NullCheck(L_3);
		ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C* L_4 = L_3->___ENT2_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (ENT2JsonData it in ENT2List.ENT2)
		ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		ENT2JsonData_printSentences_mFA48F6D88982382C6C7D7CFCBC4B73A05D59E59B(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (ENT2JsonData it in ENT2List.ENT2)
		int32_t L_10 = V_2;
		ENT2JsonDataU5BU5D_tCE7DCB588D781648823FF845F1D5AD9E7959C91C* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(ENT2List);
		ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void ENT2JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonManager__ctor_m5B0F3F85A772140DF3D9F9EDBEF9F7248DD1C1A7 (ENT2JsonManager_t85299D6EAADCF4676255B1C0AE6855F8F4871DCF* __this, const RuntimeMethod* method) 
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
// System.Void ENT2JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m1CE5713E39279DC482787F5312D556923D763929 (sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* __this, const RuntimeMethod* method) 
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
// System.Void ENT2JsonManager/ENT2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonData_printSentences_mFA48F6D88982382C6C7D7CFCBC4B73A05D59E59B (ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t96FC4A998A5D60F7611E575EC312B659F9A2716D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t29B56B193E27E96B73244A79F13450360D844DB0* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ENT2JsonManager/ENT2JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonData__ctor_m38260E6DA6395985A2F0E424CA21868A754B5E37 (ENT2JsonData_t41215842C4AA14289B5EEB5ACDD17D581F25265D* __this, const RuntimeMethod* method) 
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
// System.Void ENT2JsonManager/ENT2JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT2JsonDataArray__ctor_m44C859119C12BE87A923D137F51BF428BDAFF7FF (ENT2JsonDataArray_t48492CB7FF856A79BB51F860E3D41626B823B3B4* __this, const RuntimeMethod* method) 
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
// System.Void ENT3JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonManager_start_m8E55204EA5A2B859296B49E941562CF1AE8247C3 (ENT3JsonManager_t3F2E4E581325FAC8940D6D1667EAF46B1252714E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD_mC5209C10FF07FDFC05888A0A0CC80936830E146A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA3DE5351C4C66906D92094C83122D65DF65413E);
		s_Il2CppMethodInitialized = true;
	}
	ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* V_0 = NULL;
	ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("ENT3.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralAA3DE5351C4C66906D92094C83122D65DF65413E, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// ENT3JsonDataArray ENT3List = JsonUtility.FromJson<ENT3JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* L_2;
		L_2 = JsonUtility_FromJson_TisENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD_mC5209C10FF07FDFC05888A0A0CC80936830E146A(L_1, JsonUtility_FromJson_TisENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD_mC5209C10FF07FDFC05888A0A0CC80936830E146A_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (ENT3JsonData it in ENT3List.ENT3)
		ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* L_3 = V_0;
		NullCheck(L_3);
		ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7* L_4 = L_3->___ENT3_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (ENT3JsonData it in ENT3List.ENT3)
		ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		ENT3JsonData_printSentences_m05AB8D9B02471B4C344B66D3E071B42C4F02D228(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (ENT3JsonData it in ENT3List.ENT3)
		int32_t L_10 = V_2;
		ENT3JsonDataU5BU5D_t3ED11135BAFD5EBD750A8B1DCF0AF5B79710BDD7* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(ENT3List);
		ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void ENT3JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonManager__ctor_m61646C7EA1F3B059A9A458E4BDF5EAA2BCC52A86 (ENT3JsonManager_t3F2E4E581325FAC8940D6D1667EAF46B1252714E* __this, const RuntimeMethod* method) 
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
// System.Void ENT3JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_mA9854ADF5F30749F51CF3C512ADB6F3987B9FF74 (sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* __this, const RuntimeMethod* method) 
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
// System.Void ENT3JsonManager/ENT3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonData_printSentences_m05AB8D9B02471B4C344B66D3E071B42C4F02D228 (ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_tEB3022D8AFE06DEF1570917E984C72DF57F8810F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t5A960364DDF18910E5E9B0CCF422A203F18193F0* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ENT3JsonManager/ENT3JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonData__ctor_m9424C965EC378B6FEF65350A4003EEBB7375634A (ENT3JsonData_tF2391CAC36BF327322C99553F34777F1F805856A* __this, const RuntimeMethod* method) 
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
// System.Void ENT3JsonManager/ENT3JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT3JsonDataArray__ctor_m8E04090B45231799BE0CBA393783B6C6B70F027F (ENT3JsonDataArray_t23A3175E4CDB3F2456CE7ED9084B8F46CA7B35AD* __this, const RuntimeMethod* method) 
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
// System.Void Dialogue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Start_m13418F24BA6BCA19C31321CEDAD769692B9DF4A0 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textComponent.text = string.Empty;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textComponent_4;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// StartDialogue();
		Dialogue_StartDialogue_mB184D799DF0E29FF321F6380E2D121CD1B47EAA3(__this, NULL);
		// }
		return;
	}
}
// System.Void Dialogue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Update_m116CA0FF534A74AC41864E0C0A7664EF33A50DEB (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (textComponent.text == lines[index])
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___textComponent_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___lines_5;
		int32_t L_4 = __this->___index_7;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// NextLine();
		Dialogue_NextLine_m93993E6C289F51D27EBF0125BF50F5C2BE3D53C9(__this, NULL);
		return;
	}

IL_002e:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// textComponent.text = lines[index];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___textComponent_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___lines_5;
		int32_t L_10 = __this->___index_7;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_12);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Dialogue::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_StartDialogue_mB184D799DF0E29FF321F6380E2D121CD1B47EAA3 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	{
		// index = 0;
		__this->___index_7 = 0;
		// StartCoroutine(TypeLine());
		RuntimeObject* L_0;
		L_0 = Dialogue_TypeLine_m557EBE124E78572895094542B74DCF16693CDDF6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dialogue::TypeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dialogue_TypeLine_m557EBE124E78572895094542B74DCF16693CDDF6 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* L_0 = (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF*)il2cpp_codegen_object_new(U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTypeLineU3Ed__7__ctor_m1E48BDD6BB2D21C76FF27746FC6CFE4585B5947D(L_0, 0, NULL);
		U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Dialogue::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_NextLine_m93993E6C289F51D27EBF0125BF50F5C2BE3D53C9 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index < lines.Length - 1)
		int32_t L_0 = __this->___index_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___lines_5;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0048;
		}
	}
	{
		// index++;
		int32_t L_2 = __this->___index_7;
		__this->___index_7 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// textComponent.text += string.Empty;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___textComponent_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_4);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// StartCoroutine(TypeLine());
		RuntimeObject* L_8;
		L_8 = Dialogue_TypeLine_m557EBE124E78572895094542B74DCF16693CDDF6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue__ctor_m0FCF351AA72166AF74CE3A4F57EBD8287702FAC7 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
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
// System.Void Dialogue/<TypeLine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__7__ctor_m1E48BDD6BB2D21C76FF27746FC6CFE4585B5947D (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dialogue/<TypeLine>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__7_System_IDisposable_Dispose_mA11F2833332530A27EFCF2215A68DEE968DF214B (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dialogue/<TypeLine>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeLineU3Ed__7_MoveNext_m10DB559861BD2B47667E01476A69AC3A07AEA4C5 (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (char c in lines[index].ToCharArray()) {
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_4 = V_1;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___lines_5;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___index_7;
		NullCheck(L_5);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10;
		L_10 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_9, NULL);
		__this->___U3CU3E7__wrap1_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_10);
		__this->___U3CU3E7__wrap2_4 = 0;
		goto IL_0099;
	}

IL_003f:
	{
		// foreach (char c in lines[index].ToCharArray()) {
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___U3CU3E7__wrap1_3;
		int32_t L_12 = __this->___U3CU3E7__wrap2_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// textComponent.text += c;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_15 = V_1;
		NullCheck(L_15);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = L_15->___textComponent_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_17);
		String_t* L_19;
		L_19 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_19, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_20);
		// yield return new WaitForSeconds(textSpeed);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->___textSpeed_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, L_22, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_24 = __this->___U3CU3E7__wrap2_4;
		__this->___U3CU3E7__wrap2_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0099:
	{
		// foreach (char c in lines[index].ToCharArray()) {
		int32_t L_25 = __this->___U3CU3E7__wrap2_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		__this->___U3CU3E7__wrap1_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Dialogue/<TypeLine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeLineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m297131B25C63119CF6C60E5D40B409DB47483C24 (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dialogue/<TypeLine>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__7_System_Collections_IEnumerator_Reset_m323D8250C8D73D47DF8247E1721D04DF8EE02FA9 (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeLineU3Ed__7_System_Collections_IEnumerator_Reset_m323D8250C8D73D47DF8247E1721D04DF8EE02FA9_RuntimeMethod_var)));
	}
}
// System.Object Dialogue/<TypeLine>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeLineU3Ed__7_System_Collections_IEnumerator_get_Current_m49DA1BA659B976326035BDD497D689AE5D9F649F (U3CTypeLineU3Ed__7_t74FA718115D447EBB4785BB261814438AE1417FF* __this, const RuntimeMethod* method) 
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
// System.Void OPH1JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonManager_start_m02F21B090711C69138C03E5DC6E0003E75A8E6FA (OPH1JsonManager_t92C8121AA3E0F4C721E1EE5519036CF6D69949EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173_m0091004D42AFE09708629AF74C6C68D6F246F43E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D2387B8CF807E1484C07780CA9D0ADDF04F0DAA);
		s_Il2CppMethodInitialized = true;
	}
	OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* V_0 = NULL;
	OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("OPH1.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral1D2387B8CF807E1484C07780CA9D0ADDF04F0DAA, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// OPH1JsonDataArray OPH1List = JsonUtility.FromJson<OPH1JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* L_2;
		L_2 = JsonUtility_FromJson_TisOPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173_m0091004D42AFE09708629AF74C6C68D6F246F43E(L_1, JsonUtility_FromJson_TisOPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173_m0091004D42AFE09708629AF74C6C68D6F246F43E_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (OPH1JsonData it in OPH1List.OPH1)
		OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* L_3 = V_0;
		NullCheck(L_3);
		OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07* L_4 = L_3->___OPH1_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (OPH1JsonData it in OPH1List.OPH1)
		OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		OPH1JsonData_printSentences_m89A109253124FA91038B06F45A1B3C61E847DBB8(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (OPH1JsonData it in OPH1List.OPH1)
		int32_t L_10 = V_2;
		OPH1JsonDataU5BU5D_t04B16446437CF5FC9B5B1411EEC802D7F6D23B07* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(OPH1List);
		OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void OPH1JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonManager__ctor_m630F4366E9F55D117A35ECD7FFB62134A2219401 (OPH1JsonManager_t92C8121AA3E0F4C721E1EE5519036CF6D69949EA* __this, const RuntimeMethod* method) 
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
// System.Void OPH1JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m729936A7F71E6E0523548EDBF7A5845DF37DB902 (sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* __this, const RuntimeMethod* method) 
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
// System.Void OPH1JsonManager/OPH1JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonData_printSentences_m89A109253124FA91038B06F45A1B3C61E847DBB8 (OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t10EA9C8B91F9C95F57402F266979FE2932B35820* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t4DAC220ED75562500E460C79BA68BD73F590F372* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OPH1JsonManager/OPH1JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonData__ctor_mDCD02B71F228E9E67A08D3BF99E4FE7D097C1A99 (OPH1JsonData_tC66FA933C1F4D019EE8BA6173B321201DFDC0256* __this, const RuntimeMethod* method) 
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
// System.Void OPH1JsonManager/OPH1JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH1JsonDataArray__ctor_mECB531BF2BCAEEE5F810EDA3396E6AD27B1C84E8 (OPH1JsonDataArray_tC25139BF95F858C13FB4F8824D60E7CE8979A173* __this, const RuntimeMethod* method) 
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
// System.Void OPH2JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonManager_start_mAA533FD61F2382A0AE9B066AAC2939DBDCFCFC46 (OPH2JsonManager_t396A36E03F2A04ABD11AE7E91B13FC74BC984C0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883_m0FA1548E7A65FA097FF1E3B07D0AEB6205B472E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205C0325E4CEC0670AC4F785084E979CFB71FA20);
		s_Il2CppMethodInitialized = true;
	}
	OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* V_0 = NULL;
	OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("OPH2.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral205C0325E4CEC0670AC4F785084E979CFB71FA20, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// OPH2JsonDataArray OPH2List = JsonUtility.FromJson<OPH2JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* L_2;
		L_2 = JsonUtility_FromJson_TisOPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883_m0FA1548E7A65FA097FF1E3B07D0AEB6205B472E5(L_1, JsonUtility_FromJson_TisOPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883_m0FA1548E7A65FA097FF1E3B07D0AEB6205B472E5_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (OPH2JsonData it in OPH2List.OPH2)
		OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* L_3 = V_0;
		NullCheck(L_3);
		OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411* L_4 = L_3->___OPH2_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (OPH2JsonData it in OPH2List.OPH2)
		OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		OPH2JsonData_printSentences_m0B75AD69B5C7AE8DC1747CE076296F90E2E69898(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (OPH2JsonData it in OPH2List.OPH2)
		int32_t L_10 = V_2;
		OPH2JsonDataU5BU5D_t56F03284D58804E1AAF3A0BD622BEFCD1D04E411* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(OPH2List);
		OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void OPH2JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonManager__ctor_m5A366D0E10D15CA5F2570229C0F8A0FFEC5B9432 (OPH2JsonManager_t396A36E03F2A04ABD11AE7E91B13FC74BC984C0E* __this, const RuntimeMethod* method) 
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
// System.Void OPH2JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_mF665CFADF99067463856C508E59CD7FA927CFCA3 (sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* __this, const RuntimeMethod* method) 
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
// System.Void OPH2JsonManager/OPH2JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonData_printSentences_m0B75AD69B5C7AE8DC1747CE076296F90E2E69898 (OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t3E60088CF34E0281870E8C328606ACE3D0AFF7E4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t8A10D7AE0CB2F9FB204173A4E1CC0FE6AFEB869F* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OPH2JsonManager/OPH2JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonData__ctor_m827809894D4D044D1AF5088E4C6388491B50A774 (OPH2JsonData_t5DF5220D1F2A8F44C5B9C76A65D13CD92772EEEC* __this, const RuntimeMethod* method) 
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
// System.Void OPH2JsonManager/OPH2JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH2JsonDataArray__ctor_m8A9F7E0C10546C918DA38B3D41CD5083D9215DB1 (OPH2JsonDataArray_t134D734FB0223E2A0833F3B3AE6C3CEC22D07883* __this, const RuntimeMethod* method) 
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
// System.Void OPH3JsonManager::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonManager_start_mFCBB068BFE08B9D6B5092ECB53A0C5D647CD4F18 (OPH3JsonManager_tA5302E03F6ACF20E07307914CD878FB2BF991E83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C_m4DFC4DDA052995A9F48F2F82F7CD8DF2D0BC08CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78CBC85E729FE003E6B1653D4EE502A49CE26BED);
		s_Il2CppMethodInitialized = true;
	}
	OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* V_0 = NULL;
	OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TextAsset textAsset = Resources.Load<TextAsset>("OPH3.json");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral78CBC85E729FE003E6B1653D4EE502A49CE26BED, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		// OPH3JsonDataArray OPH3List = JsonUtility.FromJson<OPH3JsonDataArray>(textAsset.text);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* L_2;
		L_2 = JsonUtility_FromJson_TisOPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C_m4DFC4DDA052995A9F48F2F82F7CD8DF2D0BC08CA(L_1, JsonUtility_FromJson_TisOPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C_m4DFC4DDA052995A9F48F2F82F7CD8DF2D0BC08CA_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (OPH3JsonData it in OPH3List.OPH3)
		OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* L_3 = V_0;
		NullCheck(L_3);
		OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E* L_4 = L_3->___OPH3_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (OPH3JsonData it in OPH3List.OPH3)
		OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// it.printSentences();
		NullCheck(L_8);
		OPH3JsonData_printSentences_m0F1A7401E5C0C8627ACFFB7DA1936B9D1D66E831(L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (OPH3JsonData it in OPH3List.OPH3)
		int32_t L_10 = V_2;
		OPH3JsonDataU5BU5D_t59868C6093A8982C04FC64159A8081A0E24B1E1E* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// string classtoJson = JsonUtility.ToJson(OPH3List);
		OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_12, NULL);
		// Debug.Log(classtoJson);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void OPH3JsonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonManager__ctor_mA5D4A02A09B9A199424797F18FDD6B88012C785E (OPH3JsonManager_tA5302E03F6ACF20E07307914CD878FB2BF991E83* __this, const RuntimeMethod* method) 
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
// System.Void OPH3JsonManager/sentences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sentences__ctor_m2231926C29439CF7694456502A755CEA80D10D30 (sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* __this, const RuntimeMethod* method) 
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
// System.Void OPH3JsonManager/OPH3JsonData::printSentences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonData_printSentences_m0F1A7401E5C0C8627ACFFB7DA1936B9D1D66E831 (OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Debug.Log(name);
		String_t* L_0 = __this->___name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(scene);
		int32_t L_1 = __this->___scene_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(scripts[i].content);
		sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D* L_4 = __this->___scripts_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		sentences_t9BF88D5E5BD76C019155E9FFB82834C6F8C52DD1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___content_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		sentencesU5BU5D_t3D3B2C31798051F41FE855245356E12B6F23A21D* L_11 = __this->___scripts_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OPH3JsonManager/OPH3JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonData__ctor_mF3DE74694BFB5D2D030E8CD590DDD2FC50FD915C (OPH3JsonData_t416C196B426E9BD6EDE99C1224C4FAA47F2B8154* __this, const RuntimeMethod* method) 
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
// System.Void OPH3JsonManager/OPH3JsonDataArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OPH3JsonDataArray__ctor_m8878805EA7E263C27C67322239DE2D787616C8BE (OPH3JsonDataArray_t110D449A474B2CDAAFABD9804E0F37F51647AB5C* __this, const RuntimeMethod* method) 
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
// System.Void ClickBookIcon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickBookIcon_Start_m6AC662EB7F58B60E9EC5AFAE2308796FF3F3E8D0 (ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClickBookIcon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickBookIcon_Update_mDA3B2C0324417E47A370AF879ECC72AAE7E8CE2C (ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClickBookIcon::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickBookIcon_OnClick_mF8D42CBEE033D8E783FBB84D44BFBFD604CEBAEA (ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		V_0 = L_1;
		// if(clickObject == DentalBookIcon1 || clickObject.name == "BookNextBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___DentalBookIcon1_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA, NULL);
		if (!L_7)
		{
			goto IL_009c;
		}
	}

IL_002b:
	{
		// Debug.Log("??? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(idx);
		int32_t L_8 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// Mission1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Mission1_10;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Book_7;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (idx != 3)
		int32_t L_13 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0082;
		}
	}
	{
		// BookStart[idx].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___BookStart_8;
		int32_t L_15 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// idx++;
		int32_t L_18 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0082:
	{
		// if (idx == 3) //???? ??????
		int32_t L_19 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}
	{
		// Mission1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___Mission1_10;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// idx = 0;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = 0;
	}

IL_009c:
	{
		// if (clickObject == DentalBookIcon2 || clickObject.name == "BookNextBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___DentalBookIcon2_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, L_22, NULL);
		if (L_23)
		{
			goto IL_00bc;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA, NULL);
		if (!L_26)
		{
			goto IL_012d;
		}
	}

IL_00bc:
	{
		// Debug.Log("??? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(idx);
		int32_t L_27 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
		// Mission2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___Mission2_11;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___Book_7;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// if (idx != 3)
		int32_t L_32 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_0113;
		}
	}
	{
		// BookStart[idx].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = __this->___BookStart_8;
		int32_t L_34 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// idx++;
		int32_t L_37 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0113:
	{
		// if (idx == 3) //???? ??????
		int32_t L_38 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((!(((uint32_t)L_38) == ((uint32_t)3))))
		{
			goto IL_012d;
		}
	}
	{
		// Mission2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___Mission2_11;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// idx = 0;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = 0;
	}

IL_012d:
	{
		// if (clickObject == DentalBookIcon3 || clickObject.name == "BookNextBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___DentalBookIcon3_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_40, L_41, NULL);
		if (L_42)
		{
			goto IL_014d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_43, NULL);
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA, NULL);
		if (!L_45)
		{
			goto IL_01be;
		}
	}

IL_014d:
	{
		// Debug.Log("??? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(idx);
		int32_t L_46 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
		// Mission3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___Mission3_12;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___Book_7;
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// if (idx != 3)
		int32_t L_51 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((((int32_t)L_51) == ((int32_t)3)))
		{
			goto IL_01a4;
		}
	}
	{
		// BookStart[idx].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___BookStart_8;
		int32_t L_53 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)1, NULL);
		// idx++;
		int32_t L_56 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_01a4:
	{
		// if (idx == 3) //???? ??????
		int32_t L_57 = ((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9;
		if ((!(((uint32_t)L_57) == ((uint32_t)3))))
		{
			goto IL_01be;
		}
	}
	{
		// Mission3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___Mission3_12;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// idx = 0;
		((ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_StaticFields*)il2cpp_codegen_static_fields_for(ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4_il2cpp_TypeInfo_var))->___idx_9 = 0;
	}

IL_01be:
	{
		// }
		return;
	}
}
// System.Void ClickBookIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickBookIcon__ctor_mF417110565AB0631D60CD67CE2BE95C2754BC5CA (ClickBookIcon_t75CD7066F5967021BC84F3FE07D58E37600CAFA4* __this, const RuntimeMethod* method) 
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
// System.Void Dental::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_Start_m2DF69A87BACC52DFDCC9DF8540DAF94CDEA628D5 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Dental::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_Update_mB1615C4956EF9E2C52654C8785E89EB96524FF34 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Dental::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_OnClick_mBEB537C74440B3F9C631FA9D03F15A67F3DBDE99 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral310623D13396388CA076C0AA5F0AFBCF372126A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10C78AD53D2C15C95B4E4155574E3AAEB36043E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEA18BB8FCB6667C11D1C2171877A09453249B88);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		V_0 = L_1;
		// if (cnt == 0 && clickObject.name == "DentalCard1")
		int32_t L_2 = __this->___cnt_25;
		if (L_2)
		{
			goto IL_00c0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralAEA18BB8FCB6667C11D1C2171877A09453249B88, NULL);
		if (!L_5)
		{
			goto IL_00c0;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___DentalCard1_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___DentalCard2_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___DentalCard3_6;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// SelectedCard = DentalCard1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___DentalCard1_4;
		__this->___SelectedCard_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_9);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___SelectedCard_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		V_1 = L_12;
		// position.x = 0;
		(&V_1)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SelectedCard_7;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___SelectedCard_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
	}

IL_00c0:
	{
		// if (cnt == 0 && clickObject.name == "DentalCard2")
		int32_t L_19 = __this->___cnt_25;
		if (L_19)
		{
			goto IL_0175;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral310623D13396388CA076C0AA5F0AFBCF372126A3, NULL);
		if (!L_22)
		{
			goto IL_0175;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___DentalCard1_4;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___DentalCard2_5;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___DentalCard3_6;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// SelectedCard = DentalCard2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___DentalCard2_5;
		__this->___SelectedCard_7 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_26);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___SelectedCard_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		V_2 = L_29;
		// position.x = 0;
		(&V_2)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_2)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___SelectedCard_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		NullCheck(L_31);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_32, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_33, L_34, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___SelectedCard_7;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
	}

IL_0175:
	{
		// if (cnt == 0 && clickObject.name == "DentalCard3")
		int32_t L_36 = __this->___cnt_25;
		if (L_36)
		{
			goto IL_022a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_37, NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralA10C78AD53D2C15C95B4E4155574E3AAEB36043E, NULL);
		if (!L_39)
		{
			goto IL_022a;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___DentalCard1_4;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___DentalCard2_5;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___DentalCard3_6;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// SelectedCard = DentalCard3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___DentalCard3_6;
		__this->___SelectedCard_7 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_43);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___SelectedCard_7;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_45, NULL);
		V_3 = L_46;
		// position.x = 0;
		(&V_3)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_3)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___SelectedCard_7;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		NullCheck(L_48);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_49, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_51, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___SelectedCard_7;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
	}

IL_022a:
	{
		// cnt++;
		int32_t L_53 = __this->___cnt_25;
		__this->___cnt_25 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// Debug.Log("Click " + cnt);
		int32_t* L_54 = (&__this->___cnt_25);
		String_t* L_55;
		L_55 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_54, NULL);
		String_t* L_56;
		L_56 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51, L_55, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_56, NULL);
		// if(cnt == 2)
		int32_t L_57 = __this->___cnt_25;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0261;
		}
	}
	{
		// OnDoubleClick();
		Dental_OnDoubleClick_m4E4A9EA7EE82221FF9F9E560A6DD675317473818(__this, NULL);
	}

IL_0261:
	{
		// }
		return;
	}
}
// System.Void Dental::OnDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_OnDoubleClick_m4E4A9EA7EE82221FF9F9E560A6DD675317473818 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral310623D13396388CA076C0AA5F0AFBCF372126A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10C78AD53D2C15C95B4E4155574E3AAEB36043E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEA18BB8FCB6667C11D1C2171877A09453249B88);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	{
		// Debug.Log("Double Click " + cnt);
		int32_t* L_0 = (&__this->___cnt_25);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_3, NULL);
		// if (clickObj.name == "DentalCard1" && SelectedCard == DentalCard1 && cnt == 2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralAEA18BB8FCB6667C11D1C2171877A09453249B88, NULL);
		G_B1_0 = L_5;
		if (!L_7)
		{
			G_B4_0 = L_5;
			goto IL_0108;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___DentalCard1_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_9, NULL);
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B4_0 = G_B1_0;
			goto IL_0108;
		}
	}
	{
		int32_t L_11 = __this->___cnt_25;
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			G_B4_0 = G_B2_0;
			goto IL_0108;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___DentalCard1_4;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___DentalCard2_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___DentalCard3_6;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// SelectedCard = DentalCard1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___DentalCard1_4;
		__this->___SelectedCard_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_15);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___SelectedCard_7;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// position.x = 100;
		(&V_0)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_0)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___SelectedCard_7;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_21, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___SelectedCard_7;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// SelectedCard.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___SelectedCard_7;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___Book_8;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0108:
	{
		// if (clickObj.name == "DentalCard2" && SelectedCard == DentalCard2 && cnt == 2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = G_B4_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral310623D13396388CA076C0AA5F0AFBCF372126A3, NULL);
		G_B5_0 = L_27;
		if (!L_29)
		{
			G_B8_0 = L_27;
			goto IL_01ec;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___DentalCard2_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, L_31, NULL);
		G_B6_0 = G_B5_0;
		if (!L_32)
		{
			G_B8_0 = G_B5_0;
			goto IL_01ec;
		}
	}
	{
		int32_t L_33 = __this->___cnt_25;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_01ec;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___DentalCard1_4;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___DentalCard2_5;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___DentalCard3_6;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// SelectedCard = DentalCard2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___DentalCard2_5;
		__this->___SelectedCard_7 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_37);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___SelectedCard_7;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_39, NULL);
		V_1 = L_40;
		// position.x = 100;
		(&V_1)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_1)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___SelectedCard_7;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		NullCheck(L_42);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_42, L_43, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_44, L_45, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___SelectedCard_7;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// SelectedCard.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___SelectedCard_7;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___Book_8;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		G_B8_0 = G_B7_0;
	}

IL_01ec:
	{
		// if (clickObj.name == "DentalCard3" && SelectedCard == DentalCard3 && cnt == 2)
		NullCheck(G_B8_0);
		String_t* L_49;
		L_49 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B8_0, NULL);
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralA10C78AD53D2C15C95B4E4155574E3AAEB36043E, NULL);
		if (!L_50)
		{
			goto IL_02cf;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___DentalCard3_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_02cf;
		}
	}
	{
		int32_t L_54 = __this->___cnt_25;
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_02cf;
		}
	}
	{
		// DentalCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___DentalCard1_4;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// DentalCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___DentalCard2_5;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// DentalCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___DentalCard3_6;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)0, NULL);
		// SelectedCard = DentalCard3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___DentalCard3_6;
		__this->___SelectedCard_7 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_58);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___SelectedCard_7;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_60, NULL);
		V_2 = L_61;
		// position.x = 100;
		(&V_2)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_2)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___SelectedCard_7;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_2;
		NullCheck(L_63);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_63, L_64, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_65, L_66, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___SelectedCard_7;
		NullCheck(L_67);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_67, (bool)1, NULL);
		// SelectedCard.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = __this->___SelectedCard_7;
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___Book_8;
		NullCheck(L_69);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, (bool)1, NULL);
	}

IL_02cf:
	{
		// cnt++;
		int32_t L_70 = __this->___cnt_25;
		__this->___cnt_25 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		// }
		return;
	}
}
// System.Void Dental::B1ToM1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_B1ToM1_m4C33A223FE8240761852AE116A3CA7459855770A (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission1_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SelectedCard = DentalCard1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DentalCard1_4;
		__this->___SelectedCard_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_2);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SelectedCard_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
		// position.x = 100;
		(&V_0)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_0)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SelectedCard_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___SelectedCard_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Dental::B2ToM4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_B2ToM4_mDBF712C78F813CC9B1AA7593DD2098692FC060DC (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission4.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission4_13;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SelectedCard = DentalCard2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DentalCard2_5;
		__this->___SelectedCard_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_2);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SelectedCard_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
		// position.x = 100;
		(&V_0)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_0)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SelectedCard_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___SelectedCard_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Dental::B3ToM7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_B3ToM7_m257F208023A82AA5FA2B0B0FDF46E8B224B5EE0F (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission7.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission7_16;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SelectedCard = DentalCard3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DentalCard3_6;
		__this->___SelectedCard_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_2);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SelectedCard_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
		// position.x = 100;
		(&V_0)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_0)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SelectedCard_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___SelectedCard_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Dental::OnNextClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental_OnNextClick_mD2344C3D6C578F5C536AAFD8AAC4BFDC08D6A769 (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2947123CF6EF7C9EF9214C23CDB20DA89D35D279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CF5012D076690326462A2235B6C0FC450A30F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42641586B738DA95A3E25A583E0F650553A68801);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715B6AD467FF9B57DBCC4B5426A99ABB2AF29439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1EF3FEE977B59347F599F160C5A5AE482D31282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF624EDA56BCA9D6EB3CD873E5547D97FF080995D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	{
		// GameObject obj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (obj.name == "BookNextBtn1")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF624EDA56BCA9D6EB3CD873E5547D97FF080995D, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B5_0 = L_2;
			goto IL_008b;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_5 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___BookStart_9;
		int32_t L_9 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// index++;
		int32_t L_12 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// if (index != 3) // ??? ? ???
		int32_t L_13 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			G_B3_0 = G_B1_0;
			goto IL_006d;
		}
	}
	{
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___BookStart_9;
		int32_t L_15 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		G_B3_0 = G_B2_0;
	}

IL_006d:
	{
		// if(index == 3) //??? ???
		int32_t L_18 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			G_B5_0 = G_B3_0;
			goto IL_008b;
		}
	}
	{
		// Invoke("B1ToM1", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2947123CF6EF7C9EF9214C23CDB20DA89D35D279, (0.0199999996f), NULL);
		// index = 0;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = 0;
		G_B5_0 = G_B4_0;
	}

IL_008b:
	{
		// if (obj.name == "BookNextBtn2")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = G_B5_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral42641586B738DA95A3E25A583E0F650553A68801, NULL);
		G_B6_0 = L_19;
		if (!L_21)
		{
			G_B10_0 = L_19;
			goto IL_010c;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_22 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___BookStart_9;
		int32_t L_26 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// index++;
		int32_t L_29 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		// if (index != 3) // ??? ? ???
		int32_t L_30 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = G_B6_0;
			goto IL_00ee;
		}
	}
	{
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___BookStart_9;
		int32_t L_32 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)1, NULL);
		G_B8_0 = G_B7_0;
	}

IL_00ee:
	{
		// if (index == 3) //??? ???
		int32_t L_35 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		G_B9_0 = G_B8_0;
		if ((!(((uint32_t)L_35) == ((uint32_t)3))))
		{
			G_B10_0 = G_B8_0;
			goto IL_010c;
		}
	}
	{
		// Invoke("B2ToM4", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC1EF3FEE977B59347F599F160C5A5AE482D31282, (0.0199999996f), NULL);
		// index = 0;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = 0;
		G_B10_0 = G_B9_0;
	}

IL_010c:
	{
		// if (obj.name == "BookNextBtn3")
		NullCheck(G_B10_0);
		String_t* L_36;
		L_36 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B10_0, NULL);
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral37CF5012D076690326462A2235B6C0FC450A30F6, NULL);
		if (!L_37)
		{
			goto IL_018c;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_38 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_40, NULL);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_41 = __this->___BookStart_9;
		int32_t L_42 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)0, NULL);
		// index++;
		int32_t L_45 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		// if (index != 3) // ??? ? ???
		int32_t L_46 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		if ((((int32_t)L_46) == ((int32_t)3)))
		{
			goto IL_016e;
		}
	}
	{
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___BookStart_9;
		int32_t L_48 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
	}

IL_016e:
	{
		// if (index == 3) //??? ???
		int32_t L_51 = ((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26;
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_018c;
		}
	}
	{
		// Invoke("B3ToM7", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral715B6AD467FF9B57DBCC4B5426A99ABB2AF29439, (0.0199999996f), NULL);
		// index = 0;
		((Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_StaticFields*)il2cpp_codegen_static_fields_for(Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14_il2cpp_TypeInfo_var))->___index_26 = 0;
	}

IL_018c:
	{
		// }
		return;
	}
}
// System.Void Dental::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dental__ctor_m1E2B8BA163803B1AD738CF5E12B60F18FF90B38D (Dental_tDFEC465BF501DE5DFD34C701D8313125DE9ACD14* __this, const RuntimeMethod* method) 
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
// System.Void DentalMission::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_Awake_mB21F0172EED4B4C825AEE32C8108B10DFF4D0B8A (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	{
		// startingPos.x = transform.position.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___startingPos_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		L_0->___x_0 = L_3;
		// startingPos.y = transform.position.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___startingPos_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		L_4->___y_1 = L_7;
		// }
		return;
	}
}
// System.Void DentalMission::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_Start_m3588BB882557CA77570AEBD5BE807153B50F6342 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DentalMission::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_Update_m6EE0F7BB3F8292ED06C7BCF4471D792CCB08B756 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DentalMission::OnM1Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_OnM1Click_mFC4339C42620F7A2E626AE1F30C6DAA385FF8D88 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC9A4B841D1C9B60155BE8091BC4A1D6FB4BD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObject == M1_Eye) // X ???? ?? ??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M1_Eye_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0034;
		}
	}
	{
		// M1_XBtn1.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M1_XBtn1_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B2_0 = G_B1_0;
	}

IL_0034:
	{
		// if (clickObject == M1_ENT) // X ???? ?? ??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___M1_ENT_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		G_B3_0 = L_7;
		if (!L_9)
		{
			G_B4_0 = L_7;
			goto IL_005e;
		}
	}
	{
		// M1_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___M1_XBtn2_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___GuardianPetText_13;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B4_0 = G_B3_0;
	}

IL_005e:
	{
		// if (clickObject == M1_Dental) // O ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___M1_Dental_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_12, NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		// M1_OBtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___M1_OBtn_10;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// Invoke("M1ToM2", 0.2f); // ?? ?? ?? NextMission ?? ??
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2DC9A4B841D1C9B60155BE8091BC4A1D6FB4BD4F, (0.200000003f), NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void DentalMission::M1ToM2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_M1ToM2_m696C7B35BC56C69A5F551D09BE8EF6ACAD19073B (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	{
		// M1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___M1_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// M2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___M2_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DentalMission::M2ToM3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_M2ToM3_mF5D2EBE0F9208BF33480CF9B001AA8B736B20380 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	{
		// M2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___M2_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// M3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___M3_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DentalMission::OnM2Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_OnM2Click_mBEC4393C6D4A2AAE37F6D6978F545795BE6C42D0 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66873A93D663483E4FDDBB18519F66E769B722FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M2_O)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M2_O_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_007e;
		}
	}
	{
		// M2_X.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M2_X_15;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// Vector3 position = M2_O.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___M2_O_14;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		V_0 = L_9;
		// position.x = 1780;
		(&V_0)->___x_2 = (1780.0f);
		// position.y = 1870;
		(&V_0)->___y_3 = (1870.0f);
		// M2_O.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___M2_O_14;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_12, NULL);
		// Invoke("M2ToM3", 0.2f); // ?? ?? ?? NextMission ?? ??
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral66873A93D663483E4FDDBB18519F66E769B722FA, (0.200000003f), NULL);
		G_B2_0 = G_B1_0;
	}

IL_007e:
	{
		// if (clickObj == M2_X)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___M2_X_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B2_0, L_13, NULL);
		if (!L_14)
		{
			goto IL_00f4;
		}
	}
	{
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___GuardianPetText_13;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		// Vector3 position = M2_X.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___M2_X_15;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_1 = L_18;
		// position.x = 2500;
		(&V_1)->___x_2 = (2500.0f);
		// position.y = 1870;
		(&V_1)->___y_3 = (1870.0f);
		// M2_X.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___M2_X_15;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_21, NULL);
		// transform.localScale = new Vector3(3f, 3f, 3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (3.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void DentalMission::OnM3Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission_OnM3Click_m029723246D43B53488BE053DC0A13C8BC3C713A4 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M3_DCard1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M3_DCard1_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0034;
		}
	}
	{
		// M3_XBtn1.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M3_XBtn1_20;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B2_0 = G_B1_0;
	}

IL_0034:
	{
		// if (clickObj == M3_DCard2) // -> ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___M3_DCard2_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		G_B3_0 = L_7;
		if (!L_9)
		{
			G_B4_0 = L_7;
			goto IL_0076;
		}
	}
	{
		// M3_OBtn.SetActive(true); // O??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___M3_OBtn_19;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___GuardianPetText_13;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// M3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___M3_6;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// Success1.SetActive(true); // ->
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___Success1_22;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0076:
	{
		// if (clickObj == M3_DCard3)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___M3_DCard3_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_14, NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// M3_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___M3_XBtn2_21;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___GuardianPetText_13;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void DentalMission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DentalMission__ctor_mF79341E7D59AB2C3D9BC08686B1E69F306D1FFA0 (DentalMission_tA399525C3B7A559C8EA1D5EC8A10337EBC433643* __this, const RuntimeMethod* method) 
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
// System.Void DontDestroyObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyObject_Awake_m039A587C49DBA1471622BBC36658F697D5E5ED3A (DontDestroyObject_t2171253D48744DF1A764B81F3CB8551B8EED78C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___obj_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// }
		return;
	}
}
// System.Void DontDestroyObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyObject__ctor_mBFDDC33F792580A1D354F220F10C8B9503B8C10A (DontDestroyObject_t2171253D48744DF1A764B81F3CB8551B8EED78C9* __this, const RuntimeMethod* method) 
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
// System.Void ENT::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_Start_m150AE69CABF341DAC1EB413A3A5D04F8B0A7BC43 (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ENT::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_Update_mCDA461B6F39A50C542C9F53656D901AE0C2FDE5A (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ENT::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_OnClick_m47A986BEA62EBD17AD8E162BAA8745EC03064494 (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE3C0E7EC344F9B6E2FF05C0AFAAD678CD3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723346033D743416CEF8FD1542DA301C5B051E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793350AD031A3527ECBA207958C5863B373244CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		V_0 = L_1;
		// if (cnt == 0 && clickObject.name == "ENTCard1")
		int32_t L_2 = __this->___cnt_21;
		if (L_2)
		{
			goto IL_00c0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral793350AD031A3527ECBA207958C5863B373244CC, NULL);
		if (!L_5)
		{
			goto IL_00c0;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___ENTCard1_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ENTCard2_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___ENTCard3_6;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// SelectedCard = ENTCard1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ENTCard1_4;
		__this->___SelectedCard_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_9);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___SelectedCard_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		V_1 = L_12;
		// position.x = 0;
		(&V_1)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SelectedCard_7;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___SelectedCard_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
	}

IL_00c0:
	{
		// if (cnt == 0 && clickObject.name == "ENTCard2")
		int32_t L_19 = __this->___cnt_21;
		if (L_19)
		{
			goto IL_0175;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral00AE3C0E7EC344F9B6E2FF05C0AFAAD678CD3701, NULL);
		if (!L_22)
		{
			goto IL_0175;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___ENTCard1_4;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___ENTCard2_5;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___ENTCard3_6;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// SelectedCard = ENTCard2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___ENTCard2_5;
		__this->___SelectedCard_7 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_26);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___SelectedCard_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		V_2 = L_29;
		// position.x = 0;
		(&V_2)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_2)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___SelectedCard_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		NullCheck(L_31);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_32, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_33, L_34, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___SelectedCard_7;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
	}

IL_0175:
	{
		// if (cnt == 0 && clickObject.name == "ENTCard3")
		int32_t L_36 = __this->___cnt_21;
		if (L_36)
		{
			goto IL_022a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_37, NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral723346033D743416CEF8FD1542DA301C5B051E8A, NULL);
		if (!L_39)
		{
			goto IL_022a;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___ENTCard1_4;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___ENTCard2_5;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___ENTCard3_6;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// SelectedCard = ENTCard3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___ENTCard3_6;
		__this->___SelectedCard_7 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_43);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___SelectedCard_7;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_45, NULL);
		V_3 = L_46;
		// position.x = 0;
		(&V_3)->___x_2 = (0.0f);
		// position.y = 0;
		(&V_3)->___y_3 = (0.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___SelectedCard_7;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		NullCheck(L_48);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_49, NULL);
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_51, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___SelectedCard_7;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
	}

IL_022a:
	{
		// cnt++;
		int32_t L_53 = __this->___cnt_21;
		__this->___cnt_21 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// Debug.Log("Click " + cnt);
		int32_t* L_54 = (&__this->___cnt_21);
		String_t* L_55;
		L_55 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_54, NULL);
		String_t* L_56;
		L_56 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51, L_55, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_56, NULL);
		// if (cnt == 2)
		int32_t L_57 = __this->___cnt_21;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0261;
		}
	}
	{
		// OnDoubleClick();
		ENT_OnDoubleClick_mB50A617804DA9A841345EEEC8A3F390A11C71EDF(__this, NULL);
	}

IL_0261:
	{
		// }
		return;
	}
}
// System.Void ENT::OnDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_OnDoubleClick_mB50A617804DA9A841345EEEC8A3F390A11C71EDF (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE3C0E7EC344F9B6E2FF05C0AFAAD678CD3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723346033D743416CEF8FD1542DA301C5B051E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793350AD031A3527ECBA207958C5863B373244CC);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	{
		// Debug.Log("Double Click " + cnt);
		int32_t* L_0 = (&__this->___cnt_21);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_3, NULL);
		// if (clickObj.name == "ENTCard1" && SelectedCard == ENTCard1 && cnt == 2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral793350AD031A3527ECBA207958C5863B373244CC, NULL);
		G_B1_0 = L_5;
		if (!L_7)
		{
			G_B4_0 = L_5;
			goto IL_00fc;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ENTCard1_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_9, NULL);
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B4_0 = G_B1_0;
			goto IL_00fc;
		}
	}
	{
		int32_t L_11 = __this->___cnt_21;
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			G_B4_0 = G_B2_0;
			goto IL_00fc;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___ENTCard1_4;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___ENTCard2_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___ENTCard3_6;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// SelectedCard = ENTCard1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___ENTCard1_4;
		__this->___SelectedCard_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_15);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___SelectedCard_7;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// position.x = 100;
		(&V_0)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_0)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___SelectedCard_7;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_21, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___SelectedCard_7;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Book_8;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		G_B4_0 = G_B3_0;
	}

IL_00fc:
	{
		// if (clickObj.name == "ENTCard2" && SelectedCard == ENTCard2 && cnt == 2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = G_B4_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral00AE3C0E7EC344F9B6E2FF05C0AFAAD678CD3701, NULL);
		G_B5_0 = L_26;
		if (!L_28)
		{
			G_B8_0 = L_26;
			goto IL_01d4;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___ENTCard2_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, L_30, NULL);
		G_B6_0 = G_B5_0;
		if (!L_31)
		{
			G_B8_0 = G_B5_0;
			goto IL_01d4;
		}
	}
	{
		int32_t L_32 = __this->___cnt_21;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_01d4;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___ENTCard1_4;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___ENTCard2_5;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___ENTCard3_6;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// SelectedCard = ENTCard2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___ENTCard2_5;
		__this->___SelectedCard_7 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_36);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___SelectedCard_7;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_38, NULL);
		V_1 = L_39;
		// position.x = 100;
		(&V_1)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_1)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___SelectedCard_7;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		NullCheck(L_41);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_41, L_42, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_44, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___SelectedCard_7;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___Book_8;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		G_B8_0 = G_B7_0;
	}

IL_01d4:
	{
		// if (clickObj.name == "ENTCard3" && SelectedCard == ENTCard3 && cnt == 2)
		NullCheck(G_B8_0);
		String_t* L_47;
		L_47 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B8_0, NULL);
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral723346033D743416CEF8FD1542DA301C5B051E8A, NULL);
		if (!L_48)
		{
			goto IL_02ab;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___SelectedCard_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___ENTCard3_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_49, L_50, NULL);
		if (!L_51)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_52 = __this->___cnt_21;
		if ((!(((uint32_t)L_52) == ((uint32_t)2))))
		{
			goto IL_02ab;
		}
	}
	{
		// ENTCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___ENTCard1_4;
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		// ENTCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___ENTCard2_5;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
		// ENTCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___ENTCard3_6;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// SelectedCard = ENTCard3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___ENTCard3_6;
		__this->___SelectedCard_7 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SelectedCard_7), (void*)L_56);
		// Vector3 position = SelectedCard.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___SelectedCard_7;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_58, NULL);
		V_2 = L_59;
		// position.x = 100;
		(&V_2)->___x_2 = (100.0f);
		// position.y = 950;
		(&V_2)->___y_3 = (950.0f);
		// SelectedCard.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___SelectedCard_7;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_2;
		NullCheck(L_61);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_61, L_62, NULL);
		// transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_63, L_64, NULL);
		// SelectedCard.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___SelectedCard_7;
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)1, NULL);
		// Book.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___Book_8;
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)1, NULL);
	}

IL_02ab:
	{
		// cnt++;
		int32_t L_67 = __this->___cnt_21;
		__this->___cnt_21 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		// }
		return;
	}
}
// System.Void ENT::OnNextClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT_OnNextClick_m0153F60CD8A6572680C3AD940E895E4B71877835 (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject obj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (obj.name == "BookNextBtn")
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral8EF98C8687913CA2FF90A9E6D0986514FE5A4EBA, NULL);
		// }
		return;
	}
}
// System.Void ENT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENT__ctor_m7BA96CA18AEC25BC4C25A259A1DF9A003659021B (ENT_tAB086580C29403C3BA41A291612FB2D2D0EA1759* __this, const RuntimeMethod* method) 
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
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
// System.Void Eye::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_Awake_mB0F90F15D39207E409F6E4E004D15663C16DD3E2 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	{
		// if (EyeCard1.activeSelf == true) // ?? ????? ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EyeCard1_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Success1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Success1_29;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// if (EyeCard2.activeSelf == true) // ?? ????? ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___EyeCard2_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Success2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Success2_30;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0032:
	{
		// if (EyeCard3.activeSelf == true) // ?? ????? ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___EyeCard3_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// Success3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Success3_31;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Eye::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClick_mBD10885C7CDB26C60DC73333379667225C80C1ED (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B7C868CF4E693FBF9345C98C6DE193FB2926F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F83D99741D9B7568D706DA4CFCCC93CDE9A91A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5A9840268950809864A4E413E1C8D8EEA20548A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB44CC5823FECD3EE44D958E8374826A21774F095);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObject.name == "EyeCard1")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralA5A9840268950809864A4E413E1C8D8EEA20548A, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_005c;
		}
	}
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___EyeCard1_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___EyeCard2_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___EyeCard3_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// SelectedCard1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___SelectedCard1_7;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___ChapterName_16;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		G_B2_0 = G_B1_0;
	}

IL_005c:
	{
		// if (clickObject.name == "EyeCard2")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B2_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral38B7C868CF4E693FBF9345C98C6DE193FB2926F6, NULL);
		G_B3_0 = L_10;
		if (!L_12)
		{
			G_B4_0 = L_10;
			goto IL_00ae;
		}
	}
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___EyeCard1_4;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___EyeCard2_5;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___EyeCard3_6;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// SelectedCard2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___SelectedCard2_8;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___ChapterName_16;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		G_B4_0 = G_B3_0;
	}

IL_00ae:
	{
		// if (clickObject.name == "EyeCard3") //cnt == 0 &&
		NullCheck(G_B4_0);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B4_0, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral4F83D99741D9B7568D706DA4CFCCC93CDE9A91A4, NULL);
		if (!L_19)
		{
			goto IL_00ff;
		}
	}
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___EyeCard1_4;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___EyeCard2_5;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___EyeCard3_6;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// SelectedCard3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___SelectedCard3_9;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// ChapterName.text = "?? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___ChapterName_16;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
	}

IL_00ff:
	{
		// cnt++;
		int32_t L_25 = __this->___cnt_32;
		__this->___cnt_32 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// Debug.Log("Click " + cnt);
		int32_t* L_26 = (&__this->___cnt_32);
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral984ABC9502C3728FD0D119D4280EC4BB86A68B51, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
		// if (cnt == 1)
		int32_t L_29 = __this->___cnt_32;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_0140;
		}
	}
	{
		// Invoke("OnDoubleClick", 2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB44CC5823FECD3EE44D958E8374826A21774F095, (2.0f), NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// System.Void Eye::OnDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnDoubleClick_m9DB67565534B165999242D9A5AC3F20C1033C1C0 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2277A540C7E8A8ADAF8023F1BAC0971CF5546557);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BD7EA7023563285ADB79037AB6F5C23C95F9BB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	{
		// Debug.Log("Double Click " + cnt);
		int32_t* L_0 = (&__this->___cnt_32);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7580A8624C4E8528F58AE520659C6B578B90991A, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_3, NULL);
		// SelectedCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SelectedCard1_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// SelectedCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SelectedCard2_8;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// SelectedCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___SelectedCard3_9;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// if (clickObj = SelectedCard1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___SelectedCard1_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		G_B1_0 = L_9;
		if (!L_10)
		{
			G_B4_0 = L_9;
			goto IL_00b6;
		}
	}
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___EyeCard1_4;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___EyeCard2_5;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___EyeCard3_6;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___Book_10;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// if (BookStart[0].activeSelf) // ?? ??(??!) OK
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___BookStart_15;
		NullCheck(L_15);
		int32_t L_16 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_17, NULL);
		G_B2_0 = G_B1_0;
		if (!L_18)
		{
			G_B3_0 = G_B1_0;
			goto IL_00a6;
		}
	}
	{
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___ChapterName_16;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		G_B3_0 = G_B2_0;
	}

IL_00a6:
	{
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___ChapterName_16;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		G_B4_0 = G_B3_0;
	}

IL_00b6:
	{
		// if (clickObj.name == "SelectedCard2")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = G_B4_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral2277A540C7E8A8ADAF8023F1BAC0971CF5546557, NULL);
		G_B5_0 = L_21;
		if (!L_23)
		{
			G_B7_0 = L_21;
			goto IL_0131;
		}
	}
	{
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___ChapterName_16;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___EyeCard1_4;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___EyeCard2_5;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___EyeCard3_6;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___Book_10;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// if (BookStart[1].activeSelf) // ?? ??(??!)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___BookStart_15;
		NullCheck(L_29);
		int32_t L_30 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		bool L_32;
		L_32 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_31, NULL);
		G_B6_0 = G_B5_0;
		if (!L_32)
		{
			G_B7_0 = G_B5_0;
			goto IL_0131;
		}
	}
	{
		// Debug.Log(".");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___ChapterName_16;
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		G_B7_0 = G_B6_0;
	}

IL_0131:
	{
		// if (clickObj.name == "SelectedCard3")
		NullCheck(G_B7_0);
		String_t* L_34;
		L_34 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B7_0, NULL);
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral6BD7EA7023563285ADB79037AB6F5C23C95F9BB9, NULL);
		if (!L_35)
		{
			goto IL_01a1;
		}
	}
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___EyeCard1_4;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___EyeCard2_5;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___EyeCard3_6;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// Book.SetActive(true); // ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___Book_10;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// if (BookStart[2].activeSelf) // ?? ??(??!)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___BookStart_15;
		NullCheck(L_40);
		int32_t L_41 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		bool L_43;
		L_43 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_42, NULL);
		if (!L_43)
		{
			goto IL_0191;
		}
	}
	{
		// ChapterName.text = "?? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___ChapterName_16;
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
	}

IL_0191:
	{
		// ChapterName.text = "?? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = __this->___ChapterName_16;
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
	}

IL_01a1:
	{
		// cnt++;
		int32_t L_46 = __this->___cnt_32;
		__this->___cnt_32 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		// }
		return;
	}
}
// System.Void Eye::B1ToM1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_B1ToM1_mB6AC3F70949C5708E7DB94677A137884905C7D23 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission1_17;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ChapterName_16;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		// }
		return;
	}
}
// System.Void Eye::B2ToM4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_B2ToM4_m309CA8D9BAE0B4A1EC9F844359A50CB8F15FCD93 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission4.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission4_20;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ChapterName_16;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		// }
		return;
	}
}
// System.Void Eye::B3ToM7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_B3ToM7_m88B61D6B07FF2CC0D702BDBE33CAC593DEC78287 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Book.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Book_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Mission7.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Mission7_23;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// ChapterName.text = "?? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ChapterName_16;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		// }
		return;
	}
}
// System.Void Eye::OnNextClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnNextClick_m0108FA3F1B2B58DC0714A7B776596123E2A84969 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2947123CF6EF7C9EF9214C23CDB20DA89D35D279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CF5012D076690326462A2235B6C0FC450A30F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42641586B738DA95A3E25A583E0F650553A68801);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715B6AD467FF9B57DBCC4B5426A99ABB2AF29439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1EF3FEE977B59347F599F160C5A5AE482D31282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF624EDA56BCA9D6EB3CD873E5547D97FF080995D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	{
		// GameObject obj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (obj.name == "BookNextBtn1")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF624EDA56BCA9D6EB3CD873E5547D97FF080995D, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B5_0 = L_2;
			goto IL_009b;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_5 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___ChapterName_16;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral5B92F840E566239AD12B0D8EC083972F129ECD18);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___BookStart_15;
		int32_t L_10 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// index++;
		int32_t L_13 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// if (index != 4) // ??? ? ???
		int32_t L_14 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_14) == ((int32_t)4)))
		{
			G_B3_0 = G_B1_0;
			goto IL_007d;
		}
	}
	{
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___BookStart_15;
		int32_t L_16 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		G_B3_0 = G_B2_0;
	}

IL_007d:
	{
		// if (index == 4) //??? ???
		int32_t L_19 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			G_B5_0 = G_B3_0;
			goto IL_009b;
		}
	}
	{
		// Invoke("B1ToM1", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2947123CF6EF7C9EF9214C23CDB20DA89D35D279, (0.0199999996f), NULL);
		// index = 0;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = 0;
		G_B5_0 = G_B4_0;
	}

IL_009b:
	{
		// if (obj.name == "BookNextBtn2")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = G_B5_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral42641586B738DA95A3E25A583E0F650553A68801, NULL);
		G_B6_0 = L_20;
		if (!L_22)
		{
			G_B10_0 = L_20;
			goto IL_012c;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_23 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
		// ChapterName.text = "?? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___ChapterName_16;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteralAB62C1BDEF048DDA23D870C118516299878AB9DD);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___BookStart_15;
		int32_t L_28 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// index++;
		int32_t L_31 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// if (index != 4) // ??? ? ???
		int32_t L_32 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_32) == ((int32_t)4)))
		{
			G_B8_0 = G_B6_0;
			goto IL_010e;
		}
	}
	{
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = __this->___BookStart_15;
		int32_t L_34 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		G_B8_0 = G_B7_0;
	}

IL_010e:
	{
		// if (index == 4) //??? ???
		int32_t L_37 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		G_B9_0 = G_B8_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)4))))
		{
			G_B10_0 = G_B8_0;
			goto IL_012c;
		}
	}
	{
		// Invoke("B2ToM4", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC1EF3FEE977B59347F599F160C5A5AE482D31282, (0.0199999996f), NULL);
		// index = 0;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = 0;
		G_B10_0 = G_B9_0;
	}

IL_012c:
	{
		// if (obj.name == "BookNextBtn3")
		NullCheck(G_B10_0);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B10_0, NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral37CF5012D076690326462A2235B6C0FC450A30F6, NULL);
		if (!L_39)
		{
			goto IL_01bc;
		}
	}
	{
		// Debug.Log("?? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7E7B7F570610E95AF8FC02983734500F7F687506, NULL);
		// Debug.Log(index);
		int32_t L_40 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_42, NULL);
		// BookStart[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = __this->___BookStart_15;
		int32_t L_44 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// index++;
		int32_t L_47 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		// if (index != 4) // ??? ? ???
		int32_t L_48 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		if ((((int32_t)L_48) == ((int32_t)4)))
		{
			goto IL_019e;
		}
	}
	{
		// ChapterName.text = "?? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = __this->___ChapterName_16;
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, _stringLiteralF0D532EE516473071B7AEB31320C1A3F0175E5DC);
		// BookStart[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_50 = __this->___BookStart_15;
		int32_t L_51 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
	}

IL_019e:
	{
		// if (index == 4) //??? ???
		int32_t L_54 = ((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33;
		if ((!(((uint32_t)L_54) == ((uint32_t)4))))
		{
			goto IL_01bc;
		}
	}
	{
		// Invoke("B3ToM7", 0.02f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral715B6AD467FF9B57DBCC4B5426A99ABB2AF29439, (0.0199999996f), NULL);
		// index = 0;
		((Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_StaticFields*)il2cpp_codegen_static_fields_for(Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_il2cpp_TypeInfo_var))->___index_33 = 0;
	}

IL_01bc:
	{
		// }
		return;
	}
}
// System.Void Eye::OnClickContinue1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue1_m88E8CD73A98FCC89E921A284FEC58841C5CF3AB4 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Success1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Success1_29;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (EyeMission.EyeState[1] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_1);
		int32_t L_2 = 1;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// EyeCard2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___EyeCard2_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_0030;
	}

IL_0024:
	{
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___EyeCard2_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0030:
	{
		// if (EyeMission.EyeState[2] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// EyeCard3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___EyeCard3_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___EyeCard3_6;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Eye::OnClickContinue2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue2_m782EFB49E73C55E8E5C54019E49BD47681EC04F5 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Success2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Success2_30;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (EyeMission.EyeState[0] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// EyeCard1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___EyeCard1_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_0030;
	}

IL_0024:
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___EyeCard1_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0030:
	{
		// if (EyeMission.EyeState[2] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// EyeCard3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___EyeCard3_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// EyeCard3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___EyeCard3_6;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Eye::OnClickContinue3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_OnClickContinue3_m28CD088652430EDBEE5A9D1D78C82153AC733E9F (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Success3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Success3_31;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (EyeMission.EyeState[0] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// EyeCard1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___EyeCard1_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_0030;
	}

IL_0024:
	{
		// EyeCard1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___EyeCard1_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0030:
	{
		// if (EyeMission.EyeState[1] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// EyeCard2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___EyeCard2_5;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// EyeCard2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___EyeCard2_5;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Eye::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye__ctor_m6C2D16C0C04900D679DC1FFEDC6A96D5B5513C74 (Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* __this, const RuntimeMethod* method) 
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
// System.Void EyeMission::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_Update_m0F280B0E59C6DF5ABF12F93B68F91171628414B0 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	{
		// startingPos.x = transform.position.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___startingPos_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		L_0->___x_0 = L_3;
		// startingPos.y = transform.position.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___startingPos_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		L_4->___y_1 = L_7;
		// }
		return;
	}
}
// System.Void EyeMission::OnM1Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_OnM1Click_m6C84DAFB2E18E4D552390BDB4737AEE2A53BF186 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC9A4B841D1C9B60155BE8091BC4A1D6FB4BD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObject == M1_Dental) // X ???? ?? ??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M1_Dental_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0034;
		}
	}
	{
		// M1_XBtn1.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M1_XBtn1_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B2_0 = G_B1_0;
	}

IL_0034:
	{
		// if (clickObject == M1_ENT) // X ???? ?? ??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___M1_ENT_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		G_B3_0 = L_7;
		if (!L_9)
		{
			G_B4_0 = L_7;
			goto IL_005e;
		}
	}
	{
		// M1_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___M1_XBtn2_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___GuardianPetText_13;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B4_0 = G_B3_0;
	}

IL_005e:
	{
		// if (clickObject == M1_Eye) // O ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___M1_Eye_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_12, NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		// M1_OBtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___M1_OBtn_10;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// Invoke("M1ToM2", 0.2f); // ?? ?? ?? NextMission ?? ??
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2DC9A4B841D1C9B60155BE8091BC4A1D6FB4BD4F, (0.200000003f), NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void EyeMission::M1ToM2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_M1ToM2_m6D3723A04C40666143FDF203ADB3FB6EE08291BA (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	{
		// M1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___M1_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// M2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___M2_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EyeMission::M2ToM3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_M2ToM3_m360A7150D52D37B8306AF12C170F8B4379B95189 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	{
		// M2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___M2_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// M3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___M3_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EyeMission::OnM2Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_OnM2Click_m4C253BCCC52C5934F2E83C3A474D184C5A3C1E43 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66873A93D663483E4FDDBB18519F66E769B722FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M2_O)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M2_O_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0038;
		}
	}
	{
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___GuardianPetText_13;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// Invoke("M2ToM3", 0.2f); // ?? ?? ?? NextMission ?? ??
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral66873A93D663483E4FDDBB18519F66E769B722FA, (0.200000003f), NULL);
		G_B2_0 = G_B1_0;
	}

IL_0038:
	{
		// if (clickObj == M2_X)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___M2_X_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B2_0, L_6, NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___GuardianPetText_13;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void EyeMission::OnM3Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_OnM3Click_m9F6AFF2D08F38D88F3D40476336073C0870B0DB9 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M3_DCard1)// -> ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M3_DCard1_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0054;
		}
	}
	{
		// M3_OBtn.SetActive(true); // O??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M3_OBtn_19;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// M3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___M3_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// EyeState[1] = 1;
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		// Success1.SetActive(true); // ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Success1_22;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0054:
	{
		// if (clickObj == M3_DCard2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___M3_DCard2_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		G_B3_0 = L_10;
		if (!L_12)
		{
			G_B4_0 = L_10;
			goto IL_007e;
		}
	}
	{
		// M3_XBtn1.SetActive(true);// X ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___M3_XBtn1_20;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___GuardianPetText_13;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B4_0 = G_B3_0;
	}

IL_007e:
	{
		// if (clickObj == M3_DCard3)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___M3_DCard3_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_15, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		// M3_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___M3_XBtn2_21;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___GuardianPetText_13;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void EyeMission::OnM6Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_OnM6Click_m5A93F4EF5F20DFF96CDE881D500AE54E1AE73920 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M3_DCard2)// -> ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M3_DCard2_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0054;
		}
	}
	{
		// M3_OBtn.SetActive(true); // O??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M3_OBtn_19;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// M3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___M3_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// EyeState[2] = 1;
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		// Success2.SetActive(true); // ->
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Success2_23;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0054:
	{
		// if (clickObj == M3_DCard1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___M3_DCard1_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		G_B3_0 = L_10;
		if (!L_12)
		{
			G_B4_0 = L_10;
			goto IL_007e;
		}
	}
	{
		// M3_XBtn1.SetActive(true);// X ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___M3_XBtn1_20;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___GuardianPetText_13;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B4_0 = G_B3_0;
	}

IL_007e:
	{
		// if (clickObj == M3_DCard3)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___M3_DCard3_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_15, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		// M3_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___M3_XBtn2_21;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___GuardianPetText_13;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void EyeMission::OnM9Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_OnM9Click_mD874592A67552F9D1BA234CA7ABAAD9206790995 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObj == M3_DCard3)// -> ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___M3_DCard3_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0054;
		}
	}
	{
		// M3_OBtn.SetActive(true); // O??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___M3_OBtn_19;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GuardianPetText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___GuardianPetText_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// M3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___M3_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// EyeState[2] = 1;
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		// Success3.SetActive(true); // ->
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Success3_24;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0054:
	{
		// if (clickObj == M3_DCard1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B2_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___M3_DCard1_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		G_B3_0 = L_10;
		if (!L_12)
		{
			G_B4_0 = L_10;
			goto IL_007e;
		}
	}
	{
		// M3_XBtn1.SetActive(true);// X ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___M3_XBtn1_20;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___GuardianPetText_13;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
		G_B4_0 = G_B3_0;
	}

IL_007e:
	{
		// if (clickObj == M3_DCard2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___M3_DCard2_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, L_15, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		// M3_XBtn2.SetActive(true); //X??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___M3_XBtn2_21;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// GuardianPetText.text = "?? ? ? ????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___GuardianPetText_13;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralBD378E01E26BB751860F583AFA30687F9CA1E299);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void EyeMission::ContinueGame1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_ContinueGame1_mDB857E1999729369A887190F140C850C15483416 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// Vector3 p = Success1.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Success1_22;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// p.x = -100;
		(&V_0)->___x_2 = (-100.0f);
		// p.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// Success1.transform.localPosition = p;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Success1_22;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// transform.localScale = new Vector3(3, 3f, 3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (3.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// Success1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Success1_22;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// clickObj.GetComponent<Eye>().OnClickContinue1();
		NullCheck(L_1);
		Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* L_11;
		L_11 = GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33(L_1, GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		NullCheck(L_11);
		Eye_OnClickContinue1_m88E8CD73A98FCC89E921A284FEC58841C5CF3AB4(L_11, NULL);
		// }
		return;
	}
}
// System.Void EyeMission::ContinueGame2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_ContinueGame2_m10BC186994C80BAED2AF857E0C068E7274F10212 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// Vector3 p = Success2.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Success2_23;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// p.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// p.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// Success2.transform.localPosition = p;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Success2_23;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// transform.localScale = new Vector3(1, 1f, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// Success2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Success2_23;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// clickObj.GetComponent<Eye>().OnClickContinue2();
		NullCheck(L_1);
		Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* L_11;
		L_11 = GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33(L_1, GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		NullCheck(L_11);
		Eye_OnClickContinue2_m782EFB49E73C55E8E5C54019E49BD47681EC04F5(L_11, NULL);
		// }
		return;
	}
}
// System.Void EyeMission::ContinueGame3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_ContinueGame3_m2CCEE1B3E29468DB706475955CF5A21B57DBC33A (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GameObject clickObj = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// Vector3 p = Success3.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Success3_24;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_0 = L_4;
		// p.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// p.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// Success1.transform.localPosition = p;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Success1_22;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// transform.localScale = new Vector3(1, 1f, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// Success3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Success3_24;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// clickObj.GetComponent<Eye>().OnClickContinue3();
		NullCheck(L_1);
		Eye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8* L_11;
		L_11 = GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33(L_1, GameObject_GetComponent_TisEye_t156C98A06C7F68BCF79367D9F962F3BAC32068C8_m0153DE13FFAE14754E3678BCFFAD91883946FE33_RuntimeMethod_var);
		NullCheck(L_11);
		Eye_OnClickContinue3_m28CD088652430EDBEE5A9D1D78C82153AC733E9F(L_11, NULL);
		// }
		return;
	}
}
// System.Void EyeMission::GoToMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission_GoToMain_mEEEAC87FDF52E3CA87BE76045E282FEA8CDD8F61 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034E25E228C872009461BAB471AC73EFDE442AC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EyeState[0] == 1 &&
		//     EyeState[1] == 1 &&
		//     EyeState[2] == 1)
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		// SceneManager.LoadScene("3_Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral034E25E228C872009461BAB471AC73EFDE442AC8, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void EyeMission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission__ctor_mB56E7EC511837BD82E22BA7679DA4337F12DA288 (EyeMission_t7C392984D95D6D985484DBADBDC541C404050508* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void EyeMission::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeMission__cctor_m92824C8DAFF5AE5477AAB19E7CA7E1E52B041178 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] EyeState = new int[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_StaticFields*)il2cpp_codegen_static_fields_for(EyeMission_t7C392984D95D6D985484DBADBDC541C404050508_il2cpp_TypeInfo_var))->___EyeState_26), (void*)L_0);
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
// Main_Manager Main_Manager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* Main_Manager_get_Instance_m81A4C9E889319B6775E7C083626D9A8F4D742256 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMain_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_mC0D41D3A39A4FCB9AA07CB934AE62C39A9B4E3DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_0 = ((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// instance = FindObjectOfType<Main_Manager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_2;
		L_2 = Object_FindObjectOfType_TisMain_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_mC0D41D3A39A4FCB9AA07CB934AE62C39A9B4E3DE(Object_FindObjectOfType_TisMain_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_mC0D41D3A39A4FCB9AA07CB934AE62C39A9B4E3DE_RuntimeMethod_var);
		((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6), (void*)L_2);
		// DontDestroyOnLoad(instance.gameObject);
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_3 = ((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
	}

IL_0026:
	{
		// return instance;
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_5 = ((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6;
		return L_5;
	}
}
// System.Void Main_Manager::ClearStage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_ClearStage_m489238C0C15F9E75CF610E544558CC0EE607C329 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, int32_t ___0_stage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stageClear = stage;
		int32_t L_0 = ___0_stage;
		__this->___stageClear_7 = L_0;
		// Debug.Log(stageClear);
		int32_t L_1 = __this->___stageClear_7;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Main_Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_Awake_m570AE34BB3615D9CF3F1E91AA49C2A72FF5962D8 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance != this)
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_0 = ((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* L_2 = ((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0026:
	{
		// instance = this;
		((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_StaticFields*)il2cpp_codegen_static_fields_for(Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// DontDestroyObjects();
		Main_Manager_DontDestroyObjects_m13509C0E31DF29DEEBC24DF1A3244078A9C735F5(__this, NULL);
		// }
		return;
	}
}
// System.Void Main_Manager::DontDestroyObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_DontDestroyObjects_m13509C0E31DF29DEEBC24DF1A3244078A9C735F5 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral339BE76147D804A617BE520A41BEA6F7160F3036);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___DontDestroy_Objects_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		// Debug.Log(obj.name + " added");
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral339BE76147D804A617BE520A41BEA6F7160F3036, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Main_Manager::DestroyObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_DestroyObj_m4D95014EF55AC21561E288E0A1F66C82AB7A2A5E (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___DontDestroy_Objects_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Destroy(obj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (GameObject obj in DontDestroy_Objects)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Main_Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager_Update_m8DCA36ACD6923AAC11A0AE65F4ADA093584AC1B3 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Main_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Manager__ctor_m1F60C652401964B048E85A87334CB1B98FA9C134 (Main_Manager_tFCE6BDED6452B3BCFDBFBFE977D7C0403F69EC0B* __this, const RuntimeMethod* method) 
{
	{
		// public int gameIndex = -1;
		__this->___gameIndex_4 = (-1);
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
// System.Void NextBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBtn_Start_m894FA656FE6795F7AB426EA1B0D10772D39F6F18 (NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextBtn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBtn_Update_m8E7FE17C2A00108E946F2FCCABA7AB526470A1D9 (NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextBtn::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBtn_OnClick_m973B82C636BF7BEB25BA3CCAEB24BE4FB42FC742 (NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBtn__ctor_m9F1772BEFA3D4774AFE090EEBF712BCC32B41B11 (NextBtn_t893C52906809FFDCEADD9D51E94DCD059949F69B* __this, const RuntimeMethod* method) 
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
// System.Void Setting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting_Start_m5C3357933AF507A1880FCD20D920E397589E28FA (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Setting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting_Update_m64CEA478218219AE353EACCA4E94AB5B2BF90D0B (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Setting::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting_OnClick_m2C24B4AB69A07C6E84C2EF8529002C862DD5950C (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F87AAA9C22BF699A0A8539E3DD8C6CE5208B9A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63B25ABFBC5ADE04C57244427C4A1E9793BB29DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FCF9054C99E820132EF02BB458DD3CF5D4B9333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CA200033C45ED493DC91A281FEA6C53CD9A1C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00C86C796EE193E5589EBF1B89F99A1A788D477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B6D4558994A310DA19832034E40885AED48412);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	{
		// GameObject clickObject = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// if (clickObject.name == "SettingBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral6FCF9054C99E820132EF02BB458DD3CF5D4B9333, NULL);
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0028;
		}
	}
	{
		// SettingPop.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SettingPop_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0028:
	{
		// if (clickObject.name == "XBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = G_B2_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral63B25ABFBC5ADE04C57244427C4A1E9793BB29DC, NULL);
		G_B3_0 = L_6;
		if (!L_8)
		{
			G_B4_0 = L_6;
			goto IL_0046;
		}
	}
	{
		// SettingPop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___SettingPop_4;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0046:
	{
		// if (clickObject.name == "SoundBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B4_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralF2B6D4558994A310DA19832034E40885AED48412, NULL);
		G_B5_0 = L_10;
		if (!L_12)
		{
			G_B6_0 = L_10;
			goto IL_0070;
		}
	}
	{
		// SettingPop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SettingPop_4;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// SoundPop.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___SoundPop_5;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0070:
	{
		// if (clickObject.name == "SoundXBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = G_B6_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF00C86C796EE193E5589EBF1B89F99A1A788D477, NULL);
		G_B7_0 = L_15;
		if (!L_17)
		{
			G_B8_0 = L_15;
			goto IL_008e;
		}
	}
	{
		// SoundPop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___SoundPop_5;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		G_B8_0 = G_B7_0;
	}

IL_008e:
	{
		// if (clickObject.name == "NotiBtn")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = G_B8_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB9CA200033C45ED493DC91A281FEA6C53CD9A1C7, NULL);
		// if (clickObject.name == "CardBtn")
		NullCheck(L_19);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral1F87AAA9C22BF699A0A8539E3DD8C6CE5208B9A2, NULL);
		// }
		return;
	}
}
// System.Void Setting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting__ctor_m69D54954D2B10B9ACE469F24F298AF9117769C51 (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08276941EEB20A84EEC8201D5517B5BC6614F458);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// sfx_player = GameObject.Find("Sfx Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral08276941EEB20A84EEC8201D5517B5BC6614F458, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfx_player_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfx_player_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void SoundManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Update_mE836A202DA1AB8232906E5EA81C39EFAE33AF286 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// PlaySound("Click");
		SoundManager_PlaySound_m05C485B3FA1816CB339B5C81DFA99E1ADA11A7F3(__this, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_m05C485B3FA1816CB339B5C81DFA99E1ADA11A7F3 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1E5828FC00957AB1E7641BE25BE1B1C974E930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB312764C29C08185D9C5E2F56F45C92EBC6EDDA7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = 0;
		V_0 = 0;
		String_t* L_0 = ___0_type;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2 = ___0_type;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0038;
	}

IL_001e:
	{
		// Debug.Log("?? ??? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB312764C29C08185D9C5E2F56F45C92EBC6EDDA7, NULL);
		// index = 0; break;
		V_0 = 0;
		// index = 0; break;
		goto IL_0038;
	}

IL_002c:
	{
		// Debug.Log("?? ??? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C1E5828FC00957AB1E7641BE25BE1B1C974E930, NULL);
		// index = 1; break;
		V_0 = 1;
	}

IL_0038:
	{
		// sfx_player.clip = audio_clips[index];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sfx_player_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___audio_clips_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_8, NULL);
		// sfx_player.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___sfx_player_6;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
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
