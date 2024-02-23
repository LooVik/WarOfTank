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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DataFetcher
struct DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191;
// DataFetcherParameters
struct DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// Mapbox.Directions.Directions
struct Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732;
// Mapbox.Geocoding.Geocoder
struct Geocoder_tE880599FC95DD6293DED4A92151328F14956C677;
// Mapbox.Map.Tile
struct Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0;
// Mapbox.Map.TileErrorEventArgs
struct TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4;
// Mapbox.Map.VectorTile
struct VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687;
// Mapbox.MapMatching.MapMatcher
struct MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t83AE426641B96D7F5F4F8635DCB0D33D1470F205;
// Mapbox.Platform.IFileSource
struct IFileSource_t41112CB9331B15ABEF849F1D8A37FA942C8AD0DE;
// Mapbox.Platform.TilesetTileJSON.TileJSON
struct TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742;
// Mapbox.Tokens.MapboxTokenApi
struct MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805;
// Mapbox.Unity.Map.Style
struct Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D;
// Mapbox.Unity.MapboxAccess/TokenValidationEvent
struct TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9;
// Mapbox.Unity.MapboxConfiguration
struct MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9;
// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923;
// Mapbox.Unity.Telemetry.ITelemetryLibrary
struct ITelemetryLibrary_t6035C35B96700C5E2EDABBFE5C3AF39B3A7B8C34;
// Mapbox.VectorTile.VectorTile
struct VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78;
// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t79A79A556E69BA20A09771D2D61B0440B6F4EFBA;
// System.Collections.Generic.List`1<Mapbox.Map.Tile>
struct List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4C99617DAC31689CEC0EDB09B067A65E80E1C3EA;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9;
// Utils.SerializableVector4
struct SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F;
// Utils.serializableARKitInit
struct serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4;
// Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51;
// Utils.serializablePointCloud
struct serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0;
// Utils.serializableSHC
struct serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6;
// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436;
// VectorDataFetcher
struct VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357;
// VectorDataFetcher/<>c
struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A;
// VectorDataFetcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15;
// VectorDataFetcherParameters
struct VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88;
// WaterBall
struct WaterBall_t84539382E579DE5F8CF8165BC1A8C21D42D6270B;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA25632F8F4FF9659997A848C2EBEEF27D0974164;
IL2CPP_EXTERN_C String_t* _stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameManager_get_Instance_m1284638729202F71BCEC9B4E82E81E0C0232B97FAssemblyU2DCSharp9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaterBall_OnTriggerEnter_mE00E1FE1552DC982192BF2483AA410D2D675D1AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaterBall_Start_mD0A05AC3CC3AE0E956A332287568A5D693AC5C94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mapbox.Unity.Map.Style
struct  Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714  : public RuntimeObject
{
public:
	// System.String Mapbox.Unity.Map.Style::Name
	String_t* ___Name_0;
	// System.String Mapbox.Unity.Map.Style::Id
	String_t* ___Id_1;
	// System.String Mapbox.Unity.Map.Style::Modified
	String_t* ___Modified_2;
	// System.String Mapbox.Unity.Map.Style::UserName
	String_t* ___UserName_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_Modified_2() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Modified_2)); }
	inline String_t* get_Modified_2() const { return ___Modified_2; }
	inline String_t** get_address_of_Modified_2() { return &___Modified_2; }
	inline void set_Modified_2(String_t* value)
	{
		___Modified_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modified_2), (void*)value);
	}

	inline static int32_t get_offset_of_UserName_3() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___UserName_3)); }
	inline String_t* get_UserName_3() const { return ___UserName_3; }
	inline String_t** get_address_of_UserName_3() { return &___UserName_3; }
	inline void set_UserName_3(String_t* value)
	{
		___UserName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserName_3), (void*)value);
	}
};


// Mapbox.Unity.MapboxAccess
struct  MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D  : public RuntimeObject
{
public:
	// Mapbox.Unity.Telemetry.ITelemetryLibrary Mapbox.Unity.MapboxAccess::_telemetryLibrary
	RuntimeObject* ____telemetryLibrary_0;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Unity.MapboxAccess::_fileSource
	CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * ____fileSource_1;
	// Mapbox.Unity.MapboxAccess_TokenValidationEvent Mapbox.Unity.MapboxAccess::OnTokenValidation
	TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * ___OnTokenValidation_2;
	// Mapbox.Unity.MapboxConfiguration Mapbox.Unity.MapboxAccess::_configuration
	MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * ____configuration_6;
	// System.String Mapbox.Unity.MapboxAccess::_tokenNotSetErrorMessage
	String_t* ____tokenNotSetErrorMessage_7;
	// Mapbox.Geocoding.Geocoder Mapbox.Unity.MapboxAccess::_geocoder
	Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * ____geocoder_8;
	// Mapbox.Directions.Directions Mapbox.Unity.MapboxAccess::_directions
	Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * ____directions_9;
	// Mapbox.MapMatching.MapMatcher Mapbox.Unity.MapboxAccess::_mapMatcher
	MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * ____mapMatcher_10;
	// Mapbox.Tokens.MapboxTokenApi Mapbox.Unity.MapboxAccess::_tokenValidator
	MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * ____tokenValidator_11;
	// Mapbox.Platform.TilesetTileJSON.TileJSON Mapbox.Unity.MapboxAccess::_tileJson
	TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * ____tileJson_12;

public:
	inline static int32_t get_offset_of__telemetryLibrary_0() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____telemetryLibrary_0)); }
	inline RuntimeObject* get__telemetryLibrary_0() const { return ____telemetryLibrary_0; }
	inline RuntimeObject** get_address_of__telemetryLibrary_0() { return &____telemetryLibrary_0; }
	inline void set__telemetryLibrary_0(RuntimeObject* value)
	{
		____telemetryLibrary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____telemetryLibrary_0), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_1() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____fileSource_1)); }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * get__fileSource_1() const { return ____fileSource_1; }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 ** get_address_of__fileSource_1() { return &____fileSource_1; }
	inline void set__fileSource_1(CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * value)
	{
		____fileSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnTokenValidation_2() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ___OnTokenValidation_2)); }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * get_OnTokenValidation_2() const { return ___OnTokenValidation_2; }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 ** get_address_of_OnTokenValidation_2() { return &___OnTokenValidation_2; }
	inline void set_OnTokenValidation_2(TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * value)
	{
		___OnTokenValidation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTokenValidation_2), (void*)value);
	}

	inline static int32_t get_offset_of__configuration_6() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____configuration_6)); }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * get__configuration_6() const { return ____configuration_6; }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 ** get_address_of__configuration_6() { return &____configuration_6; }
	inline void set__configuration_6(MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * value)
	{
		____configuration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configuration_6), (void*)value);
	}

	inline static int32_t get_offset_of__tokenNotSetErrorMessage_7() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenNotSetErrorMessage_7)); }
	inline String_t* get__tokenNotSetErrorMessage_7() const { return ____tokenNotSetErrorMessage_7; }
	inline String_t** get_address_of__tokenNotSetErrorMessage_7() { return &____tokenNotSetErrorMessage_7; }
	inline void set__tokenNotSetErrorMessage_7(String_t* value)
	{
		____tokenNotSetErrorMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenNotSetErrorMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of__geocoder_8() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____geocoder_8)); }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * get__geocoder_8() const { return ____geocoder_8; }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 ** get_address_of__geocoder_8() { return &____geocoder_8; }
	inline void set__geocoder_8(Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * value)
	{
		____geocoder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocoder_8), (void*)value);
	}

	inline static int32_t get_offset_of__directions_9() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____directions_9)); }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * get__directions_9() const { return ____directions_9; }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 ** get_address_of__directions_9() { return &____directions_9; }
	inline void set__directions_9(Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * value)
	{
		____directions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____directions_9), (void*)value);
	}

	inline static int32_t get_offset_of__mapMatcher_10() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____mapMatcher_10)); }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * get__mapMatcher_10() const { return ____mapMatcher_10; }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 ** get_address_of__mapMatcher_10() { return &____mapMatcher_10; }
	inline void set__mapMatcher_10(MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * value)
	{
		____mapMatcher_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapMatcher_10), (void*)value);
	}

	inline static int32_t get_offset_of__tokenValidator_11() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenValidator_11)); }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * get__tokenValidator_11() const { return ____tokenValidator_11; }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 ** get_address_of__tokenValidator_11() { return &____tokenValidator_11; }
	inline void set__tokenValidator_11(MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * value)
	{
		____tokenValidator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenValidator_11), (void*)value);
	}

	inline static int32_t get_offset_of__tileJson_12() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tileJson_12)); }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * get__tileJson_12() const { return ____tileJson_12; }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 ** get_address_of__tileJson_12() { return &____tileJson_12; }
	inline void set__tileJson_12(TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * value)
	{
		____tileJson_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tileJson_12), (void*)value);
	}
};

struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields
{
public:
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.MapboxAccess::_instance
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____instance_3;
	// System.Boolean Mapbox.Unity.MapboxAccess::Configured
	bool ___Configured_4;
	// System.String Mapbox.Unity.MapboxAccess::ConfigurationJSON
	String_t* ___ConfigurationJSON_5;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ____instance_3)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__instance_3() const { return ____instance_3; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_3), (void*)value);
	}

	inline static int32_t get_offset_of_Configured_4() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___Configured_4)); }
	inline bool get_Configured_4() const { return ___Configured_4; }
	inline bool* get_address_of_Configured_4() { return &___Configured_4; }
	inline void set_Configured_4(bool value)
	{
		___Configured_4 = value;
	}

	inline static int32_t get_offset_of_ConfigurationJSON_5() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___ConfigurationJSON_5)); }
	inline String_t* get_ConfigurationJSON_5() const { return ___ConfigurationJSON_5; }
	inline String_t** get_address_of_ConfigurationJSON_5() { return &___ConfigurationJSON_5; }
	inline void set_ConfigurationJSON_5(String_t* value)
	{
		___ConfigurationJSON_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConfigurationJSON_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_tF9AA06D5AF96EB20B859B4592184A0042F3E17F3  : public RuntimeObject
{
public:

public:
};


// Utils.SerializableVector4
struct  SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// Utils.serializablePointCloud
struct  serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0, ___pointCloudData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudData_0), (void*)value);
	}
};


// Utils.serializableSHC
struct  serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6, ___shcData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shcData_0), (void*)value);
	}
};


// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column0_0)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column0_0), (void*)value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column1_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column1_1), (void*)value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column2_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column2_2), (void*)value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column3_3)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column3_3), (void*)value);
	}
};


// VectorDataFetcher_<>c
struct  U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields
{
public:
	// VectorDataFetcher_<>c VectorDataFetcher_<>c::<>9
	U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * ___U3CU3E9_0;
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher_<>c::<>9__3_0
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___U3CU3E9__3_0_1;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher_<>c::<>9__3_1
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// VectorDataFetcher_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15  : public RuntimeObject
{
public:
	// VectorDataFetcherParameters VectorDataFetcher_<>c__DisplayClass2_0::vectorDaraParameters
	VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * ___vectorDaraParameters_0;
	// Mapbox.Map.VectorTile VectorDataFetcher_<>c__DisplayClass2_0::vectorTile
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___vectorTile_1;
	// VectorDataFetcher VectorDataFetcher_<>c__DisplayClass2_0::<>4__this
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_vectorDaraParameters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorDaraParameters_0)); }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * get_vectorDaraParameters_0() const { return ___vectorDaraParameters_0; }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 ** get_address_of_vectorDaraParameters_0() { return &___vectorDaraParameters_0; }
	inline void set_vectorDaraParameters_0(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * value)
	{
		___vectorDaraParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorDaraParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of_vectorTile_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorTile_1)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_vectorTile_1() const { return ___vectorTile_1; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_vectorTile_1() { return &___vectorTile_1; }
	inline void set_vectorTile_1(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___vectorTile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorTile_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___U3CU3E4__this_2)); }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mapbox.Map.CanonicalTileId
struct  CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF 
{
public:
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Map.UnwrappedTileId
struct  UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 
{
public:
	// System.Int32 Mapbox.Map.UnwrappedTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.UnwrappedTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.UnwrappedTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Utils.Vector2d
struct  Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
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

// System.Guid
struct  Guid_t 
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


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


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


// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};


// DataFetcherParameters
struct  DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId DataFetcherParameters::canonicalTileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId_0;
	// System.String DataFetcherParameters::tilesetId
	String_t* ___tilesetId_1;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile DataFetcherParameters::tile
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___tile_2;

public:
	inline static int32_t get_offset_of_canonicalTileId_0() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___canonicalTileId_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_canonicalTileId_0() const { return ___canonicalTileId_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_canonicalTileId_0() { return &___canonicalTileId_0; }
	inline void set_canonicalTileId_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___canonicalTileId_0 = value;
	}

	inline static int32_t get_offset_of_tilesetId_1() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___tilesetId_1)); }
	inline String_t* get_tilesetId_1() const { return ___tilesetId_1; }
	inline String_t** get_address_of_tilesetId_1() { return &___tilesetId_1; }
	inline void set_tilesetId_1(String_t* value)
	{
		___tilesetId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilesetId_1), (void*)value);
	}

	inline static int32_t get_offset_of_tile_2() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___tile_2)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_tile_2() const { return ___tile_2; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_tile_2() { return &___tile_2; }
	inline void set_tile_2(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___tile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tile_2), (void*)value);
	}
};


// Mapbox.Map.Tile_State
struct  State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D 
{
public:
	// System.Int32 Mapbox.Map.Tile_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Map.TileErrorEventArgs
struct  TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.TileErrorEventArgs::TileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId_1;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.TileErrorEventArgs::Exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ___Exceptions_2;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile Mapbox.Map.TileErrorEventArgs::UnityTileInstance
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance_3;
	// System.Type Mapbox.Map.TileErrorEventArgs::TileType
	Type_t * ___TileType_4;

public:
	inline static int32_t get_offset_of_TileId_1() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileId_1)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_TileId_1() const { return ___TileId_1; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_TileId_1() { return &___TileId_1; }
	inline void set_TileId_1(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___TileId_1 = value;
	}

	inline static int32_t get_offset_of_Exceptions_2() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___Exceptions_2)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get_Exceptions_2() const { return ___Exceptions_2; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of_Exceptions_2() { return &___Exceptions_2; }
	inline void set_Exceptions_2(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		___Exceptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exceptions_2), (void*)value);
	}

	inline static int32_t get_offset_of_UnityTileInstance_3() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___UnityTileInstance_3)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_UnityTileInstance_3() const { return ___UnityTileInstance_3; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_UnityTileInstance_3() { return &___UnityTileInstance_3; }
	inline void set_UnityTileInstance_3(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___UnityTileInstance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityTileInstance_3), (void*)value);
	}

	inline static int32_t get_offset_of_TileType_4() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileType_4)); }
	inline Type_t * get_TileType_4() const { return ___TileType_4; }
	inline Type_t ** get_address_of_TileType_4() { return &___TileType_4; }
	inline void set_TileType_4(Type_t * value)
	{
		___TileType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TileType_4), (void*)value);
	}
};


// Mapbox.Unity.Map.TileTerrainType
struct  TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71 
{
public:
	// System.Int32 Mapbox.Unity.Map.TileTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState
struct  TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933 
{
public:
	// System.Int32 Mapbox.Unity.MeshGeneration.Enums.TilePropertyState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Utils.RectD
struct  RectD_t43C10C8617E7747A0A298175DED993296095CBFC 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Min>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMinU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Max>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMaxU3Ek__BackingField_1;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Size>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CSizeU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Center>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CCenterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMinU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMinU3Ek__BackingField_0)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMinU3Ek__BackingField_0() const { return ___U3CMinU3Ek__BackingField_0; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMinU3Ek__BackingField_0() { return &___U3CMinU3Ek__BackingField_0; }
	inline void set_U3CMinU3Ek__BackingField_0(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMinU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMaxU3Ek__BackingField_1)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMaxU3Ek__BackingField_1() const { return ___U3CMaxU3Ek__BackingField_1; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMaxU3Ek__BackingField_1() { return &___U3CMaxU3Ek__BackingField_1; }
	inline void set_U3CMaxU3Ek__BackingField_1(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMaxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
	}
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

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightDirection_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sphericalHarmonicsCoefficients_2), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};


// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};


// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arkitConfigMsg_1), (void*)value);
	}
};


