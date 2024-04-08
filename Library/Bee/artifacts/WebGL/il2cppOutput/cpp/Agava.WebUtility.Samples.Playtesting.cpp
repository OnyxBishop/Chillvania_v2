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

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct String_t;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8FBAE522CD60ABE57E57092FE08E039675757F5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA4048EA816CD97F4959B92DF8A3A6F70E00A0E96;
IL2CPP_EXTERN_C String_t* _stringLiteralA964BCE0950EDAB83C3E9022D2EBB561011536AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD28252CFE9BDEC6C0958F0A2C2578F2C73765B1F;
IL2CPP_EXTERN_C String_t* _stringLiteralF67FF52BAD5C543F3623D3051EA5B4ED8BCD0DEB;
IL2CPP_EXTERN_C const RuntimeMethod* PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t21528B719536EBC1DF1168B4B41D0EDAD11332DB 
{
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____adBlockStatusText;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____isMobileText;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData;
	String_t* ___m_Text;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout;
	bool ___m_DisableFontTextureRebuiltCallback;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh;
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebApplication_add_InBackgroundChangeEvent_mB7260EB252A3A6DA8F983B027453CFF8D5FE34B9 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebApplication_remove_InBackgroundChangeEvent_m9648F1AE6E0696D8C3ECF421CCA3F9F93E1E3C71 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdBlock_get_Enabled_m989406C3DDA4D07CD3E1FEB010119E869F980E62 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Device_get_IsMobile_m9948F5BACF088142A01829B114D03A36D1B483FE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33 (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaytestingCanvas_OnEnable_m0DA206DABB74FB4D288F0672257B48D6D93A7C34 (PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_0, __this, (intptr_t)((void*)PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5_RuntimeMethod_var), NULL);
		WebApplication_add_InBackgroundChangeEvent_mB7260EB252A3A6DA8F983B027453CFF8D5FE34B9(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaytestingCanvas_OnDisable_m7E0583AEAB2110D0DBF5368ACE07A06DA26098AC (PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_0, __this, (intptr_t)((void*)PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5_RuntimeMethod_var), NULL);
		WebApplication_remove_InBackgroundChangeEvent_m9648F1AE6E0696D8C3ECF421CCA3F9F93E1E3C71(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaytestingCanvas_Update_m7F16767CFB5A5C20150DD1F0AEFEAB6A3B252C19 (PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBAE522CD60ABE57E57092FE08E039675757F5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4048EA816CD97F4959B92DF8A3A6F70E00A0E96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA964BCE0950EDAB83C3E9022D2EBB561011536AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28252CFE9BDEC6C0958F0A2C2578F2C73765B1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67FF52BAD5C543F3623D3051EA5B4ED8BCD0DEB);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____adBlockStatusText;
		bool L_1;
		L_1 = AdBlock_get_Enabled_m989406C3DDA4D07CD3E1FEB010119E869F980E62(NULL);
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0014;
		}
		G_B1_0 = L_0;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23, G_B3_1, G_B3_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____adBlockStatusText;
		bool L_5;
		L_5 = AdBlock_get_Enabled_m989406C3DDA4D07CD3E1FEB010119E869F980E62(NULL);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralA4048EA816CD97F4959B92DF8A3A6F70E00A0E96, _stringLiteral8FBAE522CD60ABE57E57092FE08E039675757F5E, _stringLiteralA964BCE0950EDAB83C3E9022D2EBB561011536AC, L_7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(71, L_4, L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->____isMobileText;
		bool L_10;
		L_10 = Device_get_IsMobile_m9948F5BACF088142A01829B114D03A36D1B483FE(NULL);
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralA4048EA816CD97F4959B92DF8A3A6F70E00A0E96, _stringLiteralF67FF52BAD5C543F3623D3051EA5B4ED8BCD0DEB, _stringLiteralD28252CFE9BDEC6C0958F0A2C2578F2C73765B1F, L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(71, L_9, L_13);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaytestingCanvas_OnInBackgroundChange_m58183DD1E6891F86C79997F3B4F598CD79687CE5 (PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40* __this, bool ___0_inBackground, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___0_inBackground;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33(L_0, NULL);
		bool L_1 = ___0_inBackground;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (0.0f);
	}

IL_0015:
	{
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaytestingCanvas__ctor_m70E78740B2979C63A220CAFCBB966643906E0D83 (PlaytestingCanvas_t4FE71BE53FC9DAAAC1AE7CC508A1F08898B04E40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
