// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPABILITYDETECT_CapabilityDetectBPLib_generated_h
#error "CapabilityDetectBPLib.generated.h already included, missing '#pragma once' in CapabilityDetectBPLib.h"
#endif
#define CAPABILITYDETECT_CapabilityDetectBPLib_generated_h

#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_SPARSE_DATA
#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeCPUPerfIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::ComputeCPUPerfIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeGPUPerfIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::ComputeGPUPerfIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRHIVendorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UCapabilityDetectBPLib::RHIVendorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHINVIDIA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHINVIDIA(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHIAMD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHIAMD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHIIntel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHIIntel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProcessorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCapabilityDetectBPLib::GetProcessorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullProcessorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCapabilityDetectBPLib::GetFullProcessorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCorePercMaxFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCorePercMaxFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoreFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCoreFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBaseFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetMaxBaseFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCacheSizeMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCacheSizeMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableMemoryMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetAvailableMemoryMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComittedMemoryMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetComittedMemoryMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsablePhysMemoryGB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetUsablePhysMemoryGB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumPhysicalCores) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCapabilityDetectBPLib::GetNumPhysicalCores(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLogicalCores) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCapabilityDetectBPLib::GetNumLogicalCores(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIntelCPU) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsIntelCPU(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCapabilityDetectBPLib::FreeResources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCapabilityDetectBPLib::InitializeResources(); \
		P_NATIVE_END; \
	}


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeCPUPerfIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::ComputeCPUPerfIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeGPUPerfIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::ComputeGPUPerfIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRHIVendorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UCapabilityDetectBPLib::RHIVendorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHINVIDIA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHINVIDIA(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHIAMD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHIAMD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRHIIntel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsRHIIntel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProcessorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCapabilityDetectBPLib::GetProcessorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullProcessorName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCapabilityDetectBPLib::GetFullProcessorName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCorePercMaxFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCorePercMaxFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoreFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCoreFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBaseFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetMaxBaseFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCacheSizeMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetCacheSizeMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableMemoryMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetAvailableMemoryMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComittedMemoryMB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetComittedMemoryMB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsablePhysMemoryGB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCapabilityDetectBPLib::GetUsablePhysMemoryGB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumPhysicalCores) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCapabilityDetectBPLib::GetNumPhysicalCores(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLogicalCores) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCapabilityDetectBPLib::GetNumLogicalCores(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIntelCPU) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCapabilityDetectBPLib::IsIntelCPU(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCapabilityDetectBPLib::FreeResources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCapabilityDetectBPLib::InitializeResources(); \
		P_NATIVE_END; \
	}


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCapabilityDetectBPLib(); \
	friend struct Z_Construct_UClass_UCapabilityDetectBPLib_Statics; \
public: \
	DECLARE_CLASS(UCapabilityDetectBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapabilityDetect"), NO_API) \
	DECLARE_SERIALIZER(UCapabilityDetectBPLib)


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCapabilityDetectBPLib(); \
	friend struct Z_Construct_UClass_UCapabilityDetectBPLib_Statics; \
public: \
	DECLARE_CLASS(UCapabilityDetectBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapabilityDetect"), NO_API) \
	DECLARE_SERIALIZER(UCapabilityDetectBPLib)


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCapabilityDetectBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapabilityDetectBPLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapabilityDetectBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapabilityDetectBPLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCapabilityDetectBPLib(UCapabilityDetectBPLib&&); \
	NO_API UCapabilityDetectBPLib(const UCapabilityDetectBPLib&); \
public:


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCapabilityDetectBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCapabilityDetectBPLib(UCapabilityDetectBPLib&&); \
	NO_API UCapabilityDetectBPLib(const UCapabilityDetectBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapabilityDetectBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapabilityDetectBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapabilityDetectBPLib)


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_PRIVATE_PROPERTY_OFFSET
#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_26_PROLOG
#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_PRIVATE_PROPERTY_OFFSET \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_SPARSE_DATA \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_RPC_WRAPPERS \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_INCLASS \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_PRIVATE_PROPERTY_OFFSET \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_SPARSE_DATA \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_INCLASS_NO_PURE_DECLS \
	AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPABILITYDETECT_API UClass* StaticClass<class UCapabilityDetectBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdminProject_Plugins_CapabilityDetect_Source_CapabilityDetect_Public_CapabilityDetectBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