// Mapbox.Map.Tile
struct  Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::_id
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ____id_0;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.Tile::_exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ____exceptions_1;
	// Mapbox.Map.Tile_State Mapbox.Map.Tile::_state
	int32_t ____state_2;
	// Mapbox.Platform.IAsyncRequest Mapbox.Map.Tile::_request
	RuntimeObject* ____request_3;
	// System.Action Mapbox.Map.Tile::_callback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____callback_4;
	// System.Collections.Generic.List`1<System.String> Mapbox.Map.Tile::ids
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ids_5;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____id_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get__id_0() const { return ____id_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__exceptions_1() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____exceptions_1)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get__exceptions_1() const { return ____exceptions_1; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of__exceptions_1() { return &____exceptions_1; }
	inline void set__exceptions_1(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		____exceptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptions_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____request_3)); }
	inline RuntimeObject* get__request_3() const { return ____request_3; }
	inline RuntimeObject** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(RuntimeObject* value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_3), (void*)value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____callback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__callback_4() const { return ____callback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ___ids_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ids_5() const { return ___ids_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ids_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_5), (void*)value);
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Type
struct  Type_t  : public MemberInfo_t
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
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___transform_1)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___center_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_3() const { return ___center_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___extent_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_extent_4() const { return ___extent_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___extent_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arDirectonalLightEstimate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};

// Utils.serializableARKitInit
struct  serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___config_0)); }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_0), (void*)value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};


// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};


// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// Utils.serializableUnityARLightData Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___lightData_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionMatrix_1), (void*)value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___lightData_5)); }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightData_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___pointCloud_6)); }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloud_6), (void*)value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTransform_7), (void*)value);
	}
};


// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___lightSHC_1)); }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightSHC_1), (void*)value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryLightDirAndIntensity_2), (void*)value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};


// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___center_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___center_1), (void*)value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___extent_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extent_2), (void*)value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___identifierStr_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifierStr_4), (void*)value);
	}
};


// VectorDataFetcherParameters
struct  VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88  : public DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17
{
public:
	// System.Boolean VectorDataFetcherParameters::useOptimizedStyle
	bool ___useOptimizedStyle_3;
	// Mapbox.Unity.Map.Style VectorDataFetcherParameters::style
	Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * ___style_4;

public:
	inline static int32_t get_offset_of_useOptimizedStyle_3() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___useOptimizedStyle_3)); }
	inline bool get_useOptimizedStyle_3() const { return ___useOptimizedStyle_3; }
	inline bool* get_address_of_useOptimizedStyle_3() { return &___useOptimizedStyle_3; }
	inline void set_useOptimizedStyle_3(bool value)
	{
		___useOptimizedStyle_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___style_4)); }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * get_style_4() const { return ___style_4; }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 ** get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * value)
	{
		___style_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_4), (void*)value);
	}
};


// DataFetcher
struct  DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Mapbox.Unity.MapboxAccess DataFetcher::_fileSource
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____fileSource_4;

public:
	inline static int32_t get_offset_of__fileSource_4() { return static_cast<int32_t>(offsetof(DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191, ____fileSource_4)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__fileSource_4() const { return ____fileSource_4; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__fileSource_4() { return &____fileSource_4; }
	inline void set__fileSource_4(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____fileSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_4), (void*)value);
	}
};


// Mapbox.Map.VectorTile
struct  VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687  : public Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0
{
public:
	// Mapbox.VectorTile.VectorTile Mapbox.Map.VectorTile::data
	VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * ___data_6;
	// System.Boolean Mapbox.Map.VectorTile::_isStyleOptimized
	bool ____isStyleOptimized_7;
	// System.String Mapbox.Map.VectorTile::_optimizedStyleId
	String_t* ____optimizedStyleId_8;
	// System.String Mapbox.Map.VectorTile::_modifiedDate
	String_t* ____modifiedDate_9;
	// System.Boolean Mapbox.Map.VectorTile::isDisposed
	bool ___isDisposed_10;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___data_6)); }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * get_data_6() const { return ___data_6; }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_6), (void*)value);
	}

	inline static int32_t get_offset_of__isStyleOptimized_7() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____isStyleOptimized_7)); }
	inline bool get__isStyleOptimized_7() const { return ____isStyleOptimized_7; }
	inline bool* get_address_of__isStyleOptimized_7() { return &____isStyleOptimized_7; }
	inline void set__isStyleOptimized_7(bool value)
	{
		____isStyleOptimized_7 = value;
	}

	inline static int32_t get_offset_of__optimizedStyleId_8() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____optimizedStyleId_8)); }
	inline String_t* get__optimizedStyleId_8() const { return ____optimizedStyleId_8; }
	inline String_t** get_address_of__optimizedStyleId_8() { return &____optimizedStyleId_8; }
	inline void set__optimizedStyleId_8(String_t* value)
	{
		____optimizedStyleId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optimizedStyleId_8), (void*)value);
	}

	inline static int32_t get_offset_of__modifiedDate_9() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____modifiedDate_9)); }
	inline String_t* get__modifiedDate_9() const { return ____modifiedDate_9; }
	inline String_t** get_address_of__modifiedDate_9() { return &____modifiedDate_9; }
	inline void set__modifiedDate_9(String_t* value)
	{
		____modifiedDate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modifiedDate_9), (void*)value);
	}

	inline static int32_t get_offset_of_isDisposed_10() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___isDisposed_10)); }
	inline bool get_isDisposed_10() const { return ___isDisposed_10; }
	inline bool* get_address_of_isDisposed_10() { return &___isDisposed_10; }
	inline void set_isDisposed_10(bool value)
	{
		___isDisposed_10 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct  Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct  Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_context_1)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_binder_2)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___lightData_5)); }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lightData_5))->___arDirectonalLightEstimate_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___pointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudData_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_pinvoke
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_com
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// VectorDataFetcher
struct  VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357  : public DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher::DataRecieved
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___DataRecieved_5;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher::FetchingError
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___FetchingError_6;

public:
	inline static int32_t get_offset_of_DataRecieved_5() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___DataRecieved_5)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_DataRecieved_5() const { return ___DataRecieved_5; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_DataRecieved_5() { return &___DataRecieved_5; }
	inline void set_DataRecieved_5(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___DataRecieved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataRecieved_5), (void*)value);
	}

	inline static int32_t get_offset_of_FetchingError_6() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___FetchingError_6)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_FetchingError_6() const { return ___FetchingError_6; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_FetchingError_6() { return &___FetchingError_6; }
	inline void set_FetchingError_6(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___FetchingError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchingError_6), (void*)value);
	}
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 GameManager::tankDmgScore
	int32_t ___tankDmgScore_4;
	// System.Int32 GameManager::buildingDmgCost
	int32_t ___buildingDmgCost_5;
	// System.Int32 GameManager::poiDmgCost
	int32_t ___poiDmgCost_6;
	// System.Boolean GameManager::gameStarted
	bool ___gameStarted_7;
	// System.Boolean GameManager::gameRunning
	bool ___gameRunning_8;
	// System.Int32 GameManager::score
	int32_t ___score_9;

public:
	inline static int32_t get_offset_of_tankDmgScore_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___tankDmgScore_4)); }
	inline int32_t get_tankDmgScore_4() const { return ___tankDmgScore_4; }
	inline int32_t* get_address_of_tankDmgScore_4() { return &___tankDmgScore_4; }
	inline void set_tankDmgScore_4(int32_t value)
	{
		___tankDmgScore_4 = value;
	}

	inline static int32_t get_offset_of_buildingDmgCost_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___buildingDmgCost_5)); }
	inline int32_t get_buildingDmgCost_5() const { return ___buildingDmgCost_5; }
	inline int32_t* get_address_of_buildingDmgCost_5() { return &___buildingDmgCost_5; }
	inline void set_buildingDmgCost_5(int32_t value)
	{
		___buildingDmgCost_5 = value;
	}

	inline static int32_t get_offset_of_poiDmgCost_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___poiDmgCost_6)); }
	inline int32_t get_poiDmgCost_6() const { return ___poiDmgCost_6; }
	inline int32_t* get_address_of_poiDmgCost_6() { return &___poiDmgCost_6; }
	inline void set_poiDmgCost_6(int32_t value)
	{
		___poiDmgCost_6 = value;
	}

	inline static int32_t get_offset_of_gameStarted_7() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___gameStarted_7)); }
	inline bool get_gameStarted_7() const { return ___gameStarted_7; }
	inline bool* get_address_of_gameStarted_7() { return &___gameStarted_7; }
	inline void set_gameStarted_7(bool value)
	{
		___gameStarted_7 = value;
	}

	inline static int32_t get_offset_of_gameRunning_8() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___gameRunning_8)); }
	inline bool get_gameRunning_8() const { return ___gameRunning_8; }
	inline bool* get_address_of_gameRunning_8() { return &___gameRunning_8; }
	inline void set_gameRunning_8(bool value)
	{
		___gameRunning_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___instance_10)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_instance_10() const { return ___instance_10; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}
};


// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct  UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.TileTerrainType Mapbox.Unity.MeshGeneration.Data.UnityTile::ElevationType
	int32_t ___ElevationType_4;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterData
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____rasterData_5;
	// Mapbox.Map.VectorTile Mapbox.Unity.MeshGeneration.Data.UnityTile::<VectorData>k__BackingField
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___U3CVectorDataU3Ek__BackingField_6;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____heightTexture_7;
	// System.Single[] Mapbox.Unity.MeshGeneration.Data.UnityTile::HeightData
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___HeightData_8;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_loadingTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____loadingTexture_9;
	// System.Collections.Generic.List`1<Mapbox.Map.Tile> Mapbox.Unity.MeshGeneration.Data.UnityTile::_tiles
	List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * ____tiles_10;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileScale
	float ____tileScale_11;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::IsRecycled
	bool ___IsRecycled_12;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ____meshRenderer_13;
	// UnityEngine.MeshFilter Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____meshFilter_14;
	// UnityEngine.Collider Mapbox.Unity.MeshGeneration.Data.UnityTile::_collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ____collider_15;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.UnityTile::<Rect>k__BackingField
	RectD_t43C10C8617E7747A0A298175DED993296095CBFC  ___U3CRectU3Ek__BackingField_16;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<InitialZoom>k__BackingField
	int32_t ___U3CInitialZoomU3Ek__BackingField_17;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<CurrentZoom>k__BackingField
	int32_t ___U3CCurrentZoomU3Ek__BackingField_18;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<UnwrappedTileId>k__BackingField
	UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  ___U3CUnwrappedTileIdU3Ek__BackingField_19;
	// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<CanonicalTileId>k__BackingField
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___U3CCanonicalTileIdU3Ek__BackingField_20;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_relativeScale
	float ____relativeScale_21;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterDataState
	int32_t ____rasterDataState_22;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightDataState
	int32_t ____heightDataState_23;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_vectorDataState
	int32_t ____vectorDataState_24;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileState
	int32_t ____tileState_25;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnHeightDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnHeightDataChanged_26;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRasterDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnRasterDataChanged_27;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnVectorDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnVectorDataChanged_28;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::_isInitialized
	bool ____isInitialized_29;

public:
	inline static int32_t get_offset_of_ElevationType_4() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___ElevationType_4)); }
	inline int32_t get_ElevationType_4() const { return ___ElevationType_4; }
	inline int32_t* get_address_of_ElevationType_4() { return &___ElevationType_4; }
	inline void set_ElevationType_4(int32_t value)
	{
		___ElevationType_4 = value;
	}

	inline static int32_t get_offset_of__rasterData_5() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterData_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__rasterData_5() const { return ____rasterData_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__rasterData_5() { return &____rasterData_5; }
	inline void set__rasterData_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____rasterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterData_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVectorDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CVectorDataU3Ek__BackingField_6)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_U3CVectorDataU3Ek__BackingField_6() const { return ___U3CVectorDataU3Ek__BackingField_6; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_U3CVectorDataU3Ek__BackingField_6() { return &___U3CVectorDataU3Ek__BackingField_6; }
	inline void set_U3CVectorDataU3Ek__BackingField_6(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___U3CVectorDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVectorDataU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of__heightTexture_7() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightTexture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__heightTexture_7() const { return ____heightTexture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__heightTexture_7() { return &____heightTexture_7; }
	inline void set__heightTexture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____heightTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heightTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_HeightData_8() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___HeightData_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_HeightData_8() const { return ___HeightData_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_HeightData_8() { return &___HeightData_8; }
	inline void set_HeightData_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___HeightData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeightData_8), (void*)value);
	}

	inline static int32_t get_offset_of__loadingTexture_9() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____loadingTexture_9)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__loadingTexture_9() const { return ____loadingTexture_9; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__loadingTexture_9() { return &____loadingTexture_9; }
	inline void set__loadingTexture_9(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____loadingTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadingTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of__tiles_10() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tiles_10)); }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * get__tiles_10() const { return ____tiles_10; }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C ** get_address_of__tiles_10() { return &____tiles_10; }
	inline void set__tiles_10(List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * value)
	{
		____tiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tiles_10), (void*)value);
	}

	inline static int32_t get_offset_of__tileScale_11() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tileScale_11)); }
	inline float get__tileScale_11() const { return ____tileScale_11; }
	inline float* get_address_of__tileScale_11() { return &____tileScale_11; }
	inline void set__tileScale_11(float value)
	{
		____tileScale_11 = value;
	}

	inline static int32_t get_offset_of_IsRecycled_12() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___IsRecycled_12)); }
	inline bool get_IsRecycled_12() const { return ___IsRecycled_12; }
	inline bool* get_address_of_IsRecycled_12() { return &___IsRecycled_12; }
	inline void set_IsRecycled_12(bool value)
	{
		___IsRecycled_12 = value;
	}

	inline static int32_t get_offset_of__meshRenderer_13() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshRenderer_13)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get__meshRenderer_13() const { return ____meshRenderer_13; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of__meshRenderer_13() { return &____meshRenderer_13; }
	inline void set__meshRenderer_13(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		____meshRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of__meshFilter_14() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshFilter_14)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get__meshFilter_14() const { return ____meshFilter_14; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of__meshFilter_14() { return &____meshFilter_14; }
	inline void set__meshFilter_14(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		____meshFilter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshFilter_14), (void*)value);
	}

	inline static int32_t get_offset_of__collider_15() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____collider_15)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get__collider_15() const { return ____collider_15; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of__collider_15() { return &____collider_15; }
	inline void set__collider_15(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		____collider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CRectU3Ek__BackingField_16)); }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC  get_U3CRectU3Ek__BackingField_16() const { return ___U3CRectU3Ek__BackingField_16; }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC * get_address_of_U3CRectU3Ek__BackingField_16() { return &___U3CRectU3Ek__BackingField_16; }
	inline void set_U3CRectU3Ek__BackingField_16(RectD_t43C10C8617E7747A0A298175DED993296095CBFC  value)
	{
		___U3CRectU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CInitialZoomU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CInitialZoomU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitialZoomU3Ek__BackingField_17() const { return ___U3CInitialZoomU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitialZoomU3Ek__BackingField_17() { return &___U3CInitialZoomU3Ek__BackingField_17; }
	inline void set_U3CInitialZoomU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitialZoomU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentZoomU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCurrentZoomU3Ek__BackingField_18)); }
	inline int32_t get_U3CCurrentZoomU3Ek__BackingField_18() const { return ___U3CCurrentZoomU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCurrentZoomU3Ek__BackingField_18() { return &___U3CCurrentZoomU3Ek__BackingField_18; }
	inline void set_U3CCurrentZoomU3Ek__BackingField_18(int32_t value)
	{
		___U3CCurrentZoomU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CUnwrappedTileIdU3Ek__BackingField_19)); }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  get_U3CUnwrappedTileIdU3Ek__BackingField_19() const { return ___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 * get_address_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return &___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline void set_U3CUnwrappedTileIdU3Ek__BackingField_19(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  value)
	{
		___U3CUnwrappedTileIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCanonicalTileIdU3Ek__BackingField_20)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_U3CCanonicalTileIdU3Ek__BackingField_20() const { return ___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return &___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline void set_U3CCanonicalTileIdU3Ek__BackingField_20(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___U3CCanonicalTileIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of__relativeScale_21() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____relativeScale_21)); }
	inline float get__relativeScale_21() const { return ____relativeScale_21; }
	inline float* get_address_of__relativeScale_21() { return &____relativeScale_21; }
	inline void set__relativeScale_21(float value)
	{
		____relativeScale_21 = value;
	}

	inline static int32_t get_offset_of__rasterDataState_22() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterDataState_22)); }
	inline int32_t get__rasterDataState_22() const { return ____rasterDataState_22; }
	inline int32_t* get_address_of__rasterDataState_22() { return &____rasterDataState_22; }
	inline void set__rasterDataState_22(int32_t value)
	{
		____rasterDataState_22 = value;
	}

	inline static int32_t get_offset_of__heightDataState_23() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightDataState_23)); }
	inline int32_t get__heightDataState_23() const { return ____heightDataState_23; }
	inline int32_t* get_address_of__heightDataState_23() { return &____heightDataState_23; }
	inline void set__heightDataState_23(int32_t value)
	{
		____heightDataState_23 = value;
	}

	inline static int32_t get_offset_of__vectorDataState_24() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____vectorDataState_24)); }
	inline int32_t get__vectorDataState_24() const { return ____vectorDataState_24; }
	inline int32_t* get_address_of__vectorDataState_24() { return &____vectorDataState_24; }
	inline void set__vectorDataState_24(int32_t value)
	{
		____vectorDataState_24 = value;
	}

	inline static int32_t get_offset_of__tileState_25() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tileState_25)); }
	inline int32_t get__tileState_25() const { return ____tileState_25; }
	inline int32_t* get_address_of__tileState_25() { return &____tileState_25; }
	inline void set__tileState_25(int32_t value)
	{
		____tileState_25 = value;
	}

	inline static int32_t get_offset_of_OnHeightDataChanged_26() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnHeightDataChanged_26)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnHeightDataChanged_26() const { return ___OnHeightDataChanged_26; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnHeightDataChanged_26() { return &___OnHeightDataChanged_26; }
	inline void set_OnHeightDataChanged_26(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnHeightDataChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeightDataChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnRasterDataChanged_27() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnRasterDataChanged_27)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnRasterDataChanged_27() const { return ___OnRasterDataChanged_27; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnRasterDataChanged_27() { return &___OnRasterDataChanged_27; }
	inline void set_OnRasterDataChanged_27(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnRasterDataChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRasterDataChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnVectorDataChanged_28() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnVectorDataChanged_28)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnVectorDataChanged_28() const { return ___OnVectorDataChanged_28; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnVectorDataChanged_28() { return &___OnVectorDataChanged_28; }
	inline void set_OnVectorDataChanged_28(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnVectorDataChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVectorDataChanged_28), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_29() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____isInitialized_29)); }
	inline bool get__isInitialized_29() const { return ____isInitialized_29; }
	inline bool* get_address_of__isInitialized_29() { return &____isInitialized_29; }
	inline void set__isInitialized_29(bool value)
	{
		____isInitialized_29 = value;
	}
};


