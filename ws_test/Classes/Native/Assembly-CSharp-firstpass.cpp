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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Jetfire
struct Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA;
// Jetfire/JetfireConnectCallback
struct JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56;
// Jetfire/JetfireDisConnectCallback
struct JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F;
// Jetfire/JetfireReceiveDataCallback
struct JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E;
// Jetfire/JetfireReceiveMessageCallback
struct JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5AD3DDD0E95BC48573B4353BC6539A3D2882BB;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9CA26FCBB1371176B3FC65D6F1C18CD8DCEE73;
IL2CPP_EXTERN_C String_t* _stringLiteralF11A107F38328604E9320754224B60375758BCA1;
IL2CPP_EXTERN_C const RuntimeMethod* Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m7930AE40AC72D337F4E9AAC70FD046844517D6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC4DC81521D632CE242894079863E35D188452797_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t JetfireReceiveDataCallback_BeginInvoke_m9A7168938A0E11BA1B70BD7A94C798D1893B183C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_Close_mE253AA2A6F3D7BCA4EDD62199B546BE3C571B0A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_Connect_m8D08FD5228FA402BB2090C962C5682C9933DA95C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_IsConnected_m22E6C9DCC2BFCF1D6E1D531EE906D606E801AED9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_Open_m271625AF56FEA15ADE966118968F7EFD76B1CFEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_Ping_mF78F8468712A9519F8D49829BFA39283636EAAAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_SendData_mF0B4B775AFE599378C5F960EF79D778FB98D291F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire_SendMsg_m44AB32CD5FE611DF36A0AB17A43CF87A178029A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Jetfire__cctor_mE907F9EFA2D350EDC9FD4FAF6EB41E38C0F5159D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC 
{
public:

public:
};


// System.Object


// Jetfire
struct  Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA  : public RuntimeObject
{
public:

public:
};

struct Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> Jetfire::ByteQueue
	Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * ___ByteQueue_0;

