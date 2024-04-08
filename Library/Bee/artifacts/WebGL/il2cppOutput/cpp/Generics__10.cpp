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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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

struct Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8;
struct Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F;
struct Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346;
struct Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B;
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F;
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7;
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD;
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043;
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0;
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6;
struct Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B;
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_tA0A2C7BBDB4802D2AFF0ECD6A1020DB449D91FCB;
struct IEnumerator_1_t9A8C78329AA40049674038374240306FDCB5663E;
struct IEnumerator_1_tFD827CF8F93411879A9A270098B457F6F4A61173;
struct IEnumerator_1_t2EA3AC13270BB56026B7097A0024DD3CCA3CF9EC;
struct IEnumerator_1_t0003EC9F1922ECBB54EB7E71B85E13FBC8357DD6;
struct IEnumerator_1_t244D74006AB09508019296F2A8E4CAF8259B1E9B;
struct IEnumerator_1_t4CB13C9A05F08FC5070C0050B8AF1013247C8994;
struct IEnumerator_1_t0853686C470AC22FA56D25023813C95760296BF7;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct IList_1_t1F79F22F068EBEEE2FC8D080E405FD5F950258E3;
struct IList_1_tF939437DA6A736B0D418E652C678C909E9D54240;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_tE1DBB5F3DF28BD7B0DD590F3E34EEB324610B113;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C;
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A;
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298;
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04;
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
struct KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866;
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
struct KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F;
struct List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098;
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96;
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9;
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF;
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B;
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171;
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
struct ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906;
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
struct ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
struct EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C;
struct KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6;
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA;
struct String_t;
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
struct EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C;
struct KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* ____keys;
	ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* ____keys;
	ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* ____keys;
	ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* ____keys;
	ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys;
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* ____keys;
	ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys;
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* ____keys;
	ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471  : public RuntimeObject
{
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
};
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
};
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
};
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
};
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436  : public RuntimeObject
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
};
struct KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866  : public RuntimeObject
{
	Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ____dictionary;
};
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385  : public RuntimeObject
{
	Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ____dictionary;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F  : public RuntimeObject
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
};
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
};
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
};
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
};
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28  : public RuntimeObject
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
};
struct ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906  : public RuntimeObject
{
	Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ____dictionary;
};
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114  : public RuntimeObject
{
	Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ____dictionary;
};
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	RuntimeObject* ___m_ItemsSource;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
};
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B  : public RuntimeObject
{
	RuntimeObject* ___m_Columns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_DisplayColumns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_VisibleColumns;
	bool ___m_VisibleColumnsDirty;
	int32_t ___m_StretchMode;
	bool ___m_Reorderable;
	bool ___m_Resizable;
	bool ___m_ResizePreview;
	String_t* ___m_PrimaryColumnName;
	Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F* ___changed;
	Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB* ___columnAdded;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnRemoved;
	Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346* ___columnChanged;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnResized;
	Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5* ___columnReordered;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA  : public RuntimeObject
{
	RuntimeObject* ___m_Descriptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC 
{
	float ___sum;
	int32_t ___count;
};
struct DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_tAFA9308213550ECEB767DDACA30D572E74485220__padding[1];
	};
};
struct DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_tAFA9308213550ECEB767DDACA30D572E74485220__padding[1];
	};
};
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___m_Getter;
	PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___m_Setter;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	bool ___value;
};
struct Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Il2CppChar ___value;
};
struct Entry_tA212E7034D981AC2F7E219C600769EE485919684 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int64_t ___value;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	int32_t ___key;
	bool ___value;
};
struct KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF 
{
	int32_t ___key;
	Il2CppChar ___value;
};
struct KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 
{
	int32_t ___key;
	int64_t ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField;
	RuntimeObject* ___m_Data;
	RuntimeObject* ___m_Children;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0  : public CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768
{
	Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054* ___m_TreeItems;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_RootIndices;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_ItemWrappers;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_TreeItemIdsWithItemWrappers;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_WrapperInsertionList;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
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
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB 
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 
{
	Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD 
{
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED 
{
	int32_t ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 
{
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96  : public RuntimeObject
{
	TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E  : public RuntimeObject
{
	TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
	MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6* ___m_ColumnController;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
};
struct DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B  : public MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___m_TreeDataController;
};
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F  : public MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F 
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 
{
	Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ____current;
	int32_t ____getEnumeratorRetType;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* ___defaultComparer;
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields
{
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471_StaticFields
{
	EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* ___defaultComparer;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F_StaticFields
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___K_ExpandItemByIndex;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CreateWrappers;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C m_Items[1];

	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD m_Items[1];

	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 m_Items[1];

	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED m_Items[1];

	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE m_Items[1];

	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 m_Items[1];

	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 m_Items[1];

	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF m_Items[1];

	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA212E7034D981AC2F7E219C600769EE485919684 m_Items[1];

	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 m_Items[1];

	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 m_Items[1];

	inline Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 m_Items[1];

	inline KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 m_Items[1];

	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 m_Items[1];

	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC m_Items[1];

	inline Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 m_Items[1];

	inline KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7_gshared (DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377_gshared (DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF_gshared (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288_gshared (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221_gshared (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9_gshared (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mB4A8458D72149F8B0EED7CE399F4DFB65DEBF28E_gshared (KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m53706A3B1AB78BAD651420EE61AD044D8D41E573_gshared (ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2A8FE66334E77EF575C4CC2DCBD6F927FA28FA83_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAA8C9537962D6491438A8C5A0660F3E2F57B2AF1_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA8201E9EF19C924527B2587851B0FB687E13296C_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7C420431240CCC444E02AF48411F5FC8BCB16169_gshared (KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B_gshared (Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2C659DB9270F1B7E478BFDD8B080EBBCFFA13F84_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5299209BBBA99B542D426DEECBD5CC6B6EEBE0EF_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m420787E654882E80EBC6BE83D021526807DF4F21_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2DF7CD0AB0E08701608415A57FBA4DB2B0736D7F_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mE3D67C524D97F384D19C5FFD76AAE2323ED35ACF_gshared (KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1AE50995836A7A84DB7F75E4604394779F5D4EE1_gshared (ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8012437F16DAF3BD31E59577372DFDD81C5DA688_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m601B69B82CD5A8EB48DB157FE7EBEE4108928ECF_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0C0E582A9A75AD393A6566BD0EFE0E8745F8503F_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8FDA563DB3540CB48A6F2B424DF1C0AC4AEC3616_gshared (KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6_gshared (Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B7B0A7B2FC433A6094B45A51E0EAD17D8D35DD3_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D0EACA4A9663D847E6B5FCBBD5A021481732A11_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1ECBAD05F90EE2E3685DA425B6792244D0B7CA60_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCCC8BD4D252D7EAC953D91483ECA63706DFE6EB0_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* EqualityComparer_1_CreateComparer_m9049851040E8C418167B87F645A77C6B704C31B9_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
inline int32_t DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7 (DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7*, float, float, const RuntimeMethod*))DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7_gshared)(__this, ___0_x, ___1_y, method);
}
inline int32_t DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377 (DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377_gshared)((DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2*)__this, ___0_x, ___1_y, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, const RuntimeMethod*))TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919 (MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
inline void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365 (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	((  void (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, RuntimeObject*, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared)(__this, ___0_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method)
{
	return ((  TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared)(__this, method);
}
inline void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared)(__this, ___0_rootItems, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, const RuntimeMethod* method) ;
inline RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared)(__this, ___0_id, method);
}
inline int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared)(__this, ___0_id, method);
}
inline bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared)(__this, ___0_id, method);
}
inline RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared)(__this, ___0_id, method);
}
inline bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245 (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, int32_t, int32_t, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared)(__this, ___0_childId, ___1_id, method);
}
inline void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared)(__this, ___0_id, ___1_newParentId, ___2_childIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, int32_t ___0_srcIndex, int32_t ___1_dstIndex, const RuntimeMethod* method) ;
inline bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared)(__this, ___0_childId, ___1_id, method);
}
inline RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared)(__this, ___0_rootIds, method);
}
inline void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	((  void (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, RuntimeObject*, const RuntimeMethod*))DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared)(__this, ___0_items, method);
}
inline TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method)
{
	return ((  TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, const RuntimeMethod*))DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared)(__this, method);
}
inline bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67 (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, int32_t, int32_t, const RuntimeMethod*))DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared)(__this, ___0_childId, ___1_id, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322 (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, int32_t ___0_id, int32_t ___1_newParentId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2 (TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306 (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384 (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26 (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885 (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00 (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3 (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063 (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893 (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8 (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9 (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, const RuntimeMethod*))Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3 (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583 (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288 (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221 (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9 (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mB4A8458D72149F8B0EED7CE399F4DFB65DEBF28E (KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866*, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, const RuntimeMethod*))KeyCollection__ctor_mB4A8458D72149F8B0EED7CE399F4DFB65DEBF28E_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m53706A3B1AB78BAD651420EE61AD044D8D41E573 (ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906*, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, const RuntimeMethod*))ValueCollection__ctor_m53706A3B1AB78BAD651420EE61AD044D8D41E573_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, int64_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m2A8FE66334E77EF575C4CC2DCBD6F927FA28FA83 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, int64_t, const RuntimeMethod*))Dictionary_2_Add_m2A8FE66334E77EF575C4CC2DCBD6F927FA28FA83_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mAA8C9537962D6491438A8C5A0660F3E2F57B2AF1 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAA8C9537962D6491438A8C5A0660F3E2F57B2AF1_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mA8201E9EF19C924527B2587851B0FB687E13296C (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, const RuntimeMethod*))Dictionary_2_get_Count_mA8201E9EF19C924527B2587851B0FB687E13296C_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7C420431240CCC444E02AF48411F5FC8BCB16169 (KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678*, int32_t, int64_t, const RuntimeMethod*))KeyValuePair_2__ctor_m7C420431240CCC444E02AF48411F5FC8BCB16169_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B (Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5* __this, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5*, Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, const RuntimeMethod*))Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_m2C659DB9270F1B7E478BFDD8B080EBBCFFA13F84 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, const RuntimeMethod*))Dictionary_2_Resize_m2C659DB9270F1B7E478BFDD8B080EBBCFFA13F84_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5299209BBBA99B542D426DEECBD5CC6B6EEBE0EF (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5299209BBBA99B542D426DEECBD5CC6B6EEBE0EF_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m420787E654882E80EBC6BE83D021526807DF4F21 (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m420787E654882E80EBC6BE83D021526807DF4F21_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_m2DF7CD0AB0E08701608415A57FBA4DB2B0736D7F (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2DF7CD0AB0E08701608415A57FBA4DB2B0736D7F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723 (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20 (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, int32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mE3D67C524D97F384D19C5FFD76AAE2323ED35ACF (KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385*, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, const RuntimeMethod*))KeyCollection__ctor_mE3D67C524D97F384D19C5FFD76AAE2323ED35ACF_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1AE50995836A7A84DB7F75E4604394779F5D4EE1 (ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114*, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, const RuntimeMethod*))ValueCollection__ctor_m1AE50995836A7A84DB7F75E4604394779F5D4EE1_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m8012437F16DAF3BD31E59577372DFDD81C5DA688 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, const RuntimeMethod*))Dictionary_2_Add_m8012437F16DAF3BD31E59577372DFDD81C5DA688_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m601B69B82CD5A8EB48DB157FE7EBEE4108928ECF (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m601B69B82CD5A8EB48DB157FE7EBEE4108928ECF_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m0C0E582A9A75AD393A6566BD0EFE0E8745F8503F (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, const RuntimeMethod*))Dictionary_2_get_Count_m0C0E582A9A75AD393A6566BD0EFE0E8745F8503F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m8FDA563DB3540CB48A6F2B424DF1C0AC4AEC3616 (KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362*, int32_t, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, const RuntimeMethod*))KeyValuePair_2__ctor_m8FDA563DB3540CB48A6F2B424DF1C0AC4AEC3616_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6 (Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8* __this, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8*, Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, const RuntimeMethod*))Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_Resize_m0B7B0A7B2FC433A6094B45A51E0EAD17D8D35DD3 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, const RuntimeMethod*))Dictionary_2_Resize_m0B7B0A7B2FC433A6094B45A51E0EAD17D8D35DD3_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7D0EACA4A9663D847E6B5FCBBD5A021481732A11 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7D0EACA4A9663D847E6B5FCBBD5A021481732A11_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_CopyTo_m1ECBAD05F90EE2E3685DA425B6792244D0B7CA60 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1ECBAD05F90EE2E3685DA425B6792244D0B7CA60_gshared)(__this, ___0_array, ___1_index, method);
}
inline bool Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557_gshared)(___0_key, method);
}
inline bool Dictionary_2_ContainsKey_mCCC8BD4D252D7EAC953D91483ECA63706DFE6EB0 (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mCCC8BD4D252D7EAC953D91483ECA63706DFE6EB0_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared)(method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
inline EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3_gshared)(method);
}
inline EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* EqualityComparer_1_CreateComparer_m9049851040E8C418167B87F645A77C6B704C31B9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9049851040E8C418167B87F645A77C6B704C31B9_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7_gshared (DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_y;
		int32_t L_1;
		L_1 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&___0_x), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7_AdjustorThunk (RuntimeObject* __this, float ___0_x, float ___1_y, const RuntimeMethod* method)
{
	DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultComparer_1_tD5AE5A1A1257191A99DD8A768794EDC0D6032AA7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DefaultComparer_1_Compare_m3722E498D85F5CAF5E4A54CF0A071DAEDCCBB9B7(_thisAdjusted, ___0_x, ___1_y, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377_gshared (DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t7257EF554A764048831CC064C89068FA146C1F2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t7257EF554A764048831CC064C89068FA146C1F2F);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_TValue_t7257EF554A764048831CC064C89068FA146C1F2F);
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_x : &___0_x), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method)
{
	DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultComparer_1_t28DDA23D136FA86A9B959DFB266C617A005607A2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DefaultComparer_1_Compare_m3C39DFBA939D1551D932F121F11CB91DBB652377(_thisAdjusted, ___0_x, ___1_y, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m1F20F6C75C2B1F09A3CDF201579A52C44E2CAFD2_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		V_0 = (RuntimeObject*)L_3;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___1_y;
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = ___0_x;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		int32_t L_11 = ___1_y;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_10, L_13);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m3608055BEFF92A8B1E02C3960D5EC0DB6D0EAA4D_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_obj;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m38EFDD8C102634417E24C322106E302D76D92AF2_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_10;
		L_10 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_11);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_12, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m763329D490F675E16A666B61F387D5F323EEC697_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_obj : &___0_obj), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* V_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B2_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B1_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_2 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1__ctor_mEF1EB1BEB2B62059619A9D5173A4FCE5FE59C7F2_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = ___0_columns;
		SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* L_1 = ___1_sortDescriptions;
		List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* L_2 = ___2_sortedColumns;
		MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919((MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_get_itemsSource_m0FEE1F09C7345F832CEE268DBA030C8B48AA0E57_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_set_itemsSource_m00398B664F385BF360325A450ED02EF7F1217564_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3;
		L_3 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetItemForIndex_m24FA04020D9DB5B5265B6262A223B7F0C1D6C3C5_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		RuntimeObject* L_3;
		L_3 = TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC(L_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMultiColumnTreeViewController_1_GetParentId_mD961D2E3546DDB3B2206BF56CC9E62E64BE4FE94_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_HasChildren_mBE1315291BDB87D95FC31927A655E49DFA5B7D01_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetChildrenIds_m0194CDFB1B744C13CE7E3F234A7923F74A80D638_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_Move_m55164A409C0B824E2458CA1EBB94BD04C9B44B57_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7;
		L_7 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetAllItemIds_mD0F7EF4794F673CAE28004E8C9AC8895D869DE85_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultMultiColumnTreeViewController_1_get_treeDataController_mDB47A4F064CBFF164239CF868BB935E4AF48917B_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1__ctor_mD82A3F301FC391E9C4B868B7FEF687E15A7F3906_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = ___0_columns;
		SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* L_1 = ___1_sortDescriptions;
		List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* L_2 = ___2_sortedColumns;
		MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919((MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_get_itemsSource_m3014D39CACB92A87B8EBD61F2D631F25545807C4_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_set_itemsSource_mBD91C2CF4E535ED5914CC200626851F26A26D9E9_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_m16AF10D0A53B12BADB73620CDCDEC0992451E623_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetItemForIndex_m8EB76F61313576AA8E82AB8F063D0C9A4A3AFD29_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMultiColumnTreeViewController_1_GetParentId_mA7FAE2E5FD0141501FEEFEFA9578C0F9BF6DDE33_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_HasChildren_m55D6A2CF819D7FC5F312ACA9FAA9B80EDCF5EB16_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetChildrenIds_m6F787ABA5F8B8468FE1E740DDF44D629BD559F52_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_Move_m749329237478F8277C929B5BD54C96E62B3DF281_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_mFDA0E743A2F237D1DC7AC4B8062D113C1EFEEACB_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetAllItemIds_mB75CA248757BEF1F74ACC068896292759120BC09_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* V_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B2_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B1_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_2 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_mD5E0009C4175B06DA4D3841F020E1228BAB1DC1F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m990048927FAD48D4BE8FDD2592E0C4F99CFECC2A_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3;
		L_3 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m51774EE1EAD0593BB5AF57EC6D82361FBD11531D_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		RuntimeObject* L_3;
		L_3 = TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC(L_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_mDA7CEA92A43CD8EF80F5F0D0163171ABFC5834EE_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_mB043EC1AC806DFDF4AFCD8F904F93FBF22D7C1DC_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mCD860DA6AF532B8BD7FE27462C3D775259E564E1_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m3428B20395A4FA811B2B7622F933BC23EEE2ACD8_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7;
		L_7 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mC4A7FF2401C847EC7F3F2F95CAB289808E3BE69B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m5FA5A68E68E1486756E09EB2EC660B072666BE61_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultTreeViewController_1_get_treeDataController_m7E9E89E1B23E11E0E80778544AED21FCA6CBF54F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_m71A06943FE19EC53AA0A693BFCA3FEC2D3E5B771_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m397219E85DD9564F50C85B2B01A91C6EB41C9BF2_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_mFBC214CF0F4E0C67B0114A7D9051268B96D00E2F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m3388DAB31BA3720C4F56BEED24E87A70619E0241_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_m91D4EF4603F4E16AEB6DA0D366AC81142A60BEAE_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_m7099101A6CE7573FFDE1160588465D7BE7642BEC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mC3602866202DF0714EAE6574A5A3CE531ED6D353_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m6072DEBDF2580333A0B88C4C3645D7826B513582_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_m998BC86C72F8779A402B14C89999F49007091CA4_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mFC937CE83D745461C0116D83CD7B4BD95C070C5A_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m45900DF251FCCA1508967C774740F0DA99D6F0AC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelegateProperty_2_get_Name_mEED824A0D241861F8FC2831C7A27631DDE0459B0_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_2__ctor_mCC0F3ACE346BA3B05952715FFDB8B276B2F0B6FA_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, String_t* ___0_name, PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___1_getter, PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___2_setter, const RuntimeMethod* method) 
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B2_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B2_1 = NULL;
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B1_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B1_1 = NULL;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		String_t* L_0 = ___0_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_1 = ___1_getter;
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = __this;
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0020:
	{
		G_B2_1->___m_Getter = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_Getter), (void*)G_B2_0);
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* L_4 = ___2_setter;
		__this->___m_Setter = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Setter), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (&___0_keyValuePair)->___key;
		RuntimeObject* L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59A7EFBF7B0FC8B63DBAC6B03A6CB6E57A5F87A9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F1AB56ECA1606FE8A53BC82796BD02C02AA1E34_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF0A2E435DFBAD656D52EE8728441B6C97D43F2D9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8144453FACA7DFE3A4D1B31C9F87598477D841EB_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_1 = (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* Dictionary_2_get_Values_m74C6223AC7113C9B84D4B02CA148920B7DC43C69_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_1 = (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC Dictionary_2_get_Item_m7FE06CA7DF0622D9DEE2DCA26996DE20D0746105_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE31EBE06CE0AB7973D3FF1BBEF932B812E71F03A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m614BE4328C148EBAC4896C3D75540A989D0DE9F2_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC6F5CA7050C579B5D38CE75E318EC4F2DEE960C1_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2693A3949C762703B337E2BC4BE5CC025D849694_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE6119A0F542C166EC5BE4529BF6098117D5CF8DD_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	int32_t V_1 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_6;
		L_6 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = V_0;
		int32_t L_8 = V_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_17 = V_1;
		int32_t L_18 = V_2;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F Dictionary_2_GetEnumerator_m22DA3CD90EB07F7C718497BBFF48C1FA052D9D55_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7B8442FC6D45FEA025D708CAC58C738960F22E82_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_31 = V_0;
		int32_t L_32 = V_5;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_57 = V_0;
		int32_t L_58 = V_5;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_96 = V_10;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = __this->____entries;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m860D445B386D5BA2AE21A6B60439EFC39B9E2A07_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_3 = ___1_value;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30E4598809515FAF33D59BC09883EAB82AAD1DAE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m137070BEE38BF2BABE2721EFDFDE3A71F36D31DE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mCF29C2218E6DE77AB4C54CD3B862EEC5AED93582_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m79A9BCF1D58852835CD84DC50F7B19104B5FD0D0_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m233C2AF87E76D637D1BCCC2496D9C58FFCDD4781_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mCA0B5A2672FEA304CD418B553276B650FDC7D015_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF44352189C213E301670BCDA03E8864D98CBC16_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88A9D12036C80CB033298F11A288715B9127F81A_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B9030C930A4ACE472083DEEF86A3CF0CA37D40F_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m779242666134EFB1D49EC3D16454815C845F0917_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_1 = (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* Dictionary_2_get_Values_mA9AAA6A442AC42421A6D1627081EC9886220C9B2_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_1 = (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 Dictionary_2_get_Item_mDBD227A6DCB15DFCFCE56FF91917592519DC25EE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m91ED4428222F628232971AF05FB7F78EC3F046EB_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41A535BB3AA16BE4EB22975CF60C24CFD322A6A7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA2362FD46C17F2D1A4B93EB8AB3DD739C1289011_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m43644FC8C5F85236223BAB42745A03B62371A088_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7BB14CD563E10A97497C49F092CC2D3E530F43D9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	int32_t V_1 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_6;
		L_6 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = V_0;
		int32_t L_8 = V_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_17 = V_1;
		int32_t L_18 = V_2;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 Dictionary_2_GetEnumerator_m20680CE0696850F2F87A0FE24A96103B26B64EB1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8A3103D106B48F543372C608E0E88A902B490D92_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_31 = V_0;
		int32_t L_32 = V_5;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_57 = V_0;
		int32_t L_58 = V_5;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_96 = V_10;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Children), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = __this->____entries;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_41 = V_4;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_42 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A36DBD18366FC1E845B485401B66A846B96103E_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_3 = ___1_value;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE5A34ADBCA667FAE11A0320D4EF6D33BC9FD40F7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEDAEFB5BC29EE059E6ABB1181415F84B5DB54299_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m01BDFC129DFFBB226B2FA7677A55FA3AE7541DD4_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB8233567B1913DB15FF31976DD4C98D1A6381809_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m0AEC2FDE585FCD73D60143064015E7347EAF13B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7342F42FE0F456A0479060BFF4C6C3DDC10A790C_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06B53BFC9A627FEE633CC1D4E73314B2CFF4B48B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABB854F1C48C5B03B68B0A413FFB9656F9153025_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D9BC134A4251C2BCCD1C4F37FB14A2797C464AC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_1 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* Dictionary_2_get_Values_mD84044BD83C2E0E89780F9F680E6EAEAADE6C21B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_1 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mFEABB1F5BA99558C75E330D9F550473FD42C4DFD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		bool L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m88AD79C266834E07C99A1DE00A3297F9CD2B82EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		bool L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4462F865217031D600D34D4B5E5D0FA1BA7BDD7D_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20A4B81A426018B486687D643DC8F024F7761D1B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE2925B42DE92CB95771AB4BADE479B7701671EB8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFCD8AD6170953392F984E4F03BF8DDF3A9EF11BD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_6;
		L_6 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = V_0;
		int32_t L_8 = V_3;
		bool L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		bool L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		bool L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 Dictionary_2_GetEnumerator_mF19575B85A328947B27BABD4D104052B8F97FAC7_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m550E8A7B8C25429EBEA96D1DD7A0059CC7CB6CEC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_31 = V_0;
		int32_t L_32 = V_5;
		bool L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_57 = V_0;
		int32_t L_58 = V_5;
		bool L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_96 = V_10;
		bool L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61FB537A534F56E61FCCFA872BC66EE438782242_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF13795C1185ADAB240A05D015AECD78F34E7AE00_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A26B359A35B4E503C91AE2CAFB686510830C118_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34240AA3DCE5F7E234EA8F837E60359527F0FFBA_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1934F06A0FDFB3B728445676E52E60E2DD61EF26_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		bool L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2A20A4DC1297F17CA75CE556E9478BDCD7A24E97_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD0F72A65D09EB22E0C7720CD0E099163B97AA00_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF2BA68FB228BDE702DC230A810FDA729A76D4F3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB13762744A0270086CAF9AB771351442D4224E28_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E8599FAC86967646C846E377B65E99DACA301F4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_1 = (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* Dictionary_2_get_Values_m689FE14DC17D484526F45F974E8DAE9122B08CCF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_1 = (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Dictionary_2_get_Item_m49A20DF302FC15423AC5B1A834A2E2D66A4D1FC3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCE1006F57A966B17A3F965FFBCC7544CEF873CE9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		Il2CppChar L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8139B845362053338B95E27DF5BBEF984CC85CA8_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppChar L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCA71989B1F1402CF8B643015618FC85D45343133_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppChar L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6BDE066E698E26ADC17687AFDD39842931DD0964_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7263044603C4DEE99F08FA1E6F44FF03B507DB97_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = V_0;
		int32_t L_8 = V_3;
		Il2CppChar L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Il2CppChar L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_17 = V_1;
		int32_t L_18 = V_2;
		Il2CppChar L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 Dictionary_2_GetEnumerator_m6AB3286FC3E7FC8009B0AB9A451197694FAA20D6_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0D14665D7E84AE8738DB040BE859821315EC5CBF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_31 = V_0;
		int32_t L_32 = V_5;
		Il2CppChar L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_57 = V_0;
		int32_t L_58 = V_5;
		Il2CppChar L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_96 = V_10;
		Il2CppChar L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = __this->____entries;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD7A8027D1603995D29CED33BA6D2744225ACE8D9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar* L_3 = ___1_value;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppChar*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Il2CppChar* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppChar));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD2EA2825812C20B3E1BA7FE2E75A258CCBF36788_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m856951A0B56F903C9592D3087A585CE09AE94D1C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m89815F8FD7028F44F17A4A2DAF3443B5A497CC49_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mE6A186CA8935AD82FF029A56322475E1152ED441_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3332DFAD89172F54DB55CE3C425F875B65298BAF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Il2CppChar L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBB1A1F78009CC0D30B633824428CA3BD1A3FEF7E_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m32070AC27049F48388F0C7487840A63412E4656B_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE78B97A95ADF0BF964CFD2F3B70BE603AFF8F1CB_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* Dictionary_2_get_Keys_mB64A9185E49CABD8BF51D2289F8EB04EBB87C331_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_1 = (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* Dictionary_2_get_Values_mAE21DED790C614A179EA5E708FCDD9CDEC2F3E02_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_1 = (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mFCDC4362DAC6FD22B833B66259CAE6BB665EE15E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCA81C2C0CD6BAD9B80340962A0A04324250A34AE_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m779A3D9C98E3829A07D68770CA8270930E4AE046_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m9821889E928BB7EAEE9A7E81EDFC59651F7CBDD0_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFAF6C96BF35F553B575E0A2CBE74C283BF39E7D9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12BE341A8649D6FAA2500F44C227A5A9649642FA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = (EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)(EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA212E7034D981AC2F7E219C600769EE485919684* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_57 = V_0;
		int32_t L_58 = V_5;
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = (EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)(EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = __this->____entries;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA212E7034D981AC2F7E219C600769EE485919684* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8F28AFD57D4692326B4B3AE90E056FB552DB3FD8_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE114363144C235AE56C962F604961D915AB0E09E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE6A4232F9EA9B74A1B715DC31EA296111E49B18C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mC4DDD8FEB5D98320F8BB2C3E2AAA0791E39DB364_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7010C4F527554F2A4EF84A151235FF06C0DF62EA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBE228CEF79B377003ADB2F34B977A61CF206B856_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5842AD2BDA247522D2E53DC24F64A97A02D3629C_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m31A22A649E184E39A2191112244CEBE5E87575E7_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m472707B77BDBDFD2058E6B0A3324E9E5F363CBBF_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m90AD7A12D02B06B178632CB9A9AFF35132DDEA9B_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m395BD12258554F52F7B03500C27A06100E8441C9_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA8201E9EF19C924527B2587851B0FB687E13296C_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* Dictionary_2_get_Keys_mD395724FEA5A56B7A0AC045D06089BD52E93D18D_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* L_1 = (KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mB4A8458D72149F8B0EED7CE399F4DFB65DEBF28E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t401E270C757CE48FC10E1F6E5E23DC611BF56866* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* Dictionary_2_get_Values_m7388EBA3ECEF3C9EF9E2CC8D816122F584AFE469_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* L_1 = (ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m53706A3B1AB78BAD651420EE61AD044D8D41E573(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB8177DDCCB878E605152542DBBCA485CCA0B1906* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Dictionary_2_get_Item_m28023A002754E1540ABC1B75307195619E0F77D1_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int64_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int64_t));
		int64_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m50F740CD43231741C4736AB1D1297036F91B7F30_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int64_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2A8FE66334E77EF575C4CC2DCBD6F927FA28FA83_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int64_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m73F24FEFB866AF3AB9CBF1763E14B8CD99EFDBC6_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int64_t L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m2A8FE66334E77EF575C4CC2DCBD6F927FA28FA83(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A3C33E641874B900EAAF6527F1DE1808B320057_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_3;
		L_3 = EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int64_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int64_t L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4161C77E97F0A4498C634AC6FA17CFF3D71300F6_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_3;
		L_3 = EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int64_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int64_t L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_mAA8C9537962D6491438A8C5A0660F3E2F57B2AF1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m76153F750F56D21E55A6EA6E18674B7E2602F844_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2DF7CD0AB0E08701608415A57FBA4DB2B0736D7F_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m3C1DAC93BA5727636522E1DE6A65E6152F11E4DC_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int64_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_6;
		L_6 = EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_7 = V_0;
		int32_t L_8 = V_3;
		int64_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int64_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m420787E654882E80EBC6BE83D021526807DF4F21_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mA8201E9EF19C924527B2587851B0FB687E13296C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_17 = V_1;
		int32_t L_18 = V_2;
		int64_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7C420431240CCC444E02AF48411F5FC8BCB16169((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 Dictionary_2_GetEnumerator_mDB6E4ACE8C438EF1D1D491AB2A124106F6A48279_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mC3C7CF2BE9E0F6C611EE5A629AF937C12080DA4F_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_5 = (EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515*)(EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m639E858EC8D3811E83EE7AC435BB14745EBFE6EF_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC3B8A29F8AF449FFCD713C86A03AEF9CE3656836(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_31 = V_0;
		int32_t L_32 = V_5;
		int64_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_57 = V_0;
		int32_t L_58 = V_5;
		int64_t L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2C659DB9270F1B7E478BFDD8B080EBBCFFA13F84(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_96 = V_10;
		int64_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2C659DB9270F1B7E478BFDD8B080EBBCFFA13F84_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5299209BBBA99B542D426DEECBD5CC6B6EEBE0EF(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5299209BBBA99B542D426DEECBD5CC6B6EEBE0EF_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_3 = (EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515*)(EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_5 = __this->____entries;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAA8C9537962D6491438A8C5A0660F3E2F57B2AF1_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t4F374F13C9422AE969BA033893F5B076AEE88131* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA2E5AA5A45D4B27504CAC12A1C46A3147BF4D420_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, int32_t ___0_key, int64_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int64_t* L_3 = ___1_value;
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int64_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int64_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int64_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int64_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37FAFEBF4125C4F2997839CFB084E74D1889D6EA_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7162E076F0E49BDB746C2F10C8A0A8466496EB11_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t12A0EB4C16F8EA483E22FBD9E7E25C5321B4DE39* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m420787E654882E80EBC6BE83D021526807DF4F21(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15FABA0284FF6D030966171D5351EFDBBE2A7736_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBCB2AA5BAC4B6C6A2542627530D22BBEDE88E65B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t49A401E2FE3413D1C7D9C0E15299366F400D61F5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0D89C396757FE5CD4E66CCBB9968B35FE31E3411_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m826B2E17550566D3B1314ACA6671424FDBDC07ED_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mDCFF2B603CDDCD8CDF4A5DF993FC00F5E2713B51(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t19CA95B544EBD9F254D17342F41A7F9203BB2515* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int64_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m69BC9155DECD1AE3B51DF6880774499172016726_gshared (Dictionary_2_t3082339123A235665A1142FCA16B1B8BB2D63735* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mDC8544DD87D27B8A7540AE549047EFD5AC64568B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m2DF7CD0AB0E08701608415A57FBA4DB2B0736D7F(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m224CE4C47236A2296F3AC732E6F20FC1EEB56898_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m662792378721ABA8BB76A2704111F2862387175F_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_1 = (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_1 = (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m406FC1F8D4F8D404D52A8DCBDACC3366B07C1023_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		RuntimeObject* L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m799CB7072EA86BBAA968788165BED53504B05B8C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFA18DA1E464054398917BAD800DECFD0FA002759_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m999D98061B8048248A312862400275D718C22535_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB96279E2BE4AD812C71C56B4449C6B42CB58B263_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF948AA30BB792C629F41AFB2C581CCF4E8F7086C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8D83D313D4C6EB9A313BBDA060C4DFA309F045A8_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m897C68EA5BF762F3E2ECAC5E6EDEA8B96E94E55D_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6986BDCC75CBA86C7BB96A0BD0FF94D151E5058A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m219273E1F514BD2B393DC52D036E1996845D640B_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mC788B0151338EF5685E1E9B1F5B40DF4E6B3AF23_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA766B37BD112E366FC35D3F18297C19515D77B59_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF3132ED1CAFE914278609CB2FCECA037C1F24B42_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8AACEFD8A0EED895C3A27DF58FACFAEEBF3BCF81_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB1E502CED414994ECA8E86EAA42E97BA29F25D49_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m86C82457B622D35605A9FA277BC2E00E0E96BA3E_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0C0E582A9A75AD393A6566BD0EFE0E8745F8503F_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* Dictionary_2_get_Keys_mF4DFFF02B4D4F60692A3B8416B590EE38419F801_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* L_1 = (KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mE3D67C524D97F384D19C5FFD76AAE2323ED35ACF(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t0EADCA6127CA2346CF910D7F5244EFB9CB5DE385* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* Dictionary_2_get_Values_mE4CC4E656385A1B7A90613F6F2CE4C1A36E36296_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* L_1 = (ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1AE50995836A7A84DB7F75E4604394779F5D4EE1(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t01C6500896D19475A6B365F507878B011CC4F114* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A Dictionary_2_get_Item_m22D2E3DBF27163D2BFB2C1AAC609CC9F5ECF5AB8_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDCF3647D7FD8E04549606D37F582F76EFE38FFE7_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8012437F16DAF3BD31E59577372DFDD81C5DA688_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0F35FBEEBFD9AEC2B24AABEA9D44EC41AAD0B036_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_1 = (&___0_keyValuePair)->___value;
		Dictionary_2_Add_m8012437F16DAF3BD31E59577372DFDD81C5DA688(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m798D1A236CA72853818ABDA5D3523A7004BADC5C_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_3;
		L_3 = EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m056C577409B293F7419013F3055697A528F9DE3C_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___0_keyValuePair)->___key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_3;
		L_3 = EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_7 = (&___0_keyValuePair)->___value;
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = (&___0_keyValuePair)->___key;
		bool L_10;
		L_10 = Dictionary_2_Remove_m601B69B82CD5A8EB48DB157FE7EBEE4108928ECF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m58D948F7FA45A9D855933237A2CFA6DBB6E9FB47_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCCC8BD4D252D7EAC953D91483ECA63706DFE6EB0_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m1F779420C7BA06FF899D8347C49D5923788DB918_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* V_0 = NULL;
	int32_t V_1 = 0;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_6;
		L_6 = EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_7 = V_0;
		int32_t L_8 = V_3;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1ECBAD05F90EE2E3685DA425B6792244D0B7CA60_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m0C0E582A9A75AD393A6566BD0EFE0E8745F8503F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_17 = V_1;
		int32_t L_18 = V_2;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8FDA563DB3540CB48A6F2B424DF1C0AC4AEC3616((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 Dictionary_2_GetEnumerator_m3D97F12FA75A1D207C46C7E7655F7730296DF58B_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8A553CD78977356286B74D03243AD84B8C798893_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_5 = (EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B*)(EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mB147DBC7115F580B37EB7F2C62A5BE904F4C85B5_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7EEDD93CC9AAEF343DAF83344EED667416E2CFC3(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_31 = V_0;
		int32_t L_32 = V_5;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_57 = V_0;
		int32_t L_58 = V_5;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m0B7B0A7B2FC433A6094B45A51E0EAD17D8D35DD3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_96 = V_10;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B7B0A7B2FC433A6094B45A51E0EAD17D8D35DD3_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7D0EACA4A9663D847E6B5FCBBD5A021481732A11(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D0EACA4A9663D847E6B5FCBBD5A021481732A11_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_3 = (EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B*)(EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_5 = __this->____entries;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m601B69B82CD5A8EB48DB157FE7EBEE4108928ECF_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5DB25556A6274FB3C0EE09D2A871A1DF33FCA70F_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, int32_t ___0_key, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A* L_3 = ___1_value;
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9013EC735E4C7B2E5BFD6561E62B0C8B68A3F313_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m5AC3998D7FA9EC1F3E86A6CE46C56F70C74D61D8_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t45F2598746F9BC69A4C58EA62CBF63574072C27E* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1ECBAD05F90EE2E3685DA425B6792244D0B7CA60(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2BC841B653C9C7B8A849DB1FDA2BF2DA35F82DD8_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7414C839B4B4DBF67BE33C7B373CBE039A5FEEA6((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1703359A3F3FE7A0FF3091E8A11DEB3C62F1E3D8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0A225BE9B9687F7E2E7B4C6E1CB74322BEDEB2F0_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7D229E7218CD60C54D0EF94A0D2A2868D46E75B6_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m93AEFCFB81A1B87AAA0FFF53E316314564159D9E(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5CF00908077AFA23116F9781751B67DCBF590D7B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mB61B03B00B3D86E60807A5E124145049BC8E7784_gshared (Dictionary_2_t325E0994DB9C0744932C602369C10E8ED56E7FF6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA09BFCF08DD2632BDC47C297A57E26084435C557(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mCCC8BD4D252D7EAC953D91483ECA63706DFE6EB0(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_0 = NULL;
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_0 = ((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_0 = NULL;
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_0 = ((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_0 = NULL;
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_0 = ((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* EqualityComparer_1_get_Default_m68FD4C549830DEEF3F5EA4036A38A4FAD009E732_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* V_0 = NULL;
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_0 = ((EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9049851040E8C418167B87F645A77C6B704C31B9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t514C7D9BCC87EB2979BE46D8ACB8D03D0B65F471* L_4 = V_0;
		return L_4;
	}
}