// WaterBall
struct  WaterBall_t84539382E579DE5F8CF8165BC1A8C21D42D6270B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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


// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration__ctor_mA7201B6352F4142BF235A5A597D4EA9C1DFF910B (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF (float ___value0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputPoints0, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputSHCData0, const RuntimeMethod* method);
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method);
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCamera__ctor_m83D5679FBC374A1A369C75BB85718BBF7F22B46D (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * __this, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___wt0, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___dt6, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloud7, const RuntimeMethod* method);
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floatsSHC0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARLightEstimate__ctor_m6FDE1D59522BACB96C86498314B4112E048FE18C (UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARDirectionalLightEstimate__ctor_mF4132E3E0A3BF152E060E07F064D5DA8C27796F1 (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___SHC0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, float ___intensity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARLightData__ctor_m3F910A4326A4E9B02F36CA12D1379A2341616DB1 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___udle2, const RuntimeMethod* method);
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method);
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARMatrix4x4__ctor_mCEF59FBC04B24A43578F178FE9740AE7A4DDC0B5 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c00, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c11, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c22, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c33, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column00, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column11, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column22, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column33, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___idstr4, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1 (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, String_t* ___styleId0, String_t* ___modifiedDate1, const RuntimeMethod* method);
// System.Void Mapbox.Unity.MeshGeneration.Data.UnityTile::AddTile(Mapbox.Map.Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784 (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * ___tile0, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::get_CanonicalTileId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mapbox.Map.Tile::Initialize(Mapbox.Platform.IFileSource,Mapbox.Map.CanonicalTileId,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, RuntimeObject* ___fileSource0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId1, String_t* ___tilesetId2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___p3, const RuntimeMethod* method);
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72 (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E (DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 * __this, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112_inline (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.CanonicalTileId::op_Inequality(Mapbox.Map.CanonicalTileId,Mapbox.Map.CanonicalTileId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF (CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___a0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___b1, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.Tile::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> Mapbox.Map.Tile::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.TileErrorEventArgs::.ctor(Mapbox.Map.CanonicalTileId,System.Type,Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * __this, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId0, Type_t * ___TileType1, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance2, ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___Exceptions3, const RuntimeMethod* method);
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___arg10, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___arg21, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *, const RuntimeMethod*))Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::Invoke(!0,!1)
inline void Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___arg10, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void DataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB (DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___tag0, const RuntimeMethod* method);
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * GameManager_get_Instance_m1284638729202F71BCEC9B4E82E81E0C0232B97F_inline (const RuntimeMethod* method);
// System.Void GameManager::EnemyHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnemyHit_mB87AE5E9F7EC54FAD1C10E16586A7C71BE919E5E (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * V_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_0005:
	{
		// var bf = new BinaryFormatter();
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_1 = (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 *)il2cpp_codegen_object_new(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// using (var ms = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		// bf.Serialize(ms, obj);
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_3 = V_0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_4 = V_1;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_3);
		BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52(L_3, L_4, L_5, /*hidden argument*/NULL);
		// return ms.ToArray();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		V_2 = L_7;
		IL2CPP_LEAVE(0x2C, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_8 = V_1;
			if (!L_8)
			{
				goto IL_002b;
			}
		}

IL_0025:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_002b:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_2;
		return L_10;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		// public SerializableVector4(float rX, float rY, float rZ, float rW)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = rX;
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		// y = rY;
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		// z = rZ;
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		// w = rW;
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		// }
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9 (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Format("[{0}, {1}, {2}, {3}]", x, y, z, w);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method)
{
	{
		// return new Vector4(rValue.x, rValue.y, rValue.z, rValue.w);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new SerializableVector4(rValue.x, rValue.y, rValue.z, rValue.w);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___rValue0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___rValue0;
		float L_3 = L_2.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___rValue0;
		float L_5 = L_4.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___rValue0;
		float L_7 = L_6.get_w_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Utils.serializableARKitInit::.ctor(Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARKitInit__ctor_mEA56B16AD0EA4D1F0DEA598F9A970C6B69757759 (serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * __this, serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		// public serializableARKitInit(serializableARSessionConfiguration cfg, UnityARSessionRunOption option)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// config = cfg;
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		// runOption = option;
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
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
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method)
{
	{
		// public serializableARSessionConfiguration(UnityARAlignment align, UnityARPlaneDetection planeDet, bool getPtCloud, bool enableLightEst)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// alignment = align;
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		// planeDetection = planeDet;
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		// getPointCloudData = getPtCloud;
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		// enableLightEstimation = enableLightEst;
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		// }
		return;
	}
}
// Utils.serializableARSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new serializableARSessionConfiguration (awtsc.alignment, awtsc.planeDetection, awtsc.getPointCloudData, awtsc.enableLightEstimation);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_0 = ___awtsc0;
		int32_t L_1 = L_0.get_alignment_0();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_2 = ___awtsc0;
		int32_t L_3 = L_2.get_planeDetection_1();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_4 = ___awtsc0;
		bool L_5 = L_4.get_getPointCloudData_2();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_6 = ___awtsc0;
		bool L_7 = L_6.get_enableLightEstimation_3();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_8 = (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  serializableARSessionConfiguration_op_Implicit_mC658A108785924A17215A9E3ABDF3916C69B39E5 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___sasc0, const RuntimeMethod* method)
{
	{
		// return new ARKitWorldTrackingSessionConfiguration (sasc.alignment, sasc.planeDetection, sasc.getPointCloudData, sasc.enableLightEstimation);
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ARKitWorldTrackingSessionConfiguration__ctor_mA7201B6352F4142BF235A5A597D4EA9C1DFF910B((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Utils.serializableFromEditorMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableFromEditorMessage__ctor_m38ED635A9032486BD80F0EAB863AFD8478B813E9 (serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51 * __this, const RuntimeMethod* method)
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
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputPoints0, const RuntimeMethod* method)
{
	{
		// public serializablePointCloud(byte [] inputPoints)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// pointCloudData = inputPoints;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		// }
		return;
	}
}
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (vecPointCloud != null)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___vecPointCloud0;
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		// byte [] createBuf = new byte[vecPointCloud.Length * sizeof(float) * 3];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = ___vecPointCloud0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)4)), (int32_t)3)));
		V_0 = L_2;
		// for(int i = 0; i < vecPointCloud.Length; i++)
		V_1 = 0;
		goto IL_0074;
	}

IL_0014:
	{
		// int bufferStart = i * 3;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].x ), 0, createBuf, (bufferStart)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ___vecPointCloud0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_6, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		int32_t L_9 = V_2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].y ), 0, createBuf, (bufferStart+1)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = ___vecPointCloud0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_0;
		int32_t L_15 = V_2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].z ), 0, createBuf, (bufferStart+2)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = ___vecPointCloud0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_z_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = V_0;
		int32_t L_21 = V_2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_19, 0, (RuntimeArray *)(RuntimeArray *)L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		// for(int i = 0; i < vecPointCloud.Length; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0074:
	{
		// for(int i = 0; i < vecPointCloud.Length; i++)
		int32_t L_23 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_24 = ___vecPointCloud0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		// return new serializablePointCloud (createBuf);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_0;
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_26 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_0081:
	{
		// return new serializablePointCloud(null);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_27 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3(L_27, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		return L_27;
	}
}
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (spc.pointCloudData != null)
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_pointCloudData_0();
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		// int numVectors = spc.pointCloudData.Length / (3 * sizeof(float));
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_2->get_pointCloudData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))/(int32_t)((int32_t)12)));
		// Vector3 [] pointCloudVec = new Vector3[numVectors];
		int32_t L_4 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < numVectors; i++)
		V_2 = 0;
		goto IL_0079;
	}

IL_001f:
	{
		// int bufferStart = i * 3;
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		// pointCloudVec [i].x = BitConverter.ToSingle (spc.pointCloudData, (bufferStart) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_9 = ___spc0;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9->get_pointCloudData_0();
		int32_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_12 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)), /*hidden argument*/NULL);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_x_2(L_12);
		// pointCloudVec [i].y = BitConverter.ToSingle (spc.pointCloudData, (bufferStart+1) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_15 = ___spc0;
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = L_15->get_pointCloudData_0();
		int32_t L_17 = V_3;
		float L_18 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_y_3(L_18);
		// pointCloudVec [i].z = BitConverter.ToSingle (spc.pointCloudData, (bufferStart+2) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_21 = ___spc0;
		NullCheck(L_21);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = L_21->get_pointCloudData_0();
		int32_t L_23 = V_3;
		float L_24 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_22, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_4(L_24);
		// for (int i = 0; i < numVectors; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0079:
	{
		// for (int i = 0; i < numVectors; i++)
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_001f;
		}
	}
	{
		// return pointCloudVec;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = V_1;
		return L_28;
	}