public:
	inline static int32_t get_offset_of_ByteQueue_0() { return static_cast<int32_t>(offsetof(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_StaticFields, ___ByteQueue_0)); }
	inline Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * get_ByteQueue_0() const { return ___ByteQueue_0; }
	inline Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED ** get_address_of_ByteQueue_0() { return &___ByteQueue_0; }
	inline void set_ByteQueue_0(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * value)
	{
		___ByteQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteQueue_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Queue`1<System.Byte[]>
struct  Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____array_0)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
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

// Jetfire_JetfireConnectCallback
struct  JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56  : public MulticastDelegate_t
{
public:

public:
};


// Jetfire_JetfireDisConnectCallback
struct  JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F  : public MulticastDelegate_t
{
public:

public:
};


// Jetfire_JetfireReceiveDataCallback
struct  JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E  : public MulticastDelegate_t
{
public:

public:
};


// Jetfire_JetfireReceiveMessageCallback
struct  JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);

// System.Void Jetfire::ConnectCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78 (const RuntimeMethod* method);
// System.Void Jetfire::DisConnectCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Jetfire::ReceiveMessageCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Jetfire::ReceiveDataCallback(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996 (intptr_t ___pnt0, uint64_t ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_mC4DC81521D632CE242894079863E35D188452797 (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED *, const RuntimeMethod*))Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared)(__this, method);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared)(__this, p0, method);
}
// System.Void Jetfire/JetfireConnectCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireConnectCallback__ctor_mD2BA87CBEDA03832F22F717B3CEB271E6F181F94 (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Jetfire/JetfireDisConnectCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireDisConnectCallback__ctor_m5F26C3563FA4AEEE7ADF71615AF9DFA1A82B8E83 (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Jetfire/JetfireReceiveMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveMessageCallback__ctor_m081D5BA31FC242033DB7662D9163CA2CDDF71858 (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Jetfire/JetfireReceiveDataCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveDataCallback__ctor_mE52547E09149F24E5D74DAAB60550492690E2843 (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Jetfire::JetfireOpen(System.String,Jetfire/JetfireConnectCallback,Jetfire/JetfireDisConnectCallback,Jetfire/JetfireReceiveMessageCallback,Jetfire/JetfireReceiveDataCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireOpen_mE3AD1098F7F6E1E6ECFF8E2F10CAE26952C7393A (String_t* ___path0, JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * ____connectCallback1, JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * ____disConnectCallback2, JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * ____receiveMessageCallback3, JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * ____receiveDataCallback4, const RuntimeMethod* method);
// System.Void Jetfire::JetfireConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireConnect_mBACB6F88B1E85EBEE371710A0A2DFD047DDDBF05 (const RuntimeMethod* method);
// System.Void Jetfire::JetfireClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireClose_m0CC6F7314934498B3742EDDBC362F416DEA9F610 (const RuntimeMethod* method);
// System.Void Jetfire::JetfirePing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfirePing_m60AABB98F7965BE16527F2DADCDE291C03654177 (const RuntimeMethod* method);
// System.Void Jetfire::JetfireSendMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireSendMsg_m2457B6058581E93D604B4C3CC00B1247BEBE571A (String_t* ___msg0, const RuntimeMethod* method);
// System.Void Jetfire::JetfireSendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireSendData_m8859C02DC274D2CD5F08D20DE9F711B70AADAC6D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___size1, const RuntimeMethod* method);
// System.Boolean Jetfire::JetfireIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Jetfire_JetfireIsConnected_m935E9D3D3CDCA067FFD35E2F791CEA3E56BAC072 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor()
inline void Queue_1__ctor_m7930AE40AC72D337F4E9AAC70FD046844517D6DB (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996(intptr_t ___pnt0, uint64_t ___size1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996(___pnt0, ___size1, NULL);

}
// System.Void Jetfire::ConnectCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("connect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF11A107F38328604E9320754224B60375758BCA1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::DisConnectCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("disconnect: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0F5AD3DDD0E95BC48573B4353BC6539A3D2882BB, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::ReceiveMessageCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("msg: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCA9CA26FCBB1371176B3FC65D6F1C18CD8DCEE73, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::ReceiveDataCallback(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996 (intptr_t ___pnt0, uint64_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// if (ByteQueue.Count < 1)
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * L_0 = ((Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_StaticFields*)il2cpp_codegen_static_fields_for(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var))->get_ByteQueue_0();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_mC4DC81521D632CE242894079863E35D188452797(L_0, /*hidden argument*/Queue_1_get_Count_mC4DC81521D632CE242894079863E35D188452797_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// byte[] bytes = new byte[size];
		uint64_t L_3 = ___size1;
		if ((uint64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		V_1 = L_4;
		// Marshal.Copy(pnt, bytes, 0, (int)size);
		intptr_t L_5 = ___pnt0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		uint64_t L_7 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_5, L_6, 0, (((int32_t)((int32_t)L_7))), /*hidden argument*/NULL);
		// ByteQueue.Enqueue(bytes);
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * L_8 = ((Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_StaticFields*)il2cpp_codegen_static_fields_for(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var))->get_ByteQueue_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		NullCheck(L_8);
		Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D(L_8, L_9, /*hidden argument*/Queue_1_Enqueue_mEF86147DA97BC52597094D71FCC03A167B7B397D_RuntimeMethod_var);
	}

IL_0033:
	{
		// }
		return;
	}
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfireOpen(char*, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Void Jetfire::JetfireOpen(System.String,Jetfire_JetfireConnectCallback,Jetfire_JetfireDisConnectCallback,Jetfire_JetfireReceiveMessageCallback,Jetfire_JetfireReceiveDataCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireOpen_mE3AD1098F7F6E1E6ECFF8E2F10CAE26952C7393A (String_t* ___path0, JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * ____connectCallback1, JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * ____disConnectCallback2, JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * ____receiveMessageCallback3, JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * ____receiveDataCallback4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '____connectCallback1' to native representation
	Il2CppMethodPointer _____connectCallback1_marshaled = NULL;
	_____connectCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(____connectCallback1));

	// Marshaling of parameter '____disConnectCallback2' to native representation
	Il2CppMethodPointer _____disConnectCallback2_marshaled = NULL;
	_____disConnectCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(____disConnectCallback2));

	// Marshaling of parameter '____receiveMessageCallback3' to native representation
	Il2CppMethodPointer _____receiveMessageCallback3_marshaled = NULL;
	_____receiveMessageCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(____receiveMessageCallback3));

	// Marshaling of parameter '____receiveDataCallback4' to native representation
	Il2CppMethodPointer _____receiveDataCallback4_marshaled = NULL;
	_____receiveDataCallback4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(____receiveDataCallback4));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfireOpen)(____path0_marshaled, _____connectCallback1_marshaled, _____disConnectCallback2_marshaled, _____receiveMessageCallback3_marshaled, _____receiveDataCallback4_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfireConnect();
#endif
// System.Void Jetfire::JetfireConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireConnect_mBACB6F88B1E85EBEE371710A0A2DFD047DDDBF05 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfireConnect)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfireClose();
#endif
// System.Void Jetfire::JetfireClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireClose_m0CC6F7314934498B3742EDDBC362F416DEA9F610 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfireClose)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfirePing();
#endif
// System.Void Jetfire::JetfirePing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfirePing_m60AABB98F7965BE16527F2DADCDE291C03654177 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfirePing)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfireSendMsg(char*);
#endif
// System.Void Jetfire::JetfireSendMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireSendMsg_m2457B6058581E93D604B4C3CC00B1247BEBE571A (String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfireSendMsg)(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL JetfireSendData(uint8_t*, int32_t);
#endif
// System.Void Jetfire::JetfireSendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_JetfireSendData_m8859C02DC274D2CD5F08D20DE9F711B70AADAC6D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t);

	// Marshaling of parameter '___bytes0' to native representation
	uint8_t* ____bytes0_marshaled = NULL;
	if (___bytes0 != NULL)
	{
		____bytes0_marshaled = reinterpret_cast<uint8_t*>((___bytes0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JetfireSendData)(____bytes0_marshaled, ___size1);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL JetfireIsConnected();
#endif
// System.Boolean Jetfire::JetfireIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Jetfire_JetfireIsConnected_m935E9D3D3CDCA067FFD35E2F791CEA3E56BAC072 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JetfireIsConnected)();

	return static_cast<bool>(returnValue);
}
// System.Void Jetfire::Open(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_Open_m271625AF56FEA15ADE966118968F7EFD76B1CFEC (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_Open_m271625AF56FEA15ADE966118968F7EFD76B1CFEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfireOpen(path,
		//     ConnectCallback,
		//     DisConnectCallback,
		//     ReceiveMessageCallback,
		//     ReceiveDataCallback);
		String_t* L_0 = ___path0;
		JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * L_1 = (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 *)il2cpp_codegen_object_new(JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56_il2cpp_TypeInfo_var);
		JetfireConnectCallback__ctor_mD2BA87CBEDA03832F22F717B3CEB271E6F181F94(L_1, NULL, (intptr_t)((intptr_t)Jetfire_ConnectCallback_m79F085D8D0E6F5DA6DB12134881B8530D0E28E78_RuntimeMethod_var), /*hidden argument*/NULL);
		JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * L_2 = (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F *)il2cpp_codegen_object_new(JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F_il2cpp_TypeInfo_var);
		JetfireDisConnectCallback__ctor_m5F26C3563FA4AEEE7ADF71615AF9DFA1A82B8E83(L_2, NULL, (intptr_t)((intptr_t)Jetfire_DisConnectCallback_mBA97C83E08958B53DF3865FEC8492660FD97B3B4_RuntimeMethod_var), /*hidden argument*/NULL);
		JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * L_3 = (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F *)il2cpp_codegen_object_new(JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F_il2cpp_TypeInfo_var);
		JetfireReceiveMessageCallback__ctor_m081D5BA31FC242033DB7662D9163CA2CDDF71858(L_3, NULL, (intptr_t)((intptr_t)Jetfire_ReceiveMessageCallback_m389F0C684306554F17C9BF995500CE516BA86031_RuntimeMethod_var), /*hidden argument*/NULL);
		JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * L_4 = (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E *)il2cpp_codegen_object_new(JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E_il2cpp_TypeInfo_var);
		JetfireReceiveDataCallback__ctor_mE52547E09149F24E5D74DAAB60550492690E2843(L_4, NULL, (intptr_t)((intptr_t)Jetfire_ReceiveDataCallback_m85BD6C6B33B094B8B40D946B34428081486C0996_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfireOpen_mE3AD1098F7F6E1E6ECFF8E2F10CAE26952C7393A(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_Connect_m8D08FD5228FA402BB2090C962C5682C9933DA95C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_Connect_m8D08FD5228FA402BB2090C962C5682C9933DA95C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfireConnect();
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfireConnect_mBACB6F88B1E85EBEE371710A0A2DFD047DDDBF05(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_Close_mE253AA2A6F3D7BCA4EDD62199B546BE3C571B0A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_Close_mE253AA2A6F3D7BCA4EDD62199B546BE3C571B0A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfireClose();
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfireClose_m0CC6F7314934498B3742EDDBC362F416DEA9F610(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_Ping_mF78F8468712A9519F8D49829BFA39283636EAAAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_Ping_mF78F8468712A9519F8D49829BFA39283636EAAAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfirePing();
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfirePing_m60AABB98F7965BE16527F2DADCDE291C03654177(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::SendMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_SendMsg_m44AB32CD5FE611DF36A0AB17A43CF87A178029A6 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_SendMsg_m44AB32CD5FE611DF36A0AB17A43CF87A178029A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfireSendMsg(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfireSendMsg_m2457B6058581E93D604B4C3CC00B1247BEBE571A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Jetfire::SendData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire_SendData_mF0B4B775AFE599378C5F960EF79D778FB98D291F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_SendData_mF0B4B775AFE599378C5F960EF79D778FB98D291F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JetfireSendData(bytes, bytes.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		Jetfire_JetfireSendData_m8859C02DC274D2CD5F08D20DE9F711B70AADAC6D(L_0, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Jetfire::IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Jetfire_IsConnected_m22E6C9DCC2BFCF1D6E1D531EE906D606E801AED9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire_IsConnected_m22E6C9DCC2BFCF1D6E1D531EE906D606E801AED9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return JetfireIsConnected();
		IL2CPP_RUNTIME_CLASS_INIT(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var);
		bool L_0 = Jetfire_JetfireIsConnected_m935E9D3D3CDCA067FFD35E2F791CEA3E56BAC072(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Jetfire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire__ctor_m3650E527FB689B30C870FF6E41DF5BB7001080FC (Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Jetfire::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jetfire__cctor_mE907F9EFA2D350EDC9FD4FAF6EB41E38C0F5159D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Jetfire__cctor_mE907F9EFA2D350EDC9FD4FAF6EB41E38C0F5159D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Queue<byte[]> ByteQueue = new Queue<byte[]>();
		Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED * L_0 = (Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED *)il2cpp_codegen_object_new(Queue_1_t891D99C4F85AA49E15E66EF94B382B34720048ED_il2cpp_TypeInfo_var);
		Queue_1__ctor_m7930AE40AC72D337F4E9AAC70FD046844517D6DB(L_0, /*hidden argument*/Queue_1__ctor_m7930AE40AC72D337F4E9AAC70FD046844517D6DB_RuntimeMethod_var);
		((Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_StaticFields*)il2cpp_codegen_static_fields_for(Jetfire_t9B11CB0D04D4E1E79CC651E1FE41D10310A32ABA_il2cpp_TypeInfo_var))->set_ByteQueue_0(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Jetfire_JetfireConnectCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireConnectCallback__ctor_mD2BA87CBEDA03832F22F717B3CEB271E6F181F94 (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Jetfire_JetfireConnectCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireConnectCallback_Invoke_m783E4B6AEAFBF63528D5709197EDFD2285676C59 (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Jetfire_JetfireConnectCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JetfireConnectCallback_BeginInvoke_m42D196DC27F10D4F04FB83ABEB704AA73F418AEE (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Jetfire_JetfireConnectCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireConnectCallback_EndInvoke_m2C153049054C5FB9FF082EF594132653226441E8 (JetfireConnectCallback_t1D2B8D12CCF0F7CCEEBFC2E9523AFE44571E0A56 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Jetfire_JetfireDisConnectCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireDisConnectCallback__ctor_m5F26C3563FA4AEEE7ADF71615AF9DFA1A82B8E83 (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Jetfire_JetfireDisConnectCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireDisConnectCallback_Invoke_m445A8A6AD89DEAD2E172525D7E0A40F4521B2C74 (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Jetfire_JetfireDisConnectCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JetfireDisConnectCallback_BeginInvoke_m7CCA41CF2A22574FF9EC8396B2D3EA9539BEF09D (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Jetfire_JetfireDisConnectCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireDisConnectCallback_EndInvoke_m72DA9736202E4DC5FF51B4BB05B65946AD419B19 (JetfireDisConnectCallback_t6CD80E57EA8C6E0F5F904A0C940E68DDAE11170F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, intptr_t ___pnt0, uint64_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___pnt0, ___size1);

}
// System.Void Jetfire_JetfireReceiveDataCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveDataCallback__ctor_mE52547E09149F24E5D74DAAB60550492690E2843 (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Jetfire_JetfireReceiveDataCallback::Invoke(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveDataCallback_Invoke_m3F19EFD2602AC1F68765E18B5B3E7694ECCB893A (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, intptr_t ___pnt0, uint64_t ___size1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pnt0, ___size1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pnt0, ___size1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pnt0, ___size1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, uint64_t >::Invoke(targetMethod, targetThis, ___pnt0, ___size1);
					else
						GenericVirtActionInvoker2< intptr_t, uint64_t >::Invoke(targetMethod, targetThis, ___pnt0, ___size1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pnt0, ___size1);
					else
						VirtActionInvoker2< intptr_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pnt0, ___size1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pnt0, ___size1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Jetfire_JetfireReceiveDataCallback::BeginInvoke(System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JetfireReceiveDataCallback_BeginInvoke_m9A7168938A0E11BA1B70BD7A94C798D1893B183C (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, intptr_t ___pnt0, uint64_t ___size1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JetfireReceiveDataCallback_BeginInvoke_m9A7168938A0E11BA1B70BD7A94C798D1893B183C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pnt0);
	__d_args[1] = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &___size1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Jetfire_JetfireReceiveDataCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveDataCallback_EndInvoke_m914E31FE1384548351AA9768A11E6AA44DEB59F6 (JetfireReceiveDataCallback_t06117AB0D27D0192C05A1810E11399DE53D4B82E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Jetfire_JetfireReceiveMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveMessageCallback__ctor_m081D5BA31FC242033DB7662D9163CA2CDDF71858 (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Jetfire_JetfireReceiveMessageCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveMessageCallback_Invoke_m6AD92F0DEFDB78120BD22BC4EB534C3451C47163 (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Jetfire_JetfireReceiveMessageCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JetfireReceiveMessageCallback_BeginInvoke_m48592FD92D0DD1C81F8F7F5B19B539814D725379 (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Jetfire_JetfireReceiveMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JetfireReceiveMessageCallback_EndInvoke_m8C83AB2A7617A1C37EA57CAD389698A6DC3D493E (JetfireReceiveMessageCallback_t43AA60FEF3688B8B819BD0415B58C0310CFBA18F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