IL_007f:
	{
		// return null;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
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
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputSHCData0, const RuntimeMethod* method)
{
	{
		// public serializableSHC(byte [] inputSHCData)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// shcData = inputSHCData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___inputSHCData0;
		__this->set_shcData_0(L_0);
		// }
		return;
	}
}
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floatsSHC0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (floatsSHC != null)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___floatsSHC0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// byte [] createBuf = new byte[floatsSHC.Length * sizeof(float)];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___floatsSHC0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)4)));
		V_0 = L_2;
		// for(int i = 0; i < floatsSHC.Length; i++)
		V_1 = 0;
		goto IL_0029;
	}

IL_0012:
	{
		// Buffer.BlockCopy( BitConverter.GetBytes( floatsSHC[i] ), 0, createBuf, (i)*sizeof(float), sizeof(float) );
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = ___floatsSHC0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_6, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		int32_t L_9 = V_1;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		// for(int i = 0; i < floatsSHC.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0029:
	{
		// for(int i = 0; i < floatsSHC.Length; i++)
		int32_t L_11 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = ___floatsSHC0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		// return new serializableSHC (createBuf);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_14 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0036:
	{
		// return new serializableSHC(null);
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_15 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB(L_15, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (spc.shcData != null)
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_shcData_0();
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// int numFloats = spc.shcData.Length / (sizeof(float));
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_2->get_shcData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))/(int32_t)4));
		// float [] shcFloats = new float[numFloats];
		int32_t L_4 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < numFloats; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_001e:
	{
		// shcFloats [i] = BitConverter.ToSingle (spc.shcData, i * sizeof(float));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = V_1;
		int32_t L_7 = V_2;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_8 = ___spc0;
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = L_8->get_shcData_0();
		int32_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		// for (int i = 0; i < numFloats; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < numFloats; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001e;
		}
	}
	{
		// return shcFloats;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_15 = V_1;
		return L_15;
	}

IL_0039:
	{
		// return null;
		return (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)NULL;
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
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method)
{
	{
		// public serializableUnityARCamera( serializableUnityARMatrix4x4 wt, serializableUnityARMatrix4x4 pm, ARTrackingState ats, ARTrackingStateReason atsr, UnityVideoParams uvp, UnityARLightData lightDat, serializableUnityARMatrix4x4 dt, serializablePointCloud spc)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// worldTransform = wt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		// projectionMatrix = pm;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		// trackingState = ats;
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		// trackingReason = atsr;
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		// videoParams = uvp;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		// lightData = lightDat;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_5 = ___lightDat5;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_6 = serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46(L_5, /*hidden argument*/NULL);
		__this->set_lightData_5(L_6);
		// displayTransform = dt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_7 = ___dt6;
		__this->set_displayTransform_7(L_7);
		// pointCloud = spc;
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_8 = ___spc7;
		__this->set_pointCloud_6(L_8);
		// }
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053 (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new serializableUnityARCamera(rValue.worldTransform, rValue.projectionMatrix, rValue.trackingState, rValue.trackingReason, rValue.videoParams, rValue.lightData, rValue.displayTransform, rValue.pointCloudData);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_1 = L_0.get_worldTransform_0();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_1, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_3 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_4 = L_3.get_projectionMatrix_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_5 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_4, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_6 = ___rValue0;
		int32_t L_7 = L_6.get_trackingState_2();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_8 = ___rValue0;
		int32_t L_9 = L_8.get_trackingReason_3();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_10 = ___rValue0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_11 = L_10.get_videoParams_4();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_12 = ___rValue0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_13 = L_12.get_lightData_5();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_14 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_15 = L_14.get_displayTransform_6();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_16 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_15, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_17 = ___rValue0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = L_17.get_pointCloudData_7();
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_19 = serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A(L_18, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_20 = (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 *)il2cpp_codegen_object_new(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95(L_20, L_2, L_5, L_7, L_9, L_11, L_13, L_16, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  serializableUnityARCamera_op_Implicit_m71E57DE6423BB31A561F8301FEA6363B5B32AB13 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * ___rValue0, const RuntimeMethod* method)
{
	{
		// return new UnityARCamera (rValue.worldTransform, rValue.projectionMatrix, rValue.trackingState, rValue.trackingReason, rValue.videoParams, rValue.lightData, rValue.displayTransform, rValue.pointCloud);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_2 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_5 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_12 = ___rValue0;
		NullCheck(L_12);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_13 = L_12->get_lightData_5();
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_14 = serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8(L_13, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_16 = L_15->get_displayTransform_7();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_17 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_16, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_18 = ___rValue0;
		NullCheck(L_18);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_19 = L_18->get_pointCloud_6();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4(L_19, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_21;
		memset((&L_21), 0, sizeof(L_21));
		UnityARCamera__ctor_m83D5679FBC374A1A369C75BB85718BBF7F22B46D((&L_21), L_2, L_5, L_7, L_9, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
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
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// serializableUnityARLightData(UnityARLightData lightData)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// whichLight = lightData.arLightingType;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_0 = ___lightData0;
		int32_t L_1 = L_0.get_arLightingType_0();
		__this->set_whichLight_0(L_1);
		// if (whichLight == LightDataType.DirectionalLightEstimate) {
		int32_t L_2 = __this->get_whichLight_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// lightSHC = lightData.arDirectonalLightEstimate.sphericalHarmonicsCoefficients;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_3 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_4 = L_3.get_arDirectonalLightEstimate_2();
		NullCheck(L_4);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = L_4->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_6 = serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2(L_5, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_6);
		// Vector3 lightDir = lightData.arDirectonalLightEstimate.primaryLightDirection;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_7 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_8 = L_7.get_arDirectonalLightEstimate_2();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8->get_primaryLightDirection_0();
		V_0 = L_9;
		// float lightIntensity = lightData.arDirectonalLightEstimate.primaryLightIntensity;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_10 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_11 = L_10.get_arDirectonalLightEstimate_2();
		NullCheck(L_11);
		float L_12 = L_11->get_primaryLightIntensity_1();
		V_1 = L_12;
		// primaryLightDirAndIntensity = new SerializableVector4 (lightDir.x, lightDir.y, lightDir.z, lightIntensity);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		float L_16 = L_15.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		float L_18 = L_17.get_z_4();
		float L_19 = V_1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_20 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_20, L_14, L_16, L_18, L_19, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_20);
		// } else {
		return;
	}

IL_0068:
	{
		// ambientIntensity = lightData.arLightEstimate.ambientIntensity;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_21 = ___lightData0;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_22 = L_21.get_arLightEstimate_1();
		float L_23 = L_22.get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_23);
		// ambientColorTemperature = lightData.arLightEstimate.ambientColorTemperature;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_24 = ___lightData0;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_25 = L_24.get_arLightEstimate_1();
		float L_26 = L_25.get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_26);
		// }
		return;
	}
}
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new serializableUnityARLightData(rValue);
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_0 = ___rValue0;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_1 = (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 *)il2cpp_codegen_object_new(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * V_0 = NULL;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// UnityARDirectionalLightEstimate udle = null;
		V_0 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)NULL;
		// UnityARLightEstimate ule = new UnityARLightEstimate (rValue.ambientIntensity, rValue.ambientColorTemperature);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_m6FDE1D59522BACB96C86498314B4112E048FE18C((UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		// if (rValue.whichLight == LightDataType.DirectionalLightEstimate) {
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		// Vector3 lightDir = new Vector3 (rValue.primaryLightDirAndIntensity.x, rValue.primaryLightDirAndIntensity.y, rValue.primaryLightDirAndIntensity.z);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_primaryLightDirAndIntensity_2();
		NullCheck(L_7);
		float L_8 = L_7->get_x_0();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_primaryLightDirAndIntensity_2();
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_12 = ___rValue0;
		NullCheck(L_12);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_13 = L_12->get_primaryLightDirAndIntensity_2();
		NullCheck(L_13);
		float L_14 = L_13->get_z_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_8, L_11, L_14, /*hidden argument*/NULL);
		// udle = new UnityARDirectionalLightEstimate (rValue.lightSHC, lightDir, rValue.primaryLightDirAndIntensity.w);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_16 = L_15->get_lightSHC_1();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_17 = serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_2;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_19 = ___rValue0;
		NullCheck(L_19);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_20 = L_19->get_primaryLightDirAndIntensity_2();
		NullCheck(L_20);
		float L_21 = L_20->get_w_3();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_22 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_mF4132E3E0A3BF152E060E07F064D5DA8C27796F1(L_22, L_17, L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0063:
	{
		// return new UnityARLightData(rValue.whichLight, ule, udle);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_23 = ___rValue0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_whichLight_0();
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_25 = V_1;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_26 = V_0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_27;
		memset((&L_27), 0, sizeof(L_27));
		UnityARLightData__ctor_m3F910A4326A4E9B02F36CA12D1379A2341616DB1((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method)
{
	{
		// public serializableUnityARMatrix4x4(SerializableVector4 v0, SerializableVector4 v1, SerializableVector4 v2, SerializableVector4 v3)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// column0 = v0;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___v00;
		__this->set_column0_0(L_0);
		// column1 = v1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___v11;
		__this->set_column1_1(L_1);
		// column2 = v2;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___v22;
		__this->set_column2_2(L_2);
		// column3 = v3;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = ___v33;
		__this->set_column3_3(L_3);
		// }
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new serializableUnityARMatrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_0 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = L_0.get_column0_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_1, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_3 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_column1_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_6 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = L_6.get_column2_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_7, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_9 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = L_9.get_column3_3();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_10, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_12 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA(L_12, L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	{
		// return new UnityARMatrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_12;
		memset((&L_12), 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_mCEF59FBC04B24A43578F178FE9740AE7A4DDC0B5((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new serializableUnityARMatrix4x4(rValue.GetColumn(0), rValue.GetColumn(1), rValue.GetColumn(2), rValue.GetColumn(3));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_8 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	{
		// return new Matrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___idstr4, const RuntimeMethod* method)
{
	{
		// public serializableUnityARPlaneAnchor( serializableUnityARMatrix4x4 wt, SerializableVector4 ctr, SerializableVector4 ext, ARPlaneAnchorAlignment apaa,
		//     byte [] idstr)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// worldTransform = wt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		// center = ctr;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		// extent = ext;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		// planeAlignment = apaa;
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		// identifierStr = idstr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		// }
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_0 = NULL;
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		// serializableUnityARMatrix4x4 wt = rValue.transform;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_0 = ___rValue0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = L_0.get_transform_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8(L_1, /*hidden argument*/NULL);
		// SerializableVector4 ctr = new SerializableVector4 (rValue.center.x, rValue.center.y, rValue.center.z, 1.0f);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_3 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = L_3.get_center_3();
		float L_5 = L_4.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_6 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_center_3();
		float L_8 = L_7.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_9 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = L_9.get_center_3();
		float L_11 = L_10.get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_12 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_12, L_5, L_8, L_11, (1.0f), /*hidden argument*/NULL);
		V_0 = L_12;
		// SerializableVector4 ext = new SerializableVector4 (rValue.extent.x, rValue.extent.y, rValue.extent.z, 1.0f);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_13 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = L_13.get_extent_4();
		float L_15 = L_14.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_16 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = L_16.get_extent_4();
		float L_18 = L_17.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_19 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = L_19.get_extent_4();
		float L_21 = L_20.get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_22 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_22, L_15, L_18, L_21, (1.0f), /*hidden argument*/NULL);
		V_1 = L_22;
		// byte[] idstr = Encoding.UTF8.GetBytes (rValue.identifier);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_23 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_24 = ___rValue0;
		String_t* L_25 = L_24.get_identifier_0();
		NullCheck(L_23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_2 = L_26;
		// return new serializableUnityARPlaneAnchor(wt, ctr, ext, rValue.alignment, idstr);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_27 = V_0;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_28 = V_1;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_29 = ___rValue0;
		int64_t L_30 = L_29.get_alignment_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_2;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_32 = (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B(L_32, L_2, L_27, L_28, L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  serializableUnityARPlaneAnchor_op_Implicit_mCD5B7A5D27D88F178DE2397380DCC5B636988815 (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * ___rValue0, const RuntimeMethod* method)
{
	ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// retValue.identifier = Encoding.UTF8.GetString (rValue.identifierStr);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		// retValue.center = new Vector3 (rValue.center.x, rValue.center.y, rValue.center.z);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		// retValue.extent = new Vector3 (rValue.extent.x, rValue.extent.y, rValue.extent.z);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		// retValue.alignment = rValue.planeAlignment;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		// retValue.transform = rValue.worldTransform;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_28 = serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A(L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		// return retValue;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_29 = V_0;
		return L_29;
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
// System.Void VectorDataFetcher::FetchData(DataFetcherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * V_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B4_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B3_0 = NULL;
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * G_B5_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B5_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_0 = (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		// var vectorDaraParameters = parameters as VectorDataFetcherParameters;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_2 = V_0;
		DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * L_3 = ___parameters0;
		NullCheck(L_2);
		L_2->set_vectorDaraParameters_0(((VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 *)IsInstClass((RuntimeObject*)L_3, VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var)));
		// if(vectorDaraParameters == null)
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_4 = V_0;
		NullCheck(L_4);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_5 = L_4->get_vectorDaraParameters_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// var vectorTile = (vectorDaraParameters.useOptimizedStyle) ? new VectorTile(vectorDaraParameters.style.Id, vectorDaraParameters.style.Modified) : new VectorTile();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_6 = V_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_7 = V_0;
		NullCheck(L_7);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_8 = L_7->get_vectorDaraParameters_0();
		NullCheck(L_8);
		bool L_9 = L_8->get_useOptimizedStyle_3();
		G_B3_0 = L_6;
		if (L_9)
		{
			G_B4_0 = L_6;
			goto IL_0037;
		}
	}
	{
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_10 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C(L_10, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		goto IL_005c;
	}

IL_0037:
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_11 = V_0;
		NullCheck(L_11);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_12 = L_11->get_vectorDaraParameters_0();
		NullCheck(L_12);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_13 = L_12->get_style_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_Id_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_15 = V_0;
		NullCheck(L_15);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_16 = L_15->get_vectorDaraParameters_0();
		NullCheck(L_16);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_17 = L_16->get_style_4();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_Modified_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_19 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1(L_19, L_14, L_18, /*hidden argument*/NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
	}

IL_005c:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_vectorTile_1(G_B5_0);
		// vectorDaraParameters.tile.AddTile(vectorTile);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_20 = V_0;
		NullCheck(L_20);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_21 = L_20->get_vectorDaraParameters_0();
		NullCheck(L_21);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_22 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_21)->get_tile_2();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_23 = V_0;
		NullCheck(L_23);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_24 = L_23->get_vectorTile_1();
		NullCheck(L_22);
		UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784(L_22, L_24, /*hidden argument*/NULL);
		// vectorTile.Initialize(_fileSource, vectorDaraParameters.tile.CanonicalTileId, vectorDaraParameters.tilesetId, () =>
		// {
		//     if (vectorDaraParameters.tile.CanonicalTileId != vectorTile.Id)
		//     {
		//         
		//         return;
		//     }
		//     if (vectorTile.HasError)
		//     {
		//         FetchingError(vectorDaraParameters.tile, vectorTile, new TileErrorEventArgs(vectorDaraParameters.tile.CanonicalTileId, vectorTile.GetType(), vectorDaraParameters.tile, vectorTile.Exceptions));
		//     }
		//     else
		//     {
		//         DataRecieved(vectorDaraParameters.tile, vectorTile);
		//     }
		// });
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_25 = V_0;
		NullCheck(L_25);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_26 = L_25->get_vectorTile_1();
		MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * L_27 = ((DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 *)__this)->get__fileSource_4();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_28 = V_0;
		NullCheck(L_28);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_29 = L_28->get_vectorDaraParameters_0();
		NullCheck(L_29);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_30 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_29)->get_tile_2();
		NullCheck(L_30);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_31 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_30, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_32 = V_0;
		NullCheck(L_32);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_33 = L_32->get_vectorDaraParameters_0();
		NullCheck(L_33);
		String_t* L_34 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_33)->get_tilesetId_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_35 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_36 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317(L_26, L_27, L_31, L_34, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VectorDataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3 (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B2_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B2_1 = NULL;
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B1_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B1_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B4_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B4_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B3_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B3_1 = NULL;
	{
		// public Action<UnityTile, VectorTile> DataRecieved = (t, s) => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_0 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_2 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_3 = (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *)il2cpp_codegen_object_new(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var);
		Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_4 = L_3;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_DataRecieved_5(G_B2_0);
		// public Action<UnityTile, VectorTile, TileErrorEventArgs> FetchingError = (t, r, s) => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_5 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_1_2();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_7 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_8 = (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *)il2cpp_codegen_object_new(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var);
		Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_9 = L_8;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_FetchingError_6(G_B4_0);
		DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E(__this, /*hidden argument*/NULL);
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
// System.Void VectorDataFetcher_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_0 = (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A *)il2cpp_codegen_object_new(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_0(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___s1, const RuntimeMethod* method)
{
	{
		// public Action<UnityTile, VectorTile> DataRecieved = (t, s) => { };
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_1(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___r1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___s2, const RuntimeMethod* method)
{
	{
		// public Action<UnityTile, VectorTile, TileErrorEventArgs> FetchingError = (t, r, s) => { };
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
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::<FetchData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vectorDaraParameters.tile.CanonicalTileId != vectorTile.Id)
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_0 = __this->get_vectorDaraParameters_0();
		NullCheck(L_0);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_1 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_0)->get_tile_2();
		NullCheck(L_1);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_2 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_1, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_3 = __this->get_vectorTile_1();
		NullCheck(L_3);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_4 = Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// if (vectorTile.HasError)
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_6 = __this->get_vectorTile_1();
		NullCheck(L_6);
		bool L_7 = Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		// FetchingError(vectorDaraParameters.tile, vectorTile, new TileErrorEventArgs(vectorDaraParameters.tile.CanonicalTileId, vectorTile.GetType(), vectorDaraParameters.tile, vectorTile.Exceptions));
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_9 = L_8->get_FetchingError_6();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_10 = __this->get_vectorDaraParameters_0();
		NullCheck(L_10);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_11 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_10)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_12 = __this->get_vectorTile_1();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_13 = __this->get_vectorDaraParameters_0();
		NullCheck(L_13);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_14 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_13)->get_tile_2();
		NullCheck(L_14);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_15 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_14, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_16 = __this->get_vectorTile_1();
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_16, /*hidden argument*/NULL);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_18 = __this->get_vectorDaraParameters_0();
		NullCheck(L_18);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_19 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_18)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_20 = __this->get_vectorTile_1();
		NullCheck(L_20);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_21 = Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795(L_20, /*hidden argument*/NULL);
		TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * L_22 = (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *)il2cpp_codegen_object_new(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var);
		TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC(L_22, L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569(L_9, L_11, L_12, L_22, /*hidden argument*/Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var);
		// }
		return;
	}

IL_0088:
	{
		// DataRecieved(vectorDaraParameters.tile, vectorTile);
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_23 = __this->get_U3CU3E4__this_2();
		NullCheck(L_23);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_24 = L_23->get_DataRecieved_5();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_25 = __this->get_vectorDaraParameters_0();
		NullCheck(L_25);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_26 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_25)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_27 = __this->get_vectorTile_1();
		NullCheck(L_24);
		Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC(L_24, L_26, L_27, /*hidden argument*/Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var);
		// });
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
// System.Void VectorDataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcherParameters__ctor_mF42BBD278B1900C46FD70D163969B12D8405FBD1 (VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * __this, const RuntimeMethod* method)
{
	{
		DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB(__this, /*hidden argument*/NULL);
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
// System.Void WaterBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBall_Start_mD0A05AC3CC3AE0E956A332287568A5D693AC5C94 (WaterBall_t84539382E579DE5F8CF8165BC1A8C21D42D6270B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaterBall_Start_mD0A05AC3CC3AE0E956A332287568A5D693AC5C94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 4.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_0, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WaterBall::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBall_OnTriggerEnter_mE00E1FE1552DC982192BF2483AA410D2D675D1AA (WaterBall_t84539382E579DE5F8CF8165BC1A8C21D42D6270B * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaterBall_OnTriggerEnter_mE00E1FE1552DC982192BF2483AA410D2D675D1AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Enemy"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteralA25632F8F4FF9659997A848C2EBEEF27D0974164, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// GameManager.Instance.EnemyHit();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_2 = GameManager_get_Instance_m1284638729202F71BCEC9B4E82E81E0C0232B97F_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		GameManager_EnemyHit_mB87AE5E9F7EC54FAD1C10E16586A7C71BE919E5E(L_2, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void WaterBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBall__ctor_m4744AA676B9DA331923AA71BB8D6891CBD08D412 (WaterBall_t84539382E579DE5F8CF8165BC1A8C21D42D6270B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, const RuntimeMethod* method)
{
	{
		// public CanonicalTileId CanonicalTileId { get; private set; }
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_0 = __this->get_U3CCanonicalTileIdU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112_inline (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return _id; }
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_0 = __this->get__id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * GameManager_get_Instance_m1284638729202F71BCEC9B4E82E81E0C0232B97F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_get_Instance_m1284638729202F71BCEC9B4E82E81E0C0232B97FAssemblyU2DCSharp9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get { return instance; } }
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_10();
		return L_0;
	}
}
